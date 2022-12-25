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
	var uLocal_93 = 0;
	var uLocal_94 = 0;
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
	var uLocal_111 = 0;
	var uLocal_112 = 0;
	var uLocal_113 = 0;
	var uLocal_114 = 0;
	var uLocal_115 = 0;
	struct<30> Local_116 = { 2, 0, 0, 0, 2, 0, 0, 2, 0, 0, 0, 0, 1, 0, 0, 0, 0, 0, 0, 0, -1, -1, -1, -1, -1, 0, 0, 0, -1, 0 } ;
	var uLocal_117 = 32;
	var uLocal_118 = 0;
	var uLocal_119 = 0;
	var uLocal_120 = 0;
	var uLocal_121 = 0;
	var uLocal_122 = 0;
	var uLocal_123 = 0;
	var uLocal_124 = 0;
	var uLocal_125 = 0;
	var uLocal_126 = 0;
	var uLocal_127 = 0;
	var uLocal_128 = 0;
	var uLocal_129 = 0;
	var uLocal_130 = 0;
	var uLocal_131 = 0;
	var uLocal_132 = 0;
	var uLocal_133 = 0;
	var uLocal_134 = 0;
	var uLocal_135 = 0;
	var uLocal_136 = 0;
	var uLocal_137 = 0;
	var uLocal_138 = 0;
	var uLocal_139 = 0;
	var uLocal_140 = 0;
	var uLocal_141 = 0;
	var uLocal_142 = 0;
	var uLocal_143 = 0;
	var uLocal_144 = 0;
	var uLocal_145 = 0;
	var uLocal_146 = 0;
	var uLocal_147 = 0;
	var uLocal_148 = 0;
	var uLocal_149 = 0;
	struct<1218> Local_150 = { 0, 0, 0, 0, 0, 0, 0, 0, 1056964608, 1056964608, 0, 0, 0, 0, -1, 0, -1, 0, 0, 0, 0, -1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 32, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 32, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 32, 0, 0, 0, -1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 75, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 75, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 0, 0, 0, 0, 0, 0, 0, 27, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 2, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 2, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 32, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, -1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 0, 0, 0, 0, 0, 0, 0, 0, 1036831949, 1051931443, 1058642330, 1062836634, 1065353216, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1115815936, 1120403456, 0, 0, 0, 0, 0, 0, 0, -1, 0, 0, 0, 1115815936, 0, -1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 0, 0, 0, 0, -1, -1, -1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 } ;
	var uLocal_151 = 0;
	var uLocal_152 = 32;
	var uLocal_153 = 0;
	var uLocal_154 = -1;
	var uLocal_155 = 0;
	var uLocal_156 = -1;
	var uLocal_157 = 0;
	var uLocal_158 = -1;
	var uLocal_159 = 0;
	var uLocal_160 = -1;
	var uLocal_161 = 0;
	var uLocal_162 = -1;
	var uLocal_163 = 0;
	var uLocal_164 = -1;
	var uLocal_165 = 0;
	var uLocal_166 = -1;
	var uLocal_167 = 0;
	var uLocal_168 = -1;
	var uLocal_169 = 0;
	var uLocal_170 = -1;
	var uLocal_171 = 0;
	var uLocal_172 = -1;
	var uLocal_173 = 0;
	var uLocal_174 = -1;
	var uLocal_175 = 0;
	var uLocal_176 = -1;
	var uLocal_177 = 0;
	var uLocal_178 = -1;
	var uLocal_179 = 0;
	var uLocal_180 = -1;
	var uLocal_181 = 0;
	var uLocal_182 = -1;
	var uLocal_183 = 0;
	var uLocal_184 = -1;
	var uLocal_185 = 0;
	var uLocal_186 = -1;
	var uLocal_187 = 0;
	var uLocal_188 = -1;
	var uLocal_189 = 0;
	var uLocal_190 = -1;
	var uLocal_191 = 0;
	var uLocal_192 = -1;
	var uLocal_193 = 0;
	var uLocal_194 = -1;
	var uLocal_195 = 0;
	var uLocal_196 = -1;
	var uLocal_197 = 0;
	var uLocal_198 = -1;
	var uLocal_199 = 0;
	var uLocal_200 = -1;
	var uLocal_201 = 0;
	var uLocal_202 = -1;
	var uLocal_203 = 0;
	var uLocal_204 = -1;
	var uLocal_205 = 0;
	var uLocal_206 = -1;
	var uLocal_207 = 0;
	var uLocal_208 = -1;
	var uLocal_209 = 0;
	var uLocal_210 = -1;
	var uLocal_211 = 0;
	var uLocal_212 = -1;
	var uLocal_213 = 0;
	var uLocal_214 = -1;
	var uLocal_215 = 0;
	var uLocal_216 = -1;
	struct<5> Local_217 = { 0, 0, 0, 0, 0 } ;
	int iLocal_218 = 0;
	int iLocal_219 = 0;
	var uLocal_220 = 0;
	var uLocal_221 = 0;
	float fLocal_222 = 0f;
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
	int iLocal_265 = 0;
	int iLocal_266 = 0;
	int iLocal_267 = 0;
	int iLocal_268 = 0;
	int iLocal_269 = 0;
	int iLocal_270 = 0;
	int iLocal_271 = 0;
	int iLocal_272 = 0;
	int iLocal_273 = 0;
	int iLocal_274 = 0;
	int iLocal_275 = 0;
	int iLocal_276 = 0;
	int iLocal_277 = 0;
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
	iLocal_218 = -1;
	fLocal_222 = 5f;
	iLocal_224 = 100;
	iLocal_225 = 100;
	iLocal_226 = 65;
	iLocal_227 = 160;
	iLocal_228 = 160;
	iLocal_229 = 65;
	iLocal_230 = 180;
	iLocal_231 = 180;
	iLocal_232 = 65;
	iLocal_233 = 100;
	iLocal_234 = 100;
	iLocal_235 = 65;
	iLocal_236 = 160;
	iLocal_237 = 160;
	iLocal_238 = 65;
	iLocal_239 = 180;
	iLocal_240 = 180;
	iLocal_241 = 65;
	iLocal_242 = 80;
	iLocal_243 = 80;
	iLocal_244 = 65;
	iLocal_245 = 100;
	iLocal_246 = 100;
	iLocal_247 = 65;
	iLocal_248 = 120;
	iLocal_249 = 120;
	iLocal_250 = 65;
	iLocal_251 = 80;
	iLocal_252 = 80;
	iLocal_253 = 65;
	iLocal_254 = 100;
	iLocal_255 = 100;
	iLocal_256 = 65;
	iLocal_257 = 120;
	iLocal_258 = 120;
	iLocal_259 = 65;
	iLocal_260 = 50;
	iLocal_261 = 50;
	iLocal_262 = 33;
	iLocal_263 = 50;
	iLocal_264 = 50;
	iLocal_265 = 33;
	iLocal_266 = 50;
	iLocal_267 = 50;
	iLocal_268 = 33;
	iLocal_269 = 180;
	iLocal_270 = 180;
	iLocal_271 = 133;
	iLocal_272 = 200;
	iLocal_273 = 200;
	iLocal_274 = 180;
	iLocal_275 = 240;
	iLocal_276 = 240;
	iLocal_277 = 180;
	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		func_3068();
	}
	else
	{
		func_3033();
	}
	while (true)
	{
		__LIB_0__::func_933();
		if (__LIB_0__::func_959())
		{
			func_3033();
		}
		if (Global_1973199)
		{
			func_3033();
		}
		if (func_3026(1))
		{
			func_54();
		}
		if (NETWORK::NETWORK_IS_HOST_OF_THIS_SCRIPT())
		{
			func_1();
		}
	}
}

void func_1()//Position - 0x1E4
{
	bool bVar0;
	if (func_3026(0))
	{
		func_53(1);
		Local_116.f_28 = func_52();
	}
	else if (func_3026(1))
	{
		bVar0 = false;
		if (!func_49())
		{
			bVar0 = true;
		}
		func_2(&Local_116, &(Local_150.f_1), bVar0);
	}
}

void func_2(var uParam0, var uParam1, bool bParam2)//Position - 0x226
{
	func_15(uParam0, uParam1, bParam2);
	func_3(uParam0);
}

void func_3(var uParam0)//Position - 0x23E
{
	if (__LIB_2__::func_573(PLAYER::PLAYER_ID()))
	{
		if (!NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(uParam0->f_11))
		{
			__LIB_9__::func_489(uParam0);
		}
	}
}

void func_15(var uParam0, var uParam1, bool bParam2)//Position - 0xA98
{
	int iVar0;
	struct<3> Var1;
	iVar0 = 0;
	while (iVar0 < 2)
	{
		if (func_36(iVar0) && !bParam2)
		{
			if (!NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(uParam0->f_4[iVar0]))
			{
				func_31(uParam0, iVar0);
			}
			else if (!(*uParam0)[iVar0])
			{
				if (NETWORK::NETWORK_HAS_CONTROL_OF_NETWORK_ID(uParam0->f_4[iVar0]))
				{
					uParam1->f_15 = NETWORK::NETWORK_CREATE_SYNCHRONISED_SCENE(func_30(iVar0), func_26(iVar0), 2, false, true, 1f, 0f, 1f);
					NETWORK::NETWORK_ADD_PED_TO_SYNCHRONISED_SCENE(NETWORK::NET_TO_PED(uParam0->f_4[iVar0]), uParam1->f_15, func_22(iVar0), "idle_a_bartender", 1000f, -2f, 13, 16, 2f, 0);
					NETWORK::NETWORK_START_SYNCHRONISED_SCENE(uParam1->f_15);
					(*uParam0)[iVar0] = 1;
				}
				else if (!NETWORK::NETWORK_HAS_CONTROL_OF_NETWORK_ID(uParam0->f_4[iVar0]))
				{
					NETWORK::NETWORK_REQUEST_CONTROL_OF_NETWORK_ID(uParam0->f_4[iVar0]);
				}
			}
			else
			{
				if (__LIB_2__::func_573(PLAYER::PLAYER_ID()))
				{
					func_18(uParam0, uParam1);
				}
				if ((MISC::GET_FRAME_COUNT() % 30) == 0)
				{
					if ((uParam0->f_7[iVar0] == __LIB_0__::func_162() && NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(uParam0->f_4[iVar0])) && __LIB_0__::func_121(NETWORK::NET_TO_PED(uParam0->f_4[iVar0])))
					{
						Var1 = { ENTITY::GET_ENTITY_COORDS(NETWORK::NET_TO_PED(uParam0->f_4[iVar0]), true) };
						if (MISC::GET_DISTANCE_BETWEEN_COORDS(Var1, func_30(iVar0), true) > 10f)
						{
							(*uParam0)[iVar0] = 0;
						}
					}
				}
			}
		}
		else if (NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(uParam0->f_4[iVar0]))
		{
			if (NETWORK::NETWORK_HAS_CONTROL_OF_NETWORK_ID(uParam0->f_4[iVar0]))
			{
				__LIB_1__::func_445(&(uParam0->f_4[iVar0]));
			}
			else
			{
				NETWORK::NETWORK_REQUEST_CONTROL_OF_NETWORK_ID(uParam0->f_4[iVar0]);
			}
		}
		iVar0++;
	}
}

void func_18(var uParam0, var uParam1)//Position - 0xC95
{
	if (!NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(uParam0->f_11))
	{
		return;
	}
	switch (uParam0->f_10)
	{
		case 0:
			if (!func_21())
			{
				if (__LIB_0__::func_121(NETWORK::NET_TO_PED(uParam0->f_4[0])) && func_20(uParam0, 0, 1))
				{
					switch (MISC::GET_RANDOM_INT_IN_RANGE(0, 3))
					{
						case 0:
							uParam0->f_10 = 1;
							break;
						case 1:
							uParam0->f_10 = 7;
							break;
						case 2:
							uParam0->f_10 = 4;
							break;
						}
				}
			}
			else if (((uParam0->f_7[0] == __LIB_0__::func_162() && __LIB_0__::func_121(NETWORK::NET_TO_PED(uParam0->f_4[0]))) && func_20(uParam0, 0, 1)) && !BitTest(Global_1946250.f_6, 10))
			{
				STREAMING::REQUEST_ANIM_DICT(func_22(0));
				STREAMING::REQUEST_ANIM_DICT("anim_heist@arcade_property@wendy@bar@");
				if (STREAMING::HAS_ANIM_DICT_LOADED(func_22(0)) && STREAMING::HAS_ANIM_DICT_LOADED("anim_heist@arcade_property@wendy@bar@"))
				{
					if (NETWORK::NETWORK_HAS_CONTROL_OF_NETWORK_ID(uParam0->f_4[0]) && NETWORK::NETWORK_HAS_CONTROL_OF_NETWORK_ID(uParam0->f_11))
					{
						if ((uParam1->f_15 == -1 || NETWORK::NETWORK_GET_LOCAL_SCENE_FROM_NETWORK_ID(uParam1->f_15) == -1) || PED::GET_SYNCHRONIZED_SCENE_PHASE(NETWORK::NETWORK_GET_LOCAL_SCENE_FROM_NETWORK_ID(uParam1->f_15)) >= 0.99f)
						{
							if (uParam1->f_15 == -1 || !ENTITY::IS_ENTITY_PLAYING_ANIM(NETWORK::NET_TO_PED(uParam0->f_4[0]), func_22(0), "idle_a_bartender", 3))
							{
								uParam1->f_15 = NETWORK::NETWORK_CREATE_SYNCHRONISED_SCENE(func_30(0), func_26(0), 2, true, false, 1f, 0f, 1f);
							}
							else
							{
								uParam1->f_15 = NETWORK::NETWORK_CREATE_SYNCHRONISED_SCENE(2723.6592f, -385.4092f, -48.9676f, 0f, 0f, -88.11f, 2, true, false, 1f, 0f, 1f);
							}
							if (uParam1->f_15 == -1 || !ENTITY::IS_ENTITY_PLAYING_ANIM(NETWORK::NET_TO_PED(uParam0->f_4[0]), func_22(0), "idle_a_bartender", 3))
							{
								NETWORK::NETWORK_ADD_PED_TO_SYNCHRONISED_SCENE(NETWORK::NET_TO_PED(uParam0->f_4[0]), uParam1->f_15, func_22(0), "idle_a_bartender", 2f, -2f, 13, 16, 2f, 0);
							}
							else
							{
								NETWORK::NETWORK_ADD_PED_TO_SYNCHRONISED_SCENE(NETWORK::NET_TO_PED(uParam0->f_4[0]), uParam1->f_15, "anim_heist@arcade_property@wendy@bar@", __LIB_9__::func_329(0, 0), 2f, -2f, 13, 16, 2f, 0);
							}
							NETWORK::NETWORK_START_SYNCHRONISED_SCENE(uParam1->f_15);
						}
						else if (ENTITY::HAS_ANIM_EVENT_FIRED(NETWORK::NET_TO_PED(uParam0->f_4[0]), MISC::GET_HASH_KEY("DELETE")))
						{
							ENTITY::DETACH_ENTITY(NETWORK::NET_TO_OBJ(uParam0->f_11), true, true);
							ENTITY::SET_ENTITY_COORDS_NO_OFFSET(NETWORK::NET_TO_OBJ(uParam0->f_11), 2722.0906f, -385.3692f, -49.446f, false, false, true);
							ENTITY::FREEZE_ENTITY_POSITION(NETWORK::NET_TO_OBJ(uParam0->f_11), true);
						}
					}
					else
					{
						if (!NETWORK::NETWORK_HAS_CONTROL_OF_NETWORK_ID(uParam0->f_4[0]))
						{
							NETWORK::NETWORK_REQUEST_CONTROL_OF_NETWORK_ID(uParam0->f_4[0]);
						}
						if (!NETWORK::NETWORK_HAS_CONTROL_OF_NETWORK_ID(uParam0->f_11))
						{
							NETWORK::NETWORK_REQUEST_CONTROL_OF_NETWORK_ID(uParam0->f_11);
						}
					}
				}
			}
			break;
		case 1:
			if (uParam0->f_7[0] == __LIB_0__::func_162() && __LIB_0__::func_121(NETWORK::NET_TO_PED(uParam0->f_4[0])))
			{
				STREAMING::REQUEST_ANIM_DICT(func_22(0));
				STREAMING::REQUEST_ANIM_DICT("anim_heist@arcade_property@wendy@bar@");
				if (STREAMING::HAS_ANIM_DICT_LOADED(func_22(0)) && STREAMING::HAS_ANIM_DICT_LOADED("anim_heist@arcade_property@wendy@bar@"))
				{
					if (NETWORK::NETWORK_HAS_CONTROL_OF_NETWORK_ID(uParam0->f_4[0]) && NETWORK::NETWORK_HAS_CONTROL_OF_NETWORK_ID(uParam0->f_11))
					{
						if ((uParam1->f_15 == -1 || NETWORK::NETWORK_GET_LOCAL_SCENE_FROM_NETWORK_ID(uParam1->f_15) == -1) || PED::GET_SYNCHRONIZED_SCENE_PHASE(NETWORK::NETWORK_GET_LOCAL_SCENE_FROM_NETWORK_ID(uParam1->f_15)) >= 0.99f)
						{
							uParam1->f_15 = NETWORK::NETWORK_CREATE_SYNCHRONISED_SCENE(2723.6592f, -385.4092f, -48.9676f, 0f, 0f, -88.11f, 2, true, false, 1f, 0f, 1f);
							NETWORK::NETWORK_ADD_PED_TO_SYNCHRONISED_SCENE(NETWORK::NET_TO_PED(uParam0->f_4[0]), uParam1->f_15, "anim_heist@arcade_property@wendy@bar@", "phone_stand_enter", 2f, -2f, 13, 16, 2f, 0);
							NETWORK::NETWORK_START_SYNCHRONISED_SCENE(uParam1->f_15);
							uParam0->f_10 = 2;
						}
					}
					else
					{
						if (!NETWORK::NETWORK_HAS_CONTROL_OF_NETWORK_ID(uParam0->f_4[0]))
						{
							NETWORK::NETWORK_REQUEST_CONTROL_OF_NETWORK_ID(uParam0->f_4[0]);
						}
						if (!NETWORK::NETWORK_HAS_CONTROL_OF_NETWORK_ID(uParam0->f_11))
						{
							NETWORK::NETWORK_REQUEST_CONTROL_OF_NETWORK_ID(uParam0->f_11);
						}
					}
				}
			}
			break;
		case 2:
			if ((func_21() && __LIB_0__::func_121(NETWORK::NET_TO_PED(uParam0->f_4[0]))) && (((ENTITY::IS_ENTITY_PLAYING_ANIM(NETWORK::NET_TO_PED(uParam0->f_4[0]), "anim_heist@arcade_property@wendy@bar@", "phone_stand_base", 3) || ENTITY::IS_ENTITY_PLAYING_ANIM(NETWORK::NET_TO_PED(uParam0->f_4[0]), "anim_heist@arcade_property@wendy@bar@", "phone_stand_idle_a", 3)) || ENTITY::IS_ENTITY_PLAYING_ANIM(NETWORK::NET_TO_PED(uParam0->f_4[0]), "anim_heist@arcade_property@wendy@bar@", "phone_stand_idle_b", 3)) || ENTITY::IS_ENTITY_PLAYING_ANIM(NETWORK::NET_TO_PED(uParam0->f_4[0]), "anim_heist@arcade_property@wendy@bar@", "phone_stand_idle_c", 3)))
			{
				uParam0->f_10 = 3;
			}
			else if (uParam0->f_7[0] == __LIB_0__::func_162() && __LIB_0__::func_121(NETWORK::NET_TO_PED(uParam0->f_4[0])))
			{
				STREAMING::REQUEST_ANIM_DICT(func_22(0));
				STREAMING::REQUEST_ANIM_DICT("anim_heist@arcade_property@wendy@bar@");
				if (STREAMING::HAS_ANIM_DICT_LOADED(func_22(0)) && STREAMING::HAS_ANIM_DICT_LOADED("anim_heist@arcade_property@wendy@bar@"))
				{
					if (NETWORK::NETWORK_HAS_CONTROL_OF_NETWORK_ID(uParam0->f_4[0]) && NETWORK::NETWORK_HAS_CONTROL_OF_NETWORK_ID(uParam0->f_11))
					{
						if ((uParam1->f_15 == -1 || NETWORK::NETWORK_GET_LOCAL_SCENE_FROM_NETWORK_ID(uParam1->f_15) == -1) || PED::GET_SYNCHRONIZED_SCENE_PHASE(NETWORK::NETWORK_GET_LOCAL_SCENE_FROM_NETWORK_ID(uParam1->f_15)) >= 0.99f)
						{
							uParam1->f_15 = NETWORK::NETWORK_CREATE_SYNCHRONISED_SCENE(2723.72f, -385.4043f, -48.9676f, 0f, 0f, -88.11f, 2, true, false, 1f, 0f, 1f);
							if (!ENTITY::IS_ENTITY_PLAYING_ANIM(NETWORK::NET_TO_PED(uParam0->f_4[0]), "anim_heist@arcade_property@wendy@bar@", "phone_stand_base", 3))
							{
								NETWORK::NETWORK_ADD_PED_TO_SYNCHRONISED_SCENE(NETWORK::NET_TO_PED(uParam0->f_4[0]), uParam1->f_15, "anim_heist@arcade_property@wendy@bar@", "phone_stand_base", 2f, -2f, 13, 16, 2f, 0);
							}
							else
							{
								NETWORK::NETWORK_ADD_PED_TO_SYNCHRONISED_SCENE(NETWORK::NET_TO_PED(uParam0->f_4[0]), uParam1->f_15, "anim_heist@arcade_property@wendy@bar@", __LIB_9__::func_329(1, 0), 2f, -2f, 13, 16, 2f, 0);
							}
							NETWORK::NETWORK_START_SYNCHRONISED_SCENE(uParam1->f_15);
						}
						else if (ENTITY::HAS_ANIM_EVENT_FIRED(NETWORK::NET_TO_PED(uParam0->f_4[0]), MISC::GET_HASH_KEY("CREATE")))
						{
							ENTITY::FREEZE_ENTITY_POSITION(NETWORK::NET_TO_OBJ(uParam0->f_11), false);
							ENTITY::ATTACH_ENTITY_TO_ENTITY(NETWORK::NET_TO_OBJ(uParam0->f_11), NETWORK::NET_TO_PED(uParam0->f_4[0]), PED::GET_PED_BONE_INDEX(NETWORK::NET_TO_PED(uParam0->f_4[0]), 28422), 0f, 0f, 0f, 0f, 0f, 0f, false, false, false, true, 2, true, 0);
						}
					}
					else
					{
						if (!NETWORK::NETWORK_HAS_CONTROL_OF_NETWORK_ID(uParam0->f_4[0]))
						{
							NETWORK::NETWORK_REQUEST_CONTROL_OF_NETWORK_ID(uParam0->f_4[0]);
						}
						if (!NETWORK::NETWORK_HAS_CONTROL_OF_NETWORK_ID(uParam0->f_11))
						{
							NETWORK::NETWORK_REQUEST_CONTROL_OF_NETWORK_ID(uParam0->f_11);
						}
					}
				}
			}
			break;
		case 3:
			if (uParam0->f_7[0] == __LIB_0__::func_162() && __LIB_0__::func_121(NETWORK::NET_TO_PED(uParam0->f_4[0])))
			{
				STREAMING::REQUEST_ANIM_DICT(func_22(0));
				STREAMING::REQUEST_ANIM_DICT("anim_heist@arcade_property@wendy@bar@");
				if (STREAMING::HAS_ANIM_DICT_LOADED(func_22(0)) && STREAMING::HAS_ANIM_DICT_LOADED("anim_heist@arcade_property@wendy@bar@"))
				{
					if (NETWORK::NETWORK_HAS_CONTROL_OF_NETWORK_ID(uParam0->f_4[0]) && NETWORK::NETWORK_HAS_CONTROL_OF_NETWORK_ID(uParam0->f_11))
					{
						if ((uParam1->f_15 == -1 || NETWORK::NETWORK_GET_LOCAL_SCENE_FROM_NETWORK_ID(uParam1->f_15) == -1) || PED::GET_SYNCHRONIZED_SCENE_PHASE(NETWORK::NETWORK_GET_LOCAL_SCENE_FROM_NETWORK_ID(uParam1->f_15)) >= 0.5f)
						{
							uParam1->f_15 = NETWORK::NETWORK_CREATE_SYNCHRONISED_SCENE(2723.72f, -385.4043f, -48.9676f, 0f, 0f, -88.11f, 2, true, false, 1f, 0f, 1f);
							NETWORK::NETWORK_ADD_PED_TO_SYNCHRONISED_SCENE(NETWORK::NET_TO_PED(uParam0->f_4[0]), uParam1->f_15, "anim_heist@arcade_property@wendy@bar@", "phone_stand_exit", 2f, -2f, 13, 16, 2f, 0);
							NETWORK::NETWORK_START_SYNCHRONISED_SCENE(uParam1->f_15);
							uParam0->f_10 = 0;
						}
					}
					else
					{
						if (!NETWORK::NETWORK_HAS_CONTROL_OF_NETWORK_ID(uParam0->f_4[0]))
						{
							NETWORK::NETWORK_REQUEST_CONTROL_OF_NETWORK_ID(uParam0->f_4[0]);
						}
						if (!NETWORK::NETWORK_HAS_CONTROL_OF_NETWORK_ID(uParam0->f_11))
						{
							NETWORK::NETWORK_REQUEST_CONTROL_OF_NETWORK_ID(uParam0->f_11);
						}
					}
				}
			}
			break;
		case 7:
			if (uParam0->f_7[0] == __LIB_0__::func_162() && __LIB_0__::func_121(NETWORK::NET_TO_PED(uParam0->f_4[0])))
			{
				STREAMING::REQUEST_ANIM_DICT(func_22(0));
				STREAMING::REQUEST_ANIM_DICT("anim_heist@arcade_property@wendy@bar@");
				if (STREAMING::HAS_ANIM_DICT_LOADED(func_22(0)) && STREAMING::HAS_ANIM_DICT_LOADED("anim_heist@arcade_property@wendy@bar@"))
				{
					if (NETWORK::NETWORK_HAS_CONTROL_OF_NETWORK_ID(uParam0->f_4[0]) && NETWORK::NETWORK_HAS_CONTROL_OF_NETWORK_ID(uParam0->f_11))
					{
						if ((uParam1->f_15 == -1 || NETWORK::NETWORK_GET_LOCAL_SCENE_FROM_NETWORK_ID(uParam1->f_15) == -1) || PED::GET_SYNCHRONIZED_SCENE_PHASE(NETWORK::NETWORK_GET_LOCAL_SCENE_FROM_NETWORK_ID(uParam1->f_15)) >= 0.99f)
						{
							uParam1->f_15 = NETWORK::NETWORK_CREATE_SYNCHRONISED_SCENE(2723.6592f, -385.4092f, -48.9676f, 0f, 0f, -88.11f, 2, true, false, 1f, 0f, 1f);
							NETWORK::NETWORK_ADD_PED_TO_SYNCHRONISED_SCENE(NETWORK::NET_TO_PED(uParam0->f_4[0]), uParam1->f_15, "anim_heist@arcade_property@wendy@bar@", "back_bar_exit", 2f, -2f, 13, 16, 2f, 0);
							NETWORK::NETWORK_START_SYNCHRONISED_SCENE(uParam1->f_15);
							uParam0->f_10 = 8;
						}
					}
					else
					{
						if (!NETWORK::NETWORK_HAS_CONTROL_OF_NETWORK_ID(uParam0->f_4[0]))
						{
							NETWORK::NETWORK_REQUEST_CONTROL_OF_NETWORK_ID(uParam0->f_4[0]);
						}
						if (!NETWORK::NETWORK_HAS_CONTROL_OF_NETWORK_ID(uParam0->f_11))
						{
							NETWORK::NETWORK_REQUEST_CONTROL_OF_NETWORK_ID(uParam0->f_11);
						}
					}
				}
			}
			break;
		case 8:
			if ((func_21() && __LIB_0__::func_121(NETWORK::NET_TO_PED(uParam0->f_4[0]))) && ((ENTITY::IS_ENTITY_PLAYING_ANIM(NETWORK::NET_TO_PED(uParam0->f_4[0]), "anim_heist@arcade_property@wendy@bar@", "back_bar_base", 3) || ENTITY::IS_ENTITY_PLAYING_ANIM(NETWORK::NET_TO_PED(uParam0->f_4[0]), "anim_heist@arcade_property@wendy@bar@", "back_bar_idle_a", 3)) || ENTITY::IS_ENTITY_PLAYING_ANIM(NETWORK::NET_TO_PED(uParam0->f_4[0]), "anim_heist@arcade_property@wendy@bar@", "back_bar_idle_b", 3)))
			{
				uParam0->f_10 = 9;
			}
			else if (uParam0->f_7[0] == __LIB_0__::func_162() && __LIB_0__::func_121(NETWORK::NET_TO_PED(uParam0->f_4[0])))
			{
				STREAMING::REQUEST_ANIM_DICT(func_22(0));
				STREAMING::REQUEST_ANIM_DICT("anim_heist@arcade_property@wendy@bar@");
				if (STREAMING::HAS_ANIM_DICT_LOADED(func_22(0)) && STREAMING::HAS_ANIM_DICT_LOADED("anim_heist@arcade_property@wendy@bar@"))
				{
					if (NETWORK::NETWORK_HAS_CONTROL_OF_NETWORK_ID(uParam0->f_4[0]) && NETWORK::NETWORK_HAS_CONTROL_OF_NETWORK_ID(uParam0->f_11))
					{
						if ((uParam1->f_15 == -1 || NETWORK::NETWORK_GET_LOCAL_SCENE_FROM_NETWORK_ID(uParam1->f_15) == -1) || PED::GET_SYNCHRONIZED_SCENE_PHASE(NETWORK::NETWORK_GET_LOCAL_SCENE_FROM_NETWORK_ID(uParam1->f_15)) >= 0.99f)
						{
							uParam1->f_15 = NETWORK::NETWORK_CREATE_SYNCHRONISED_SCENE(2723.0735f, -385.5764f, -48.9676f, 0f, 0f, -88.11f, 2, true, false, 1f, 0f, 1f);
							if (!ENTITY::IS_ENTITY_PLAYING_ANIM(NETWORK::NET_TO_PED(uParam0->f_4[0]), "anim_heist@arcade_property@wendy@bar@", "back_bar_base", 3))
							{
								NETWORK::NETWORK_ADD_PED_TO_SYNCHRONISED_SCENE(NETWORK::NET_TO_PED(uParam0->f_4[0]), uParam1->f_15, "anim_heist@arcade_property@wendy@bar@", "back_bar_base", 2f, -2f, 13, 16, 2f, 0);
							}
							else
							{
								NETWORK::NETWORK_ADD_PED_TO_SYNCHRONISED_SCENE(NETWORK::NET_TO_PED(uParam0->f_4[0]), uParam1->f_15, "anim_heist@arcade_property@wendy@bar@", __LIB_9__::func_329(0, 1), 2f, -2f, 13, 16, 2f, 0);
							}
							NETWORK::NETWORK_START_SYNCHRONISED_SCENE(uParam1->f_15);
						}
					}
					else
					{
						if (!NETWORK::NETWORK_HAS_CONTROL_OF_NETWORK_ID(uParam0->f_4[0]))
						{
							NETWORK::NETWORK_REQUEST_CONTROL_OF_NETWORK_ID(uParam0->f_4[0]);
						}
						if (!NETWORK::NETWORK_HAS_CONTROL_OF_NETWORK_ID(uParam0->f_11))
						{
							NETWORK::NETWORK_REQUEST_CONTROL_OF_NETWORK_ID(uParam0->f_11);
						}
					}
				}
			}
			break;
		case 9:
			if (uParam0->f_7[0] == __LIB_0__::func_162() && __LIB_0__::func_121(NETWORK::NET_TO_PED(uParam0->f_4[0])))
			{
				STREAMING::REQUEST_ANIM_DICT(func_22(0));
				STREAMING::REQUEST_ANIM_DICT("anim_heist@arcade_property@wendy@bar@");
				if (STREAMING::HAS_ANIM_DICT_LOADED(func_22(0)) && STREAMING::HAS_ANIM_DICT_LOADED("anim_heist@arcade_property@wendy@bar@"))
				{
					if (NETWORK::NETWORK_HAS_CONTROL_OF_NETWORK_ID(uParam0->f_4[0]) && NETWORK::NETWORK_HAS_CONTROL_OF_NETWORK_ID(uParam0->f_11))
					{
						if ((uParam1->f_15 == -1 || NETWORK::NETWORK_GET_LOCAL_SCENE_FROM_NETWORK_ID(uParam1->f_15) == -1) || PED::GET_SYNCHRONIZED_SCENE_PHASE(NETWORK::NETWORK_GET_LOCAL_SCENE_FROM_NETWORK_ID(uParam1->f_15)) >= 0.2f)
						{
							uParam1->f_15 = NETWORK::NETWORK_CREATE_SYNCHRONISED_SCENE(2723.0735f, -385.5764f, -48.9676f, 0f, 0f, -88.11f, 2, true, false, 1f, 0f, 1f);
							NETWORK::NETWORK_ADD_PED_TO_SYNCHRONISED_SCENE(NETWORK::NET_TO_PED(uParam0->f_4[0]), uParam1->f_15, "anim_heist@arcade_property@wendy@bar@", "back_bar_enter", 2f, -2f, 13, 16, 2f, 0);
							NETWORK::NETWORK_START_SYNCHRONISED_SCENE(uParam1->f_15);
							uParam0->f_10 = 0;
						}
					}
					else
					{
						if (!NETWORK::NETWORK_HAS_CONTROL_OF_NETWORK_ID(uParam0->f_4[0]))
						{
							NETWORK::NETWORK_REQUEST_CONTROL_OF_NETWORK_ID(uParam0->f_4[0]);
						}
						if (!NETWORK::NETWORK_HAS_CONTROL_OF_NETWORK_ID(uParam0->f_11))
						{
							NETWORK::NETWORK_REQUEST_CONTROL_OF_NETWORK_ID(uParam0->f_11);
						}
					}
				}
			}
			break;
		case 4:
			if (uParam0->f_7[0] == __LIB_0__::func_162() && __LIB_0__::func_121(NETWORK::NET_TO_PED(uParam0->f_4[0])))
			{
				STREAMING::REQUEST_ANIM_DICT(func_22(0));
				STREAMING::REQUEST_ANIM_DICT("anim_heist@arcade_property@wendy@bar@");
				if (STREAMING::HAS_ANIM_DICT_LOADED(func_22(0)) && STREAMING::HAS_ANIM_DICT_LOADED("anim_heist@arcade_property@wendy@bar@"))
				{
					if (NETWORK::NETWORK_HAS_CONTROL_OF_NETWORK_ID(uParam0->f_4[0]) && NETWORK::NETWORK_HAS_CONTROL_OF_NETWORK_ID(uParam0->f_11))
					{
						if ((uParam1->f_15 == -1 || NETWORK::NETWORK_GET_LOCAL_SCENE_FROM_NETWORK_ID(uParam1->f_15) == -1) || PED::GET_SYNCHRONIZED_SCENE_PHASE(NETWORK::NETWORK_GET_LOCAL_SCENE_FROM_NETWORK_ID(uParam1->f_15)) >= 0.99f)
						{
							uParam1->f_15 = NETWORK::NETWORK_CREATE_SYNCHRONISED_SCENE(2723.6592f, -385.4092f, -48.9676f, 0f, 0f, -88.11f, 2, true, false, 1f, 0f, 1f);
							NETWORK::NETWORK_ADD_PED_TO_SYNCHRONISED_SCENE(NETWORK::NET_TO_PED(uParam0->f_4[0]), uParam1->f_15, "anim_heist@arcade_property@wendy@bar@", "hold_elbow_back_bar_exit", 2f, -2f, 13, 16, 2f, 0);
							NETWORK::NETWORK_START_SYNCHRONISED_SCENE(uParam1->f_15);
							uParam0->f_10 = 5;
						}
					}
					else
					{
						if (!NETWORK::NETWORK_HAS_CONTROL_OF_NETWORK_ID(uParam0->f_4[0]))
						{
							NETWORK::NETWORK_REQUEST_CONTROL_OF_NETWORK_ID(uParam0->f_4[0]);
						}
						if (!NETWORK::NETWORK_HAS_CONTROL_OF_NETWORK_ID(uParam0->f_11))
						{
							NETWORK::NETWORK_REQUEST_CONTROL_OF_NETWORK_ID(uParam0->f_11);
						}
					}
				}
			}
			break;
		case 5:
			if ((func_21() && __LIB_0__::func_121(NETWORK::NET_TO_PED(uParam0->f_4[0]))) && (ENTITY::IS_ENTITY_PLAYING_ANIM(NETWORK::NET_TO_PED(uParam0->f_4[0]), "anim_heist@arcade_property@wendy@bar@", "hold_elbow_back_bar_base", 3) || ENTITY::IS_ENTITY_PLAYING_ANIM(NETWORK::NET_TO_PED(uParam0->f_4[0]), "anim_heist@arcade_property@wendy@bar@", "hold_elbow_back_bar_idle_a", 3)))
			{
				uParam0->f_10 = 6;
			}
			else if (uParam0->f_7[0] == __LIB_0__::func_162() && __LIB_0__::func_121(NETWORK::NET_TO_PED(uParam0->f_4[0])))
			{
				STREAMING::REQUEST_ANIM_DICT(func_22(0));
				STREAMING::REQUEST_ANIM_DICT("anim_heist@arcade_property@wendy@bar@");
				if (STREAMING::HAS_ANIM_DICT_LOADED(func_22(0)) && STREAMING::HAS_ANIM_DICT_LOADED("anim_heist@arcade_property@wendy@bar@"))
				{
					if (NETWORK::NETWORK_HAS_CONTROL_OF_NETWORK_ID(uParam0->f_4[0]) && NETWORK::NETWORK_HAS_CONTROL_OF_NETWORK_ID(uParam0->f_11))
					{
						if ((uParam1->f_15 == -1 || NETWORK::NETWORK_GET_LOCAL_SCENE_FROM_NETWORK_ID(uParam1->f_15) == -1) || PED::GET_SYNCHRONIZED_SCENE_PHASE(NETWORK::NETWORK_GET_LOCAL_SCENE_FROM_NETWORK_ID(uParam1->f_15)) >= 0.99f)
						{
							uParam1->f_15 = NETWORK::NETWORK_CREATE_SYNCHRONISED_SCENE(2723.0735f, -385.5764f, -48.9676f, 0f, 0f, -88.11f, 2, true, false, 1f, 0f, 1f);
							if (!ENTITY::IS_ENTITY_PLAYING_ANIM(NETWORK::NET_TO_PED(uParam0->f_4[0]), "anim_heist@arcade_property@wendy@bar@", "hold_elbow_back_bar_base", 3))
							{
								NETWORK::NETWORK_ADD_PED_TO_SYNCHRONISED_SCENE(NETWORK::NET_TO_PED(uParam0->f_4[0]), uParam1->f_15, "anim_heist@arcade_property@wendy@bar@", "hold_elbow_back_bar_base", 2f, -2f, 13, 16, 2f, 0);
							}
							else
							{
								NETWORK::NETWORK_ADD_PED_TO_SYNCHRONISED_SCENE(NETWORK::NET_TO_PED(uParam0->f_4[0]), uParam1->f_15, "anim_heist@arcade_property@wendy@bar@", "hold_elbow_back_bar_idle_a", 2f, -2f, 13, 16, 2f, 0);
							}
							NETWORK::NETWORK_START_SYNCHRONISED_SCENE(uParam1->f_15);
						}
					}
					else
					{
						if (!NETWORK::NETWORK_HAS_CONTROL_OF_NETWORK_ID(uParam0->f_4[0]))
						{
							NETWORK::NETWORK_REQUEST_CONTROL_OF_NETWORK_ID(uParam0->f_4[0]);
						}
						if (!NETWORK::NETWORK_HAS_CONTROL_OF_NETWORK_ID(uParam0->f_11))
						{
							NETWORK::NETWORK_REQUEST_CONTROL_OF_NETWORK_ID(uParam0->f_11);
						}
					}
				}
			}
			break;
		case 6:
			if (uParam0->f_7[0] == __LIB_0__::func_162() && __LIB_0__::func_121(NETWORK::NET_TO_PED(uParam0->f_4[0])))
			{
				STREAMING::REQUEST_ANIM_DICT(func_22(0));
				STREAMING::REQUEST_ANIM_DICT("anim_heist@arcade_property@wendy@bar@");
				if (STREAMING::HAS_ANIM_DICT_LOADED(func_22(0)) && STREAMING::HAS_ANIM_DICT_LOADED("anim_heist@arcade_property@wendy@bar@"))
				{
					if (NETWORK::NETWORK_HAS_CONTROL_OF_NETWORK_ID(uParam0->f_4[0]) && NETWORK::NETWORK_HAS_CONTROL_OF_NETWORK_ID(uParam0->f_11))
					{
						if ((uParam1->f_15 == -1 || NETWORK::NETWORK_GET_LOCAL_SCENE_FROM_NETWORK_ID(uParam1->f_15) == -1) || PED::GET_SYNCHRONIZED_SCENE_PHASE(NETWORK::NETWORK_GET_LOCAL_SCENE_FROM_NETWORK_ID(uParam1->f_15)) >= 0.2f)
						{
							uParam1->f_15 = NETWORK::NETWORK_CREATE_SYNCHRONISED_SCENE(2723.0735f, -385.5764f, -48.9676f, 0f, 0f, -88.11f, 2, true, false, 1f, 0f, 1f);
							NETWORK::NETWORK_ADD_PED_TO_SYNCHRONISED_SCENE(NETWORK::NET_TO_PED(uParam0->f_4[0]), uParam1->f_15, "anim_heist@arcade_property@wendy@bar@", "hold_elbow_back_bar_enter", 2f, -2f, 13, 16, 2f, 0);
							NETWORK::NETWORK_START_SYNCHRONISED_SCENE(uParam1->f_15);
							uParam0->f_10 = 0;
						}
					}
					else
					{
						if (!NETWORK::NETWORK_HAS_CONTROL_OF_NETWORK_ID(uParam0->f_4[0]))
						{
							NETWORK::NETWORK_REQUEST_CONTROL_OF_NETWORK_ID(uParam0->f_4[0]);
						}
						if (!NETWORK::NETWORK_HAS_CONTROL_OF_NETWORK_ID(uParam0->f_11))
						{
							NETWORK::NETWORK_REQUEST_CONTROL_OF_NETWORK_ID(uParam0->f_11);
						}
					}
				}
			}
			break;
	}
}

int func_20(var uParam0, int iParam1, bool bParam2)//Position - 0x1D41
{
	if (!__LIB_2__::func_573(PLAYER::PLAYER_ID()))
	{
		return 1;
	}
	if (__LIB_0__::func_121(NETWORK::NET_TO_PED(uParam0->f_4[iParam1])))
	{
		if ((((((((ENTITY::IS_ENTITY_PLAYING_ANIM(NETWORK::NET_TO_PED(uParam0->f_4[iParam1]), func_22(iParam1), "idle_a_bartender", 3) || ENTITY::IS_ENTITY_PLAYING_ANIM(NETWORK::NET_TO_PED(uParam0->f_4[iParam1]), "anim_heist@arcade_property@wendy@bar@", "bar_idle_a", 3)) || ENTITY::IS_ENTITY_PLAYING_ANIM(NETWORK::NET_TO_PED(uParam0->f_4[iParam1]), "anim_heist@arcade_property@wendy@bar@", "bar_idle_b", 3)) || ENTITY::IS_ENTITY_PLAYING_ANIM(NETWORK::NET_TO_PED(uParam0->f_4[iParam1]), "anim_heist@arcade_property@wendy@bar@", "bar_idle_c", 3)) || ENTITY::IS_ENTITY_PLAYING_ANIM(NETWORK::NET_TO_PED(uParam0->f_4[iParam1]), "anim_heist@arcade_property@wendy@bar@", "bar_idle_d", 3)) || ENTITY::IS_ENTITY_PLAYING_ANIM(NETWORK::NET_TO_PED(uParam0->f_4[iParam1]), "anim_heist@arcade_property@wendy@bar@", "bar_idle_e", 3)) || ENTITY::IS_ENTITY_PLAYING_ANIM(NETWORK::NET_TO_PED(uParam0->f_4[iParam1]), "anim_heist@arcade_property@wendy@bar@", "bar_idle_f", 3)) || ENTITY::IS_ENTITY_PLAYING_ANIM(NETWORK::NET_TO_PED(uParam0->f_4[iParam1]), "anim@amb@nightclub@mini@drinking@champagne_drinking@base@", "bartender_idle", 3)) || ENTITY::IS_ENTITY_PLAYING_ANIM(NETWORK::NET_TO_PED(uParam0->f_4[iParam1]), "anim@amb@casino@mini@drinking@champagne_drinking@heels@base", "bartender_idle", 3))
		{
			return 1;
		}
		if (bParam2)
		{
			if ((ENTITY::IS_ENTITY_PLAYING_ANIM(NETWORK::NET_TO_PED(uParam0->f_4[iParam1]), "anim_heist@arcade_property@wendy@bar@", "phone_stand_exit", 3) || ENTITY::IS_ENTITY_PLAYING_ANIM(NETWORK::NET_TO_PED(uParam0->f_4[iParam1]), "anim_heist@arcade_property@wendy@bar@", "back_bar_enter", 3)) || ENTITY::IS_ENTITY_PLAYING_ANIM(NETWORK::NET_TO_PED(uParam0->f_4[iParam1]), "anim_heist@arcade_property@wendy@bar@", "hold_elbow_back_bar_enter", 3))
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_21()//Position - 0x1EDD
{
	int iVar0;
	int iVar1;
	int iVar2;
	iVar0 = 0;
	while (iVar0 < 32)
	{
		iVar1 = PLAYER::INT_TO_PLAYERINDEX(iVar0);
		if (__LIB_0__::func_156(iVar1, 1, 1) && !NETWORK::NETWORK_IS_PLAYER_CONCEALED(iVar1))
		{
			iVar2 = PLAYER::GET_PLAYER_PED(iVar1);
			if (ENTITY::DOES_ENTITY_EXIST(iVar2))
			{
				if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(iVar2, 2724.7986f, -380.90692f, -49.987984f, 2724.9976f, -390.59674f, -47.41036f, 5.75f, false, true, 0))
				{
					return 1;
				}
			}
		}
		iVar0++;
	}
	return 0;
}

char* func_22(int iParam0)//Position - 0x1F5C
{
	char* sVar0;
	sVar0 = "";
	if (__LIB_2__::func_573(PLAYER::PLAYER_ID()) || __LIB_1__::func_35())
	{
		return "anim@amb@nightclub@mini@drinking@bar@drink@idle_a";
	}
	switch (iParam0)
	{
		case 0:
			sVar0 = "anim@amb@casino@mini@drinking@bar@drink_v2@heels@idle_a";
			break;
		case 1:
			sVar0 = "anim@amb@casino@mini@drinking@bar@drink@heels@idle_a";
			break;
	}
	return sVar0;
}

Vector3 func_26(int iParam0)//Position - 0x1FE4
{
	struct<3> Var0;
	if (__LIB_1__::func_783(PLAYER::PLAYER_ID()))
	{
		switch (iParam0)
		{
			case 0:
				Var0 = { 0f, 0f, -107.71f };
				break;
			case 1:
				Var0 = { 0f, 0f, 118.63f };
				break;
		}
	}
	else if (__LIB_2__::func_885(PLAYER::PLAYER_ID()))
	{
		switch (iParam0)
		{
			case 0:
				Var0 = { 0f, 0f, -120f };
				break;
			case 1:
				Var0 = { 0f, 0f, -120f };
				break;
		}
	}
	else if (__LIB_2__::func_573(PLAYER::PLAYER_ID()))
	{
		switch (iParam0)
		{
			case 0:
				Var0 = { 0f, 0f, 92.75f };
				break;
		}
	}
	else if (__LIB_2__::func_884(PLAYER::PLAYER_ID()))
	{
		switch (iParam0)
		{
			case 0:
				Var0 = { 0f, 0f, -90f };
				break;
			case 1:
				Var0 = { 0f, 0f, -128.5f };
				break;
		}
	}
	else if (__LIB_1__::func_35())
	{
		switch (iParam0)
		{
			case 0:
				Var0 = { 0f, 0f, -138.31f };
				break;
			case 1:
				Var0 = { 0f, 0f, -152.06f };
				break;
			}
	}
	return Var0;
}

Vector3 func_30(int iParam0)//Position - 0x21DB
{
	struct<3> Var0;
	if (__LIB_1__::func_783(PLAYER::PLAYER_ID()))
	{
		switch (iParam0)
		{
			case 0:
				Var0 = { 1109.401f, 208.942f, -49.1891f };
				break;
			case 1:
				Var0 = { 1114.452f, 209.054f, -49.1891f };
				break;
		}
	}
	else if (__LIB_2__::func_885(PLAYER::PLAYER_ID()))
	{
		switch (iParam0)
		{
			case 0:
				Var0 = { 946.541f, 17.007f, 116.4151f };
				break;
			case 1:
				Var0 = { 945.004f, 14.382f, 116.4151f };
				break;
		}
	}
	else if (__LIB_2__::func_573(PLAYER::PLAYER_ID()))
	{
		switch (iParam0)
		{
			case 0:
				Var0 = { 2724.525f, -385.669f, -48.7479f };
				break;
		}
	}
	else if (__LIB_2__::func_884(PLAYER::PLAYER_ID()))
	{
		switch (iParam0)
		{
			case 0:
				Var0 = { 1568.762f, 250.174f, -45.754f };
				break;
			case 1:
				Var0 = { 1569.594f, 253.412f, -45.754f };
				break;
		}
	}
	else if (__LIB_1__::func_35())
	{
		switch (iParam0)
		{
			case 0:
				Var0 = { 4902.854f, -4941.945f, 3.6141f };
				break;
			case 1:
				Var0 = { 4905.742f, -4940.226f, 3.6141f };
				break;
			}
	}
	return Var0;
}

void func_31(var uParam0, int iParam1)//Position - 0x2345
{
	int iVar0;
	STREAMING::REQUEST_MODEL(func_35());
	if (!STREAMING::HAS_MODEL_LOADED(func_35()))
	{
		return;
	}
	STREAMING::REQUEST_ANIM_DICT(func_22(iParam1));
	if (!STREAMING::HAS_ANIM_DICT_LOADED(func_22(iParam1)))
	{
		return;
	}
	if (!NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(uParam0->f_4[iParam1]))
	{
		if (NETWORK::CAN_REGISTER_MISSION_PEDS(1))
		{
			if (NETWORK::NETWORK_IS_IN_MP_CUTSCENE())
			{
				NETWORK::SET_NETWORK_CUTSCENE_ENTITIES(true);
			}
			iVar0 = PED::CREATE_PED(26, func_35(), func_34(iParam1), func_33(iParam1), true, true);
			STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(func_35());
			ENTITY::SET_ENTITY_CAN_BE_DAMAGED(iVar0, false);
			PED::SET_PED_AS_ENEMY(iVar0, false);
			PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iVar0, true);
			PED::SET_PED_RESET_FLAG(iVar0, 249, true);
			PED::SET_PED_CONFIG_FLAG(iVar0, 185, true);
			PED::SET_PED_CONFIG_FLAG(iVar0, 108, true);
			NETWORK::NETWORK_SET_ENTITY_ONLY_EXISTS_FOR_PARTICIPANTS(iVar0, true);
			ENTITY::SET_ENTITY_CAN_ONLY_BE_DAMAGED_BY_SCRIPT_PARTICIPANTS(iVar0, true);
			PED::SET_PED_CAN_EVASIVE_DIVE(iVar0, false);
			PED::SET_TREAT_AS_AMBIENT_PED_FOR_DRIVER_LOCKON(iVar0, true);
			PED::SET_PED_CAN_RAGDOLL_FROM_PLAYER_IMPACT(iVar0, false);
			PED::SET_PED_CONFIG_FLAG(iVar0, 208, true);
			ENTITY::SET_ENTITY_SHOULD_FREEZE_WAITING_ON_COLLISION(iVar0, true);
			func_32(iVar0, iParam1);
			ENTITY::SET_ENTITY_COORDS_NO_OFFSET(iVar0, func_34(iParam1), false, false, true);
			ENTITY::SET_ENTITY_HEADING(iVar0, func_33(iParam1));
			uParam0->f_4[iParam1] = NETWORK::PED_TO_NET(iVar0);
			STREAMING::REMOVE_ANIM_DICT(func_22(iParam1));
			if (NETWORK::NETWORK_IS_IN_MP_CUTSCENE())
			{
				NETWORK::SET_NETWORK_CUTSCENE_ENTITIES(false);
			}
		}
	}
}

void func_32(int iParam0, int iParam1)//Position - 0x246F
{
	if (__LIB_2__::func_885(PLAYER::PLAYER_ID()))
	{
		switch (iParam1)
		{
			case 0:
				PED::SET_PED_DEFAULT_COMPONENT_VARIATION(iParam0);
				PED::SET_PED_COMPONENT_VARIATION(iParam0, 0, 5, 0, 0);
				PED::SET_PED_COMPONENT_VARIATION(iParam0, 2, 5, 0, 0);
				PED::SET_PED_COMPONENT_VARIATION(iParam0, 3, 2, 2, 0);
				PED::SET_PED_COMPONENT_VARIATION(iParam0, 4, 1, 0, 0);
				PED::SET_PED_COMPONENT_VARIATION(iParam0, 7, 1, 0, 0);
				PED::SET_PED_COMPONENT_VARIATION(iParam0, 8, 2, 0, 0);
				PED::SET_PED_PROP_INDEX(iParam0, 1, 0, 0, false);
				break;
			case 1:
				PED::SET_PED_DEFAULT_COMPONENT_VARIATION(iParam0);
				PED::SET_PED_COMPONENT_VARIATION(iParam0, 0, 0, 1, 0);
				PED::SET_PED_COMPONENT_VARIATION(iParam0, 2, 0, 1, 0);
				PED::SET_PED_COMPONENT_VARIATION(iParam0, 3, 2, 0, 0);
				PED::SET_PED_COMPONENT_VARIATION(iParam0, 4, 1, 0, 0);
				PED::SET_PED_COMPONENT_VARIATION(iParam0, 7, 1, 0, 0);
				PED::SET_PED_COMPONENT_VARIATION(iParam0, 8, 2, 0, 0);
				break;
		}
	}
	else if (__LIB_2__::func_573(PLAYER::PLAYER_ID()))
	{
		switch (iParam1)
		{
			case 0:
				PED::SET_PED_DEFAULT_COMPONENT_VARIATION(iParam0);
				PED::SET_PED_COMPONENT_VARIATION(iParam0, 0, 0, 0, 0);
				PED::SET_PED_COMPONENT_VARIATION(iParam0, 2, 0, 0, 0);
				PED::SET_PED_COMPONENT_VARIATION(iParam0, 3, 0, 0, 0);
				PED::SET_PED_COMPONENT_VARIATION(iParam0, 4, 0, 0, 0);
				PED::SET_PED_COMPONENT_VARIATION(iParam0, 7, 0, 0, 0);
				PED::SET_PED_COMPONENT_VARIATION(iParam0, 8, 0, 0, 0);
				PED::SET_PED_PROP_INDEX(iParam0, 0, 0, 0, false);
				PED::SET_PED_PROP_INDEX(iParam0, 1, 0, 0, false);
				break;
		}
	}
	else if (__LIB_2__::func_884(PLAYER::PLAYER_ID()))
	{
		switch (iParam1)
		{
			case 0:
				PED::SET_PED_DEFAULT_COMPONENT_VARIATION(iParam0);
				PED::SET_PED_COMPONENT_VARIATION(iParam0, 0, 0, 0, 0);
				PED::SET_PED_COMPONENT_VARIATION(iParam0, 2, 0, 0, 0);
				PED::SET_PED_COMPONENT_VARIATION(iParam0, 4, 0, 0, 0);
				PED::SET_PED_COMPONENT_VARIATION(iParam0, 5, 0, 0, 0);
				PED::SET_PED_COMPONENT_VARIATION(iParam0, 6, 0, 0, 0);
				PED::SET_PED_COMPONENT_VARIATION(iParam0, 7, 1, 0, 0);
				PED::SET_PED_COMPONENT_VARIATION(iParam0, 11, 0, 0, 0);
				break;
			case 1:
				PED::SET_PED_DEFAULT_COMPONENT_VARIATION(iParam0);
				PED::SET_PED_COMPONENT_VARIATION(iParam0, 0, 2, 0, 0);
				PED::SET_PED_COMPONENT_VARIATION(iParam0, 2, 2, 0, 0);
				PED::SET_PED_COMPONENT_VARIATION(iParam0, 4, 0, 1, 0);
				PED::SET_PED_COMPONENT_VARIATION(iParam0, 5, 2, 0, 0);
				PED::SET_PED_COMPONENT_VARIATION(iParam0, 6, 0, 2, 0);
				PED::SET_PED_COMPONENT_VARIATION(iParam0, 7, 1, 0, 0);
				PED::SET_PED_COMPONENT_VARIATION(iParam0, 11, 2, 0, 0);
				break;
		}
	}
	else if (__LIB_1__::func_35())
	{
		switch (iParam1)
		{
			case 0:
				PED::SET_PED_DEFAULT_COMPONENT_VARIATION(iParam0);
				PED::SET_PED_COMPONENT_VARIATION(iParam0, 0, 0, 0, 0);
				PED::SET_PED_COMPONENT_VARIATION(iParam0, 2, 0, 0, 0);
				PED::SET_PED_COMPONENT_VARIATION(iParam0, 4, 0, 0, 0);
				PED::SET_PED_COMPONENT_VARIATION(iParam0, 5, 1, 0, 0);
				PED::SET_PED_COMPONENT_VARIATION(iParam0, 6, 0, 0, 0);
				PED::SET_PED_COMPONENT_VARIATION(iParam0, 11, 1, 0, 0);
				break;
			case 1:
				PED::SET_PED_DEFAULT_COMPONENT_VARIATION(iParam0);
				PED::SET_PED_COMPONENT_VARIATION(iParam0, 0, 1, 0, 0);
				PED::SET_PED_COMPONENT_VARIATION(iParam0, 2, 1, 0, 0);
				PED::SET_PED_COMPONENT_VARIATION(iParam0, 4, 0, 1, 0);
				PED::SET_PED_COMPONENT_VARIATION(iParam0, 5, 1, 1, 0);
				PED::SET_PED_COMPONENT_VARIATION(iParam0, 6, 0, 1, 0);
				PED::SET_PED_COMPONENT_VARIATION(iParam0, 11, 0, 0, 0);
				break;
		}
	}
	else
	{
		switch (iParam1)
		{
			case 0:
				PED::SET_PED_DEFAULT_COMPONENT_VARIATION(iParam0);
				PED::SET_PED_COMPONENT_VARIATION(iParam0, 6, 1, 0, 0);
				break;
			case 1:
				PED::SET_PED_DEFAULT_COMPONENT_VARIATION(iParam0);
				PED::SET_PED_COMPONENT_VARIATION(iParam0, 0, 5, 0, 0);
				PED::SET_PED_COMPONENT_VARIATION(iParam0, 2, 5, 0, 0);
				PED::SET_PED_COMPONENT_VARIATION(iParam0, 3, 2, 2, 0);
				PED::SET_PED_COMPONENT_VARIATION(iParam0, 4, 1, 0, 0);
				PED::SET_PED_COMPONENT_VARIATION(iParam0, 7, 1, 0, 0);
				PED::SET_PED_COMPONENT_VARIATION(iParam0, 8, 2, 0, 0);
				break;
			}
	}
}

var func_33(int iParam0)//Position - 0x2779
{
	struct<3> Var0;
	Var0 = { PED::GET_ANIM_INITIAL_OFFSET_ROTATION(func_22(iParam0), "idle_a_bartender", func_30(iParam0), func_26(iParam0), 0.01f, 2) };
	return Var0.f_2;
}

Vector3 func_34(int iParam0)//Position - 0x27A7
{
	struct<3> Var0;
	Var0 = { PED::GET_ANIM_INITIAL_OFFSET_POSITION(func_22(iParam0), "idle_a_bartender", func_30(iParam0), func_26(iParam0), 0.01f, 2) };
	return Var0;
}

int func_35()//Position - 0x27D5
{
	if (__LIB_2__::func_573(PLAYER::PLAYER_ID()))
	{
		return MISC::GET_HASH_KEY("ig_wendy");
	}
	if (__LIB_2__::func_884(PLAYER::PLAYER_ID()))
	{
		return MISC::GET_HASH_KEY("s_f_y_clubbar_02");
	}
	if (__LIB_1__::func_35())
	{
		return MISC::GET_HASH_KEY("s_f_y_beachbarstaff_01");
	}
	return MISC::GET_HASH_KEY("s_f_y_casino_01");
}

int func_36(int iParam0)//Position - 0x2823
{
	if (__LIB_1__::func_783(PLAYER::PLAYER_ID()))
	{
		switch (iParam0)
		{
			case 0:
			case 1:
				return 1;
			default:
		}
	}
	else if (__LIB_2__::func_885(PLAYER::PLAYER_ID()))
	{
		switch (iParam0)
		{
			case 0:
				if (__LIB_7__::func_253())
				{
					return 1;
				}
				break;
			case 1:
				return 1;
		}
	}
	else if (__LIB_2__::func_573(PLAYER::PLAYER_ID()))
	{
		switch (iParam0)
		{
			case 0:
				if (__LIB_5__::func_773(__LIB_1__::func_874(PLAYER::PLAYER_ID())))
				{
					return 1;
				}
				break;
		}
	}
	else if (__LIB_2__::func_884(PLAYER::PLAYER_ID()))
	{
		switch (iParam0)
		{
			case 0:
			case 1:
				return 1;
			default:
		}
	}
	else if (__LIB_1__::func_35())
	{
		switch (iParam0)
		{
			case 0:
			case 1:
				return 1;
			}
		default:
	}
	return 0;
}

bool func_49()//Position - 0x2B71
{
	return __LIB_20__::func_842();
}

int func_52()//Position - 0x2BAA
{
	switch (MISC::GET_RANDOM_INT_IN_RANGE(0, 4))
	{
		case 0:
			return 0;
		case 1:
			return 7;
		case 2:
			return 19;
		default:
	}
	return 12;
	return 12;
}

void func_53(int iParam0)//Position - 0x2BE3
{
	Local_116.f_29 = iParam0;
}

void func_54()//Position - 0x2BF1
{
	func_3017();
	func_3014();
	func_3013();
	func_3006();
	if (func_3005())
	{
		func_2955(0, &(Local_116.f_12), &(Local_150.f_1198));
	}
	if (func_49())
	{
		func_1810(0, &(Local_150.f_1213), 30, 0, 0);
		func_1808();
		func_1807();
	}
	if (func_1806(0))
	{
		func_1803();
	}
	else if (func_1806(1))
	{
		if (func_49())
		{
			func_1587(&Local_116, &uLocal_152, &(Local_150.f_1));
			func_1232();
			func_1213(&(Local_150.f_1207));
			func_202();
			func_196();
		}
		else
		{
			func_55();
		}
	}
}

void func_55()//Position - 0x2C83
{
	if (SCRIPT::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(joaat("am_mp_peds")) > 0)
	{
		MISC::TERMINATE_ALL_SCRIPTS_WITH_THIS_NAME("am_mp_peds");
		Local_150.f_1213 = 0;
	}
	if (Local_150.f_170.f_2 != 0)
	{
		__LIB_43__::func_632(&(Local_150.f_170), 1);
	}
	if (!func_3005())
	{
		if (__LIB_12__::func_224())
		{
			if (Local_150.f_1198.f_3 != -1)
			{
				func_56(0, &(Local_150.f_1198), &(Local_116.f_12));
			}
		}
	}
}

void func_56(int iParam0, var uParam1, var uParam2)//Position - 0x2CE1
{
	struct<9> Var0;
	func_129(iParam0, uParam2);
	func_126(iParam0, 0);
	func_124(iParam0, 0);
	__LIB_11__::func_79();
	func_118(iParam0, uParam1->f_3);
	func_57(iParam0, 0);
	Var0.f_3 = -1;
	Var0.f_4 = -1;
	Var0.f_5 = -1;
	*uParam1 = { Var0 };
}

void func_57(int iParam0, bool bParam1)//Position - 0x2D33
{
	char* sVar0;
	sVar0 = func_58(iParam0);
	if (MISC::IS_STRING_NULL_OR_EMPTY(sVar0))
	{
		return;
	}
	if (bParam1)
	{
		if (!AUDIO::IS_AUDIO_SCENE_ACTIVE(sVar0))
		{
			AUDIO::START_AUDIO_SCENE(sVar0);
		}
	}
	else if (AUDIO::IS_AUDIO_SCENE_ACTIVE(sVar0))
	{
		AUDIO::STOP_AUDIO_SCENE(sVar0);
	}
}

char* func_58(int iParam0)//Position - 0x2D77
{
	struct<12> Var0;
	func_59(iParam0, &Var0, 11);
	if (Var0.f_11 != 0)
	{
		Call_Loc(Var0.f_11);
		return StackVal;
	}
	return "";
}

void func_59(int iParam0, var uParam1, int iParam2)//Position - 0x2D9D
{
	switch (iParam0)
	{
		case 0:
			func_111(uParam1, iParam2);
			break;
		case 1:
			func_88(uParam1, iParam2);
			break;
		case 2:
			func_60(uParam1, iParam2);
			break;
	}
}

void func_60(var uParam0, int iParam1)//Position - 0x2DDF
{
	switch (iParam1)
	{
		case 0:
			*uParam0 = 13196/*__LIB_40__::func_867*/;
			break;
		case 1:
			uParam0->f_1 = 13187/*__LIB_0__::func_109*/;
			break;
		case 2:
			uParam0->f_2 = 12919/*__LIB_11__::func_63*/;
			break;
		case 3:
			uParam0->f_3 = 12822/*__LIB_11__::func_62*/;
			break;
		case 5:
			uParam0->f_5 = 12725/*__LIB_11__::func_61*/;
			break;
		case 4:
			uParam0->f_4 = 12609/*__LIB_11__::func_60*/;
			break;
		case 6:
			uParam0->f_6 = 12242/*__LIB_11__::func_300*/;
			break;
		case 8:
			uParam0->f_8 = 12233/*__LIB_0__::func_114*/;
			break;
		case 9:
			uParam0->f_9 = 12224/*__LIB_3__::func_603*/;
			break;
		case 10:
			uParam0->f_10 = 12156/*__LIB_11__::func_59*/;
			break;
		case 11:
			uParam0->f_11 = 12144/*__LIB_3__::func_860*/;
			break;
		case 12:
			uParam0->f_11 = 12132/*__LIB_3__::func_860*/;
			break;
		case 13:
			uParam0->f_13 = 11978/*__LIB_11__::func_58*/;
			break;
	}
}

void func_88(var uParam0, int iParam1)//Position - 0x3B49
{
	switch (iParam1)
	{
		case 0:
			*uParam0 = 16825/*__LIB_11__::func_313*/;
			break;
		case 1:
			uParam0->f_1 = 16816/*__LIB_0__::func_109*/;
			break;
		case 2:
			uParam0->f_2 = 12919;
			break;
		case 3:
			uParam0->f_3 = 16669/*__LIB_11__::func_312*/;
			break;
		case 5:
			uParam0->f_5 = 16181/*__LIB_31__::func_375*/;
			break;
		case 4:
			uParam0->f_4 = 16057/*__LIB_11__::func_311*/;
			break;
		case 6:
			uParam0->f_6 = 15898/*__LIB_31__::func_399*/;
			break;
		case 7:
			uParam0->f_7 = 15556/*__LIB_31__::func_385*/;
			break;
		case 9:
			uParam0->f_9 = 15547/*__LIB_3__::func_969*/;
			break;
		case 10:
			uParam0->f_10 = 15434/*__LIB_11__::func_69*/;
			break;
		case 11:
			uParam0->f_11 = 15422/*__LIB_11__::func_68*/;
			break;
		case 12:
			uParam0->f_11 = 15410/*__LIB_3__::func_860*/;
			break;
		case 13:
			uParam0->f_13 = 11978;
			break;
	}
}

void func_111(var uParam0, int iParam1)//Position - 0x45FB
{
	switch (iParam1)
	{
		case 0:
			*uParam0 = 18268/*__LIB_3__::func_939*/;
			break;
		case 1:
			uParam0->f_1 = 18259/*__LIB_0__::func_109*/;
			break;
		case 2:
			uParam0->f_2 = 12919;
			break;
		case 3:
			uParam0->f_3 = 16669;
			break;
		case 5:
			uParam0->f_5 = 16181;
			break;
		case 4:
			uParam0->f_4 = 16057;
			break;
		case 6:
			uParam0->f_6 = 15898;
			break;
		case 7:
			uParam0->f_7 = 15556;
			break;
		case 9:
			uParam0->f_9 = 18250/*__LIB_1__::func_804*/;
			break;
		case 10:
			uParam0->f_10 = 18167/*__LIB_11__::func_77*/;
			break;
		case 11:
			uParam0->f_11 = 18155/*__LIB_3__::func_860*/;
			break;
		case 12:
			uParam0->f_12 = 18143/*__LIB_11__::func_76*/;
			break;
		case 13:
			uParam0->f_13 = 11978;
			break;
	}
}

void func_118(int iParam0, var uParam1)//Position - 0x4765
{
	var uVar0;
	if (__LIB_11__::func_233())
	{
		return;
	}
	if (func_120(iParam0, uParam1, &uVar0))
	{
		__LIB_11__::func_78();
	}
}

bool func_120(int iParam0, var uParam1, var uParam2)//Position - 0x479E
{
	struct<14> Var0;
	func_59(iParam0, &Var0, 13);
	Stack.Push(uParam1);
	Stack.Push(uParam2);
	Call_Loc(Var0.f_13);
	return StackVal;
}

void func_124(int iParam0, bool bParam1)//Position - 0x4806
{
	char* sVar0;
	sVar0 = func_125(iParam0);
	if (MISC::IS_STRING_NULL_OR_EMPTY(sVar0))
	{
		return;
	}
	if (bParam1)
	{
		if (!AUDIO::IS_AMBIENT_ZONE_ENABLED(sVar0))
		{
			AUDIO::SET_AMBIENT_ZONE_STATE(sVar0, true, true);
		}
	}
	else if (AUDIO::IS_AMBIENT_ZONE_ENABLED(sVar0))
	{
		AUDIO::SET_AMBIENT_ZONE_STATE(sVar0, false, true);
	}
}

char* func_125(int iParam0)//Position - 0x484D
{
	struct<13> Var0;
	func_59(iParam0, &Var0, 12);
	if (Var0.f_12 != 0)
	{
		Call_Loc(Var0.f_12);
		return StackVal;
	}
	return "";
}

void func_126(int iParam0, bool bParam1)//Position - 0x4873
{
	int iVar0;
	char* sVar1;
	sVar1 = "";
	iVar0 = 0;
	while (iVar0 < func_128(iParam0))
	{
		sVar1 = func_127(iParam0, iVar0);
		if (!MISC::IS_STRING_NULL_OR_EMPTY(sVar1))
		{
			AUDIO::SET_STATIC_EMITTER_ENABLED(sVar1, bParam1);
		}
	else
	{
		}
		else
		{
			iVar0++;
		}
	}
}

char* func_127(int iParam0, int iParam1)//Position - 0x48BA
{
	struct<11> Var0;
	func_59(iParam0, &Var0, 10);
	if (Var0.f_10 != 0)
	{
		Stack.Push(iParam1);
		Call_Loc(Var0.f_10);
		return StackVal;
	}
	return "";
}

int func_128(int iParam0)//Position - 0x48E2
{
	struct<10> Var0;
	func_59(iParam0, &Var0, 9);
	if (Var0.f_9 != 0)
	{
		Call_Loc(Var0.f_9);
		return StackVal;
	}
	return 0;
}

void func_129(int iParam0, var uParam1)//Position - 0x4905
{
	if (!__LIB_11__::func_81(iParam0))
	{
		return;
	}
	if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		return;
	}
	if (NETWORK::NETWORK_IS_ACTIVITY_SESSION())
	{
		return;
	}
	if (NETWORK::NETWORK_GET_NUM_PARTICIPANTS() > 1)
	{
		return;
	}
	if (!NETWORK::NETWORK_IS_HOST_OF_THIS_SCRIPT())
	{
		return;
	}
	__LIB_11__::func_80(uParam1, 0);
	__LIB_11__::func_80(uParam1, 1);
	if (func_133(iParam0))
	{
		func_130(iParam0, uParam1);
	}
}

void func_130(int iParam0, var uParam1)//Position - 0x4964
{
	struct<19> Var0;
	int iVar1;
	int iVar2;
	Var0.f_2 = 1;
	Var0.f_2.f_8 = -1;
	Var0.f_2.f_9 = -1;
	Var0.f_2.f_10 = -1;
	Var0.f_2.f_11 = -1;
	Var0.f_2.f_12 = -1;
	Var0.f_0 = -945048174;
	Var0.f_1 = PLAYER::PLAYER_ID();
	Var0.f_2 = { *uParam1 };
	Var0.f_18 = iParam0;
	iVar1 = NETWORK::NETWORK_GET_HOST_OF_SCRIPT(__LIB_1__::func_834(), -1, 0);
	iVar2 = __LIB_0__::func_950(iVar1);
	SCRIPT::SEND_TU_SCRIPT_EVENT(1, &Var0, 19, iVar2);
}

int func_133(int iParam0)//Position - 0x4A0F
{
	if (iParam0 == 0)
	{
		if (__LIB_2__::func_813(PLAYER::PLAYER_ID()) == 0)
		{
			return 0;
		}
	}
	return 1;
}

void func_196()//Position - 0x5FF6
{
	float fVar0;
	var uVar1;
	int iVar2;
	bool bVar3;
	bool bVar4;
	bool bVar5;
	int iVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	int iVar10;
	int iVar11;
	int iVar12;
	int iVar13;
	int iVar14;
	float fVar15;
	float fVar16;
	float fVar17;
	float fVar18;
	float fVar19;
	float fVar20;
	int iVar21;
	int iVar22;
	if (!__LIB_0__::func_864(&uLocal_220))
	{
		if (AUDIO::GET_NEXT_AUDIBLE_BEAT(&fVar0, &uVar1, &iVar2) && iLocal_218 != iVar2)
		{
			iLocal_218 = iVar2;
			iLocal_219 = SYSTEM::FLOOR((fVar0 * 1000f));
			iLocal_219 = (iLocal_219 + iLocal_223);
			if (iLocal_219 < 0)
			{
				iLocal_219 = 0;
			}
			__LIB_0__::func_795(&uLocal_220, 0, 0);
		}
	}
	else if (__LIB_0__::func_937(&uLocal_220, iLocal_219, 0))
	{
		__LIB_0__::func_794(&uLocal_220);
		if (__LIB_0__::func_121(PLAYER::PLAYER_PED_ID()))
		{
			if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), 4893.8687f, -4900.2266f, 1.378058f, 4893.0957f, -4917.5806f, 7.367704f, 17.5f, false, true, 0))
			{
				bVar3 = true;
			}
			else if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), 4893.7817f, -4894.097f, 1.54553f, 4893.6016f, -4926.185f, 7.361947f, 25f, false, true, 0))
			{
				bVar4 = true;
			}
			else if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), 4894.067f, -4878.834f, -1.466522f, 4891.2505f, -4953.731f, 8.417141f, 75f, false, true, 0))
			{
				bVar5 = true;
			}
			iVar6 = iLocal_224;
			iVar7 = iLocal_225;
			iVar8 = iLocal_226;
			iVar9 = iLocal_227;
			iVar10 = iLocal_228;
			iVar11 = iLocal_229;
			iVar12 = iLocal_230;
			iVar13 = iLocal_231;
			iVar14 = iLocal_232;
			fVar15 = MISC::GET_DISTANCE_BETWEEN_COORDS(__LIB_0__::func_85(PLAYER::PLAYER_ID()), 4890.161f, -4906.7163f, 2.3619f, true);
			fVar16 = MISC::GET_DISTANCE_BETWEEN_COORDS(__LIB_0__::func_85(PLAYER::PLAYER_ID()), 4896.8047f, -4907.1597f, 2.3619f, true);
			fVar17 = MISC::GET_DISTANCE_BETWEEN_COORDS(__LIB_0__::func_85(PLAYER::PLAYER_ID()), 4892.787f, -4906.8247f, 2.6299f, true);
			fVar18 = MISC::GET_DISTANCE_BETWEEN_COORDS(__LIB_0__::func_85(PLAYER::PLAYER_ID()), 4891.9053f, -4905.083f, 3.2695f, true);
			fVar19 = MISC::GET_DISTANCE_BETWEEN_COORDS(__LIB_0__::func_85(PLAYER::PLAYER_ID()), 4894.9395f, -4905.1846f, 3.2695f, true);
			fVar20 = __LIB_0__::func_373(fVar15 <= fVar16, fVar15, fVar16);
			fVar20 = __LIB_0__::func_373(fVar20 <= fVar17, fVar20, fVar17);
			fVar20 = __LIB_0__::func_373(fVar20 <= fVar17, fVar20, fVar18);
			fVar20 = __LIB_0__::func_373(fVar20 <= fVar17, fVar20, fVar19);
			if (__LIB_4__::func_358(PLAYER::PLAYER_ID()))
			{
				iVar6 = iLocal_233;
				iVar7 = iLocal_234;
				iVar8 = iLocal_235;
				iVar9 = iLocal_236;
				iVar10 = iLocal_237;
				iVar11 = iLocal_238;
				iVar12 = iLocal_239;
				iVar13 = iLocal_240;
				iVar14 = iLocal_241;
				if (fVar20 < fLocal_222)
				{
					iVar21 = (100 - SYSTEM::ROUND(((fVar20 / fLocal_222) * 100f)));
					iVar6 = (iLocal_233 + SYSTEM::ROUND(((IntToFloat(iVar21) / 100f) * IntToFloat((iLocal_269 - iLocal_233)))));
					iVar7 = (iLocal_234 + SYSTEM::ROUND(((IntToFloat(iVar21) / 100f) * IntToFloat((iLocal_270 - iLocal_234)))));
					iVar8 = (iLocal_235 + SYSTEM::ROUND(((IntToFloat(iVar21) / 100f) * IntToFloat((iLocal_271 - iLocal_235)))));
					iVar9 = (iLocal_236 + SYSTEM::ROUND(((IntToFloat(iVar21) / 100f) * IntToFloat((iLocal_272 - iLocal_236)))));
					iVar10 = (iLocal_237 + SYSTEM::ROUND(((IntToFloat(iVar21) / 100f) * IntToFloat((iLocal_273 - iLocal_237)))));
					iVar11 = (iLocal_238 + SYSTEM::ROUND(((IntToFloat(iVar21) / 100f) * IntToFloat((iLocal_274 - iLocal_238)))));
					iVar12 = (iLocal_239 + SYSTEM::ROUND(((IntToFloat(iVar21) / 100f) * IntToFloat((iLocal_275 - iLocal_239)))));
					iVar13 = (iLocal_240 + SYSTEM::ROUND(((IntToFloat(iVar21) / 100f) * IntToFloat((iLocal_276 - iLocal_240)))));
					iVar14 = (iLocal_241 + SYSTEM::ROUND(((IntToFloat(iVar21) / 100f) * IntToFloat((iLocal_277 - iLocal_241)))));
				}
				if (Local_150.f_1198.f_4 == 3 || Local_150.f_1198.f_4 == 2)
				{
					if (bVar5)
					{
						if (iLocal_218 == 1)
						{
							PAD::SET_CONTROL_SHAKE(0 /*PLAYER_CONTROL*/, iLocal_268, iLocal_267);
						}
						else
						{
							PAD::SET_CONTROL_SHAKE(0 /*PLAYER_CONTROL*/, iLocal_268, iLocal_266);
						}
					}
					else if (bVar4)
					{
						if (iLocal_218 == 1)
						{
							PAD::SET_CONTROL_SHAKE(0 /*PLAYER_CONTROL*/, iLocal_259, iLocal_258);
						}
						else
						{
							PAD::SET_CONTROL_SHAKE(0 /*PLAYER_CONTROL*/, iLocal_259, iLocal_257);
						}
					}
					else if (bVar3)
					{
						if (iLocal_218 == 1)
						{
							PAD::SET_CONTROL_SHAKE(0 /*PLAYER_CONTROL*/, iVar14, iVar13);
						}
						else
						{
							PAD::SET_CONTROL_SHAKE(0 /*PLAYER_CONTROL*/, iVar14, iVar12);
						}
					}
				}
				else if (Local_150.f_1198.f_4 == 1)
				{
					if (bVar5)
					{
						if (iLocal_218 == 1)
						{
							PAD::SET_CONTROL_SHAKE(0 /*PLAYER_CONTROL*/, iLocal_265, iLocal_264);
						}
						else
						{
							PAD::SET_CONTROL_SHAKE(0 /*PLAYER_CONTROL*/, iLocal_265, iLocal_263);
						}
					}
					else if (bVar4)
					{
						if (iLocal_218 == 1)
						{
							PAD::SET_CONTROL_SHAKE(0 /*PLAYER_CONTROL*/, iLocal_256, iLocal_255);
						}
						else
						{
							PAD::SET_CONTROL_SHAKE(0 /*PLAYER_CONTROL*/, iLocal_256, iLocal_254);
						}
					}
					else if (bVar3)
					{
						if (iLocal_218 == 1)
						{
							PAD::SET_CONTROL_SHAKE(0 /*PLAYER_CONTROL*/, iVar11, iVar10);
						}
						else
						{
							PAD::SET_CONTROL_SHAKE(0 /*PLAYER_CONTROL*/, iVar11, iVar9);
						}
					}
				}
				else if (Local_150.f_1198.f_4 == 0)
				{
					if (bVar5)
					{
						if (iLocal_218 == 1)
						{
							PAD::SET_CONTROL_SHAKE(0 /*PLAYER_CONTROL*/, iLocal_262, iLocal_261);
						}
						else
						{
							PAD::SET_CONTROL_SHAKE(0 /*PLAYER_CONTROL*/, iLocal_262, iLocal_260);
						}
					}
					else if (bVar4)
					{
						if (iLocal_218 == 1)
						{
							PAD::SET_CONTROL_SHAKE(0 /*PLAYER_CONTROL*/, iLocal_253, iLocal_252);
						}
						else
						{
							PAD::SET_CONTROL_SHAKE(0 /*PLAYER_CONTROL*/, iLocal_253, iLocal_251);
						}
					}
					else if (bVar3)
					{
						if (iLocal_218 == 1)
						{
							PAD::SET_CONTROL_SHAKE(0 /*PLAYER_CONTROL*/, iVar8, iVar7);
						}
						else
						{
							PAD::SET_CONTROL_SHAKE(0 /*PLAYER_CONTROL*/, iVar8, iVar6);
						}
					}
				}
			}
			else
			{
				if (fVar20 < fLocal_222)
				{
					iVar22 = (100 - SYSTEM::ROUND(((fVar20 / fLocal_222) * 100f)));
					iVar6 = (iLocal_224 + SYSTEM::ROUND(((IntToFloat(iVar22) / 100f) * IntToFloat((iLocal_269 - iLocal_224)))));
					iVar7 = (iLocal_225 + SYSTEM::ROUND(((IntToFloat(iVar22) / 100f) * IntToFloat((iLocal_270 - iLocal_225)))));
					iVar8 = (iLocal_226 + SYSTEM::ROUND(((IntToFloat(iVar22) / 100f) * IntToFloat((iLocal_271 - iLocal_226)))));
					iVar9 = (iLocal_227 + SYSTEM::ROUND(((IntToFloat(iVar22) / 100f) * IntToFloat((iLocal_272 - iLocal_227)))));
					iVar10 = (iLocal_228 + SYSTEM::ROUND(((IntToFloat(iVar22) / 100f) * IntToFloat((iLocal_273 - iLocal_228)))));
					iVar11 = (iLocal_229 + SYSTEM::ROUND(((IntToFloat(iVar22) / 100f) * IntToFloat((iLocal_274 - iLocal_229)))));
					iVar12 = (iLocal_230 + SYSTEM::ROUND(((IntToFloat(iVar22) / 100f) * IntToFloat((iLocal_275 - iLocal_230)))));
					iVar13 = (iLocal_231 + SYSTEM::ROUND(((IntToFloat(iVar22) / 100f) * IntToFloat((iLocal_276 - iLocal_231)))));
					iVar14 = (iLocal_232 + SYSTEM::ROUND(((IntToFloat(iVar22) / 100f) * IntToFloat((iLocal_277 - iLocal_232)))));
				}
				if (Local_150.f_1198.f_4 == 3 || Local_150.f_1198.f_4 == 2)
				{
					if (bVar5)
					{
						if (iLocal_218 == 1)
						{
							PAD::SET_CONTROL_SHAKE(0 /*PLAYER_CONTROL*/, iLocal_268, iLocal_267);
						}
						else
						{
							PAD::SET_CONTROL_SHAKE(0 /*PLAYER_CONTROL*/, iLocal_268, iLocal_266);
						}
					}
					else if (bVar4)
					{
						if (iLocal_218 == 1)
						{
							PAD::SET_CONTROL_SHAKE(0 /*PLAYER_CONTROL*/, iLocal_250, iLocal_249);
						}
						else
						{
							PAD::SET_CONTROL_SHAKE(0 /*PLAYER_CONTROL*/, iLocal_250, iLocal_248);
						}
					}
					else if (bVar3)
					{
						if (iLocal_218 == 1)
						{
							PAD::SET_CONTROL_SHAKE(0 /*PLAYER_CONTROL*/, iVar14, iVar13);
						}
						else
						{
							PAD::SET_CONTROL_SHAKE(0 /*PLAYER_CONTROL*/, iVar14, iVar12);
						}
					}
				}
				else if (Local_150.f_1198.f_4 == 1)
				{
					if (bVar5)
					{
						if (iLocal_218 == 1)
						{
							PAD::SET_CONTROL_SHAKE(0 /*PLAYER_CONTROL*/, iLocal_265, iLocal_264);
						}
						else
						{
							PAD::SET_CONTROL_SHAKE(0 /*PLAYER_CONTROL*/, iLocal_265, iLocal_263);
						}
					}
					else if (bVar4)
					{
						if (iLocal_218 == 1)
						{
							PAD::SET_CONTROL_SHAKE(0 /*PLAYER_CONTROL*/, iLocal_247, iLocal_246);
						}
						else
						{
							PAD::SET_CONTROL_SHAKE(0 /*PLAYER_CONTROL*/, iLocal_247, iLocal_245);
						}
					}
					else if (bVar3)
					{
						if (iLocal_218 == 1)
						{
							PAD::SET_CONTROL_SHAKE(0 /*PLAYER_CONTROL*/, iVar11, iVar10);
						}
						else
						{
							PAD::SET_CONTROL_SHAKE(0 /*PLAYER_CONTROL*/, iVar11, iVar9);
						}
					}
				}
				else if (Local_150.f_1198.f_4 == 0)
				{
					if (bVar5)
					{
						if (iLocal_218 == 1)
						{
							PAD::SET_CONTROL_SHAKE(0 /*PLAYER_CONTROL*/, iLocal_262, iLocal_261);
						}
						else
						{
							PAD::SET_CONTROL_SHAKE(0 /*PLAYER_CONTROL*/, iLocal_262, iLocal_260);
						}
					}
					else if (bVar4)
					{
						if (iLocal_218 == 1)
						{
							PAD::SET_CONTROL_SHAKE(0 /*PLAYER_CONTROL*/, iLocal_244, iLocal_243);
						}
						else
						{
							PAD::SET_CONTROL_SHAKE(0 /*PLAYER_CONTROL*/, iLocal_244, iLocal_242);
						}
					}
					else if (bVar3)
					{
						if (iLocal_218 == 1)
						{
							PAD::SET_CONTROL_SHAKE(0 /*PLAYER_CONTROL*/, iVar8, iVar7);
						}
						else
						{
							PAD::SET_CONTROL_SHAKE(0 /*PLAYER_CONTROL*/, iVar8, iVar6);
						}
					}
				}
			}
		}
	}
}

void func_202()//Position - 0x6873
{
	switch (Local_150.f_1212)
	{
		case 0:
			if (Global_1578997.f_6)
			{
				MISC::CLEAR_BIT(&(Global_1946250.f_4), 2);
				func_1212(1);
			}
			break;
		case 1:
			Global_2787783 = 1;
			Global_4535620 = 1;
			func_1190(&Local_116, &uLocal_152, &(Local_150.f_1), 1, 1, 1);
			func_1212(2);
			if (__LIB_0__::func_121(PLAYER::PLAYER_PED_ID()) && !BitTest(Global_1946250.f_6, 11))
			{
				TASK::CLEAR_PED_TASKS(PLAYER::PLAYER_PED_ID());
			}
			break;
		case 2:
			if (__LIB_0__::func_877())
			{
				__LIB_1__::func_79();
			}
			func_1186(1);
			if (func_235(8, 0, 0, 0, 0, 0, 0, 0, 1, 3000, 1, 1, 0, 0, 0, 0, 1, 0))
			{
				__LIB_2__::func_91();
				func_218(0, 1, 0, 1060320051, 1086324736, 1065353216, 1088421888, 1084227584, 0, 1066192077, 0, 0, 1, 0, 1109393408);
				func_1212(3);
			}
			break;
		case 3:
			if (__LIB_0__::func_937(&(Local_150.f_1217), 2000, 0))
			{
				__LIB_0__::func_794(&(Local_150.f_1217));
				__LIB_7__::func_178();
				Global_2787783 = 0;
				__LIB_1__::func_376(PLAYER::PLAYER_ID(), 1, 0, 0);
				Global_1578997.f_6 = 0;
				func_1212(0);
			}
			break;
	}
}

void func_218(bool bParam0, int iParam1, int iParam2, float fParam3, float fParam4, int iParam5, int iParam6, float fParam7, int iParam8, int iParam9, int iParam10, int iParam11, int iParam12, int iParam13, int iParam14)//Position - 0x7136
{
	if (bParam0)
	{
		if (__LIB_1__::func_739())
		{
			__LIB_2__::func_26();
		}
		Global_2667225.f_714.f_518 = SCRIPT::GET_ID_OF_THIS_THREAD();
		Global_2667225.f_714.f_504 = iParam1;
		Global_2667225.f_714.f_505 = iParam2;
		Global_2667225.f_714.f_506 = iParam10;
		__LIB_2__::func_91();
		__LIB_2__::func_995(8, 0, 0, 0, 0);
		Global_2667225.f_714.f_507 = iParam11;
		Global_2667225.f_714.f_512 = fParam3;
		Global_2667225.f_714.f_513 = fParam4;
		Global_2667225.f_714.f_510 = iParam5;
		Global_2667225.f_714.f_511 = iParam6;
		Global_2667225.f_714.f_514 = fParam7;
		Global_2667225.f_714.f_515 = iParam8;
		Global_2667225.f_714.f_516 = iParam9;
		Global_2667225.f_714.f_517 = iParam14;
		Global_2667225.f_714.f_508 = iParam12;
		Global_2667225.f_714.f_509 = iParam13;
		Global_2667225.f_1753 = 1;
	}
	else
	{
		__LIB_11__::func_279();
	}
}

int func_235(int iParam0, bool bParam1, bool bParam2, int iParam3, bool bParam4, int iParam5, int iParam6, bool bParam7, int iParam8, int iParam9, bool bParam10, bool bParam11, int iParam12, bool bParam13, bool bParam14, bool bParam15, bool bParam16, int iParam17)//Position - 0x75AA
{
	float fVar0;
	bool bVar1;
	int iVar2;
	bool bVar3;
	int iVar4;
	bool bVar5;
	__LIB_0__::func_189();
	if (__LIB_0__::func_972(PLAYER::PLAYER_ID(), 1, 0))
	{
		if (((bParam4 && __LIB_0__::func_156(PLAYER::PLAYER_ID(), 1, 0)) && STREAMING::IS_PLAYER_SWITCH_IN_PROGRESS()) && Global_2689235[PLAYER::PLAYER_ID() /*453*/].f_230 == 1)
		{
		}
		else if (__LIB_0__::func_628() == 28)
		{
		}
		else
		{
			return 0;
		}
	}
	if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
	{
		PED::SET_PED_RESET_FLAG(PLAYER::PLAYER_PED_ID(), 150, true);
		if (!Global_2667225.f_702 == iParam0)
		{
			if (bParam15 && Global_2667225.f_702 == 37)
			{
			}
			else if (!Global_2689235[PLAYER::PLAYER_ID() /*453*/].f_215 == 0)
			{
				if (NETWORK::GET_TIME_DIFFERENCE(NETWORK::GET_NETWORK_TIME(), Global_2667225.f_703) < __LIB_0__::func_853(0))
				{
					return 0;
				}
				Global_2689235[PLAYER::PLAYER_ID() /*453*/].f_215 = 0;
			}
		}
		if (Global_2689235[PLAYER::PLAYER_ID() /*453*/].f_215 == 0)
		{
			Global_2667225.f_702 = iParam0;
			Global_2689235[PLAYER::PLAYER_ID() /*453*/].f_215 = 2;
			if (bParam2)
			{
				if (!__LIB_2__::func_854())
				{
					bParam2 = false;
				}
			}
			Global_2689235[PLAYER::PLAYER_ID() /*453*/].f_215 = 2;
			Global_2667225.f_2478 = 0;
			Global_2667225.f_2479 = 0;
			Global_2667225.f_2477 = 0;
			Global_2667225.f_2878 = 0;
		}
		if (Global_2689235[PLAYER::PLAYER_ID() /*453*/].f_215 == 2)
		{
			if (bParam2 || bParam7)
			{
				bVar3 = true;
			}
			if (Global_2667225.f_702 == 11)
			{
				Global_2667225.f_706 = { Global_2676213 };
				Global_2667225.f_709 = Global_2676213.f_5;
				Global_2667225.f_2898 = Global_2676213.f_26;
				Global_2689235[PLAYER::PLAYER_ID() /*453*/].f_215 = 3;
			}
			else if (func_910(&(Global_2667225.f_706), &(Global_2667225.f_709), Global_2667225.f_702, bVar3, iParam3, iParam5, iParam6, iParam8, iParam12, 0, bParam13, iParam17))
			{
				Global_2689235[PLAYER::PLAYER_ID() /*453*/].f_215 = 3;
			}
		}
		if (Global_2689235[PLAYER::PLAYER_ID() /*453*/].f_215 == 3)
		{
			if (bParam11)
			{
				if (bParam2)
				{
					if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
					{
						iVar2 = PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false);
						TASK::CLEAR_PED_TASKS_IMMEDIATELY(PLAYER::PLAYER_PED_ID());
						__LIB_10__::func_728(&iVar2);
					}
					else
					{
						iVar2 = __LIB_1__::func_640();
						__LIB_11__::func_263(&iVar2);
					}
					if (__LIB_2__::func_854())
					{
						if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
						{
							if (!ENTITY::GET_ENTITY_MODEL(PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false)) == Global_2667225.f_45.f_67)
							{
								iVar4 = PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false);
								if (iVar4 == Global_2667225.f_45.f_173)
								{
									__LIB_2__::func_930();
								}
								TASK::CLEAR_PED_TASKS_IMMEDIATELY(PLAYER::PLAYER_PED_ID());
							}
						}
					}
					if (!PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
					{
						Global_2689235[PLAYER::PLAYER_ID() /*453*/].f_215 = 4;
					}
					else
					{
						iVar2 = PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false);
						if (NETWORK::NETWORK_HAS_CONTROL_OF_ENTITY(iVar2))
						{
							func_882(iVar2);
							__LIB_3__::func_308(1);
							Global_2689235[PLAYER::PLAYER_ID() /*453*/].f_215 = 6;
						}
						else
						{
							NETWORK::NETWORK_REQUEST_CONTROL_OF_ENTITY(iVar2);
						}
					}
				}
				else
				{
					__LIB_3__::func_308(1);
					Global_2689235[PLAYER::PLAYER_ID() /*453*/].f_215 = 6;
				}
			}
		}
		if (Global_2689235[PLAYER::PLAYER_ID() /*453*/].f_215 == 4)
		{
			if (func_878())
			{
				if (Global_2667225.f_45.f_65)
				{
					if (func_522(Global_2667225.f_706, Global_2667225.f_706.f_1, __LIB_3__::func_207(Global_2667225.f_45.f_67), Global_2667225.f_709, 0))
					{
						Global_2667225.f_704 = NETWORK::GET_NETWORK_TIME();
						Global_2689235[PLAYER::PLAYER_ID() /*453*/].f_215 = 5;
					}
				}
				else if (__LIB_2__::func_624(Global_2667225.f_45.f_67) || Global_2667225.f_45.f_67 == 0)
				{
					Global_2689235[PLAYER::PLAYER_ID() /*453*/].f_215 = 6;
				}
			}
		}
		if (Global_2689235[PLAYER::PLAYER_ID() /*453*/].f_215 == 5)
		{
			PED::SET_PED_RESET_FLAG(PLAYER::PLAYER_PED_ID(), 150, true);
			if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
			{
				Global_2689235[PLAYER::PLAYER_ID() /*453*/].f_215 = 6;
				if (Global_2667225.f_45.f_176)
				{
					Global_2689235[PLAYER::PLAYER_ID() /*453*/].f_235 = 1;
				}
				else
				{
					Global_2689235[PLAYER::PLAYER_ID() /*453*/].f_235 = 0;
				}
			}
			else if (NETWORK::GET_TIME_DIFFERENCE(NETWORK::GET_NETWORK_TIME(), Global_2667225.f_704) > 5000)
			{
				TASK::CLEAR_PED_TASKS_IMMEDIATELY(PLAYER::PLAYER_PED_ID());
				Global_2689235[PLAYER::PLAYER_ID() /*453*/].f_215 = 4;
			}
			else if (TASK::GET_SCRIPT_TASK_STATUS(PLAYER::PLAYER_PED_ID(), joaat("SCRIPT_TASK_ENTER_VEHICLE")) == 7)
			{
				if (ENTITY::DOES_ENTITY_EXIST(Global_2667225.f_45.f_173) && VEHICLE::IS_VEHICLE_DRIVEABLE(Global_2667225.f_45.f_173, false))
				{
					func_307(PLAYER::PLAYER_PED_ID(), Global_2667225.f_45.f_173, -1, 0);
				}
				else
				{
					TASK::CLEAR_PED_TASKS_IMMEDIATELY(PLAYER::PLAYER_PED_ID());
					Global_2689235[PLAYER::PLAYER_ID() /*453*/].f_215 = 4;
				}
			}
		}
		if (Global_2689235[PLAYER::PLAYER_ID() /*453*/].f_215 == 6)
		{
			Global_2667225.f_703 = NETWORK::GET_NETWORK_TIME();
			if (Global_2667225.f_712)
			{
				Global_2667225.f_705 = NETWORK::GET_NETWORK_TIME();
				Global_2667225.f_712 = 0;
			}
			if (bParam7)
			{
				bVar1 = true;
			}
			else
			{
				bVar1 = bParam2;
			}
			if (MISC::ABSI(NETWORK::GET_TIME_DIFFERENCE(NETWORK::GET_NETWORK_TIME(), Global_2667225.f_705)) >= 350)
			{
				bVar5 = true;
			}
			else
			{
				bVar5 = false;
			}
			if (Global_1836584)
			{
				__LIB_12__::func_766(Global_2667225.f_706);
			}
			if (bParam7 && !Global_2703735.f_910)
			{
				if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
				{
					iVar2 = PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false);
					if (ENTITY::DOES_ENTITY_EXIST(iVar2))
					{
						if ((ENTITY::IS_ENTITY_DEAD(iVar2, false) || !VEHICLE::IS_VEHICLE_DRIVEABLE(iVar2, false)) || __LIB_0__::func_793(iVar2))
						{
							TASK::CLEAR_PED_TASKS_IMMEDIATELY(PLAYER::PLAYER_PED_ID());
						}
					}
				}
			}
			if (bVar5)
			{
				if (__LIB_3__::func_72(Global_2667225.f_706, Global_2667225.f_709, bVar1, bParam1, 0, 0, 1, bParam4, bParam16, 1, Global_2667225.f_2898))
				{
					if (bParam15)
					{
						Global_2689235[PLAYER::PLAYER_ID() /*453*/].f_215 = 7;
						return 0;
					}
					else
					{
						__LIB_13__::func_732();
					}
				}
			}
		}
		if (Global_2689235[PLAYER::PLAYER_ID() /*453*/].f_215 == 7)
		{
			if ((Global_2667225.f_702 == 8 && Global_2667225.f_714.f_507) && Global_2667225.f_2878)
			{
				__LIB_13__::func_732();
			}
			else if (__LIB_11__::func_975(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), false)) || __LIB_2__::func_869())
			{
				if (Global_2667225.f_702 == 8 && !Global_2667225.f_2878)
				{
					Global_2667225.f_2878 = 1;
				}
				else
				{
					Global_2667225.f_702 = 37;
				}
				Global_2689235[PLAYER::PLAYER_ID() /*453*/].f_215 = 2;
				Global_2667225.f_2478 = 0;
				Global_2667225.f_2479 = 0;
				Global_2667225.f_2477 = 0;
			}
			else
			{
				__LIB_13__::func_732();
			}
		}
		if (Global_2689235[PLAYER::PLAYER_ID() /*453*/].f_215 == 10)
		{
			if (SYSTEM::VDIST(Global_2676213, Global_2667225.f_706) > 0.1f)
			{
				if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
				{
					iVar2 = PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false);
					if (VEHICLE::IS_THIS_MODEL_A_BIKE(ENTITY::GET_ENTITY_MODEL(iVar2)) || VEHICLE::IS_THIS_MODEL_A_CAR(ENTITY::GET_ENTITY_MODEL(iVar2)))
					{
						MISC::GET_GROUND_Z_FOR_3D_COORD(Global_2667225.f_706, Global_2667225.f_706.f_1, Global_2667225.f_706.f_2, &fVar0, false, false);
						if (fVar0 == 0f || (Global_2667225.f_706.f_2 - fVar0) > 1.5f)
						{
							if (SYSTEM::VDIST(Global_2676213, Global_2667225.f_706) > 15f)
							{
								Global_2667225.f_706 = { Global_2676213 };
								if (NETWORK::NETWORK_HAS_CONTROL_OF_ENTITY(iVar2))
								{
									ENTITY::SET_ENTITY_COORDS(iVar2, Global_2667225.f_706, Global_2667225.f_706.f_1, (fVar0 + __LIB_2__::func_760(ENTITY::GET_ENTITY_MODEL(iVar2))), true, false, false, true);
									VEHICLE::SET_VEHICLE_ON_GROUND_PROPERLY(iVar2, 5f);
								}
								Global_2689235[PLAYER::PLAYER_ID() /*453*/].f_215 = 11;
							}
							else
							{
								Global_2667225.f_706.f_2 = (Global_2667225.f_706.f_2 + 1f);
							}
						}
						else
						{
							if (NETWORK::NETWORK_HAS_CONTROL_OF_ENTITY(iVar2))
							{
								ENTITY::SET_ENTITY_COORDS(iVar2, Global_2667225.f_706, Global_2667225.f_706.f_1, (fVar0 + __LIB_2__::func_760(ENTITY::GET_ENTITY_MODEL(iVar2))), true, false, false, true);
								VEHICLE::SET_VEHICLE_ON_GROUND_PROPERLY(iVar2, 5f);
							}
							Global_2689235[PLAYER::PLAYER_ID() /*453*/].f_215 = 11;
						}
					}
					else
					{
						Global_2689235[PLAYER::PLAYER_ID() /*453*/].f_215 = 11;
					}
				}
				else
				{
					Global_2689235[PLAYER::PLAYER_ID() /*453*/].f_215 = 11;
				}
			}
			else
			{
				Global_2689235[PLAYER::PLAYER_ID() /*453*/].f_215 = 11;
			}
		}
		if (Global_2689235[PLAYER::PLAYER_ID() /*453*/].f_215 == 11)
		{
			if (!bParam14)
			{
				if (ENTITY::DOES_ENTITY_EXIST(Global_2667225.f_45.f_173) && NETWORK::NETWORK_HAS_CONTROL_OF_ENTITY(Global_2667225.f_45.f_173))
				{
					ENTITY::SET_ENTITY_VISIBLE(Global_2667225.f_45.f_173, true, false);
				}
			}
			if (bParam2 || bParam7)
			{
				if (iParam9 > 0)
				{
					__LIB_3__::func_274(iParam9, 0, 0);
				}
			}
			__LIB_3__::func_221(__LIB_0__::func_85(PLAYER::PLAYER_ID()), 0, 0);
			if (ENTITY::DOES_ENTITY_EXIST(Global_2667225.f_45.f_173))
			{
				__LIB_2__::func_930();
			}
			if (!(__LIB_2__::func_624(Global_2667225.f_45.f_67) || Global_2667225.f_45.f_67 == 0) && !Global_2667225.f_490.f_5)
			{
				func_257(0, 0);
			}
			__LIB_10__::func_719(0, 0);
			if (bParam10)
			{
				__LIB_2__::func_610();
			}
			__LIB_1__::func_21();
			__LIB_12__::func_765();
			if (bParam13)
			{
				__LIB_0__::func_854();
			}
			__LIB_0__::func_858();
			return 1;
		}
	}
	else if (!Global_2689235[PLAYER::PLAYER_ID() /*453*/].f_215 == 0)
	{
		TASK::CLEAR_PED_TASKS_IMMEDIATELY(PLAYER::PLAYER_PED_ID());
		__LIB_11__::func_263(&(Global_2667225.f_45.f_173));
		__LIB_0__::func_858();
	}
	Global_2667225.f_703 = NETWORK::GET_NETWORK_TIME();
	return 0;
}

void func_257(int iParam0, bool bParam1)//Position - 0x8743
{
	struct<3> Var0;
	float fVar1;
	float fVar2;
	if (!PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false) && !ENTITY::IS_ENTITY_ATTACHED(PLAYER::PLAYER_PED_ID()))
	{
		Var0 = { ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), false) };
		Var0.f_2 = (Var0.f_2 + (0.3f * IntToFloat(Global_2667225.f_710)));
		if (MISC::GET_GROUND_Z_FOR_3D_COORD(Var0, &fVar1, false, false))
		{
			fVar2 = (Var0.f_2 - (fVar1 + 1f));
			if ((MISC::ABSF(fVar2) > 0f && MISC::ABSF(fVar2) < 1f) || iParam0 == 1)
			{
				if (!bParam1)
				{
					if (STREAMING::IS_NEW_LOAD_SCENE_ACTIVE())
					{
						STREAMING::NEW_LOAD_SCENE_STOP();
					}
				}
				ENTITY::SET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), Var0.f_0, Var0.f_1, fVar1, false, true, false, true);
				Global_2667225.f_710 = 0;
			}
		}
		else if (Global_2667225.f_710 < 3)
		{
			Global_2667225.f_710++;
			func_257(0, 0);
		}
		else
		{
			Global_2667225.f_710 = 0;
		}
	}
}

void func_307(int iParam0, int iParam1, int iParam2, bool bParam3)//Position - 0xA566
{
	bool bVar0;
	struct<3> Var1;
	struct<3> Var2;
	bVar0 = false;
	if (NETWORK::NETWORK_HAS_CONTROL_OF_ENTITY(iParam1))
	{
		bVar0 = true;
	}
	if (!__LIB_2__::func_623(iParam0, iParam1, bVar0))
	{
		Var1 = { ENTITY::GET_ENTITY_COORDS(iParam0, false) };
		Var2 = { ENTITY::GET_ENTITY_COORDS(iParam1, false) };
		if (!SYSTEM::VDIST(Var1, Var2) < 5f || !iParam2 == -1)
		{
			Var2.f_2 = (Var2.f_2 + -4f);
			Var2.f_0 = (Var2.f_0 + -4f);
			Var2.f_1 = (Var2.f_1 + -4f);
			ENTITY::SET_ENTITY_COORDS(iParam0, Var2, false, false, false, true);
		}
		TASK::CLEAR_PED_TASKS_IMMEDIATELY(iParam0);
		ENTITY::SET_ENTITY_COLLISION(iParam0, true, false);
		ENTITY::FREEZE_ENTITY_POSITION(iParam0, false);
		PED::SET_PED_CAN_RAGDOLL(PLAYER::PLAYER_PED_ID(), false);
		PED::SET_PED_RESET_FLAG(iParam0, 150, true);
		PED::SET_PED_RESET_FLAG(iParam0, 151, true);
		if (bParam3)
		{
			PED::SET_PED_INTO_VEHICLE(iParam0, iParam1, iParam2);
		}
		else
		{
			TASK::TASK_ENTER_VEHICLE(iParam0, iParam1, -1, iParam2, 2f, 16, 0);
		}
		PED::FORCE_PED_AI_AND_ANIMATION_UPDATE(iParam0, false, false);
		PED::SET_PED_RESET_FLAG(iParam0, 150, true);
		if (Global_1836584)
		{
			if (__LIB_2__::func_918(ENTITY::GET_ENTITY_MODEL(iParam1)))
			{
				func_308(0);
			}
		}
	}
}

void func_308(bool bParam0)//Position - 0xA670
{
	struct<14> Var0;
	int iVar1;
	if (!PED::IS_PED_WEARING_HELMET(PLAYER::PLAYER_PED_ID()))
	{
		if (Global_4718592.f_168793 == 0)
		{
			if ((Global_2667225.f_2699 == -99 || Global_2667225.f_2699 == 0) || !__LIB_0__::func_348(ENTITY::GET_ENTITY_MODEL(PLAYER::PLAYER_PED_ID()), 14, Global_2667225.f_2699, -1))
			{
				if (!bParam0)
				{
					iVar1 = __LIB_1__::func_360(589, -1, 0);
				}
			}
			else
			{
				iVar1 = Global_2667225.f_2699;
			}
			Var0 = { __LIB_6__::func_38(__LIB_2__::func_82(), 14, iVar1, -1) };
			__LIB_2__::func_620(PLAYER::PLAYER_PED_ID(), 14, iVar1);
			func_309(PLAYER::PLAYER_PED_ID(), 14, iVar1, 0, -1, 0, 0, 0, -1, -1, -1, 0, 1, 0);
			func_309(PLAYER::PLAYER_PED_ID(), 1, 0, 0, -1, 0, 0, 0, -1, -1, -1, 0, 1, 0);
		}
		else
		{
			PED::SET_PED_CONFIG_FLAG(PLAYER::PLAYER_PED_ID(), 380, true);
		}
	}
}

int func_309(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, int iParam9, int iParam10, bool bParam11, bool bParam12, bool bParam13)//Position - 0xA747
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
		Global_78130[1 /*14*/] = { __LIB_6__::func_38(iVar5, iParam1, iParam2, -1) };
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
			func_466(iVar5, iParam1, iParam2, 1);
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
					Global_78130[1 /*14*/] = { __LIB_6__::func_38(iVar5, 10, 0, -1) };
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
						func_466(iVar5, 10, 0, 1);
					}
				}
				else
				{
					Global_78130[1 /*14*/] = { __LIB_6__::func_38(iVar5, iVar0, uVar14[iVar0], -1) };
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
								Global_78130[1 /*14*/] = { __LIB_6__::func_38(iVar5, 14, uVar15[iVar1], -1) };
								__LIB_0__::func_454(iParam0, Global_78130[1 /*14*/].f_12, Global_78130[1 /*14*/].f_3, Global_78130[1 /*14*/].f_4);
								if (BitTest(Global_78130[1 /*14*/].f_6, 1))
								{
									func_466(iVar5, iVar0, uVar14[iVar0], 1);
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
								func_309(iParam0, iVar0, uVar14[iVar0], 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
							}
							if (BitTest(Global_78130[1 /*14*/].f_6, 1))
							{
								func_466(iVar5, iVar0, uVar14[iVar0], 1);
							}
						}
					}
				}
			}
			else if (iVar0 != 12 && iVar0 != 14)
			{
				Global_78130[1 /*14*/] = { __LIB_6__::func_38(iVar5, iVar0, func_453(iParam0, iVar0, -1), -1) };
				if (BitTest(Global_78130[1 /*14*/].f_6, 3))
				{
					uVar16 = { __LIB_0__::func_459(iVar5, 0) };
					func_309(iParam0, iVar0, uVar16[iVar0], 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
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
			func_446(iParam0, 11, uVar14[11], iParam6, 0);
		}
	}
	else if (iParam1 == 13)
	{
		uVar18 = { __LIB_0__::func_466(iVar5, iParam2) };
		iVar1 = 0;
		while (iVar1 <= 8)
		{
			Global_78130[1 /*14*/] = { __LIB_6__::func_38(iVar5, 14, uVar18[iVar1], -1) };
			__LIB_0__::func_454(iParam0, Global_78130[1 /*14*/].f_12, Global_78130[1 /*14*/].f_3, Global_78130[1 /*14*/].f_4);
			if (BitTest(Global_78130[1 /*14*/].f_6, 1))
			{
				func_466(iVar5, 14, uVar18[iVar1], 1);
			}
			if (iParam5 == 0)
			{
				if (Global_78128 == 1)
				{
					iVar2 = 0;
					while (iVar2 < 15)
					{
						iVar3 = __LIB_9__::func_528(iParam0, iVar5, 14, uVar18[iVar1], iVar2, 0);
						if (iVar3 != -99)
						{
							func_309(iParam0, iVar2, iVar3, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
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
			func_466(iVar5, iParam1, iParam2, 1);
		}
		if (Global_78130[1 /*14*/].f_12 == 0)
		{
			if (BitTest(Global_78130[1 /*14*/].f_6, 6) && FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(Global_2883588, joaat("SHRINK_HAIR"), 1))
			{
			}
			else if (FILES::DOES_CURRENT_PED_COMPONENT_HAVE_RESTRICTION_TAG(iParam0, 1, joaat("HAIR_SHRINK")))
			{
				func_309(iParam0, 1, 0, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
				Global_78130[1 /*14*/] = { __LIB_6__::func_38(iVar5, iParam1, iParam2, -1) };
			}
		}
		if (Global_78130[1 /*14*/].f_12 == 0)
		{
			func_438(iParam0);
		}
		if (iParam5 == 0)
		{
			if (Global_78128 == 1)
			{
				iVar2 = 0;
				while (iVar2 < 15)
				{
					iVar3 = __LIB_9__::func_528(iParam0, iVar5, iParam1, iParam2, iVar2, 0);
					if (iVar3 != -99)
					{
						func_309(iParam0, iVar2, iVar3, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
					}
					iVar2++;
				}
				iVar3 = __LIB_9__::func_528(iParam0, iVar5, iParam1, iParam2, 14, 1);
				if (iVar3 != -99)
				{
					func_309(iParam0, 14, iVar3, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
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
					iVar27 = func_434(iVar5, iVar24, iVar23, iVar25);
					if (iVar27 == -99)
					{
						iVar27 = __LIB_9__::func_528(iParam0, iVar5, 11, iVar23, 3, 0);
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
							func_309(iParam0, 8, iVar29, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
							Global_78130[1 /*14*/] = { __LIB_6__::func_38(iVar5, iParam1, iParam2, -1) };
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
							iVar30 = __LIB_7__::func_884(iParam0, iParam2);
							iVar31 = __LIB_0__::func_452(iVar5, iVar23, iParam2, PED::GET_PED_TEXTURE_VARIATION(iParam0, 11));
							if (iVar31 != -99)
							{
								func_309(iParam0, 8, iVar31, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
								Global_78130[1 /*14*/] = { __LIB_6__::func_38(iVar5, iParam1, iParam2, -1) };
								iVar8 = -99;
							}
							else if (iVar30 != -99 && (iParam0 == PLAYER::PLAYER_PED_ID() || iParam0 == Global_4538723))
							{
								func_309(iParam0, 8, iVar30, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
								Global_78130[1 /*14*/] = { __LIB_6__::func_38(iVar5, iParam1, iParam2, -1) };
							}
							else
							{
								if (iVar5 == joaat("MP_M_Freemode_01"))
								{
									iVar32 = __LIB_0__::func_279(iVar5, 11, -1);
									Global_78130[1 /*14*/] = { __LIB_6__::func_38(iVar5, 11, iVar32, -1) };
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
								func_309(iParam0, 8, iVar31, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
								Global_78130[1 /*14*/] = { __LIB_6__::func_38(iVar5, iParam1, iParam2, -1) };
							}
						}
					}
					else
					{
						Global_78130[1 /*14*/] = { __LIB_6__::func_38(iVar5, 11, iVar23, -1) };
						iVar34 = Global_78130[1 /*14*/].f_3;
						Global_78130[1 /*14*/] = { __LIB_6__::func_38(iVar5, 11, iParam2, -1) };
						iVar35 = Global_78130[1 /*14*/].f_3;
						if (iVar34 != iVar35)
						{
							iVar37 = __LIB_7__::func_884(iParam0, iParam2);
							Global_78130[1 /*14*/] = { __LIB_6__::func_38(iVar5, 8, iVar24, -1) };
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
										Global_78130[1 /*14*/] = { __LIB_6__::func_38(iVar5, 11, iVar38, -1) };
										iVar39 = __LIB_0__::func_452(iVar5, iVar38, iParam2, Global_78130[1 /*14*/].f_4);
									}
								}
								if (iVar5 == joaat("MP_F_Freemode_01") && ((iVar24 == 32 || iVar24 == 33) || iVar24 == 119))
								{
									if (!FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(__LIB_0__::func_205(iVar5, iParam2, 11, 4), joaat("JACKET_ONLY"), 0))
									{
										iVar38 = __LIB_0__::func_279(iVar5, 11, -1);
										Global_78130[1 /*14*/] = { __LIB_6__::func_38(iVar5, 11, iVar38, -1) };
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
									Global_78130[1 /*14*/] = { __LIB_6__::func_38(iVar5, 11, iVar38, -1) };
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
								func_309(iParam0, 8, iVar39, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
							}
							else if (iVar5 == joaat("MP_M_Freemode_01"))
							{
								iVar38 = __LIB_0__::func_279(iVar5, 11, -1);
								Global_78130[1 /*14*/] = { __LIB_6__::func_38(iVar5, 11, iVar38, -1) };
								iVar39 = __LIB_0__::func_452(iVar5, iVar38, iParam2, Global_78130[1 /*14*/].f_4);
								if (iVar39 == -99)
								{
									iVar39 = 240;
								}
								func_309(iParam0, 8, iVar39, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
							}
							else if (iVar5 == joaat("MP_F_Freemode_01"))
							{
								func_309(iParam0, 8, 48, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
							}
							Global_78130[1 /*14*/] = { __LIB_6__::func_38(iVar5, iParam1, iParam2, -1) };
						}
					}
				}
				__LIB_6__::func_37(iVar5, iParam2);
				if (!bParam13)
				{
					PED::SET_PED_COMPONENT_VARIATION(iParam0, 10, 0, 0, PED::GET_PED_PALETTE_VARIATION(iParam0, 10));
				}
			}
			func_446(iParam0, iParam1, iParam2, iParam6, 0);
			if (iParam5 == 0)
			{
				iVar6 = func_434(iVar5, func_453(iParam0, 8, -1), iParam2, func_453(iParam0, 4, -1));
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
				func_364(iParam0, iParam2, iParam10, bParam11);
			}
		}
		else if (iParam1 == 8)
		{
			iVar43 = FILES::GET_HASH_NAME_FOR_COMPONENT(iParam0, 3, PED::GET_PED_DRAWABLE_VARIATION(iParam0, 3), 0);
			if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar43, joaat("GLOVES"), 0))
			{
				iVar44 = __LIB_0__::func_350(iParam0, 11);
				iVar45 = __LIB_0__::func_350(iParam0, 4);
				iVar46 = func_434(iVar5, iParam2, iVar44, iVar45);
				if (iVar46 == -99)
				{
					iVar46 = __LIB_9__::func_528(iParam0, iVar5, 11, iVar44, 3, 0);
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
			func_446(iParam0, iParam1, iParam2, iParam6, 0);
			iVar49 = __LIB_0__::func_350(iParam0, 11);
			if (__LIB_0__::func_280(iVar5, iVar49, -1))
			{
				iVar50 = __LIB_0__::func_357(iVar5, iParam2, Global_78130[1 /*14*/].f_4);
				__LIB_6__::func_37(iVar5, iVar50);
			}
			if (iParam5 == 0)
			{
				iVar6 = func_434(iVar5, iParam2, __LIB_0__::func_350(iParam0, 11), __LIB_0__::func_350(iParam0, 4));
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
						func_309(iParam0, 8, 240, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
						Global_78130[1 /*14*/] = { __LIB_6__::func_38(iVar5, iParam1, iParam2, -1) };
					}
				}
			}
			else if (iVar5 == joaat("MP_F_Freemode_01"))
			{
				if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(__LIB_0__::func_205(iVar5, iVar57, 11, 4), joaat("LOW2_OPEN_CHECK"), 0))
				{
					if (!__LIB_0__::func_451(iVar5, iParam2, __LIB_0__::func_357(iVar5, iVar58, 0)))
					{
						func_309(iParam0, 8, 78, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
						Global_78130[1 /*14*/] = { __LIB_6__::func_38(iVar5, iParam1, iParam2, -1) };
					}
				}
			}
			if (iParam5 == 0)
			{
				iVar6 = func_434(iVar5, __LIB_0__::func_350(iParam0, 8), __LIB_0__::func_350(iParam0, 11), iParam2);
			}
			iVar59 = FILES::GET_HASH_NAME_FOR_COMPONENT(iParam0, 3, PED::GET_PED_DRAWABLE_VARIATION(iParam0, 3), 0);
			if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar59, joaat("GLOVES"), 0))
			{
				iVar60 = func_434(iVar5, iVar58, iVar57, iParam2);
				if (iVar60 == -99)
				{
					iVar60 = __LIB_9__::func_528(iParam0, iVar5, 11, iVar57, 3, 0);
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
					iVar3 = __LIB_9__::func_528(iParam0, iVar5, iParam1, iParam2, iVar2, 0);
					if (iVar3 != -99)
					{
						func_309(iParam0, iVar2, iVar3, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, iParam1 == 10);
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
								iVar6 = func_434(iVar5, iVar3, __LIB_0__::func_350(iParam0, 11), __LIB_0__::func_350(iParam0, 4));
							}
						}
					}
					iVar2++;
				}
				iVar3 = __LIB_9__::func_528(iParam0, iVar5, iParam1, iParam2, 14, 1);
				if (iVar3 != -99)
				{
					func_309(iParam0, 14, iVar3, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
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
						if (!func_337(iParam0, 9, iVar63))
						{
							func_309(iParam0, 9, iVar63, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
						}
					}
					else
					{
						func_309(iParam0, 9, 0, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
					}
					if (FILES::DOES_CURRENT_PED_COMPONENT_HAVE_RESTRICTION_TAG(iParam0, 8, joaat("OVER_JACKET")))
					{
						func_309(iParam0, 9, 0, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
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
						func_309(iParam0, 9, 0, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
					}
				}
			}
			if (iVar5 == joaat("MP_F_Freemode_01") && (iParam1 == 11 || iParam1 == 4))
			{
				if (iParam1 == 11)
				{
					iVar65 = func_453(iParam0, 4, -1);
					iVar66 = iParam2;
				}
				else
				{
					iVar65 = iParam2;
					iVar66 = func_453(iParam0, 11, -1);
				}
				if (__LIB_0__::func_240(iVar5, 11, iVar66, -1))
				{
					if (!__LIB_0__::func_239(iVar5, 4, iVar65, -1))
					{
						if (__LIB_0__::func_353(iVar5, 4, iVar65, &uVar67))
						{
							func_309(iParam0, 4, uVar67, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
						}
					}
				}
				else if (__LIB_0__::func_239(iVar5, 4, iVar65, -1))
				{
					if (__LIB_0__::func_352(iVar5, 4, iVar65, &uVar67))
					{
						func_309(iParam0, 4, uVar67, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
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
										func_309(iParam0, 6, iVar75, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
									}
									else if (iVar5 == joaat("MP_F_Freemode_01"))
									{
										iVar75 = __LIB_0__::func_204(iVar5, iVar78, 6, 4);
										iVar70 = iVar78;
										func_309(iParam0, 6, iVar75, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
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
										func_309(iParam0, 4, iVar74, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
									}
									else if (iVar5 == joaat("MP_F_Freemode_01"))
									{
										iVar74 = __LIB_0__::func_204(iVar5, iVar78, 4, 4);
										iVar73 = iVar78;
										func_309(iParam0, 4, iVar74, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
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
										func_309(iParam0, 4, iVar74, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
									}
									else if (iVar5 == joaat("MP_F_Freemode_01"))
									{
										iVar74 = __LIB_0__::func_204(iVar5, iVar78, 4, 4);
										iVar73 = iVar78;
										func_309(iParam0, 4, iVar74, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
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
										func_309(iParam0, 6, iVar75, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
									}
									else if (iVar5 == joaat("MP_F_Freemode_01"))
									{
										iVar75 = __LIB_0__::func_204(iVar5, iVar78, 6, 4);
										iVar70 = iVar78;
										func_309(iParam0, 6, iVar75, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
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
				func_438(iParam0);
				iVar81 = PED::GET_PED_DRAWABLE_VARIATION(iParam0, 1);
				iVar82 = PED::GET_PED_TEXTURE_VARIATION(iParam0, 1);
				iVar83 = FILES::GET_HASH_NAME_FOR_COMPONENT(iParam0, 1, iVar81, iVar82);
				if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar83, joaat("FORCE_PROP"), 0))
				{
					iVar3 = __LIB_9__::func_528(iParam0, iVar5, iParam1, iParam2, 14, 0);
					if (iVar3 != -99)
					{
						func_309(iParam0, 14, iVar3, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
					}
					iVar3 = __LIB_9__::func_528(iParam0, iVar5, iParam1, iParam2, 14, 1);
					if (iVar3 != -99)
					{
						func_309(iParam0, 14, iVar3, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
					}
				}
			}
		}
	}
	if (iParam1 != 2)
	{
		if (func_310(iParam0, &uVar4))
		{
			func_309(iParam0, 2, uVar4, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
		}
	}
	if (iVar6 != -99 && !bParam13)
	{
		func_309(iParam0, 3, iVar6, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
	}
	if (iVar8 != -99)
	{
		func_309(iParam0, 8, iVar8, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
	}
	if (iVar7 != -99)
	{
		func_309(iParam0, 1, iVar7, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
	}
	if (iVar10 != -1)
	{
		iVar84 = __LIB_0__::func_282(iVar5, func_453(iParam0, 3, -1), iVar10);
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
				func_309(iParam0, 3, iVar9, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
			}
		}
	}
	Global_78128 = (Global_78128 - 1);
	return 1;
}

int func_310(int iParam0, var uParam1)//Position - 0xC5F6
{
	int iVar0;
	int iVar1;
	*uParam1 = func_453(PLAYER::PLAYER_PED_ID(), 2, -1);
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
		if (!func_337(iParam0, iVar1, iVar0))
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

int func_337(int iParam0, int iParam1, int iParam2)//Position - 0x10E41
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
	Global_78130[1 /*14*/] = { __LIB_6__::func_38(iVar0, iParam1, iParam2, -1) };
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
				if (!func_337(iParam0, iVar4, uVar8[iVar4]))
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
							if (!func_337(iParam0, 14, uVar9[iVar5]))
							{
								iVar6 = 0;
								while (iVar6 <= 19)
								{
									Global_78130[2 /*14*/] = { __LIB_6__::func_38(iVar0, 14, iVar6, -1) };
									if (Global_78130[2 /*14*/].f_12 == iVar5)
									{
										if (func_337(iParam0, 14, iVar6))
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
						Global_78130[2 /*14*/] = { __LIB_6__::func_38(iVar0, iVar4, iVar1, -1) };
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
			if (!func_337(iParam0, 14, uVar11[iVar10]))
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
						return func_337(iParam0, 4, uVar18);
					}
				}
				else if (__LIB_0__::func_352(iVar0, 4, iParam2, &uVar18))
				{
					return func_337(iParam0, 4, uVar18);
				}
			}
			Global_78129 = (Global_78129 - 1);
		}
	}
	return 0;
}

void func_364(int iParam0, int iParam1, int iParam2, bool bParam3)//Position - 0x18B70
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
	func_365(iParam0, bParam3, 0, -1);
}

void func_365(int iParam0, bool bParam1, bool bParam2, int iParam3)//Position - 0x18BBD
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
		bVar3 = func_409(iParam0, 0);
		bVar4 = __LIB_1__::func_37(iParam0);
		bVar5 = func_400(iParam0, iParam3);
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
							if (!__LIB_5__::func_179(Var9.f_2, Var9.f_3, iVar10))
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

int func_400(int iParam0, int iParam1)//Position - 0x28000
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
				iVar3 = func_453(iParam0, 11, -1);
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
				iVar5 = func_453(iParam0, 11, -1);
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

int func_409(int iParam0, bool bParam1)//Position - 0x2845E
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
							iVar2 = __LIB_5__::func_29(joaat("MP_M_Freemode_01"), 11, func_453(iParam0, 11, -1), 0);
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
						iVar3 = func_453(iParam0, 11, -1);
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
						iVar5 = func_453(iParam0, 8, -1);
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
							iVar7 = __LIB_5__::func_29(joaat("MP_F_Freemode_01"), 11, func_453(iParam0, 11, -1), 0);
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
						iVar8 = func_453(iParam0, 11, -1);
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
							iVar10 = __LIB_5__::func_29(joaat("MP_F_Freemode_01"), 11, func_453(iParam0, 11, -1), 0);
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
							iVar11 = __LIB_5__::func_29(joaat("MP_F_Freemode_01"), 11, func_453(iParam0, 11, -1), 0);
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
						iVar12 = func_453(iParam0, 8, -1);
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

int func_434(int iParam0, int iParam1, int iParam2, int iParam3)//Position - 0x32264
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
					iVar0 = func_434(iParam0, -99, __LIB_0__::func_357(iParam0, iParam1, 0), iParam3);
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
					iVar0 = func_434(iParam0, -99, __LIB_0__::func_357(iParam0, iParam1, 0), iParam3);
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

void func_438(int iParam0)//Position - 0x33770
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
		if (!func_443(iParam0, &bVar14, iVar9, iVar10, iVar12) || PED::IS_PED_IN_ANY_VEHICLE(iParam0, false))
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
		if (!func_443(iParam0, &bVar14, iVar9, iVar10, iVar12))
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

int func_443(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4)//Position - 0x3413C
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
	if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iParam3, joaat("HAZ_MASK"), 0) && !__LIB_0__::func_348(iVar0, 14, func_453(iParam0, 14, 0), -1))
	{
		return 1;
	}
	else
	{
		return 0;
	}
	return 1;
}

void func_446(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4)//Position - 0x36A56
{
	int iVar0;
	int iVar1;
	int iVar2;
	if (!PED::IS_PED_INJURED(iParam0))
	{
		if (func_448(iParam0))
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
				if (((((!__LIB_5__::func_175(iVar0, iParam2, 13) && !__LIB_5__::func_175(iVar0, iParam2, 14)) && !__LIB_5__::func_175(iVar0, iParam2, 15)) && !__LIB_5__::func_175(iVar0, iParam2, 16)) && !__LIB_5__::func_175(iVar0, iParam2, 71)) && !__LIB_5__::func_175(iVar0, iParam2, 72))
				{
					__LIB_3__::func_222(MISC::GET_HASH_KEY("crewLogo"), iParam0);
				}
			}
			iVar2 = __LIB_5__::func_29(iVar0, iParam1, iParam2, iParam4);
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

int func_448(int iParam0)//Position - 0x36BE5
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
				iVar1 = func_453(iParam0, 11, -1);
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
				iVar3 = func_453(iParam0, 11, -1);
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

int func_453(int iParam0, int iParam1, int iParam2)//Position - 0x3704E
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
				if (func_337(iParam0, iParam1, iVar0))
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
				if (func_337(iParam0, iParam1, iVar1))
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

void func_466(int iParam0, int iParam1, int iParam2, bool bParam3)//Position - 0x3A0FE
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
		Global_78130[2 /*14*/] = { __LIB_6__::func_38(iParam0, iParam1, iParam2, -1) };
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
							func_466(iParam0, __LIB_0__::func_33(iVar4), uVar3, 0);
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
									func_466(iParam0, __LIB_0__::func_33(Global_4538457[iVar1]), __LIB_0__::func_204(iParam0, Global_4538446[iVar1], __LIB_0__::func_33(Global_4538457[iVar1]), 3), 1);
								}
								else
								{
									func_466(iParam0, __LIB_0__::func_33(Global_4538457[iVar1]), __LIB_0__::func_204(iParam0, Global_4538446[iVar1], __LIB_0__::func_33(Global_4538457[iVar1]), 4), 1);
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
							func_466(iParam0, 14, iVar8, 0);
						}
						else if (iParam2 >= 75 && iParam2 <= 82)
						{
							iVar8 = (83 + Global_78130[2 /*14*/].f_4);
							func_466(iParam0, 14, iVar8, 0);
						}
					}
					else if (iParam1 == 8)
					{
						if (iParam2 >= 48 && iParam2 <= 63)
						{
							iVar8 = (64 + Global_78130[2 /*14*/].f_4);
							func_466(iParam0, 8, iVar8, 0);
						}
						else if (iParam2 >= 64 && iParam2 <= 79)
						{
							iVar8 = (48 + Global_78130[2 /*14*/].f_4);
							func_466(iParam0, 8, iVar8, 0);
						}
						else if (iParam2 >= 96 && iParam2 <= 111)
						{
							iVar8 = (112 + Global_78130[2 /*14*/].f_4);
							func_466(iParam0, 8, iVar8, 0);
						}
						else if (iParam2 >= 112 && iParam2 <= 127)
						{
							iVar8 = (96 + Global_78130[2 /*14*/].f_4);
							func_466(iParam0, 8, iVar8, 0);
						}
						else if (iParam2 >= 176 && iParam2 <= 191)
						{
							iVar8 = (160 + Global_78130[2 /*14*/].f_4);
							func_466(iParam0, 8, iVar8, 0);
						}
						else if (iParam2 >= 160 && iParam2 <= 175)
						{
							iVar8 = (176 + Global_78130[2 /*14*/].f_4);
							func_466(iParam0, 8, iVar8, 0);
						}
						else if (iParam2 >= 32 && iParam2 <= 47)
						{
							iVar8 = (0 + Global_78130[2 /*14*/].f_4);
							func_466(iParam0, 11, iVar8, 0);
						}
						else if (iParam2 >= 224 && iParam2 <= 239)
						{
							iVar8 = (16 + Global_78130[2 /*14*/].f_4);
							func_466(iParam0, 11, iVar8, 0);
						}
					}
					else if (iParam1 == 11)
					{
						if (iParam2 >= 0 && iParam2 <= 15)
						{
							iVar8 = (32 + Global_78130[2 /*14*/].f_4);
							func_466(iParam0, 8, iVar8, 0);
						}
						else if (iParam2 >= 16 && iParam2 <= 31)
						{
							iVar8 = (224 + Global_78130[2 /*14*/].f_4);
							func_466(iParam0, 8, iVar8, 0);
						}
						else if (iParam2 >= 220 && iParam2 <= 235)
						{
							switch (iParam2)
							{
								case 220:
									func_466(iParam0, 8, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI_M_ACCS4_0"), 8, 3), 0);
									func_466(iParam0, 8, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI_M_ACCS5_0"), 8, 3), 0);
									break;
								case 221:
									func_466(iParam0, 8, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI_M_ACCS4_1"), 8, 3), 0);
									func_466(iParam0, 8, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI_M_ACCS5_1"), 8, 3), 0);
									break;
								case 222:
									func_466(iParam0, 8, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI_M_ACCS4_2"), 8, 3), 0);
									func_466(iParam0, 8, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI_M_ACCS5_2"), 8, 3), 0);
									break;
								case 223:
									func_466(iParam0, 8, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI_M_ACCS4_3"), 8, 3), 0);
									func_466(iParam0, 8, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI_M_ACCS5_3"), 8, 3), 0);
									break;
								case 224:
									func_466(iParam0, 8, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI_M_ACCS4_4"), 8, 3), 0);
									func_466(iParam0, 8, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI_M_ACCS5_4"), 8, 3), 0);
									break;
								case 225:
									func_466(iParam0, 8, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI_M_ACCS4_5"), 8, 3), 0);
									func_466(iParam0, 8, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI_M_ACCS5_5"), 8, 3), 0);
									break;
								case 226:
									func_466(iParam0, 8, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI_M_ACCS4_6"), 8, 3), 0);
									func_466(iParam0, 8, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI_M_ACCS5_6"), 8, 3), 0);
									break;
								case 227:
									func_466(iParam0, 8, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI_M_ACCS4_7"), 8, 3), 0);
									func_466(iParam0, 8, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI_M_ACCS5_7"), 8, 3), 0);
									break;
								case 228:
									func_466(iParam0, 8, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI_M_ACCS4_8"), 8, 3), 0);
									func_466(iParam0, 8, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI_M_ACCS5_8"), 8, 3), 0);
									break;
								case 229:
									func_466(iParam0, 8, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI_M_ACCS4_9"), 8, 3), 0);
									func_466(iParam0, 8, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI_M_ACCS5_9"), 8, 3), 0);
									break;
								case 230:
									func_466(iParam0, 8, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI_M_ACCS4_10"), 8, 3), 0);
									func_466(iParam0, 8, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI_M_ACCS5_10"), 8, 3), 0);
									break;
								case 231:
									func_466(iParam0, 8, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI_M_ACCS4_11"), 8, 3), 0);
									func_466(iParam0, 8, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI_M_ACCS5_11"), 8, 3), 0);
									break;
								case 232:
									func_466(iParam0, 8, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI_M_ACCS4_12"), 8, 3), 0);
									func_466(iParam0, 8, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI_M_ACCS5_12"), 8, 3), 0);
									break;
								case 233:
									func_466(iParam0, 8, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI_M_ACCS4_13"), 8, 3), 0);
									func_466(iParam0, 8, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI_M_ACCS5_13"), 8, 3), 0);
									break;
								case 234:
									func_466(iParam0, 8, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI_M_ACCS4_14"), 8, 3), 0);
									func_466(iParam0, 8, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI_M_ACCS5_14"), 8, 3), 0);
									break;
								case 235:
									func_466(iParam0, 8, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI_M_ACCS4_15"), 8, 3), 0);
									func_466(iParam0, 8, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI_M_ACCS5_15"), 8, 3), 0);
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
									func_466(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH0_0"), 7, 3), 0);
									func_466(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH2_0"), 7, 3), 0);
									break;
								case 1:
									func_466(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH0_1"), 7, 3), 0);
									func_466(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH2_1"), 7, 3), 0);
									break;
								case 2:
									func_466(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH0_2"), 7, 3), 0);
									func_466(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH2_2"), 7, 3), 0);
									break;
								case 3:
									func_466(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH0_3"), 7, 3), 0);
									func_466(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH2_3"), 7, 3), 0);
									break;
								case 4:
									func_466(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH0_4"), 7, 3), 0);
									func_466(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH2_4"), 7, 3), 0);
									break;
								case 5:
									func_466(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH0_5"), 7, 3), 0);
									func_466(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH2_5"), 7, 3), 0);
									break;
								case 6:
									func_466(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH0_6"), 7, 3), 0);
									func_466(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH2_6"), 7, 3), 0);
									break;
								case 7:
									func_466(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH0_7"), 7, 3), 0);
									func_466(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH2_7"), 7, 3), 0);
									break;
								case 8:
									func_466(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH0_8"), 7, 3), 0);
									func_466(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH2_8"), 7, 3), 0);
									break;
								case 9:
									func_466(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH0_9"), 7, 3), 0);
									func_466(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH2_9"), 7, 3), 0);
									break;
								case 10:
									func_466(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH0_10"), 7, 3), 0);
									func_466(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH2_10"), 7, 3), 0);
									break;
								case 11:
									func_466(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH0_11"), 7, 3), 0);
									func_466(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH2_11"), 7, 3), 0);
									break;
								case 12:
									func_466(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH0_12"), 7, 3), 0);
									func_466(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH2_12"), 7, 3), 0);
									break;
								case 13:
									func_466(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH0_13"), 7, 3), 0);
									func_466(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH2_13"), 7, 3), 0);
									break;
								case 14:
									func_466(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH0_14"), 7, 3), 0);
									func_466(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH2_14"), 7, 3), 0);
									break;
								case 15:
									func_466(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH0_15"), 7, 3), 0);
									func_466(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH2_15"), 7, 3), 0);
									break;
							}
						}
						else if (iParam2 >= 73 && iParam2 <= 88)
						{
							switch (Global_78130[2 /*14*/].f_4)
							{
								case 0:
									func_466(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH1_0"), 7, 3), 0);
									func_466(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH3_0"), 7, 3), 0);
									break;
								case 1:
									func_466(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH1_1"), 7, 3), 0);
									func_466(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH3_1"), 7, 3), 0);
									break;
								case 2:
									func_466(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH1_2"), 7, 3), 0);
									func_466(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH3_2"), 7, 3), 0);
									break;
								case 3:
									func_466(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH1_3"), 7, 3), 0);
									func_466(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH3_3"), 7, 3), 0);
									break;
								case 4:
									func_466(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH1_4"), 7, 3), 0);
									func_466(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH3_4"), 7, 3), 0);
									break;
								case 5:
									func_466(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH1_5"), 7, 3), 0);
									func_466(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH3_5"), 7, 3), 0);
									break;
								case 6:
									func_466(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH1_6"), 7, 3), 0);
									func_466(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH3_6"), 7, 3), 0);
									break;
								case 7:
									func_466(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH1_7"), 7, 3), 0);
									func_466(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH3_7"), 7, 3), 0);
									break;
								case 8:
									func_466(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH1_8"), 7, 3), 0);
									func_466(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH3_8"), 7, 3), 0);
									break;
								case 9:
									func_466(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH1_9"), 7, 3), 0);
									func_466(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH3_9"), 7, 3), 0);
									break;
								case 10:
									func_466(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH1_10"), 7, 3), 0);
									func_466(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH3_10"), 7, 3), 0);
									break;
								case 11:
									func_466(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH1_11"), 7, 3), 0);
									func_466(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH3_11"), 7, 3), 0);
									break;
								case 12:
									func_466(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH1_12"), 7, 3), 0);
									func_466(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH3_12"), 7, 3), 0);
									break;
								case 13:
									func_466(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH1_13"), 7, 3), 0);
									func_466(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH3_13"), 7, 3), 0);
									break;
								case 14:
									func_466(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH1_14"), 7, 3), 0);
									func_466(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH3_14"), 7, 3), 0);
									break;
								case 15:
									func_466(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH1_15"), 7, 3), 0);
									func_466(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH3_15"), 7, 3), 0);
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
							func_466(iParam0, 8, iVar8, 0);
						}
					}
				}
				Global_78130[2 /*14*/] = { __LIB_6__::func_38(iParam0, iParam1, iParam2, -1) };
				if (iParam1 == 11)
				{
					iVar9 = __LIB_0__::func_358(iParam0, iParam2, Global_78130[2 /*14*/].f_4);
					if (iVar9 != -99)
					{
						func_466(iParam0, 8, iVar9, 0);
					}
					if (iParam2 >= 192 && iParam2 <= 203)
					{
						switch (iParam2)
						{
							case 199:
								func_466(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI_F_ACCS2_0"), 7, 4), 0);
								break;
							case 200:
								func_466(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI_F_ACCS2_1"), 7, 4), 0);
								break;
							case 201:
								func_466(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI_F_ACCS2_2"), 7, 4), 0);
								break;
							}
					}
				}
				else if (iParam1 == 8)
				{
					iVar9 = __LIB_0__::func_357(iParam0, iParam2, Global_78130[2 /*14*/].f_4);
					if (iVar9 != -99)
					{
						func_466(iParam0, 11, iVar9, 0);
					}
				}
			}
		}
	}
}

int func_522(struct<3> Param0, float fParam1, bool bParam2)//Position - 0x566A6
{
	int* iVar0;
	int iVar1;
	int iVar2;
	bool bVar3;
	bool bVar4;
	int iVar5;
	int iVar6;
	if (__LIB_0__::func_457(PLAYER::PLAYER_ID()))
	{
	}
	iVar0 = __LIB_1__::func_640();
	ENTITY::FREEZE_ENTITY_POSITION(PLAYER::PLAYER_PED_ID(), false);
	ENTITY::SET_ENTITY_COLLISION(PLAYER::PLAYER_PED_ID(), true, false);
	PED::SET_PED_RESET_FLAG(PLAYER::PLAYER_PED_ID(), 150, true);
	Global_2667225.f_45.f_176 = 0;
	bVar3 = false;
	bVar4 = false;
	if (Global_4718592 == 0 && !Global_1574964)
	{
		if (Global_1853348[PLAYER::PLAYER_ID() /*834*/].f_96.f_28 < 4 && Global_1853348[PLAYER::PLAYER_ID() /*834*/].f_96.f_28 > -1)
		{
			if (BitTest(Global_4718592.f_658[Global_1853348[PLAYER::PLAYER_ID() /*834*/].f_96.f_28 /*22957*/].f_12181, 8))
			{
				bVar4 = true;
				if (!BitTest(Global_4718592.f_658[Global_1853348[PLAYER::PLAYER_ID() /*834*/].f_96.f_28 /*22957*/].f_12181, 10))
				{
					bVar3 = true;
				}
			}
		}
	}
	if (func_871() && !bVar3)
	{
		if (func_870())
		{
			if (func_864(&iVar2))
			{
				if (__LIB_2__::func_871(iVar2))
				{
					if (!bVar4)
					{
						func_307(PLAYER::PLAYER_PED_ID(), PED::GET_VEHICLE_PED_IS_IN(PLAYER::GET_PLAYER_PED(iVar2), false), 0, 0);
						return 1;
					}
					else if (__LIB_2__::func_641() != -1 || BitTest(Global_4718592.f_658[Global_1853348[PLAYER::PLAYER_ID() /*834*/].f_96.f_28 /*22957*/].f_12181, 10))
					{
						__LIB_2__::func_640(PED::GET_VEHICLE_PED_IS_IN(PLAYER::GET_PLAYER_PED(iVar2), false));
						iVar5 = __LIB_2__::func_639(PED::GET_VEHICLE_PED_IS_IN(PLAYER::GET_PLAYER_PED(iVar2), false), 1, 0, 0, -3);
						if (VEHICLE::IS_VEHICLE_SEAT_FREE(Global_2667225.f_45.f_173, __LIB_2__::func_641(), false))
						{
							iVar5 = __LIB_2__::func_641();
						}
						func_307(PLAYER::PLAYER_PED_ID(), PED::GET_VEHICLE_PED_IS_IN(PLAYER::GET_PLAYER_PED(iVar2), false), iVar5, 0);
						if (PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), PED::GET_VEHICLE_PED_IS_IN(PLAYER::GET_PLAYER_PED(iVar2), false), false))
						{
							return 1;
						}
					}
				}
				else
				{
					return 0;
				}
			}
		}
	}
	if (Global_2667225.f_45.f_68)
	{
		if (__LIB_10__::func_726(iVar0))
		{
			if ((__LIB_2__::func_854() && ENTITY::GET_ENTITY_MODEL(iVar0) == Global_2667225.f_45.f_67) || !__LIB_2__::func_854())
			{
				if (!__LIB_2__::func_850(ENTITY::GET_ENTITY_COORDS(iVar0, true), 30f, 1, 1, 0, 0, 0, 0, 0))
				{
					if (bParam2)
					{
						ENTITY::SET_ENTITY_COORDS(iVar0, __LIB_2__::func_770(Global_2667225.f_45.f_69.f_66, Param0), true, false, false, true);
						ENTITY::SET_ENTITY_HEADING(iVar0, fParam1);
					}
					func_882(iVar0);
					return 1;
				}
			}
		}
	}
	if (Global_1836584 || __LIB_1__::func_141())
	{
		__LIB_11__::func_263(&iVar0);
	}
	if (func_878())
	{
		__LIB_11__::func_263(&(Global_2667225.f_45.f_173));
		if (__LIB_2__::func_870())
		{
			if (__LIB_1__::func_599(44) && VEHICLE::IS_VEHICLE_DRIVEABLE(__LIB_2__::func_638(), false))
			{
				ENTITY::SET_ENTITY_COORDS(__LIB_2__::func_638(), __LIB_2__::func_770(Global_2667225.f_45.f_69.f_66, Param0), true, false, false, true);
				ENTITY::SET_ENTITY_HEADING(__LIB_2__::func_638(), fParam1);
				func_832(__LIB_2__::func_638());
				return 1;
			}
			else if (MISC::GET_HASH_KEY(SCRIPT::GET_THIS_SCRIPT_NAME()) != __LIB_0__::func_878())
			{
				if (__LIB_2__::func_924(__LIB_2__::func_770(Global_2667225.f_45.f_69.f_66, Param0), fParam1, __LIB_1__::func_463(), 1))
				{
					func_832(__LIB_2__::func_638());
					return 1;
				}
			}
			else if (func_528(__LIB_2__::func_770(Global_2667225.f_45.f_69.f_66, Param0), fParam1, 1, __LIB_1__::func_463(), 0, 1, 0))
			{
				func_832(__LIB_2__::func_638());
				return 1;
			}
		}
		else if (__LIB_0__::func_957(&iVar1, Global_2667225.f_45.f_69.f_66, __LIB_2__::func_770(Global_2667225.f_45.f_69.f_66, Param0), fParam1, 0, 1, 1, 0, 1, 1, 0, 0, 0, 0))
		{
			if (Global_2667225.f_45.f_177)
			{
				VEHICLE::SET_VEHICLE_STRONG(NETWORK::NET_TO_VEH(iVar1), true);
			}
			if (Global_2667225.f_45.f_178)
			{
				VEHICLE::SET_VEHICLE_TYRES_CAN_BURST(NETWORK::NET_TO_VEH(iVar1), false);
			}
			if (Global_2667225.f_45.f_179)
			{
				if (DECORATOR::DECOR_IS_REGISTERED_AS_TYPE("Not_Allow_As_Saved_Veh", 3))
				{
					DECORATOR::DECOR_SET_INT(NETWORK::NET_TO_VEH(iVar1), "Not_Allow_As_Saved_Veh", 1);
				}
			}
			if (Global_2667225.f_45.f_180)
			{
				if (DECORATOR::DECOR_IS_REGISTERED_AS_TYPE("MPBitset", 3))
				{
					if (DECORATOR::DECOR_EXIST_ON(NETWORK::NET_TO_VEH(iVar1), "MPBitset"))
					{
						iVar6 = DECORATOR::DECOR_GET_INT(NETWORK::NET_TO_VEH(iVar1), "MPBitset");
					}
					MISC::SET_BIT(&iVar6, 11);
					DECORATOR::DECOR_SET_INT(NETWORK::NET_TO_VEH(iVar1), "MPBitset", iVar6);
				}
			}
			if (Global_2667225.f_45.f_183 > -1)
			{
				VEHICLE::SET_VEHICLE_COLOURS(NETWORK::NET_TO_VEH(iVar1), Global_2667225.f_45.f_183, Global_2667225.f_45.f_183);
				VEHICLE::SET_VEHICLE_EXTRA_COLOURS(NETWORK::NET_TO_VEH(iVar1), Global_2667225.f_45.f_183, Global_2667225.f_45.f_183);
			}
			if (Global_2667225.f_45.f_181)
			{
				__LIB_2__::func_626(NETWORK::NET_TO_VEH(iVar1));
			}
			__LIB_2__::func_625(NETWORK::NET_TO_VEH(iVar1), Global_2667225.f_45.f_69);
			func_832(NETWORK::NET_TO_VEH(iVar1));
			return 1;
		}
	}
	return 0;
}

int func_528(struct<3> Param0, float fParam1, bool bParam2, int iParam3, bool bParam4, bool bParam5, bool bParam6)//Position - 0x56FBC
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	bool bVar5;
	bool bVar6;
	struct<31> Var7;
	struct<31> Var8;
	struct<31> Var9;
	bool bVar10;
	int iVar11;
	if (!__LIB_1__::func_599(8))
	{
		__LIB_1__::func_891(0, 0, 0, 0, 0, 0, 0);
		__LIB_1__::func_653(8);
	}
	if (Global_1585857[iParam3 /*142*/].f_66 == 0)
	{
		return 1;
	}
	if (BitTest(Global_1585857[iParam3 /*142*/].f_103, 6))
	{
		if (!__LIB_1__::func_599(16))
		{
			__LIB_1__::func_653(16);
		}
	}
	__LIB_1__::func_653(31);
	if (!__LIB_2__::func_734())
	{
		if (!__LIB_1__::func_599(0))
		{
			if (!NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(__LIB_2__::func_733(0)))
			{
				if (NETWORK::CAN_REGISTER_MISSION_VEHICLES(1))
				{
					if (!__LIB_0__::func_863())
					{
						if (!__LIB_2__::func_923())
						{
							__LIB_7__::func_73(iParam3);
							iVar1 = Global_1585857[iParam3 /*142*/].f_66;
							if (!__LIB_1__::func_814(iVar1) || !__LIB_0__::func_371(iVar1, 1))
							{
								if (!__LIB_0__::func_113(iVar1))
								{
								}
								else
								{
									__LIB_9__::func_527(iParam3, -1);
								}
								return 1;
							}
							else if (__LIB_0__::func_799(iVar1))
							{
								iVar3 = 0;
								if ((NETWORK::GET_CLOUD_TIME_AS_INT() - Global_2703735.f_61.f_69) < 15)
								{
									iVar3 = 1;
								}
								if (__LIB_1__::func_24())
								{
									iVar3 = 1;
								}
								if (NETWORK::GET_TIME_DIFFERENCE(NETWORK::GET_NETWORK_TIME_ACCURATE(), Global_2667225.f_26.f_3) < 15000)
								{
									Global_2667225.f_26.f_3 = NETWORK::GET_NETWORK_TIME_ACCURATE();
									iVar3 = 1;
								}
								if (bParam6)
								{
									iVar3 = 1;
								}
								if (Global_2715699.f_2846.f_148)
								{
									iVar4 = 0;
									iVar3 = 1;
								}
								else
								{
									iVar4 = 1;
								}
								bVar5 = true;
								if (__LIB_1__::func_431(PLAYER::PLAYER_ID()) || (CAM::IS_SCREEN_FADED_OUT() || STREAMING::IS_PLAYER_SWITCH_IN_PROGRESS()))
								{
									bVar5 = false;
								}
								if (Global_2715699.f_2846.f_148)
								{
									if (BitTest(Global_1585857[iParam3 /*142*/].f_103, 11))
									{
										MISC::CLEAR_BIT(&(Global_1585857[iParam3 /*142*/].f_103), 11);
									}
								}
								bVar6 = false;
								if (bParam5)
								{
									bVar6 = true;
								}
								else if (BitTest(Global_1585857[iParam3 /*142*/].f_103, 11))
								{
									Var7.f_4 = 1125515264;
									Var7.f_5 = 1;
									Var7.f_6 = 1;
									Var7.f_8 = 1082130432;
									Var7.f_9 = 1176255488;
									Var7.f_10 = 1;
									Var7.f_13 = 1;
									Var7.f_15 = 2;
									Var7.f_22 = 2;
									Var7.f_25 = 1;
									Var7.f_26 = 1;
									Var7.f_29 = 1123024896;
									Var7.f_30 = 1;
									Var7.f_4 = 50f;
									Var7.f_5 = 0;
									Var7.f_6 = 0;
									Var7.f_10 = iVar4;
									Var7.f_11 = iVar3;
									Var7.f_12 = 1;
									Var7.f_13 = bVar5;
									Var7.f_14 = 1;
									Var7.f_25 = 0;
									iVar2 = 0;
									while (iVar2 < 2)
									{
										Var7.f_15[iVar2 /*3*/] = { Global_2703735.f_61.f_82[iVar2 /*3*/] };
										Var7.f_22[iVar2] = Global_2703735.f_61.f_89[iVar2];
										iVar2++;
									}
									if (func_682(-145.7451f, -1167.9371f, 24.2819f, 0f, 0f, 0f, iVar1, 1, &Param0, &fParam1, &Var7))
									{
										bVar6 = true;
									}
									else if (func_682(-234.9622f, -1171.113f, 21.8657f, 0f, 0f, 0f, iVar1, 1, &Param0, &fParam1, &Var7))
									{
										bVar6 = true;
									}
								}
								else if (BitTest(Global_1585857[iParam3 /*142*/].f_103, 6))
								{
									if (__LIB_3__::func_225(&Param0, &fParam1))
									{
										bVar6 = true;
									}
								}
								else
								{
									if (bParam4)
									{
										if (INTERIOR::IS_VALID_INTERIOR(INTERIOR::GET_INTERIOR_AT_COORDS(Param0)))
										{
											bParam4 = false;
										}
									}
									if (!bParam4)
									{
										Var8.f_4 = 1125515264;
										Var8.f_5 = 1;
										Var8.f_6 = 1;
										Var8.f_8 = 1082130432;
										Var8.f_9 = 1176255488;
										Var8.f_10 = 1;
										Var8.f_13 = 1;
										Var8.f_15 = 2;
										Var8.f_22 = 2;
										Var8.f_25 = 1;
										Var8.f_26 = 1;
										Var8.f_29 = 1123024896;
										Var8.f_30 = 1;
										Var8.f_0 = 10f;
										Var8.f_10 = iVar4;
										Var8.f_11 = iVar3;
										Var8.f_12 = 1;
										Var8.f_13 = bVar5;
										Var8.f_14 = 1;
										Var8.f_25 = 0;
										iVar2 = 0;
										while (iVar2 < 2)
										{
											Var8.f_15[iVar2 /*3*/] = { Global_2703735.f_61.f_82[iVar2 /*3*/] };
											Var8.f_22[iVar2] = Global_2703735.f_61.f_89[iVar2];
											iVar2++;
										}
										if (func_682(Param0, 0f, 0f, 0f, iVar1, 1, &Param0, &fParam1, &Var8))
										{
											bVar6 = true;
										}
									}
									else
									{
										Var9.f_4 = 1125515264;
										Var9.f_5 = 1;
										Var9.f_6 = 1;
										Var9.f_8 = 1082130432;
										Var9.f_9 = 1176255488;
										Var9.f_10 = 1;
										Var9.f_13 = 1;
										Var9.f_15 = 2;
										Var9.f_22 = 2;
										Var9.f_25 = 1;
										Var9.f_26 = 1;
										Var9.f_29 = 1123024896;
										Var9.f_30 = 1;
										Var9.f_3 = bParam4;
										Var9.f_10 = iVar4;
										Var9.f_11 = iVar3;
										Var9.f_12 = 1;
										Var9.f_13 = bVar5;
										Var9.f_14 = 1;
										Var9.f_25 = 0;
										iVar2 = 0;
										while (iVar2 < 2)
										{
											Var9.f_15[iVar2 /*3*/] = { Global_2703735.f_61.f_82[iVar2 /*3*/] };
											Var9.f_22[iVar2] = Global_2703735.f_61.f_89[iVar2];
											iVar2++;
										}
										if (func_682(Param0, 0f, 0f, 0f, iVar1, 1, &Param0, &fParam1, &Var9))
										{
											bVar6 = true;
										}
									}
								}
								if (bVar6)
								{
									MISC::CLEAR_AREA(Param0, 2f, true, false, false, false);
									__LIB_0__::func_957(&(Global_2689235[PLAYER::PLAYER_ID() /*453*/].f_38), iVar1, Param0, fParam1, 0, 1, 0, 0, 1, 1, 0, 0, 0, 0);
									NETWORK::SET_NETWORK_ID_ALWAYS_EXISTS_FOR_PLAYER(Global_2689235[PLAYER::PLAYER_ID() /*453*/].f_38, PLAYER::PLAYER_ID(), true);
									iVar0 = NETWORK::NET_TO_VEH(Global_2689235[PLAYER::PLAYER_ID() /*453*/].f_38);
									ENTITY::SET_ENTITY_SHOULD_FREEZE_WAITING_ON_COLLISION(iVar0, true);
									VEHICLE::SET_CLEAR_FREEZE_WAITING_ON_COLLISION_ONCE_PLAYER_ENTERS(iVar0, true);
									VEHICLE::SET_VEHICLE_ON_GROUND_PROPERLY(iVar0, 5f);
									__LIB_30__::func_523(&iVar0, iParam3);
									if ((__LIB_1__::func_629() || __LIB_2__::func_632()) || __LIB_2__::func_631())
									{
										ENTITY::FREEZE_ENTITY_POSITION(iVar0, true);
									}
									__LIB_11__::func_262(iVar0, iParam3);
									if (!bVar5)
									{
										NETWORK::NETWORK_FADE_IN_ENTITY(iVar0, true, 1);
									}
									if (BitTest(Global_1585857[iParam3 /*142*/].f_103, 11))
									{
										__LIB_1__::func_653(34);
									}
									else
									{
										__LIB_1__::func_600(34);
									}
									if (iParam3 >= 0 && iParam3 < 363)
									{
										MISC::SET_BIT(&(Global_1585857[iParam3 /*142*/].f_103), 0);
										iVar11 = 0;
										while (iVar11 < 363)
										{
											bVar10 = false;
											if (iVar11 != iParam3)
											{
												if (BitTest(Global_1585857[iVar11 /*142*/].f_103, 11))
												{
													MISC::CLEAR_BIT(&(Global_1585857[iVar11 /*142*/].f_103), 11);
													bVar10 = true;
												}
												if (BitTest(Global_1585857[iVar11 /*142*/].f_103, 0))
												{
													MISC::CLEAR_BIT(&(Global_1585857[iVar11 /*142*/].f_103), 0);
													bVar10 = true;
												}
												if (BitTest(Global_1585857[iVar11 /*142*/].f_103, 6))
												{
													__LIB_11__::func_282(iVar11);
													bVar10 = true;
												}
												if (bVar10)
												{
													__LIB_3__::func_578(iVar11, &(Global_1585857[iVar11 /*142*/]), 1, -1, 0, 0);
												}
											}
											iVar11++;
										}
									}
									if (VEHICLE::IS_VEHICLE_A_CONVERTIBLE(iVar0, false))
									{
										if (BitTest(Global_2715699.f_5986, 2))
										{
											VEHICLE::LOWER_CONVERTIBLE_ROOF(iVar0, true);
										}
									}
									__LIB_3__::func_578(iParam3, &(Global_1585857[iParam3 /*142*/]), 1, -1, 0, 0);
									__LIB_3__::func_224(iVar0);
									VEHICLE::SET_VEHICLE_DOORS_LOCKED(iVar0, 1);
									if (bParam2)
									{
										STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(iVar1);
									}
									__LIB_1__::func_653(0);
									__LIB_1__::func_653(44);
									__LIB_1__::func_600(10);
									__LIB_1__::func_600(1);
									__LIB_1__::func_600(2);
									__LIB_1__::func_600(9);
									__LIB_1__::func_600(12);
									__LIB_1__::func_600(31);
									__LIB_1__::func_600(32);
									__LIB_1__::func_600(33);
									__LIB_1__::func_600(35);
									__LIB_1__::func_600(37);
									__LIB_1__::func_600(38);
									__LIB_2__::func_627();
									Global_2689235[PLAYER::PLAYER_ID() /*453*/].f_120 = 0;
									return 1;
								}
							}
						}
					}
				}
			}
		}
	}
	return 0;
}

int func_682(struct<3> Param0, struct<3> Param1, int iParam2, int iParam3, var uParam4, var uParam5, var uParam6)//Position - 0x6D6D2
{
	bool bVar0;
	int iVar1;
	float fVar2;
	float fVar3;
	float fVar4;
	struct<61> Var5;
	struct<61> Var6;
	bVar0 = false;
	if (uParam6->f_14)
	{
		if (uParam6->f_25)
		{
			uParam6->f_25 = 0;
		}
	}
	if (!__LIB_1__::func_533())
	{
		return 0;
	}
	if (__LIB_1__::func_479() && !Global_2667225.f_680 == MISC::GET_FRAME_COUNT())
	{
		if (!Global_2667225.f_676 == 0)
		{
			Global_2667225.f_676 = 0;
			__LIB_0__::func_854();
			__LIB_0__::func_814();
		}
	}
	if (!SCRIPT::GET_ID_OF_THIS_THREAD() == Global_2667225.f_675)
	{
		if (!Global_2667225.f_676 == 0)
		{
			if (NETWORK::GET_TIME_DIFFERENCE(NETWORK::GET_NETWORK_TIME(), Global_2667225.f_679) < __LIB_0__::func_853(0))
			{
				return 0;
			}
			else
			{
				Global_2667225.f_676 = 0;
			}
		}
	}
	else
	{
		if (NETWORK::GET_TIME_DIFFERENCE(NETWORK::GET_NETWORK_TIME(), Global_2667225.f_677) > 30000)
		{
			Global_2667225.f_676 = 0;
		}
		if (!Global_2667225.f_676 == 0)
		{
			if (NETWORK::GET_TIME_DIFFERENCE(NETWORK::GET_NETWORK_TIME(), Global_2667225.f_679) > __LIB_0__::func_853(1))
			{
				Global_2667225.f_676 = 0;
			}
		}
	}
	if (uParam6->f_6)
	{
		if (func_789(Param0))
		{
			if (__LIB_1__::func_558(&Param0, 1))
			{
			}
		}
	}
	if (!Global_2667225.f_676 == 0)
	{
		if (SYSTEM::VDIST(Global_2667225.f_695, Param0) > 50f)
		{
			return 0;
		}
		if (Global_2667225.f_698 != iParam2)
		{
			return 0;
		}
	}
	PATHFIND::REQUEST_PATH_NODES_IN_AREA_THIS_FRAME((Param0.f_0 - 100f), (Param0.f_1 - 100f), (Param0.f_0 + 100f), (Param0.f_1 + 100f));
	if (Global_2667225.f_676 == 0)
	{
		Global_2667225.f_682 = 0;
		Global_2667225.f_677 = NETWORK::GET_NETWORK_TIME_ACCURATE();
		Global_2667225.f_675 = SCRIPT::GET_ID_OF_THIS_THREAD();
		Global_2667225.f_679 = NETWORK::GET_NETWORK_TIME_ACCURATE();
		Global_2667225.f_695 = { Param0 };
		Global_2667225.f_698 = iParam2;
		Global_2667225.f_681 = NETWORK::GET_NETWORK_TIME_ACCURATE();
		__LIB_0__::func_851();
		__LIB_0__::func_854();
		if (!uParam6->f_27 || (((((((__LIB_2__::func_971(Param0, 1, 1133903872) && !uParam6->f_28) && !Global_2815059.f_924) && !Global_2815059.f_913) && !Global_2815059.f_921) && !Global_2815059.f_925) && !Global_2815059.f_933) && !Global_2815059.f_945))
		{
			__LIB_11__::func_273(Param0, iParam2);
		}
		if (__LIB_11__::func_272(Param0))
		{
			__LIB_11__::func_273(Param0, iParam2);
		}
		Global_2667225.f_676 = 2;
	}
	switch (Global_2667225.f_676)
	{
		case 2:
			if (PATHFIND::ARE_NODES_LOADED_FOR_AREA((Param0.f_0 - 100f), (Param0.f_1 - 100f), (Param0.f_0 + 100f), (Param0.f_1 + 100f)))
			{
				Global_2667225.f_683 = { Param0 };
				Global_2667225.f_686 = 0f;
				if (Global_2815059.f_924)
				{
					fVar2 = 10f;
					fVar3 = 5f;
					fVar4 = 5f;
				}
				else
				{
					fVar2 = 4f;
					fVar3 = 1f;
					fVar4 = 1f;
				}
				if (((uParam6->f_3 && __LIB_2__::func_992(Param0, fVar2, fVar3, fVar4, 1f, 0, 0, 0, 1123024896, 0, -1, 1, 0, 0, 0, 0, 0)) && !uParam6->f_7) && !__LIB_2__::func_991(Param0, *uParam5, iParam2, PLAYER::PLAYER_ID(), 0))
				{
					Global_2667225.f_683 = { Param0 };
					Global_2667225.f_686 = *uParam5;
				}
				else
				{
					Var5.f_6 = 1082130432;
					Var5.f_7 = 1176255488;
					Var5.f_8 = 1;
					Var5.f_10 = 1;
					Var5.f_13 = 1;
					Var5.f_15 = 1;
					Var5.f_16 = 1;
					Var5.f_31 = 1;
					Var5.f_34 = joaat("tailgater");
					Var5.f_38 = 2;
					Var5.f_45 = 2;
					Var5.f_49 = 1123024896;
					Var5.f_53 = 999;
					Var5.f_54 = 1176256410;
					Var5.f_55 = 1;
					Var5.f_56 = 1;
					Var5.f_57 = 1;
					Var5.f_9 = iParam3;
					Var5.f_3 = 7f;
					Var5.f_10 = uParam6->f_5;
					Var5.f_4 = *uParam6;
					Var5.f_13 = uParam6->f_1;
					Var5.f_14 = uParam6->f_2;
					Var5.f_5 = uParam6->f_4;
					Var5.f_15 = uParam6->f_6;
					Var5.f_11 = uParam6->f_7;
					Var5.f_6 = uParam6->f_8;
					Var5.f_7 = uParam6->f_9;
					Var5.f_16 = uParam6->f_10;
					Var5.f_17 = uParam6->f_11;
					Var5 = { Param1 };
					Var5.f_12 = 1;
					Var5.f_34 = iParam2;
					Var5.f_31 = uParam6->f_13;
					if (uParam6->f_32 && Global_2667225.f_682 > 0)
					{
						Var5.f_30 = 0;
						Var5.f_29 = 1;
					}
					else
					{
						Var5.f_30 = uParam6->f_30;
						Var5.f_29 = uParam6->f_31;
					}
					Var5.f_48 = uParam6->f_14;
					Var5.f_56 = uParam6->f_25;
					Var5.f_57 = uParam6->f_26;
					Var5.f_49 = uParam6->f_29;
					Var5.f_59 = uParam6->f_33;
					Var5.f_60 = uParam6->f_34;
					iVar1 = 0;
					while (iVar1 < 2)
					{
						Var5.f_38[iVar1 /*3*/] = { uParam6->f_15[iVar1 /*3*/] };
						Var5.f_45[iVar1] = uParam6->f_22[iVar1];
						iVar1++;
					}
					func_697(&(Global_2667225.f_683), &(Global_2667225.f_686), &Var5);
				}
				__LIB_1__::func_571(Global_2667225.f_683, Global_2667225.f_686, iParam2, &(Global_2667225.f_673));
				Global_2667225.f_671 = 0;
				Global_2667225.f_672 = 0;
				Global_2667225.f_682++;
				Global_2667225.f_678 = NETWORK::GET_NETWORK_TIME_ACCURATE();
				Global_2667225.f_677 = NETWORK::GET_NETWORK_TIME_ACCURATE();
				Global_2667225.f_676 = 3;
			}
			break;
		case 3:
			if (Global_2667225.f_671)
			{
				if (Global_2667225.f_673 == Global_2667225.f_674)
				{
					if (Global_2667225.f_672)
					{
						if (uParam6->f_12 && !uParam6->f_11)
						{
							if (__LIB_2__::func_765(Global_2667225.f_683, Global_2667225.f_686, iParam2, 1, 1036831949))
							{
								Global_2667225.f_676 = 4;
								Global_2667225.f_700 = NETWORK::GET_NETWORK_TIME_ACCURATE();
							}
							else
							{
								bVar0 = true;
							}
						}
						else
						{
							bVar0 = true;
						}
					}
					else
					{
						func_692(Global_2667225.f_683, 0);
						__LIB_0__::func_821(-1);
					}
				}
				else
				{
					Global_2667225.f_671 = 0;
					Global_2667225.f_672 = 0;
				}
			}
			else if (NETWORK::GET_TIME_DIFFERENCE(NETWORK::GET_NETWORK_TIME(), Global_2667225.f_678) > 3000)
			{
				__LIB_0__::func_821(-1);
			}
			break;
		case 4:
			if (uParam6->f_12 && !uParam6->f_11)
			{
				if (NETWORK::GET_TIME_DIFFERENCE(NETWORK::GET_NETWORK_TIME(), Global_2667225.f_700) < 10000)
				{
					if (NETWORK::NETWORK_ENTITY_AREA_DOES_EXIST(Global_2667225.f_699))
					{
						if (NETWORK::NETWORK_ENTITY_AREA_HAVE_ALL_REPLIED(Global_2667225.f_699))
						{
							if (!NETWORK::NETWORK_ENTITY_AREA_IS_OCCUPIED(Global_2667225.f_699))
							{
								if (__LIB_2__::func_987(Global_2667225.f_683, Global_2667225.f_686, iParam2, PLAYER::PLAYER_ID(), 0) || __LIB_2__::func_986(Global_2667225.f_683, Global_2667225.f_686, iParam2, 1, 0, 0, 0, 1, 0))
								{
									func_692(Global_2667225.f_683, 0);
									__LIB_0__::func_821(-1);
								}
								else
								{
									bVar0 = true;
								}
							}
							else
							{
								func_692(Global_2667225.f_683, 0);
								__LIB_0__::func_821(-1);
							}
						}
					}
					else
					{
						__LIB_0__::func_821(-1);
					}
				}
				else
				{
					__LIB_0__::func_821(1);
				}
			}
			else
			{
				bVar0 = true;
			}
			break;
		case 5:
			Global_2667225.f_683 = { Param0 };
			Global_2667225.f_686 = 0f;
			Var6.f_6 = 1082130432;
			Var6.f_7 = 1176255488;
			Var6.f_8 = 1;
			Var6.f_10 = 1;
			Var6.f_13 = 1;
			Var6.f_15 = 1;
			Var6.f_16 = 1;
			Var6.f_31 = 1;
			Var6.f_34 = joaat("tailgater");
			Var6.f_38 = 2;
			Var6.f_45 = 2;
			Var6.f_49 = 1123024896;
			Var6.f_53 = 999;
			Var6.f_54 = 1176256410;
			Var6.f_55 = 1;
			Var6.f_56 = 1;
			Var6.f_57 = 1;
			Var6.f_9 = iParam3;
			Var6.f_3 = 3.5f;
			Var6.f_10 = uParam6->f_5;
			Var6.f_4 = *uParam6;
			Var6.f_12 = 1;
			Var6.f_13 = 0;
			Var6.f_15 = uParam6->f_6;
			Var6.f_11 = uParam6->f_7;
			Var6.f_6 = uParam6->f_8;
			Var6.f_7 = uParam6->f_9;
			Var6 = { Param1 };
			Var6.f_34 = iParam2;
			Var6.f_31 = uParam6->f_13;
			Var6.f_30 = 1;
			Var6.f_48 = uParam6->f_14;
			Var6.f_56 = uParam6->f_25;
			Var6.f_57 = uParam6->f_26;
			Var6.f_30 = uParam6->f_30;
			Var6.f_29 = uParam6->f_31;
			Var6.f_59 = uParam6->f_33;
			Var6.f_60 = uParam6->f_34;
			iVar1 = 0;
			while (iVar1 < 2)
			{
				Var6.f_38[iVar1 /*3*/] = { uParam6->f_15[iVar1 /*3*/] };
				Var6.f_45[iVar1] = uParam6->f_22[iVar1];
				iVar1++;
			}
			Var6.f_49 = uParam6->f_29;
			func_697(&(Global_2667225.f_683), &(Global_2667225.f_686), &Var6);
			Global_2667225.f_676 = 6;
			break;
		case 6:
			bVar0 = true;
			break;
	}
	Global_2667225.f_695 = { Param0 };
	Global_2667225.f_698 = iParam2;
	Global_2667225.f_679 = NETWORK::GET_NETWORK_TIME_ACCURATE();
	if (bVar0)
	{
		Global_2667225.f_516 = 0;
		*uParam4 = { Global_2667225.f_683 };
		*uParam5 = Global_2667225.f_686;
		__LIB_1__::func_527(1);
		return 1;
	}
	return 0;
}

void func_692(struct<3> Param0, int iParam1)//Position - 0x6E3DF
{
	struct<3> Var0;
	if (iParam1 == 0 && __LIB_0__::func_822(Param0, 0.01f))
	{
		return;
	}
	if (iParam1 < 30 && SYSTEM::VMAG(Param0) > 0f)
	{
		Var0 = { Global_2667225.f_2737[iParam1 /*3*/] };
		Global_2667225.f_2737[iParam1 /*3*/] = { Param0 };
		func_692(Var0, iParam1 + 1);
	}
}

void func_697(var uParam0, var uParam1, var uParam2)//Position - 0x6E5F3
{
	int iVar0;
	iVar0 = 0;
	if (Global_2667225.f_1754 > 0)
	{
		iVar0 = 0;
		while (func_742(uParam0, uParam1, uParam2) == 0 && iVar0 < 2)
		{
			iVar0++;
		}
		if (iVar0 == 2)
		{
			uParam2->f_33 = 0;
		}
		else
		{
			return;
		}
	}
	iVar0 = 0;
	while (func_698(uParam0, uParam1, uParam2) == 0 && iVar0 < 6)
	{
		iVar0++;
	}
}

int func_698(var uParam0, var uParam1, var uParam2)//Position - 0x6E662
{
	int iVar0;
	struct<3> Var1;
	float* fVar2;
	int iVar3;
	var uVar4;
	var uVar5;
	int iVar6;
	int iVar7;
	bool bVar8;
	bool bVar9;
	bool bVar10;
	float fVar11;
	float fVar12;
	int iVar13;
	int iVar14;
	int iVar15;
	bool bVar16;
	int iVar17;
	bool bVar18;
	int iVar19;
	float fVar20;
	int iVar21;
	int iVar22;
	float fVar23;
	int iVar24;
	struct<3> Var25;
	var uVar26;
	struct<3> Var27;
	float* fVar28;
	bool bVar29;
	iVar0 = 0;
	if (!SYSTEM::VMAG(uParam2->f_35) > 0f)
	{
		uParam2->f_35 = { *uParam0 };
	}
	if (uParam2->f_15)
	{
		if (func_738(uParam2->f_35, uParam0, &(uParam2->f_38), &(uParam2->f_45), 1, 1))
		{
			uParam2->f_6 = 9999.9f;
			uParam2->f_7 = 9999.9f;
		}
	}
	if (uParam2->f_51)
	{
		uParam2->f_6 = 9999.9f;
	}
	if (uParam2->f_48)
	{
		if (__LIB_1__::func_572(uParam0, 1))
		{
		}
	}
	if (uParam0->f_2 < -80f)
	{
		uParam2->f_6 = 9999.9f;
		uParam2->f_7 = 9999.9f;
	}
	iVar3 = 0;
	bVar8 = true;
	if (uParam2->f_11)
	{
		iVar3 += 2;
		iVar3++;
		bVar8 = false;
	}
	else if (uParam2->f_10 == 0 || (uParam2->f_33 > 0 && uParam2->f_16))
	{
		iVar3++;
		bVar8 = false;
	}
	iVar3 += 4;
	fVar11 = 3f;
	fVar12 = 5f;
	switch (uParam2->f_33)
	{
		case 0:
			fVar11 = 3f;
			fVar12 = 5f;
			break;
		case 1:
			fVar11 = 2.75f;
			fVar12 = 7.5f;
			break;
		default:
			fVar11 = 2.5f;
			fVar12 = 10f;
			break;
	}
	iVar13 = 0;
	Global_2674786.f_162 = 0;
	Global_2674786.f_163 = 0;
	Global_2674786.f_164 = -99;
	Global_2674786.f_165 = { 0f, 0f, 0f };
	iVar14 = 0;
	while (iVar14 < 40)
	{
		Global_2674786[iVar14 /*3*/] = { 0f, 0f, 0f };
		Global_2674786.f_121[iVar14] = 0f;
		iVar14++;
	}
	iVar15 = 1;
	if (__LIB_1__::func_452(uParam2->f_34) != 0)
	{
		iVar15 = 3;
		uParam2->f_6 = 9999.9f;
		uParam2->f_7 = 9999.9f;
		uParam2->f_18 = 0;
	}
	while (true)
	{
		iVar6 = PATHFIND::GET_NTH_CLOSEST_VEHICLE_NODE_ID_WITH_HEADING(*uParam0, (iVar0 * iVar15), &fVar2, &iVar7, iVar3, fVar11, fVar12);
		if (PATHFIND::IS_VEHICLE_NODE_ID_VALID(iVar6))
		{
			PATHFIND::GET_VEHICLE_NODE_POSITION(iVar6, &Var1);
			bVar10 = false;
			if (Global_2674786.f_164 == iVar6)
			{
				bVar10 = true;
			}
			Global_2674786.f_165 = { Var1 };
			if (((uParam2->f_10 || uParam2->f_33 > 0) || !PATHFIND::GET_VEHICLE_NODE_IS_SWITCHED_OFF(iVar6)) || PATHFIND::GET_VEHICLE_NODE_IS_GPS_ALLOWED(iVar6))
			{
				PATHFIND::GET_VEHICLE_NODE_PROPERTIES(Var1, &uVar4, &uVar5);
				if (SYSTEM::VDIST(Var1, uParam2->f_35) > uParam2->f_4)
				{
					if (!__LIB_2__::func_784(&Var1, 0))
					{
						if ((uParam2->f_13 || uVar5 & 64 == 0) || uParam2->f_33 == 1)
						{
							if (uParam2->f_14 || uVar5 & 16 == 0)
							{
								if ((uVar5 & 128 == 0 && uVar5 & 256 == 0) && uVar5 & 512 == 0)
								{
									if (!__LIB_1__::func_434(Var1))
									{
										Var1 = { __LIB_2__::func_783(Var1, &fVar2, iVar7, uParam2->f_9, *uParam2, bVar8, uParam2->f_11, uParam2->f_34, &bVar9, bVar10, 1, uParam2->f_51, uParam2->f_60) };
										if (SYSTEM::VMAG(Var1) > 0f)
										{
											if (!__LIB_2__::func_990(Var1, 5f))
											{
												if (Var1.f_2 >= (uParam2->f_35.f_2 - uParam2->f_7) || uParam2->f_33 >= 2)
												{
													if (Var1.f_2 <= (uParam2->f_35.f_2 + uParam2->f_6) || uParam2->f_33 >= 2)
													{
														if (__LIB_1__::func_546(Var1, uParam2))
														{
															if ((uParam2->f_48 && !__LIB_1__::func_572(&Var1, 0)) || uParam2->f_48 == 0)
															{
																bVar16 = true;
																if (!bVar10)
																{
																	if (bVar9)
																	{
																		iVar0 = (iVar0 + -1);
																		bVar16 = false;
																	}
																}
																if (SYSTEM::VMAG(Var1) > 0f)
																{
																	if (((uParam2->f_5 > 0f && SYSTEM::VDIST(Var1.f_0, Var1.f_1, 0f, uParam2->f_35, uParam2->f_35.f_1, 0f) < uParam2->f_5) || uParam2->f_5 <= 0f) || uParam2->f_33 >= 2)
																	{
																		if ((uParam2->f_12 && !__LIB_10__::func_743(Var1, fVar2, uParam2->f_34, PLAYER::PLAYER_ID(), 0, uParam2->f_56)) || !uParam2->f_12)
																		{
																			if (!uParam2->f_15 || !func_738(uParam2->f_35, &Var1, &(uParam2->f_38), &(uParam2->f_45), 0, 1))
																			{
																				if (uParam2->f_8)
																				{
																					iVar17 = uParam2->f_31;
																					bVar18 = true;
																					iVar19 = 1;
																					fVar20 = uParam2->f_49;
																					if (!uParam2->f_55)
																					{
																						iVar17 = 0;
																						bVar18 = false;
																						iVar19 = 0;
																						fVar20 = 1f;
																					}
																					else if (uParam2->f_17)
																					{
																						iVar17 = 0;
																						bVar18 = false;
																						iVar19 = 0;
																						if (uParam2->f_33 == 1)
																						{
																							fVar20 = (fVar20 * 0.375f);
																						}
																					}
																					else
																					{
																						bVar18 = true;
																						iVar19 = 1;
																						if (uParam2->f_28)
																						{
																							if (uParam2->f_33 == 1)
																							{
																								fVar20 = (fVar20 * 0.375f);
																							}
																						}
																					}
																					iVar21 = 0;
																					if (!__LIB_2__::func_989(Var1, fVar2, uParam2->f_34))
																					{
																						if (uParam2->f_3 > 7f)
																						{
																							if (__LIB_2__::func_992(Var1, 6f, 1f, 1f, 5f, iVar17, bVar18, iVar19, fVar20, uParam2->f_58, -1, 1, uParam2->f_3, 0, 0, 0, 0))
																							{
																								iVar21 = 1;
																							}
																						}
																						else if (__LIB_2__::func_992(Var1, 6f, 1f, 1f, 5f, iVar17, bVar18, iVar19, fVar20, uParam2->f_58, -1, 1, 0f, 0, 0, 0, 0) && !__LIB_2__::func_986(Var1, fVar2, uParam2->f_34, 1, 1, 0, 0, 0, 0))
																						{
																							iVar21 = 1;
																						}
																					}
																					if (iVar21 || uParam2->f_33 >= 2)
																					{
																						if (((uParam2->f_29 || uParam2->f_30) || uParam2->f_52) || uParam2->f_33 >= 2)
																						{
																							fVar23 = 0f;
																							if (uParam2->f_52)
																							{
																								iVar22 = __LIB_1__::func_575(Var1, uParam2->f_54, &fVar23);
																							}
																							if (!uParam2->f_52 || (uParam2->f_52 && iVar22 <= uParam2->f_53))
																							{
																								if (uParam2->f_52)
																								{
																									if (iVar22 < uParam2->f_53)
																									{
																										iVar14 = 0;
																										while (iVar14 < Global_2674786.f_162)
																										{
																											Global_2674786[iVar14 /*3*/] = { 0f, 0f, 0f };
																											Global_2674786.f_121[iVar14] = 0f;
																											iVar14++;
																										}
																										Global_2674786.f_162 = 0;
																										uParam2->f_53 = iVar22;
																									}
																								}
																								if (uParam2->f_30)
																								{
																									if (Global_2674786.f_162 == 0)
																									{
																										Global_2674786[0 /*3*/] = { Var1 };
																										Global_2674786.f_121[0] = fVar2;
																									}
																									else
																									{
																										iVar14 = 0;
																										while (iVar14 < Global_2674786.f_162 + 1)
																										{
																											if (iVar14 < 40)
																											{
																												if (SYSTEM::VDIST2(Var1, uParam2->f_35) < SYSTEM::VDIST2(Global_2674786[iVar14 /*3*/], uParam2->f_35))
																												{
																													func_706(Var1, fVar2, iVar14);
																													iVar14 = Global_2674786.f_162 + 1;
																												}
																											}
																											iVar14++;
																										}
																									}
																									Global_2674786.f_162++;
																									if (Global_2674786.f_162 >= 5)
																									{
																										if ((uParam2->f_52 && uParam2->f_53 == 0) || uParam2->f_52 == 0)
																										{
																											iVar0 = 100;
																										}
																										else if (Global_2674786.f_162 == 40)
																										{
																											iVar0 = 100;
																										}
																									}
																								}
																								else
																								{
																									Global_2674786[Global_2674786.f_162 /*3*/] = { Var1 };
																									Global_2674786.f_121[Global_2674786.f_162] = fVar2;
																									Global_2674786.f_162++;
																									if (__LIB_1__::func_546(Var1, uParam2))
																									{
																										Global_2674786.f_163++;
																									}
																									if (Global_2674786.f_162 >= 10)
																									{
																										if ((uParam2->f_52 && uParam2->f_53 == 0) || uParam2->f_52 == 0)
																										{
																											iVar0 = 100;
																										}
																										else if (Global_2674786.f_162 == 40)
																										{
																											iVar0 = 100;
																										}
																									}
																								}
																							}
																						}
																						else
																						{
																							*uParam0 = { Var1 };
																							*uParam1 = fVar2;
																							return 1;
																						}
																					}
																					else if (bVar16)
																					{
																						iVar0++;
																					}
																				}
																				else
																				{
																					*uParam0 = { Var1 };
																					*uParam1 = fVar2;
																					return 1;
																				}
																			}
																		}
																		else
																		{
																			iVar13++;
																		}
																	}
																	else
																	{
																		iVar0 = 100;
																	}
																}
															}
															else
															{
																iVar0++;
															}
														}
														else if (!uParam2->f_32)
														{
															iVar0 = 100;
														}
													}
													else
													{
														iVar0++;
													}
												}
												else
												{
													iVar0++;
												}
											}
										}
									}
									else
									{
										iVar0++;
									}
								}
							}
							else
							{
								iVar0++;
							}
						}
						else
						{
							iVar0++;
						}
					}
					else
					{
						iVar13++;
					}
				}
				else
				{
					iVar13++;
				}
			}
			iVar0++;
			if (iVar0 >= (40 + iVar13) || iVar0 >= 100)
			{
				if (Global_2674786.f_162 > 0 && ((uParam2->f_29 || uParam2->f_30) || uParam2->f_33 >= 2))
				{
					if (uParam2->f_30)
					{
						*uParam0 = { Global_2674786[0 /*3*/] };
						*uParam1 = Global_2674786.f_121[0];
						return 1;
					}
					else
					{
						if (Global_2674786.f_163 > 0 && !Global_2674786.f_163 == Global_2674786.f_162)
						{
							func_704(0, uParam2);
						}
						iVar24 = MISC::GET_RANDOM_INT_IN_RANGE(0, Global_2674786.f_162);
						if (uParam2->f_18 && uParam2->f_30)
						{
							iVar24 = 0;
						}
						Var25 = { Global_2674786[0 /*3*/] };
						uVar26 = Global_2674786.f_121[0];
						Global_2674786[0 /*3*/] = { Global_2674786[iVar24 /*3*/] };
						Global_2674786.f_121[0] = Global_2674786.f_121[iVar24];
						Global_2674786[iVar24 /*3*/] = { Var25 };
						Global_2674786.f_121[iVar24] = uVar26;
						*uParam0 = { Global_2674786[0 /*3*/] };
						*uParam1 = Global_2674786.f_121[0];
						return 1;
					}
				}
				else
				{
					uParam2->f_33++;
					if (uParam2->f_33 < 3)
					{
						return 0;
					}
					else
					{
						__LIB_2__::func_856(iVar13, *uParam0, &iVar0, &Var1, &fVar2, uParam2, bVar8, iVar7, iVar3, fVar11, fVar12, bVar9);
						Var27 = { Var1 };
						fVar28 = fVar2;
						if (!uParam2->f_50)
						{
							bVar29 = true;
						}
						else
						{
							bVar29 = false;
						}
						if (func_738(uParam2->f_35, &Var27, &(uParam2->f_38), &(uParam2->f_45), bVar29, 1) || __LIB_1__::func_572(&Var27, bVar29))
						{
							if (!uParam2->f_50)
							{
								uParam2->f_33 = 0;
								uParam2->f_50 = 1;
								*uParam0 = { Var27 };
								*uParam1 = fVar28;
								uParam2->f_6 = 9999.9f;
								uParam2->f_7 = 9999.9f;
								return 0;
							}
							else
							{
								*uParam0 = { Var27 };
								*uParam1 = fVar28;
								return 1;
							}
						}
						else
						{
							*uParam0 = { Var27 };
							*uParam1 = fVar28;
							return 1;
						}
					}
				}
			}
		}
		else
		{
			uParam2->f_33++;
			if (uParam2->f_33 < 3)
			{
				return 0;
			}
			else
			{
				__LIB_11__::func_280(&Global_1574205, uParam0, uParam1, *uParam0);
				if (uParam2->f_11)
				{
					uParam2->f_27 = 1;
				}
				return 1;
			}
		}
		Global_2674786.f_164 = iVar6;
	}
	return 0;
}

void func_704(int iParam0, var uParam1)//Position - 0x6F3C1
{
	if (!__LIB_1__::func_546(Global_2674786[iParam0 /*3*/], uParam1))
	{
		Global_2674786.f_162 = (Global_2674786.f_162 - 1);
		__LIB_0__::func_824(iParam0);
		if (Global_2674786.f_162 > Global_2674786.f_163)
		{
			func_704(iParam0, uParam1);
		}
	}
	else if (iParam0 < 39)
	{
		func_704(iParam0 + 1, uParam1);
	}
}

void func_706(struct<3> Param0, float fParam1, int iParam2)//Position - 0x6F467
{
	struct<3> Var0;
	var uVar1;
	Var0 = { Global_2674786[iParam2 /*3*/] };
	uVar1 = Global_2674786.f_121[iParam2];
	Global_2674786[iParam2 /*3*/] = { Param0 };
	Global_2674786.f_121[iParam2] = fParam1;
	if (iParam2 <= Global_2674786.f_162 && iParam2 < 39)
	{
		if (SYSTEM::VMAG(Var0) > 0f)
		{
			func_706(Var0, uVar1, iParam2 + 1);
		}
	}
}

int func_738(struct<3> Param0, var uParam1, var uParam2, var uParam3, bool bParam4, bool bParam5)//Position - 0x70D86
{
	int iVar0;
	bool bVar1;
	if (func_789(Param0))
	{
		if (func_741(uParam1, bParam4, 0, 1, 1))
		{
			if (bParam4)
			{
			}
			return 1;
		}
	}
	if (__LIB_2__::func_766(uParam1, bParam4, 1))
	{
		if (bParam4)
		{
		}
		return 1;
	}
	if (bParam5)
	{
		if (__LIB_0__::func_822(*uParam1, 1056964608))
		{
			return 1;
		}
	}
	bVar1 = false;
	iVar0 = 0;
	while (iVar0 < *uParam2)
	{
		if (SYSTEM::VDIST(*uParam1, *(uParam2[iVar0 /*3*/])) < (*uParam3)[iVar0])
		{
			if (bParam4)
			{
				__LIB_1__::func_450(uParam1, *(uParam2[iVar0 /*3*/]), (*uParam3)[iVar0], 1036831949, 0, 0);
			}
			bVar1 = true;
		}
		iVar0++;
	}
	if (bVar1)
	{
		return 1;
	}
	return 0;
}

int func_741(var uParam0, bool bParam1, bool bParam2, bool bParam3, bool bParam4)//Position - 0x70FD0
{
	int iVar0;
	struct<3> Var1;
	iVar0 = 0;
	while (iVar0 < 12)
	{
		if (Global_2672169[iVar0 /*17*/].f_9 == 1)
		{
			if (!bParam2 || (bParam2 && Global_2672169[iVar0 /*17*/].f_16))
			{
				if (__LIB_1__::func_528(*uParam0, &(Global_2672169[iVar0 /*17*/]), 1008981770, bParam4, 0))
				{
					if (bParam1)
					{
						if (Global_2672169[iVar0 /*17*/].f_12)
						{
							*uParam0 = { Global_2672169[iVar0 /*17*/].f_13 };
						}
						else
						{
							Var1 = { *uParam0 };
							__LIB_1__::func_566(&Var1, &(Global_2672169[iVar0 /*17*/]), 1036831949, 0, bParam3);
							if (func_741(&Var1, 0, 0, 0, 1))
							{
								Var1 = { *uParam0 };
								__LIB_1__::func_566(&Var1, &(Global_2672169[iVar0 /*17*/]), 1036831949, 1, 0);
							}
							*uParam0 = { Var1 };
						}
					}
					return 1;
				}
			}
		}
		iVar0++;
	}
	return 0;
}

int func_742(var uParam0, var uParam1, var uParam2)//Position - 0x710AB
{
	int iVar0;
	int iVar1;
	int iVar2;
	struct<3> Var3;
	float fVar4;
	int iVar5;
	int iVar6;
	bool bVar7;
	int iVar8;
	float fVar9;
	bool bVar10;
	int iVar11;
	float fVar12;
	struct<3> Var13;
	var uVar14;
	if (Global_2667225.f_1754 > 0)
	{
		iVar1 = 0;
		iVar2 = 0;
		if (!SYSTEM::VMAG(uParam2->f_35) > 0f)
		{
			uParam2->f_35 = { *uParam0 };
		}
		if (uParam2->f_15)
		{
			if (func_738(uParam2->f_35, uParam0, &(uParam2->f_38), &(uParam2->f_45), 1, 1))
			{
				uParam2->f_6 = 9999.9f;
				uParam2->f_7 = 9999.9f;
			}
		}
		if (uParam2->f_48)
		{
			if (__LIB_1__::func_572(uParam0, 1))
			{
				uParam2->f_6 = 9999.9f;
				uParam2->f_7 = 9999.9f;
			}
		}
		if (uParam0->f_2 < -80f)
		{
			uParam2->f_6 = 9999.9f;
			uParam2->f_7 = 9999.9f;
		}
		Global_2674786.f_162 = 0;
		Global_2674786.f_163 = 0;
		iVar5 = 0;
		while (iVar5 < 40)
		{
			Global_2674786[iVar5 /*3*/] = { 0f, 0f, 0f };
			Global_2674786.f_121[iVar5] = 0f;
			iVar5++;
		}
		if (uParam2->f_30)
		{
			__LIB_1__::func_454(*uParam0);
		}
		else if (uParam2->f_29)
		{
			__LIB_0__::func_838();
		}
		else
		{
			__LIB_0__::func_837();
		}
		iVar1 = 0;
		while (iVar1 < Global_2667225.f_1754)
		{
			iVar2 = Global_2667225.f_2160[iVar1];
			if (iVar2 > -1 && iVar2 < 101)
			{
				Var3 = { Global_2667225.f_1755[iVar2 /*4*/] };
				fVar4 = Global_2667225.f_1755[iVar2 /*4*/].f_3;
				if (SYSTEM::VMAG(Var3) > 0f)
				{
					if ((uParam2->f_57 && SYSTEM::VDIST(Var3, uParam2->f_35) > uParam2->f_4) || uParam2->f_57 == 0)
					{
						if ((uParam2->f_5 > 0f && SYSTEM::VDIST(Var3.f_0, Var3.f_1, 0f, uParam2->f_35, uParam2->f_35.f_1, 0f) < uParam2->f_5) || uParam2->f_5 <= 0f)
						{
							if ((uParam2->f_12 && !__LIB_10__::func_743(Var3, fVar4, uParam2->f_34, PLAYER::PLAYER_ID(), 0, uParam2->f_56)) || !uParam2->f_12)
							{
								if (!uParam2->f_15 || !func_738(uParam2->f_35, &Var3, &(uParam2->f_38), &(uParam2->f_45), 0, 1))
								{
									if (uParam2->f_8)
									{
										iVar6 = uParam2->f_31;
										bVar7 = true;
										iVar8 = 1;
										fVar9 = uParam2->f_49;
										if (!uParam2->f_55)
										{
											iVar6 = 0;
											bVar7 = false;
											iVar8 = 0;
											fVar9 = 1f;
										}
										else if (uParam2->f_17)
										{
											iVar6 = 0;
											bVar7 = false;
											iVar8 = 0;
											if (uParam2->f_33 == 1)
											{
												fVar9 = (fVar9 * 0.375f);
											}
										}
										else
										{
											bVar7 = true;
											iVar8 = 1;
											if (uParam2->f_28)
											{
												if (uParam2->f_33 == 1)
												{
													fVar9 = (fVar9 * 0.375f);
												}
											}
										}
										bVar10 = false;
										if (!__LIB_2__::func_989(Var3, fVar4, uParam2->f_34))
										{
											if (uParam2->f_3 > 7f)
											{
												if (__LIB_2__::func_992(Var3, 6f, 1f, 1f, 5f, iVar6, bVar7, iVar8, fVar9, uParam2->f_58, -1, 1, uParam2->f_3, 0, 0, 0, 0))
												{
													bVar10 = true;
												}
											}
											else if (__LIB_2__::func_992(Var3, 6f, 1f, 1f, 5f, iVar6, bVar7, iVar8, fVar9, uParam2->f_58, -1, 1, 0f, 0, 0, 0, 0) && !__LIB_2__::func_986(Var3, fVar4, uParam2->f_34, 1, 1, 0, 0, uParam2->f_58, 0))
											{
												bVar10 = true;
											}
										}
										if (bVar10)
										{
											if ((uParam2->f_29 || uParam2->f_30) || uParam2->f_52)
											{
												fVar12 = 0f;
												if (uParam2->f_52)
												{
													iVar11 = __LIB_1__::func_575(Var3, uParam2->f_54, &fVar12);
												}
												if (!uParam2->f_52 || (uParam2->f_52 && iVar11 <= uParam2->f_53))
												{
													if (uParam2->f_52)
													{
														if (iVar11 < uParam2->f_53)
														{
															iVar5 = 0;
															while (iVar5 < Global_2674786.f_162)
															{
																Global_2674786[iVar5 /*3*/] = { 0f, 0f, 0f };
																Global_2674786.f_121[iVar5] = 0f;
																iVar5++;
															}
															Global_2674786.f_162 = 0;
															uParam2->f_53 = iVar11;
														}
													}
													if (uParam2->f_30)
													{
														if (Global_2674786.f_162 == 0)
														{
															Global_2674786[0 /*3*/] = { Var3 };
															Global_2674786.f_121[0] = fVar4;
														}
														else
														{
															iVar5 = 0;
															while (iVar5 < Global_2674786.f_162 + 1)
															{
																if (iVar5 < 40)
																{
																	if (SYSTEM::VDIST2(Var3, uParam2->f_35) < SYSTEM::VDIST2(Global_2674786[iVar5 /*3*/], uParam2->f_35))
																	{
																		func_706(Var3, fVar4, iVar5);
																		iVar5 = Global_2674786.f_162 + 1;
																	}
																}
																iVar5++;
															}
														}
														Global_2674786.f_162++;
														if (Global_2674786.f_162 >= 5)
														{
															if ((uParam2->f_52 && uParam2->f_53 == 0) || uParam2->f_52 == 0)
															{
																iVar1 = Global_2667225.f_1754;
															}
															else if (Global_2674786.f_162 == 40)
															{
																iVar1 = Global_2667225.f_1754;
															}
														}
													}
													else
													{
														Global_2674786[Global_2674786.f_162 /*3*/] = { Var3 };
														Global_2674786.f_121[Global_2674786.f_162] = fVar4;
														Global_2674786.f_162++;
														if (Global_2674786.f_162 >= 10)
														{
															if ((uParam2->f_52 && uParam2->f_53 == 0) || uParam2->f_52 == 0)
															{
																iVar1 = Global_2667225.f_1754;
															}
															else if (Global_2674786.f_162 == 40)
															{
																iVar1 = Global_2667225.f_1754;
															}
														}
													}
												}
											}
											else
											{
												*uParam0 = { Var3 };
												*uParam1 = fVar4;
												return 1;
											}
										}
									}
									else
									{
										*uParam0 = { Var3 };
										*uParam1 = fVar4;
										return 1;
									}
								}
							}
						}
					}
				}
			}
			iVar1++;
		}
		if (Global_2674786.f_162 > 0)
		{
			if (uParam2->f_30)
			{
				*uParam0 = { Global_2674786[0 /*3*/] };
				*uParam1 = Global_2674786.f_121[0];
				return 1;
			}
			else
			{
				if (Global_2674786.f_163 > 0 && !Global_2674786.f_163 == Global_2674786.f_162)
				{
					func_704(0, uParam2);
				}
				iVar0 = MISC::GET_RANDOM_INT_IN_RANGE(0, Global_2674786.f_162);
				Var13 = { Global_2674786[0 /*3*/] };
				uVar14 = Global_2674786.f_121[0];
				Global_2674786[0 /*3*/] = { Global_2674786[iVar0 /*3*/] };
				Global_2674786.f_121[0] = Global_2674786.f_121[iVar0];
				Global_2674786[iVar0 /*3*/] = { Var13 };
				Global_2674786.f_121[iVar0] = uVar14;
				*uParam0 = { Global_2674786[0 /*3*/] };
				*uParam1 = Global_2674786.f_121[0];
				return 1;
			}
		}
		else
		{
			uParam2->f_33++;
			if (uParam2->f_33 < 2)
			{
				return 0;
			}
			else if (uParam2->f_59 && Global_2667225.f_1754 > 0)
			{
				iVar0 = MISC::GET_RANDOM_INT_IN_RANGE(0, Global_2667225.f_1754);
				*uParam0 = { Global_2667225.f_1755[iVar0 /*4*/] };
				*uParam1 = Global_2667225.f_1755[iVar0 /*4*/].f_3;
				return 1;
			}
			else
			{
				return 0;
			}
		}
	}
	return 0;
}

int func_789(struct<3> Param0)//Position - 0x7A41D
{
	int iVar0;
	struct<3> Var1;
	if (!Global_2667225.f_515 && !Global_2667225.f_516)
	{
		if (!Global_2667225.f_45.f_317)
		{
			if (!__LIB_1__::func_455(PLAYER::PLAYER_ID(), 1))
			{
				return 1;
			}
			if (!__LIB_1__::func_560(Param0, 1008981770))
			{
				if (!func_741(&Param0, 0, 0, 0, 1))
				{
					return 1;
				}
				else if (func_741(&Param0, 0, 1, 0, 1))
				{
					return 1;
				}
			}
			else
			{
				iVar0 = __LIB_1__::func_559(Param0, 1008981770);
				if (iVar0 > -1)
				{
					Var1 = { __LIB_0__::func_852(&(Global_2667225.f_45[iVar0 /*12*/])) };
					if (!func_741(&Var1, 0, 0, 0, 1))
					{
						if (!func_741(&Param0, 0, 0, 0, 1))
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

void func_832(int iParam0)//Position - 0x7E8F9
{
	if (ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
	}
	if (!ENTITY::IS_ENTITY_A_MISSION_ENTITY(iParam0))
	{
		if (NETWORK::NETWORK_GET_ENTITY_IS_LOCAL(iParam0))
		{
			ENTITY::SET_ENTITY_AS_MISSION_ENTITY(iParam0, false, true);
		}
	}
	ENTITY::SET_ENTITY_VISIBLE(iParam0, false, false);
	ENTITY::FREEZE_ENTITY_POSITION(iParam0, true);
	func_882(iParam0);
	__LIB_2__::func_640(iParam0);
	Global_1585234 = iParam0;
	if (Global_2667225.f_45.f_172)
	{
		__LIB_30__::func_522(iParam0, 1);
	}
	else
	{
		__LIB_11__::func_274(iParam0, __LIB_0__::func_819(PLAYER::PLAYER_ID()));
	}
	if (ENTITY::DOES_ENTITY_EXIST(iParam0))
	{
	}
	Global_2667225.f_45.f_176 = 1;
}

int func_864(var uParam0)//Position - 0x7F94E
{
	int iVar0;
	bool bVar1;
	int iVar2;
	int iVar3;
	bool bVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	if ((((Global_4718592 == 0 && Global_1853348[PLAYER::PLAYER_ID() /*834*/].f_96.f_28 < 4) && Global_1853348[PLAYER::PLAYER_ID() /*834*/].f_96.f_28 > -1) && BitTest(Global_4718592.f_658[Global_1853348[PLAYER::PLAYER_ID() /*834*/].f_96.f_28 /*22957*/].f_12181, 8)) && !Global_1574964)
	{
		if (__LIB_2__::func_644())
		{
			iVar2 = __LIB_2__::func_642(__LIB_2__::func_643());
			if (iVar2 > -1)
			{
				iVar3 = NETWORK::NETWORK_GET_PLAYER_INDEX(PLAYER::INT_TO_PARTICIPANTINDEX(iVar2));
				*uParam0 = iVar3;
			}
			if (*uParam0 != __LIB_0__::func_162() && NETWORK::NETWORK_IS_PLAYER_ACTIVE(*uParam0))
			{
				return 1;
			}
			else
			{
				return 0;
			}
		}
		else
		{
			if (!BitTest(Global_4718592.f_658[Global_1853348[PLAYER::PLAYER_ID() /*834*/].f_96.f_28 /*22957*/].f_12181, 10))
			{
				return 0;
			}
			iVar0 = 0;
			while (iVar0 <= 5)
			{
				iVar5 = __LIB_2__::func_642(iVar0);
				if (iVar5 > -1)
				{
					iVar6 = PLAYER::INT_TO_PARTICIPANTINDEX(iVar5);
					if (NETWORK::NETWORK_IS_PARTICIPANT_ACTIVE(iVar6))
					{
						iVar7 = NETWORK::NETWORK_GET_PLAYER_INDEX(iVar6);
						if (!__LIB_0__::func_972(iVar7, 0, 0) && !PED::IS_PED_INJURED(PLAYER::GET_PLAYER_PED(iVar7)))
						{
							*uParam0 = iVar7;
							bVar4 = true;
						}
						else
						{
							iVar0++;
						}
						if (bVar4)
						{
							return 1;
						}
						else
						{
							return 0;
						}
						Jump @555; //curOff = 335
						if (!__LIB_1__::func_837())
						{
							iVar0 = 0;
							while (iVar0 < 32)
							{
								bVar1 = iVar0;
								if (NETWORK::NETWORK_IS_PLAYER_ACTIVE(bVar1))
								{
									if (__LIB_0__::func_156(bVar1, 0, 1))
									{
										if (!bVar1 == PLAYER::PLAYER_ID())
										{
											if (PLAYER::GET_PLAYER_TEAM(bVar1) == PLAYER::GET_PLAYER_TEAM(PLAYER::PLAYER_ID()))
											{
												if (NETWORK::NETWORK_ARE_PLAYERS_IN_SAME_TUTORIAL_SESSION(PLAYER::PLAYER_ID(), bVar1))
												{
													*uParam0 = bVar1;
													return 1;
												}
											}
										}
									}
								}
								iVar0++;
							}
							*uParam0 = -1;
						}
						else
						{
							iVar0 = 0;
							while (iVar0 < 32)
							{
								bVar1 = iVar0;
								if (NETWORK::NETWORK_IS_PLAYER_ACTIVE(bVar1))
								{
									if (__LIB_0__::func_156(bVar1, 0, 1))
									{
										if (!bVar1 == PLAYER::PLAYER_ID())
										{
											if (func_865(bVar1) && PLAYER::GET_PLAYER_TEAM(bVar1) == PLAYER::GET_PLAYER_TEAM(PLAYER::PLAYER_ID()))
											{
												if (NETWORK::NETWORK_ARE_PLAYERS_IN_SAME_TUTORIAL_SESSION(PLAYER::PLAYER_ID(), bVar1))
												{
													*uParam0 = bVar1;
													return 1;
												}
											}
										}
									}
								}
								iVar0++;
							}
							*uParam0 = -1;
						}
						return 0;
					}
int func_865(bool bParam0)//Position - 0x7FB7D
{
	if ((MISC::GET_FRAME_COUNT() % 5) == 0)
	{
	}
	if (!Global_2667225.f_2664 == -1)
	{
		if (BitTest(Global_2667225.f_2665, bParam0))
		{
			return 1;
		}
	}
	return 0;
}

int func_870()//Position - 0x7FBF6
{
	bool bVar0;
	if (__LIB_1__::func_837())
	{
		if (func_864(&bVar0))
		{
			if (func_865(bVar0))
			{
				if (!Global_2689235[PLAYER::PLAYER_ID() /*453*/].f_234)
				{
					return 1;
				}
			}
		}
	}
	else if (__LIB_2__::func_644())
	{
		return 1;
	}
	return 0;
}

int func_871()//Position - 0x7FC3B
{
	var uVar0;
	if (__LIB_2__::func_645() || ((((Global_4718592 == 0 && Global_1853348[PLAYER::PLAYER_ID() /*834*/].f_96.f_28 < 4) && Global_1853348[PLAYER::PLAYER_ID() /*834*/].f_96.f_28 > -1) && BitTest(Global_4718592.f_658[Global_1853348[PLAYER::PLAYER_ID() /*834*/].f_96.f_28 /*22957*/].f_12181, 8)) && !Global_1574964))
	{
		if (func_864(&uVar0))
		{
			return 1;
		}
		else
		{
			return 0;
		}
	}
	return 0;
}

int func_878()//Position - 0x7FDEF
{
	bool bVar0;
	var uVar1;
	if (__LIB_2__::func_854())
	{
		if (STREAMING::IS_MODEL_A_VEHICLE(Global_2667225.f_45.f_67))
		{
		}
		if (STREAMING::IS_MODEL_A_VEHICLE(Global_2667225.f_45.f_69.f_66))
		{
		}
		if (func_871())
		{
			if (func_870())
			{
				return 1;
			}
		}
		bVar0 = false;
		if (__LIB_2__::func_870())
		{
			Global_2667225.f_45.f_69.f_66 = Global_1585857[__LIB_1__::func_463() /*142*/].f_66;
			bVar0 = true;
		}
		if (!bVar0)
		{
			if (Global_2667225.f_45.f_68)
			{
				if (ENTITY::DOES_ENTITY_EXIST(Global_2667225.f_2669))
				{
					if (Global_2667225.f_45.f_67 == ENTITY::GET_ENTITY_MODEL(Global_2667225.f_2669) || Global_2667225.f_45.f_67 == 0)
					{
						if (__LIB_0__::func_457(PLAYER::PLAYER_ID()) && !Global_2667225.f_45.f_67 == 0)
						{
							bVar0 = true;
							if (Global_2667225.f_45.f_172)
							{
							}
						}
						else
						{
							Global_2667225.f_45.f_69.f_66 = ENTITY::GET_ENTITY_MODEL(Global_2667225.f_2669);
							__LIB_11__::func_274(Global_2667225.f_2669, __LIB_0__::func_819(PLAYER::PLAYER_ID()));
							bVar0 = true;
						}
					}
				}
			}
		}
		if (Global_2667225.f_45.f_67 == 0 && !bVar0)
		{
			__LIB_2__::func_648();
			VEHICLE::GET_RANDOM_VEHICLE_MODEL_IN_MEMORY(true, &(Global_2667225.f_45.f_69.f_66), &uVar1);
			if (Global_2667225.f_45.f_69.f_66 == 0)
			{
				Global_2667225.f_45.f_69.f_66 = __LIB_2__::func_647();
			}
		}
		else if (!__LIB_2__::func_870())
		{
			if (Global_2667225.f_45.f_172)
			{
				if (!Global_2667225.f_45.f_69.f_66 == Global_2667225.f_45.f_67 && !__LIB_1__::func_663())
				{
					__LIB_2__::func_648();
				}
			}
			else
			{
				Global_2667225.f_45.f_69.f_66 = Global_2667225.f_45.f_67;
			}
		}
		if (!Global_2667225.f_45.f_69.f_66 == 0)
		{
			STREAMING::REQUEST_MODEL(Global_2667225.f_45.f_69.f_66);
			if (STREAMING::HAS_MODEL_LOADED(Global_2667225.f_45.f_69.f_66))
			{
				return 1;
			}
			else
			{
				return 0;
			}
		}
		else
		{
			return 0;
		}
	}
	else
	{
		return 1;
	}
	return 0;
}

void func_882(int iParam0)//Position - 0x800DF
{
	bool bVar0;
	int iVar1;
	float fVar2;
	float fVar3;
	int iVar4;
	struct<3> Var5;
	bVar0 = false;
	if (__LIB_2__::func_917(iParam0, &bVar0))
	{
		VEHICLE::SET_VEHICLE_FIXED(iParam0);
		__LIB_2__::func_659(iParam0);
		VEHICLE::SET_VEHICLE_ENGINE_ON(iParam0, true, true, false);
		VEHICLE::SET_VEHICLE_LIGHTS(iParam0, 3);
		iVar1 = ENTITY::GET_ENTITY_MODEL(iParam0);
		if (VEHICLE::IS_THIS_MODEL_A_CAR(iVar1))
		{
			if (iVar1 == joaat("trophytruck") || iVar1 == joaat("trophytruck2"))
			{
				fVar2 = 2f;
				fVar3 = VEHICLE::GET_VEHICLE_DIRT_LEVEL(iParam0);
				if (fVar3 > fVar2)
				{
					fVar3 = fVar2;
					VEHICLE::SET_VEHICLE_DIRT_LEVEL(iParam0, fVar3);
				}
			}
		}
		if (VEHICLE::IS_THIS_MODEL_A_PLANE(ENTITY::GET_ENTITY_MODEL(iParam0)) || VEHICLE::IS_THIS_MODEL_A_HELI(ENTITY::GET_ENTITY_MODEL(iParam0)))
		{
			VEHICLE::SET_HELI_BLADES_FULL_SPEED(iParam0);
			if (__LIB_10__::func_720(PLAYER::PLAYER_ID()))
			{
				__LIB_10__::func_727(iParam0);
			}
		}
		__LIB_3__::func_208(iParam0);
		if (PLAYER::GET_PLAYER_TEAM(PLAYER::PLAYER_ID()) > -1)
		{
			VEHICLE::SET_VEHICLE_DOORS_LOCKED_FOR_TEAM(iParam0, PLAYER::GET_PLAYER_TEAM(PLAYER::PLAYER_ID()), false);
		}
		if (!PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), iParam0, false))
		{
			func_307(PLAYER::PLAYER_PED_ID(), iParam0, -1, 0);
		}
		if (Global_1836584)
		{
			__LIB_2__::func_654(iParam0);
			VEHICLE::SET_VEHICLE_NO_EXPLOSION_DAMAGE_FROM_DRIVER(iParam0, !__LIB_1__::func_141());
			if (iVar1 == joaat("ruiner2"))
			{
				VEHICLE::SET_VEHICLE_WEAPON_CAN_TARGET_OBJECTS(iParam0, true);
			}
			if (iVar1 == joaat("blazer5"))
			{
				if (VEHICLE::GET_HAS_RETRACTABLE_WHEELS(iParam0))
				{
					if (ENTITY::IS_ENTITY_IN_WATER(iParam0) && !VEHICLE::IS_VEHICLE_ON_ALL_WHEELS(iParam0))
					{
						VEHICLE::SET_WHEELS_RETRACTED_INSTANTLY(iParam0);
						Global_2667225.f_2890 = 1;
					}
					else
					{
						VEHICLE::SET_WHEELS_EXTENDED_INSTANTLY(iParam0);
						Global_2667225.f_2891 = 1;
					}
				}
			}
			if (Global_2667225.f_2892)
			{
				if (iVar1 == joaat("deluxo"))
				{
					__LIB_2__::func_653(iParam0, 1);
					__LIB_2__::func_652(iParam0, 1);
					VEHICLE::SET_SPECIAL_FLIGHT_MODE_RATIO(iParam0, (0.75f - MISC::GET_FRAME_TIME()));
					VEHICLE::SET_SPECIAL_FLIGHT_MODE_TARGET_RATIO(iParam0, 1f);
					Global_2667225.f_2892 = 0;
				}
				else if (iVar1 == joaat("stromberg") && ENTITY::IS_ENTITY_IN_WATER(iParam0))
				{
					VEHICLE::TRANSFORM_TO_SUBMARINE(iParam0, true);
					Global_2667225.f_2892 = 0;
				}
			}
			if (__LIB_2__::func_651(ENTITY::GET_ENTITY_MODEL(iParam0)))
			{
				if (Global_2667225.f_2894)
				{
					VEHICLE::SET_VEHICLE_FLIGHT_NOZZLE_POSITION_IMMEDIATE(iParam0, 1f);
					VEHICLE::SET_VEHICLE_FLIGHT_NOZZLE_POSITION(iParam0, 1f);
					VEHICLE::SET_VEHICLE_FORWARD_SPEED(iParam0, 0f);
				}
				else
				{
					VEHICLE::SET_VEHICLE_FLIGHT_NOZZLE_POSITION(iParam0, 0f);
					VEHICLE::SET_VEHICLE_FLIGHT_NOZZLE_POSITION_IMMEDIATE(iParam0, 0f);
					VEHICLE::SET_VEHICLE_FLIGHT_NOZZLE_POSITION(iParam0, 0f);
					Global_2667225.f_2895 = 1;
					Global_2667225.f_2896 = MISC::GET_FRAME_COUNT();
					VEHICLE::SET_DISABLE_VERTICAL_FLIGHT_MODE_TRANSITION(iParam0, true);
				}
				VEHICLE::CONTROL_LANDING_GEAR(iParam0, 3);
			}
			if (iVar1 == joaat("submersible") || iVar1 == joaat("submersible2"))
			{
				if (BitTest(Global_4718592.f_26, 25))
				{
					if (ENTITY::DOES_ENTITY_EXIST(iParam0))
					{
						__LIB_2__::func_650(iParam0);
					}
				}
			}
		}
		if (Global_1836588)
		{
			VEHICLE::SET_VEHICLE_ENGINE_CAN_DEGRADE(iParam0, false);
		}
		STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(ENTITY::GET_ENTITY_MODEL(iParam0));
		if (__LIB_0__::func_492(PLAYER::PLAYER_ID()) == 189)
		{
			if (DECORATOR::DECOR_IS_REGISTERED_AS_TYPE("MPBitset", 3))
			{
				if (DECORATOR::DECOR_EXIST_ON(iParam0, "MPBitset"))
				{
					iVar4 = DECORATOR::DECOR_GET_INT(iParam0, "MPBitset");
				}
				MISC::SET_BIT(&iVar4, 11);
				DECORATOR::DECOR_SET_INT(iParam0, "MPBitset", iVar4);
			}
		}
		if (BitTest(Global_4718592.f_18, 24) || (__LIB_2__::func_649() && NETWORK::NETWORK_IS_ACTIVITY_SESSION()))
		{
			VEHICLE::SET_BIKE_EASY_TO_LAND(iParam0, true);
		}
	}
	if (bVar0)
	{
		ENTITY::SET_VEHICLE_AS_NO_LONGER_NEEDED(&iParam0);
	}
	Global_2667225.f_2692 = { Var5 };
}

int func_910(var uParam0, var uParam1, int iParam2, bool bParam3, int iParam4, var uParam5, int iParam6, var uParam7, var uParam8, int iParam9, bool bParam10, int iParam11)//Position - 0x81015
{
	bool bVar0;
	bool bVar1;
	struct<3> Var2;
	float fVar3;
	bVar0 = false;
	bVar1 = false;
	if (!__LIB_0__::func_114())
	{
		if (!__LIB_0__::func_855(PLAYER::PLAYER_ID()) && !Global_2689235[PLAYER::PLAYER_ID() /*453*/] == 10)
		{
			return 0;
		}
	}
	if (!Global_2667225.f_676 == 0 && NETWORK::GET_TIME_DIFFERENCE(NETWORK::GET_NETWORK_TIME(), Global_2667225.f_679) < __LIB_0__::func_853(0))
	{
		Global_2667225.f_680 = MISC::GET_FRAME_COUNT();
		return 0;
	}
	if (bParam10)
	{
		if (STREAMING::IS_PLAYER_SWITCH_IN_PROGRESS())
		{
			bParam10 = false;
		}
	}
	if (!SCRIPT::GET_ID_OF_THIS_THREAD() == Global_2667225.f_612)
	{
		if (!Global_2667225.f_606 == 0)
		{
			if (NETWORK::GET_TIME_DIFFERENCE(NETWORK::GET_NETWORK_TIME(), Global_2667225.f_611) < __LIB_0__::func_853(0))
			{
				return 0;
			}
			else
			{
				Global_2667225.f_606 = 0;
			}
		}
	}
	else if (NETWORK::GET_TIME_DIFFERENCE(NETWORK::GET_NETWORK_TIME(), Global_2667225.f_609) > 30000)
	{
		Global_2667225.f_606 = 0;
	}
	if (Global_2667225.f_606 == 0)
	{
		Global_2667225.f_607 = 0;
		Global_2667225.f_608 = 0;
		Global_2667225.f_659 = 0;
		Global_2667225.f_609 = NETWORK::GET_NETWORK_TIME();
		Global_2667225.f_612 = SCRIPT::GET_ID_OF_THIS_THREAD();
		Global_2667225.f_606 = 1;
		Global_2667225.f_611 = NETWORK::GET_NETWORK_TIME();
		Global_2667225.f_2697 = uParam5;
		Global_2667225.f_2735 = 0;
		__LIB_0__::func_851();
		if (bParam10)
		{
			__LIB_0__::func_854();
		}
	}
	switch (Global_2667225.f_606)
	{
		case 1:
			if (func_919(&(Global_2667225.f_623), iParam2, bParam3, iParam4, iParam6, uParam7, uParam8, iParam11))
			{
				if (Global_2667225.f_489 == 11 || Global_2667225.f_2697)
				{
					bVar0 = true;
				}
				else
				{
					__LIB_10__::func_729(Global_2667225.f_623, &(Global_2667225.f_660), iParam9, Global_2667225.f_489 == 37, iParam11);
					Global_2667225.f_657 = 0;
					Global_2667225.f_658 = 0;
					Global_2667225.f_610 = NETWORK::GET_NETWORK_TIME();
					Global_2667225.f_609 = NETWORK::GET_NETWORK_TIME();
					Global_2667225.f_606 = 2;
				}
			}
			break;
		case 2:
			if (Global_2667225.f_657)
			{
				if (Global_2667225.f_661 == Global_2667225.f_660)
				{
					if (Global_2667225.f_658 && !Global_2667225.f_659 == -1)
					{
						if (((Global_2667225.f_518 && !__LIB_10__::func_714()) && __LIB_10__::func_721(Global_2676213, Global_2676213.f_4, &Var2, 1)) && Global_2667225.f_2735 == 0)
						{
							func_692(Global_2667225.f_623[Global_2667225.f_659 /*3*/], 0);
							__LIB_2__::func_662(-1);
						}
						else if (bParam10)
						{
							if (iParam11 != 0)
							{
								bVar1 = __LIB_2__::func_765(Global_2667225.f_623[Global_2667225.f_659 /*3*/], Global_2667225.f_623.f_16[Global_2667225.f_659], iParam11, 1, 0.5f);
								if (!bVar1)
								{
									bVar0 = true;
								}
							}
							else
							{
								if (bParam3)
								{
									fVar3 = 2f;
								}
								else
								{
									fVar3 = 0.3f;
								}
								bVar1 = __LIB_2__::func_873(Global_2667225.f_623[Global_2667225.f_659 /*3*/], fVar3);
								if (!bVar1)
								{
									bVar0 = true;
								}
							}
							if (bVar1)
							{
								Global_2667225.f_606 = 3;
								Global_2667225.f_700 = NETWORK::GET_NETWORK_TIME_ACCURATE();
							}
						}
						else
						{
							bVar0 = true;
						}
					}
					else
					{
						func_911(&(Global_2667225.f_623));
						__LIB_2__::func_662(-1);
					}
				}
				else
				{
					Global_2667225.f_657 = 0;
					Global_2667225.f_658 = 0;
					Global_2667225.f_659 = -1;
				}
			}
			else if (NETWORK::GET_TIME_DIFFERENCE(NETWORK::GET_NETWORK_TIME(), Global_2667225.f_610) > 3000 || NETWORK::GET_TIME_DIFFERENCE(NETWORK::GET_NETWORK_TIME(), Global_2667225.f_610) < 0)
			{
				if (Global_2667225.f_608 < 3)
				{
					Global_2667225.f_608++;
					Global_2667225.f_606 = 1;
				}
				else
				{
					Global_2667225.f_606 = 4;
				}
			}
			break;
		case 3:
			if (bParam10)
			{
				if (NETWORK::GET_TIME_DIFFERENCE(NETWORK::GET_NETWORK_TIME(), Global_2667225.f_700) < 10000)
				{
					if (NETWORK::NETWORK_ENTITY_AREA_DOES_EXIST(Global_2667225.f_699))
					{
						if (NETWORK::NETWORK_ENTITY_AREA_HAVE_ALL_REPLIED(Global_2667225.f_699))
						{
							if (!NETWORK::NETWORK_ENTITY_AREA_IS_OCCUPIED(Global_2667225.f_699))
							{
								bVar0 = true;
							}
							else
							{
								func_692(Global_2667225.f_623[Global_2667225.f_659 /*3*/], 0);
								__LIB_2__::func_662(-1);
							}
						}
					}
					else
					{
						__LIB_2__::func_662(-1);
					}
				}
				else
				{
					__LIB_2__::func_662(1);
				}
			}
			else
			{
				bVar0 = true;
			}
			break;
		case 4:
			if (func_919(&(Global_2667225.f_623), iParam2, bParam3, iParam4, iParam6, uParam7, uParam8, iParam11))
			{
				Global_2667225.f_606 = 5;
				Global_2667225.f_659 = 0;
			}
			break;
		case 5:
			bVar0 = true;
			break;
	}
	Global_2667225.f_611 = NETWORK::GET_NETWORK_TIME();
	if (bVar0)
	{
		if (Global_2667225.f_489 == 8)
		{
			Global_2667225.f_714.f_503 = Global_2667225.f_714.f_502;
		}
		if (Global_2667225.f_659 == -1)
		{
			Global_2667225.f_659 = 0;
		}
		*uParam0 = { Global_2667225.f_623[Global_2667225.f_659 /*3*/] };
		*uParam1 = Global_2667225.f_623.f_16[Global_2667225.f_659];
		if (Global_2667225.f_45.f_52)
		{
			if (Global_2667225.f_489 == 3 && SYSTEM::VMAG(Global_2667225.f_45.f_49) > 0f)
			{
				if (bParam3)
				{
				}
				else
				{
					Var2 = { Global_2667225.f_45.f_49 - *uParam0 };
					*uParam1 = MISC::GET_HEADING_FROM_VECTOR_2D(Var2.f_0, Var2.f_1);
					if (Global_2667225.f_45.f_53)
					{
						*uParam1 = (*uParam1 + 180f);
					}
					Global_2667225.f_2673 = 1;
				}
			}
		}
		Global_2667225.f_2735 = 0;
		Global_2667225.f_606 = 0;
		__LIB_0__::func_851();
		if (bParam10)
		{
			if (!__LIB_1__::func_603(PLAYER::PLAYER_ID()))
			{
				__LIB_0__::func_854();
			}
		}
		return 1;
	}
	return 0;
}

void func_911(var uParam0)//Position - 0x8159D
{
	int iVar0;
	iVar0 = 0;
	while (iVar0 < 5)
	{
		func_692(*(uParam0[iVar0 /*3*/]), 0);
		iVar0++;
	}
}

int func_919(var uParam0, int iParam1, bool bParam2, int iParam3, int iParam4, var uParam5, var uParam6, int iParam7)//Position - 0x819C9
{
	int iVar0;
	int iVar1;
	bool bVar2;
	float fVar3;
	float fVar4;
	float fVar5;
	float fVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	float fVar10;
	float fVar11;
	float fVar12;
	struct<3> Var13;
	struct<3> Var14;
	int iVar15;
	int iVar16;
	struct<3> Var17;
	struct<34> Var18;
	struct<13> Var19;
	int iVar20;
	struct<3> Var21;
	struct<3> Var22;
	struct<3> Var23;
	struct<3> Var24;
	struct<3> Var25[4];
	var uVar26[4];
	int iVar27[4];
	var uVar28[4];
	float fVar29;
	int iVar30;
	bool bVar31;
	int iVar32;
	int iVar33;
	float fVar34;
	float fVar35;
	float fVar36;
	int iVar37;
	int iVar38;
	bool bVar39;
	int iVar40;
	int iVar41;
	int iVar42;
	var uVar43;
	struct<4> Var44;
	struct<4> Var45;
	int iVar46;
	int iVar47;
	struct<61> Var48;
	int iVar49;
	bVar2 = false;
	Var18 = 5;
	Var18.f_16 = 5;
	Var18.f_22 = 5;
	Var18.f_28 = 5;
	Var19 = 5;
	Var19.f_6 = 5;
	Var19.f_12 = 5;
	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		if (!__LIB_0__::func_156(PLAYER::PLAYER_ID(), 0, 0))
		{
			return 0;
		}
	}
	else
	{
		return 0;
	}
	if (NETWORK::NETWORK_IS_TUTORIAL_SESSION_CHANGE_PENDING())
	{
		return 0;
	}
	if (NETWORK::GET_TIME_DIFFERENCE(NETWORK::GET_NETWORK_TIME(), Global_2667225.f_592) > 60000 || !SCRIPT::GET_ID_OF_THIS_THREAD() == Global_2667225.f_591)
	{
		Global_2667225.f_587 = 0;
		Global_2667225.f_589 = 0;
		Global_2667225.f_667 = 0;
		Global_2667225.f_668 = 0;
		Global_2667225.f_2478 = 0;
		Global_2667225.f_2479 = 0;
		Global_2667225.f_2477 = 0;
	}
	if (iParam1 == 13 || Global_2667225.f_489 == 13)
	{
		if (!Global_2667225.f_2478)
		{
			if (Global_2667225.f_2477 == 0)
			{
				if (__LIB_2__::func_850(Global_2676213, 150f, 1, 1, 0, 0, 0, 0, 0))
				{
					__LIB_10__::func_730(Global_2676213);
					Global_2667225.f_2479 = 0;
					Global_2667225.f_2476 = NETWORK::GET_NETWORK_TIME();
					Global_2667225.f_2477 = 1;
				}
				else
				{
					Global_2667225.f_2479 = 1;
					Global_2667225.f_2478 = 1;
					Global_2667225.f_2477 = 2;
				}
			}
			if (Global_2667225.f_2477 == 1)
			{
				if (NETWORK::GET_TIME_DIFFERENCE(NETWORK::GET_NETWORK_TIME(), Global_2667225.f_2476) > 4000 || Global_2667225.f_2479 == 0)
				{
					Global_2667225.f_2478 = 1;
					Global_2667225.f_2477 = 2;
				}
				else if (Global_2667225.f_2479 == 1)
				{
					Global_2667225.f_2478 = 1;
					Global_2667225.f_2477 = 2;
				}
				else
				{
					return 0;
				}
			}
		}
	}
	if (Global_2667225.f_587 == 0)
	{
		__LIB_2__::func_941();
		Global_2667225.f_592 = NETWORK::GET_NETWORK_TIME();
		Global_2667225.f_591 = SCRIPT::GET_ID_OF_THIS_THREAD();
		Global_2667225.f_701 = 0;
		Global_2667225.f_515 = 0;
		Global_2667225.f_520 = { Global_2667225.f_45.f_49 };
		Global_2667225.f_520.f_3 = Global_2667225.f_45.f_55;
		Global_2667225.f_520.f_4 = Global_2667225.f_45.f_58;
		Global_2667225.f_520.f_30 = __LIB_10__::func_741();
		Global_2667225.f_555.f_16 = Global_2667225.f_45.f_312;
		Global_2667225.f_555.f_15 = Global_2667225.f_45.f_65;
		Global_2667225.f_555.f_30 = Global_2667225.f_45.f_182;
		Global_2667225.f_555.f_25 = 0;
		Global_2667225.f_588 = 0;
		Global_2667225.f_520.f_13[1 /*3*/] = { Global_2667225.f_45.f_313 };
		Global_2667225.f_520.f_20[1] = Global_2667225.f_45.f_316;
		Global_2667225.f_555.f_4 = 125f;
		Global_2667225.f_2673 = 0;
		Global_2667225.f_667 = 0;
		Global_2667225.f_668 = 0;
		Global_2667225.f_590 = 0;
		if (!Global_2667225.f_45.f_52)
		{
			Global_2667225.f_45.f_49 = { 0f, 0f, 0f };
		}
		Global_2667225.f_489 = iParam1;
		if (Global_2667225.f_489 == 0 || __LIB_0__::func_361(PLAYER::PLAYER_ID(), 0))
		{
			Global_2667225.f_489 = func_1156();
		}
		if ((Global_2667225.f_45.f_65 && Global_2667225.f_45.f_304) && Global_2667225.f_489 == 16)
		{
			Global_2667225.f_489 = 5;
		}
		Global_2667225.f_2676 = 0;
		Global_2667225.f_596 = 0f;
		Global_2667225.f_45.f_304 = 0;
		if (__LIB_1__::func_455(PLAYER::PLAYER_ID(), 1))
		{
			Global_2667225.f_555.f_17 = 1;
		}
		else
		{
			Global_2667225.f_555.f_17 = 0;
		}
		Global_2667225.f_518 = 0;
		Global_2667225.f_2674 = 0;
		Global_2667225.f_555.f_27 = 0f;
		Global_2667225.f_2898 = 0f;
		if (Global_2667225.f_489 == 10)
		{
			iVar20 = __LIB_3__::func_380(Global_2676213);
			if (!iVar20 == -1)
			{
				if (__LIB_2__::func_867(iVar20))
				{
					Global_2667225.f_2855 = iVar20;
					Global_2667225.f_489 = 29;
				}
			}
		}
		if (Global_2667225.f_489 == 10)
		{
		}
		if (Global_2667225.f_489 == 10)
		{
			if (__LIB_2__::func_698())
			{
				__LIB_1__::func_633();
				Global_2667225.f_714 = 0;
				Global_2667225.f_714.f_507 = 0;
				Global_2667225.f_1753 = 1;
				Global_2667225.f_714.f_518 = SCRIPT::GET_ID_OF_THIS_THREAD();
				__LIB_2__::func_697(-244.901f, -1872.177f, 26.755f, 320.797f, 1065353216);
				__LIB_2__::func_697(-242.269f, -1874.479f, 26.755f, 320.797f, 1065353216);
				__LIB_2__::func_697(-239.598f, -1876.816f, 26.755f, 320.797f, 1065353216);
				__LIB_2__::func_697(-247.704f, -1869.726f, 26.755f, 320.797f, 1065353216);
				__LIB_2__::func_697(-236.735f, -1879.32f, 26.755f, 320.797f, 1065353216);
				__LIB_2__::func_697(-250.483f, -1867.467f, 26.755f, 320.797f, 1065353216);
				__LIB_2__::func_697(-248.407f, -1872.989f, 26.755f, 320.797f, 1065353216);
				__LIB_2__::func_697(-245.403f, -1875.617f, 26.755f, 320.797f, 1065353216);
				__LIB_2__::func_697(-242.785f, -1877.907f, 26.755f, 320.797f, 1065353216);
				__LIB_2__::func_697(-239.945f, -1880.198f, 26.755f, 320.797f, 1065353216);
				__LIB_2__::func_697(-251.046f, -1870.666f, 26.755f, 320.797f, 1065353216);
				__LIB_2__::func_697(-248.619f, -1876.538f, 26.755f, 320.797f, 1065353216);
				__LIB_2__::func_697(-245.901f, -1878.915f, 26.755f, 320.797f, 1065353216);
				__LIB_2__::func_697(-251.704f, -1873.939f, 26.755f, 320.797f, 1065353216);
				__LIB_2__::func_697(-243.08f, -1881.227f, 26.755f, 320.797f, 1065353216);
				__LIB_2__::func_697(-254.677f, -1871.325f, 26.755f, 320.797f, 1065353216);
				__LIB_2__::func_697(-240.536f, -1883.448f, 26.755f, 320.797f, 1065353216);
				__LIB_2__::func_697(-249.174f, -1880.18f, 26.755f, 320.797f, 1065353216);
				__LIB_2__::func_697(-252.283f, -1877.461f, 26.755f, 320.797f, 1065353216);
				__LIB_2__::func_697(-246.515f, -1882.422f, 26.755f, 320.797f, 1065353216);
				__LIB_2__::func_697(-243.805f, -1884.522f, 26.755f, 320.797f, 1065353216);
				__LIB_2__::func_697(-255.306f, -1874.902f, 26.755f, 320.797f, 1065353216);
				__LIB_2__::func_697(-252.491f, -1881.033f, 26.755f, 320.797f, 1065353216);
				__LIB_2__::func_697(-249.84f, -1883.351f, 26.755f, 320.797f, 1065353216);
				__LIB_2__::func_697(-246.886f, -1885.774f, 26.755f, 320.797f, 1065353216);
				__LIB_2__::func_697(-255.641f, -1878.175f, 26.755f, 320.797f, 1065353216);
				__LIB_2__::func_697(-244.281f, -1887.739f, 26.755f, 320.797f, 1065353216);
				__LIB_2__::func_697(-258.593f, -1875.691f, 26.755f, 320.797f, 1065353216);
				__LIB_2__::func_697(-252.767f, -1884.144f, 26.755f, 320.797f, 1065353216);
				__LIB_2__::func_697(-255.851f, -1881.482f, 26.755f, 320.797f, 1065353216);
				__LIB_2__::func_697(-249.88f, -1886.704f, 26.755f, 320.797f, 1065353216);
				__LIB_2__::func_697(-247.44f, -1888.838f, 26.755f, 320.797f, 1065353216);
				__LIB_2__::func_697(-258.886f, -1878.827f, 26.755f, 320.797f, 1065353216);
				__LIB_2__::func_697(-255.952f, -1884.801f, 26.755f, 320.797f, 1065353216);
				__LIB_2__::func_697(-252.956f, -1887.422f, 26.755f, 320.797f, 1065353216);
				__LIB_2__::func_697(-259.415f, -1881.773f, 26.755f, 320.797f, 1065353216);
				__LIB_2__::func_697(-250.369f, -1889.685f, 26.755f, 320.797f, 1065353216);
				__LIB_2__::func_697(-247.647f, -1892.065f, 26.755f, 320.797f, 1065353216);
				__LIB_2__::func_697(-262.138f, -1879.391f, 26.755f, 320.797f, 1065353216);
				__LIB_2__::func_697(-262.407f, -1882.811f, 26.755f, 320.797f, 1065353216);
				__LIB_2__::func_697(-259.277f, -1885.549f, 26.755f, 320.797f, 1065353216);
				__LIB_2__::func_697(-256.124f, -1888.094f, 26.755f, 320.797f, 1065353216);
				__LIB_2__::func_697(-253.225f, -1890.3f, 26.755f, 320.797f, 1065353216);
				__LIB_2__::func_697(-250.782f, -1892.779f, 26.755f, 320.797f, 1065353216);
				__LIB_2__::func_697(-259.683f, -1889.221f, 26.755f, 320.797f, 1065353216);
				__LIB_2__::func_697(-256.577f, -1891.824f, 26.755f, 320.797f, 1065353216);
				__LIB_2__::func_697(-263.24f, -1886.216f, 26.755f, 320.797f, 1065353216);
				__LIB_2__::func_697(-253.867f, -1894.197f, 26.755f, 320.797f, 1065353216);
				__LIB_2__::func_697(-251.258f, -1896.412f, 26.755f, 320.797f, 1065353216);
				__LIB_2__::func_697(-265.974f, -1883.944f, 26.755f, 320.797f, 1065353216);
				__LIB_2__::func_697(-262.935f, -1890.089f, 26.755f, 320.797f, 1065353216);
				__LIB_2__::func_697(-259.884f, -1892.674f, 26.755f, 320.797f, 1065353216);
				__LIB_2__::func_697(-256.943f, -1895.166f, 26.755f, 320.797f, 1065353216);
				__LIB_2__::func_697(-254.535f, -1897.206f, 26.755f, 320.797f, 1065353216);
				__LIB_2__::func_697(-266.469f, -1887.118f, 26.755f, 320.797f, 1065353216);
				__LIB_2__::func_697(-263.243f, -1893.539f, 26.755f, 320.797f, 1065353216);
				__LIB_2__::func_697(-260.093f, -1896.223f, 26.755f, 320.797f, 1065353216);
				__LIB_2__::func_697(-266.754f, -1890.547f, 26.755f, 320.797f, 1065353216);
				__LIB_2__::func_697(-257.35f, -1898.561f, 26.755f, 320.797f, 1065353216);
				__LIB_2__::func_697(-254.516f, -1900.976f, 26.755f, 320.797f, 1065353216);
				__LIB_2__::func_697(-269.729f, -1888.013f, 26.755f, 320.797f, 1065353216);
				__LIB_2__::func_697(-266.428f, -1894.181f, 26.755f, 320.797f, 1065353216);
				__LIB_2__::func_697(-263.278f, -1896.865f, 26.755f, 320.797f, 1065353216);
				__LIB_2__::func_697(-260.367f, -1899.345f, 26.755f, 320.797f, 1065353216);
				__LIB_2__::func_697(-269.969f, -1891.167f, 26.755f, 320.797f, 1065353216);
				__LIB_2__::func_697(-257.512f, -1901.782f, 26.755f, 320.797f, 1065353216);
				__LIB_2__::func_697(-266.696f, -1897.666f, 26.755f, 320.797f, 1065353216);
				__LIB_2__::func_697(-263.54f, -1900.354f, 26.755f, 320.797f, 1065353216);
				__LIB_2__::func_697(-260.638f, -1902.827f, 26.755f, 320.797f, 1065353216);
				__LIB_2__::func_697(-270.469f, -1894.45f, 26.755f, 320.797f, 1065353216);
				__LIB_2__::func_697(-267.222f, -1901.522f, 26.755f, 320.797f, 1065353216);
				__LIB_2__::func_697(-270.747f, -1898.559f, 26.755f, 320.797f, 1065353216);
				__LIB_2__::func_697(-264.211f, -1904.128f, 26.755f, 320.797f, 1065353216);
				__LIB_2__::func_697(-260.75f, -1907.078f, 26.755f, 320.797f, 1065353216);
				__LIB_2__::func_697(-274.372f, -1895.47f, 26.755f, 320.797f, 1065353216);
				__LIB_2__::func_697(-271.19f, -1902.058f, 26.755f, 320.797f, 1065353216);
				__LIB_2__::func_697(-268.033f, -1904.748f, 26.755f, 320.797f, 1065353216);
				__LIB_2__::func_697(-264.135f, -1908.07f, 26.755f, 320.797f, 1065353216);
				__LIB_2__::func_697(-275.113f, -1898.959f, 26.755f, 320.797f, 1065353216);
				__LIB_2__::func_697(-271.775f, -1906.207f, 26.755f, 320.797f, 1065353216);
				Global_2667225.f_489 = 8;
				bVar39 = true;
			}
		}
		if (Global_2667225.f_489 == 47)
		{
			__LIB_1__::func_633();
			Global_2667225.f_714 = 0;
			Global_2667225.f_714.f_507 = 0;
			Global_2667225.f_1753 = 1;
			Global_2667225.f_714.f_518 = SCRIPT::GET_ID_OF_THIS_THREAD();
			__LIB_2__::func_697(975.7955f, 89.2188f, 79.9907f, 240.1994f, 1065353216);
			__LIB_2__::func_697(974.2166f, 85.8614f, 79.9907f, 240.1994f, 1065353216);
			__LIB_2__::func_697(971.4763f, 91.6587f, 79.9907f, 240.1994f, 1065353216);
			__LIB_2__::func_697(966.8154f, 94.2058f, 79.9907f, 240.1994f, 1065353216);
			__LIB_2__::func_697(963.103f, 96.5164f, 79.9907f, 240.1994f, 1065353216);
			__LIB_2__::func_697(969.834f, 88.5924f, 79.9907f, 240.1994f, 1065353216);
			__LIB_2__::func_697(968.1555f, 85.3428f, 79.9886f, 327.1991f, 1065353216);
			__LIB_2__::func_697(965.324f, 82.3137f, 79.783f, 327.1991f, 1065353216);
			__LIB_2__::func_697(960.2003f, 80.9701f, 79.7694f, 267.1988f, 1065353216);
			__LIB_2__::func_697(953.6874f, 82.8776f, 79.7694f, 243.1988f, 1065353216);
			__LIB_2__::func_697(947.6548f, 86.1658f, 79.7688f, 243.1988f, 1065353216);
			__LIB_2__::func_697(946.0387f, 82.9043f, 79.7687f, 243.1988f, 1065353216);
			__LIB_2__::func_697(944.2261f, 88.6068f, 79.7694f, 243.1988f, 1065353216);
			__LIB_2__::func_697(939.5576f, 94.646f, 78.3392f, 229.9987f, 1065353216);
			__LIB_2__::func_697(935.759f, 96.2394f, 78.2388f, 229.9987f, 1065353216);
			__LIB_2__::func_697(944.3122f, 79.7098f, 79.7572f, 323.1983f, 1065353216);
			__LIB_2__::func_697(941.9835f, 75.9773f, 79.615f, 323.1983f, 1065353216);
			__LIB_2__::func_697(939.4975f, 71.6506f, 79.4041f, 323.1983f, 1065353216);
			__LIB_2__::func_697(936.4024f, 66.9599f, 79.1841f, 323.1983f, 1065353216);
			__LIB_2__::func_697(942.0676f, 92.2227f, 78.9701f, 215.598f, 1065353216);
			__LIB_2__::func_697(927.3275f, 77.3361f, 77.7679f, 321.5972f, 1065353216);
			__LIB_2__::func_697(925.1186f, 73.9533f, 78.0651f, 321.5972f, 1065353216);
			__LIB_2__::func_697(922.8524f, 70.4011f, 78.7589f, 321.5972f, 1065353216);
			__LIB_2__::func_697(920.554f, 66.8094f, 79.4079f, 321.5972f, 1065353216);
			__LIB_2__::func_697(963.9402f, 100.739f, 79.9907f, 148.5968f, 1065353216);
			__LIB_2__::func_697(965.7116f, 103.4286f, 79.9907f, 148.5968f, 1065353216);
			__LIB_2__::func_697(967.3428f, 106.3218f, 79.9907f, 148.5968f, 1065353216);
			__LIB_2__::func_697(969.3038f, 109.405f, 79.9907f, 148.5968f, 1065353216);
			__LIB_2__::func_697(971.3239f, 112.691f, 79.9907f, 148.5968f, 1065353216);
			__LIB_2__::func_697(973.8073f, 116.3687f, 79.9907f, 148.5968f, 1065353216);
			Global_2667225.f_489 = 8;
			bVar39 = true;
		}
		if (Global_2667225.f_489 == 52)
		{
			__LIB_1__::func_633();
			Global_2667225.f_714 = 0;
			Global_2667225.f_714.f_507 = 0;
			Global_2667225.f_1753 = 1;
			Global_2667225.f_714.f_518 = SCRIPT::GET_ID_OF_THIS_THREAD();
			__LIB_2__::func_697(4915.7783f, -4909.681f, 2.3612f, 103.8461f, 1065353216);
			__LIB_2__::func_697(4909.4385f, -4906.013f, 2.3634f, 109.708f, 1065353216);
			__LIB_2__::func_697(4904.6245f, -4901.7183f, 2.3729f, 137.2815f, 1065353216);
			__LIB_2__::func_697(4917.557f, -4913.6855f, 2.3654f, 91.1262f, 1065353216);
			__LIB_2__::func_697(4907.624f, -4916.6104f, 2.3844f, 77.3005f, 1065353216);
			__LIB_2__::func_697(4908.8486f, -4927.182f, 2.3643f, 97.1531f, 1065353216);
			__LIB_2__::func_697(4904.1626f, -4933.243f, 2.3827f, 191.0743f, 1065353216);
			__LIB_2__::func_697(4899.703f, -4939.501f, 2.3622f, 91.3685f, 1065353216);
			__LIB_2__::func_697(4891.084f, -4934.5527f, 2.371f, 6.1066f, 1065353216);
			__LIB_2__::func_697(4895.8794f, -4930.5977f, 2.3695f, 21.2846f, 1065353216);
			__LIB_2__::func_697(4899.386f, -4926.6353f, 2.3645f, 21.563f, 1065353216);
			__LIB_2__::func_697(4894.8906f, -4926.3525f, 2.3615f, 359.2048f, 1065353216);
			__LIB_2__::func_697(4890.1616f, -4923.4365f, 2.3687f, 331.7434f, 1065353216);
			__LIB_2__::func_697(4895.319f, -4919.933f, 2.3677f, 350.2109f, 1065353216);
			__LIB_2__::func_697(4893.8384f, -4915.3374f, 2.3677f, 359.7902f, 1065353216);
			__LIB_2__::func_697(4899.7866f, -4914.1606f, 2.3602f, 27.4791f, 1065353216);
			__LIB_2__::func_697(4902.5293f, -4910.4746f, 2.3611f, 49.2944f, 1065353216);
			__LIB_2__::func_697(4891.711f, -4908.211f, 2.3643f, 323.4907f, 1065353216);
			__LIB_2__::func_697(4885.5215f, -4908.0737f, 2.3678f, 269.5604f, 1065353216);
			__LIB_2__::func_697(4887.267f, -4914.138f, 2.3628f, 310.3737f, 1065353216);
			__LIB_2__::func_697(4877.007f, -4914.598f, 2.2139f, 115.4889f, 1065353216);
			__LIB_2__::func_697(4871.36f, -4908.873f, 1.9205f, 105.6631f, 1065353216);
			__LIB_2__::func_697(4867.8022f, -4916.4653f, 1.5922f, 103.4375f, 1065353216);
			__LIB_2__::func_697(4871.824f, -4926.4834f, 2.0005f, 201.6436f, 1065353216);
			__LIB_2__::func_697(4871.41f, -4929.5703f, 1.9024f, 321.9481f, 1065353216);
			__LIB_2__::func_697(4868.713f, -4935.9365f, 1.4152f, 66.3723f, 1065353216);
			__LIB_2__::func_697(4866.783f, -4942.452f, 1.4781f, 77.1681f, 1065353216);
			__LIB_2__::func_697(4863.705f, -4950.777f, 1.4398f, 58.9161f, 1065353216);
			__LIB_2__::func_697(4859.92f, -4941.887f, 0.5639f, 76.0326f, 1065353216);
			__LIB_2__::func_697(4861.563f, -4927.4663f, 0.3028f, 90.8218f, 1065353216);
			__LIB_2__::func_697(4861.4985f, -4916.6597f, 0.3063f, 87.146f, 1065353216);
			__LIB_2__::func_697(4893.1226f, -4902.395f, 2.4867f, 189.5973f, 1065353216);
			__LIB_2__::func_697(4896.938f, -4903.806f, 2.3717f, 152.5383f, 1065353216);
			__LIB_2__::func_697(4927.5137f, -4907.376f, 2.5188f, 114.7115f, 1065353216);
			Global_2667225.f_489 = 8;
			bVar39 = true;
		}
		switch (Global_2667225.f_489)
		{
			case 57:
				__LIB_12__::func_764(&(Global_2667225.f_555), &(Global_2667225.f_555.f_3), 10f);
				bVar2 = true;
				break;
			case 58:
				__LIB_12__::func_763(&(Global_2667225.f_555), &(Global_2667225.f_555.f_3), 10f);
				bVar2 = true;
				break;
			case 9:
				__LIB_11__::func_978(&Global_1574067, &(Global_2667225.f_555), &(Global_2667225.f_555.f_3), 10f);
				bVar2 = true;
				break;
			case 8:
				if (!Global_2667225.f_1753)
				{
					Global_2667225.f_1753 = 1;
				}
				Var19 = { func_1146(bParam2) };
				iVar0 = 0;
				while (iVar0 < 5)
				{
					if (iVar0 == 0)
					{
						if (Var19[iVar0] > -1)
						{
							Global_2667225.f_555 = { Global_2667225.f_714.f_1[Var19[iVar0] /*5*/] };
							Global_2667225.f_555.f_3 = Global_2667225.f_714.f_1[Var19[iVar0] /*5*/].f_3;
							Global_2667225.f_714.f_502 = Var19[0];
							bVar2 = true;
							iParam4 = 1;
							Var18.f_28[iVar0] = Var19.f_12[iVar0];
						}
						else
						{
							Global_2667225.f_555 = { Global_2667225.f_714.f_1[0 /*5*/] };
							Global_2667225.f_555.f_3 = Global_2667225.f_714.f_1[0 /*5*/].f_3;
							Global_2667225.f_520.f_6 = 1;
							Global_2667225.f_555.f_4 = 150f;
						}
					}
					else if (Var19[iVar0] > -1)
					{
						Var18[iVar0 /*3*/] = { Global_2667225.f_714.f_1[Var19[iVar0] /*5*/] };
						Var18.f_16[iVar0] = Global_2667225.f_714.f_1[Var19[iVar0] /*5*/].f_3;
						Var18.f_28[iVar0] = Var19.f_12[iVar0];
					}
					iVar0++;
				}
				if (bVar39)
				{
					__LIB_2__::func_892();
				}
				break;
			case 7:
				Global_2667225.f_555 = { 23.6269f, -17.1858f, 0.0025f };
				Global_2667225.f_555.f_3 = 0f;
				Global_2667225.f_2697 = 1;
				bVar2 = true;
				break;
			case 12:
				__LIB_11__::func_978(&Global_1574100, &(Global_2667225.f_555), &(Global_2667225.f_555.f_3), 1123024896);
				bVar2 = true;
				break;
			case 51:
				__LIB_2__::func_938();
				Global_2667225.f_593 = { Global_2667225.f_512 };
				Var17.f_2 = Global_2667225.f_512.f_2;
				__LIB_2__::func_891(&(Global_2667225.f_512), Global_1574465, Global_1574465.f_1, 0f, Global_1574468, Global_1574471, 1036831949, 1048576000);
				Global_2667225.f_512.f_2 = Var17.f_2;
				if (Global_2667225.f_512.f_2 > 70f)
				{
					Global_2667225.f_512.f_2 = 70f;
				}
				if (Global_2667225.f_512.f_2 < 0f)
				{
					Global_2667225.f_512.f_2 = 0f;
				}
				Var17 = { Global_2667225.f_512 };
				if (Var17.f_2 < 0f)
				{
					Var17.f_2 = 0f;
				}
				Var17.f_2 = (Var17.f_2 + 5f);
				Global_2667225.f_520.f_23 = { 0f, 10000000f, Var17.f_2 };
				Global_2667225.f_520.f_26 = { 0f, -10000000f, 99999.9f };
				Global_2667225.f_520.f_29 = 1E+09f;
				if (__LIB_2__::func_103(PLAYER::PLAYER_ID()))
				{
					Global_2667225.f_596 = Global_2667225.f_45.f_308;
				}
				else
				{
					Global_2667225.f_596 = 30f;
				}
				Global_2667225.f_555 = { Global_2667225.f_512 };
				Global_2667225.f_555.f_18 = { Global_2667225.f_512 };
				Global_2667225.f_555.f_21 = 1;
				Global_2667225.f_520.f_6 = 1;
				Global_2667225.f_555.f_3 = 0f;
				Global_2667225.f_555.f_4 = 0f;
				Global_2667225.f_555.f_7 = 2;
				Global_2667225.f_555.f_8 = { Global_1574465 };
				Global_2667225.f_555.f_11 = { Global_1574468 };
				Global_2667225.f_555.f_14 = Global_1574471;
				Global_2667225.f_555.f_28 = 0;
				Global_2667225.f_520.f_13[0 /*3*/] = { Global_2667225.f_593 };
				Global_2667225.f_520.f_20[0] = Global_2667225.f_596;
				break;
			case 1:
				Var17 = { Global_2667225.f_512 };
				iVar38 = __LIB_1__::func_557(Var17, 0);
				if (iVar38 > -1)
				{
					if (Global_2672169[iVar38 /*17*/].f_9 == 0)
					{
						__LIB_2__::func_693(&Var17, &(Global_2672169[iVar38 /*17*/]), 135f);
					}
				}
				if (Global_2715699.f_6597)
				{
					Var17 = { Global_2715699.f_6598 };
				}
				if (Global_1853348[PLAYER::PLAYER_ID() /*834*/].f_267.f_32 > 0)
				{
					iVar15 = Global_1853348[PLAYER::PLAYER_ID() /*834*/].f_267.f_32;
					Var17 = { Global_1312193[iVar15 /*1951*/].f_3[0 /*3*/] };
				}
				if (Global_1888188 > -1)
				{
					if (__LIB_0__::func_156(Global_1888188, 0, 1))
					{
						if (__LIB_1__::func_551(Global_1888188))
						{
							Global_2667225.f_520.f_13[0 /*3*/] = { __LIB_0__::func_85(Global_1888188) };
							if (!__LIB_1__::func_455(PLAYER::PLAYER_ID(), 1))
							{
								if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::GET_PLAYER_PED(Global_1888188), false))
								{
									Global_2667225.f_520.f_20[0] = 250f;
								}
								else
								{
									Global_2667225.f_520.f_20[0] = 125f;
								}
							}
							else if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::GET_PLAYER_PED(Global_1888188), false))
							{
								Global_2667225.f_520.f_20[0] = 125f;
							}
							else
							{
								Global_2667225.f_520.f_20[0] = 75f;
							}
						}
					}
				}
				iVar0 = 0;
				while (iVar0 < 2)
				{
					if (__LIB_0__::func_828(Var17, Global_2667225.f_520.f_13[iVar0 /*3*/], Global_2667225.f_520.f_20[iVar0], 1, 1))
					{
						__LIB_1__::func_450(&Var17, Global_2667225.f_520.f_13[iVar0 /*3*/], Global_2667225.f_520.f_20[iVar0], 1036831949, 0, 0);
					}
					iVar0++;
				}
				if (OBJECT::IS_POINT_IN_ANGLED_AREA(Var17, Global_2667225.f_520.f_23, Global_2667225.f_520.f_26, Global_2667225.f_520.f_29, false, true))
				{
					__LIB_1__::func_449(&Var17, Global_2667225.f_520.f_23, Global_2667225.f_520.f_26, Global_2667225.f_520.f_29, 1036831949, 0);
				}
				Global_2667225.f_555 = { Var17 };
				Global_2667225.f_555.f_3 = MISC::GET_RANDOM_FLOAT_IN_RANGE(0f, 360f);
				if (Global_2667225.f_45.f_307 > -1f)
				{
					Global_2667225.f_520.f_5 = Global_2667225.f_45.f_307;
				}
				if (__LIB_2__::func_103(PLAYER::PLAYER_ID()))
				{
					Global_2667225.f_596 = Global_2667225.f_45.f_308;
				}
				else
				{
					Global_2667225.f_596 = 40f;
				}
				fVar12 = (Global_2667225.f_520.f_5 - 65f);
				if (fVar12 < 0f)
				{
					fVar12 = 0f;
				}
				if (__LIB_2__::func_103(PLAYER::PLAYER_ID()))
				{
					Global_2667225.f_555.f_4 = (120f + fVar12);
				}
				else
				{
					Global_2667225.f_555.f_4 = (135f + fVar12);
				}
				Global_2667225.f_555.f_4 = ((95f + Global_2667225.f_596) + fVar12);
				if (Global_2667225.f_555.f_4 > 250f)
				{
					Global_2667225.f_555.f_4 = 250f;
				}
				Global_2667225.f_593 = { Global_2667225.f_512 };
				fVar12 = (Global_2667225.f_555.f_4 * 0.5f);
				if (fVar12 < Global_2667225.f_520.f_5)
				{
					fVar12 = Global_2667225.f_520.f_5;
				}
				Var13 = { __LIB_10__::func_740(Global_2667225.f_555, fVar12) };
				if (SYSTEM::VMAG(Var13) > 0f)
				{
					Var13.f_2 = Global_2667225.f_555.f_2;
					Var14 = { Global_2667225.f_555 - Var13 };
					Var14 = { Var14 / FtoV(SYSTEM::VMAG(Var14)) };
					Var14 = { Var14 * Vector(fVar12, fVar12, fVar12) };
					Global_2667225.f_555 = { Global_2667225.f_555 + Var14 };
				}
				if (func_1135(&(Global_2667225.f_555), 1))
				{
				}
				if (NETWORK::NETWORK_IS_ACTIVITY_SESSION())
				{
					iVar42 = __LIB_2__::func_691(&iVar41);
					if (iVar42 < 17)
					{
						if (BitTest(Global_4718592.f_658[iVar41 /*22957*/].f_7965[iVar42], 12) && (!Global_1574981 || BitTest(Global_4718592.f_658[iVar41 /*22957*/].f_7965[iVar42], 13)))
						{
							iVar40 = 1;
						}
					}
				}
				if (__LIB_2__::func_854() || iVar40)
				{
					Global_2667225.f_555.f_4 = 400f;
					Global_2667225.f_596 = 100f;
					bParam2 = true;
				}
				break;
			case 20:
				if (!PLAYER::IS_PLAYER_DEAD(PLAYER::PLAYER_ID()))
				{
					Var14 = { ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true) };
				}
				else
				{
					Var14 = { Global_2667225.f_512 };
				}
				Global_2667225.f_593 = { Var14 };
				Global_2667225.f_596 = 125f;
				if (func_1135(&Var14, 1))
				{
				}
				if (Global_1836579)
				{
					if (Global_1836068.f_14 != __LIB_0__::func_162())
					{
						if (__LIB_0__::func_156(Global_1836068.f_14, 0, 1))
						{
							Global_2667225.f_520.f_13[0 /*3*/] = { __LIB_0__::func_85(Global_1836068.f_14) };
							if (__LIB_2__::func_854())
							{
								Global_2667225.f_520.f_20[0] = 250f;
							}
							else
							{
								Global_2667225.f_520.f_20[0] = 125f;
							}
						}
					}
				}
				iVar0 = 0;
				while (iVar0 < 2)
				{
					if (__LIB_0__::func_828(Var14, Global_2667225.f_520.f_13[iVar0 /*3*/], Global_2667225.f_520.f_20[iVar0], 1, 1))
					{
						__LIB_1__::func_450(&Var14, Global_2667225.f_520.f_13[iVar0 /*3*/], Global_2667225.f_520.f_20[iVar0], 1036831949, 0, 0);
					}
					iVar0++;
				}
				if (OBJECT::IS_POINT_IN_ANGLED_AREA(Var14, Global_2667225.f_520.f_23, Global_2667225.f_520.f_26, Global_2667225.f_520.f_29, false, true))
				{
					__LIB_1__::func_449(&Var14, Global_2667225.f_520.f_23, Global_2667225.f_520.f_26, Global_2667225.f_520.f_29, 1036831949, 0);
				}
				Global_2667225.f_555 = { Var14 };
				Global_2667225.f_555.f_3 = MISC::GET_RANDOM_FLOAT_IN_RANGE(0f, 360f);
				Global_2667225.f_555.f_4 = 250f;
				if (Global_2667225.f_520.f_3)
				{
					if (!INTERIOR::IS_VALID_INTERIOR(INTERIOR::GET_INTERIOR_AT_COORDS(Global_2667225.f_512)))
					{
						Global_2667225.f_520.f_3 = 0;
					}
				}
				if (__LIB_2__::func_854())
				{
					Global_2667225.f_555.f_4 = 400f;
					Global_2667225.f_596 = 100f;
					bParam2 = true;
				}
				break;
			case 2:
				Global_2667225.f_555 = { __LIB_10__::func_717() };
				Global_2667225.f_555.f_3 = MISC::GET_RANDOM_FLOAT_IN_RANGE(0f, 360f);
				break;
			case 26:
				if (!PLAYER::IS_PLAYER_DEAD(PLAYER::PLAYER_ID()))
				{
					iVar9 = __LIB_2__::func_890(__LIB_0__::func_85(PLAYER::PLAYER_ID()));
				}
				else
				{
					iVar9 = __LIB_2__::func_890(Global_2667225.f_512);
				}
				__LIB_2__::func_690(&(Global_2667225.f_45[iVar9 /*12*/]));
				if (!PLAYER::IS_PLAYER_DEAD(PLAYER::PLAYER_ID()))
				{
					Global_2667225.f_555.f_18 = { __LIB_0__::func_85(PLAYER::PLAYER_ID()) };
				}
				else
				{
					Global_2667225.f_555.f_18 = { Global_2667225.f_512 };
				}
				if (__LIB_2__::func_103(PLAYER::PLAYER_ID()))
				{
					Global_2667225.f_596 = Global_2667225.f_45.f_308;
				}
				else
				{
					Global_2667225.f_596 = 40f;
				}
				Global_2667225.f_593 = { Global_2667225.f_555.f_18 };
				Var21 = { Global_2667225.f_555.f_18 };
				switch (Global_2667225.f_45[iVar9 /*12*/].f_10)
				{
					case 0:
						fVar29 = Global_2667225.f_45[iVar9 /*12*/].f_6;
						fVar29 = (fVar29 * 0.5f);
						break;
					case 1:
						fVar29 = SYSTEM::VMAG(Global_2667225.f_45[iVar9 /*12*/] - Global_2667225.f_45[iVar9 /*12*/].f_3);
						fVar29 = (fVar29 * 0.5f);
						fVar29 = (fVar29 * 0.5f);
						break;
					case 2:
						fVar29 = Global_2667225.f_45[iVar9 /*12*/].f_6;
						fVar29 = (fVar29 * 0.5f);
						fVar29 = (fVar29 * 0.5f);
						break;
				}
				if (!__LIB_1__::func_528(Var21, &(Global_2667225.f_45[iVar9 /*12*/]), 1008981770, 0, 0))
				{
					__LIB_3__::func_182(&Var21, &(Global_2667225.f_45[iVar9 /*12*/]), fVar29);
				}
				if (Global_2667225.f_45.f_307 > -1f)
				{
					Global_2667225.f_520.f_5 = Global_2667225.f_45.f_307;
				}
				fVar12 = 1f;
				if (Global_2667225.f_520.f_5 < 200f)
				{
					fVar12 = 1.5f;
				}
				else if (Global_2667225.f_520.f_5 < 300f)
				{
					fVar12 = (1f + (((300f - Global_2667225.f_520.f_5) / 100f) * 0.5f));
				}
				fVar35 = (Global_2667225.f_520.f_5 * fVar12);
				iVar30 = __LIB_1__::func_575(Var21, fVar35, &uVar43);
				if (iVar30 > 0 || Global_2667225.f_555.f_15)
				{
					if (Global_2667225.f_555.f_15)
					{
						Var21 = { __LIB_10__::func_745(Var21, Global_2667225.f_45[iVar9 /*12*/], Global_2667225.f_45[iVar9 /*12*/].f_3, Global_2667225.f_45[iVar9 /*12*/].f_6, Global_2667225.f_45[iVar9 /*12*/].f_10, fVar35, 1, Global_2667225.f_520.f_30, 1, &(Global_2667225.f_555.f_25)) };
						if (!Global_2667225.f_555.f_25)
						{
							Var21 = { __LIB_10__::func_745(Var21, Global_2667225.f_45[iVar9 /*12*/], Global_2667225.f_45[iVar9 /*12*/].f_3, Global_2667225.f_45[iVar9 /*12*/].f_6, Global_2667225.f_45[iVar9 /*12*/].f_10, fVar35, 1, Global_2667225.f_520.f_30, 0, &(Global_2667225.f_555.f_25)) };
						}
						Global_2667225.f_596 = 0f;
						fVar36 = 40f;
					}
					else
					{
						bVar31 = false;
						Var22 = { __LIB_10__::func_739(Var21, fVar35) };
						Var23 = { __LIB_10__::func_738(Var21, fVar35) };
						Var24 = { Var21 - Var22 };
						Var24 = { Var24 / FtoV(SYSTEM::VMAG(Var24)) };
						Var24 = { Var24 * Vector(fVar35, fVar35, fVar35) };
						iVar0 = 0;
						while (iVar0 < 4)
						{
							Var14 = { Var24 };
							__LIB_0__::func_817(&Var14, 0f, 0f, (SYSTEM::TO_FLOAT(iVar0) * 90f));
							Var25[iVar0 /*3*/] = { Var22 + Var14 };
							if (!__LIB_1__::func_528(Var25[iVar0 /*3*/], &(Global_2667225.f_45[iVar9 /*12*/]), 1008981770, 0, 0))
							{
								__LIB_3__::func_182(&(Var25[iVar0 /*3*/]), &(Global_2667225.f_45[iVar9 /*12*/]), 1036831949);
							}
							uVar26[iVar0] = __LIB_1__::func_575(Var25[iVar0 /*3*/], fVar35, &(uVar28[iVar0]));
							Var14 = { Var22 - Var25[iVar0 /*3*/] };
							if (__LIB_0__::func_158(Var14, Var23) < 0f)
							{
								iVar27[iVar0] = 1;
							}
							else
							{
								iVar27[iVar0] = 0;
							}
							iVar0++;
						}
						iVar0 = 0;
						while (iVar0 < 4)
						{
							if ((uVar26[iVar0] == 0 && iVar27[iVar0] == 0) && !bVar31)
							{
								Var21 = { Var25[iVar0 /*3*/] };
								bVar31 = true;
							}
							iVar0++;
						}
						if (!bVar31)
						{
							iVar0 = 0;
							while (iVar0 < 4)
							{
								if (uVar26[iVar0] == 0 && !bVar31)
								{
									Var21 = { Var25[iVar0 /*3*/] };
									bVar31 = true;
								}
								iVar0++;
							}
						}
						if (!bVar31)
						{
							iVar32 = 999;
							iVar33 = -1;
							iVar0 = 0;
							while (iVar0 < 4)
							{
								if (uVar26[iVar0] < iVar32)
								{
									iVar33 = iVar0;
									fVar34 = uVar28[iVar0];
									iVar32 = uVar26[iVar0];
								}
								else if (uVar26[iVar0] == iVar32)
								{
									if (uVar28[iVar0] > fVar34)
									{
										fVar34 = uVar28[iVar0];
										iVar33 = iVar0;
									}
								}
								iVar0++;
							}
							if (!iVar33 == -1 && iVar32 < iVar30)
							{
								Var21 = { Var25[iVar33 /*3*/] };
								bVar31 = true;
							}
						}
						if (!bVar31)
						{
						}
						else
						{
							Global_2667225.f_596 = 0f;
						}
					}
				}
				Global_2667225.f_555.f_18 = { Var21 };
				Global_2667225.f_555.f_21 = 1;
				Global_2667225.f_520.f_6 = 1;
				Global_2667225.f_555.f_3 = MISC::GET_RANDOM_FLOAT_IN_RANGE(0f, 360f);
				break;
			case 3:
				iVar0 = MISC::GET_RANDOM_INT_IN_RANGE(0, __LIB_2__::func_687());
				__LIB_2__::func_690(&(Global_2667225.f_45[iVar0 /*12*/]));
				if (func_741(&(Global_2667225.f_555), 0, 0, 0, 1))
				{
					Global_2667225.f_515 = 1;
				}
				break;
			case 15:
				if (PLAYER::IS_PLAYER_DEAD(PLAYER::PLAYER_ID()))
				{
					Var17 = { Global_2667225.f_512 };
				}
				else
				{
					Var17 = { __LIB_0__::func_85(PLAYER::PLAYER_ID()) };
				}
				if (Global_1853348[PLAYER::PLAYER_ID() /*834*/].f_267.f_32 > 0)
				{
					iVar15 = Global_1853348[PLAYER::PLAYER_ID() /*834*/].f_267.f_32;
					Var17 = { Global_1312193[iVar15 /*1951*/].f_3[0 /*3*/] };
				}
				fVar10 = __LIB_2__::func_686(Var17, &Global_2671974, &iVar7);
				if (__LIB_2__::func_771(0, -1) > 0)
				{
					iVar0 = 0;
					iVar0 = 0;
					while (iVar0 < 29)
					{
						iVar15 = __LIB_2__::func_771(iVar0, -1);
						if (Global_1312193[iVar15 /*1951*/].f_34 == 0 || Global_1312193[iVar15 /*1951*/].f_34 == 3)
						{
							if (fVar11 == 0f || fVar11 > SYSTEM::VDIST(Var17, Global_1312193[iVar15 /*1951*/].f_3[0 /*3*/]))
							{
								fVar11 = SYSTEM::VDIST(Var17, Global_1312193[iVar15 /*1951*/].f_3[0 /*3*/]);
								iVar8 = iVar15;
							}
						}
						else if (fVar11 == 0f)
						{
							fVar11 = 999999.9f;
						}
						iVar0++;
					}
				}
				else
				{
					fVar11 = 999999.9f;
				}
				if (fVar11 < 10000f && fVar11 < fVar10)
				{
					switch (Global_1312193[iVar8 /*1951*/].f_34)
					{
						case 0:
							__LIB_3__::func_394(iVar8, &(Global_2667225.f_555), &(Global_2667225.f_555.f_3));
							Global_2667225.f_2678 = 0;
							break;
						case 1:
							Global_2667225.f_555 = { Global_1312193[iVar8 /*1951*/].f_1742.f_20 };
							Global_2667225.f_555.f_3 = Global_1312193[iVar8 /*1951*/].f_1742.f_23;
							if (Global_2667225.f_607 == 0)
							{
								Global_2667225.f_2678 = 1;
							}
							Global_2667225.f_2697 = 1;
							break;
					}
					bVar2 = true;
					if (Global_2667225.f_607 == 0)
					{
						Global_2667225.f_2677 = 1;
					}
					Global_2667225.f_2676 = 1;
				}
				else if (fVar10 < fVar11)
				{
					if (iVar7 > -1)
					{
						__LIB_2__::func_690(&(Global_2671974[iVar7 /*12*/]));
					}
					else
					{
						__LIB_2__::func_690(&(Global_2671974[0 /*12*/]));
					}
					Global_2667225.f_2696 = 1;
				}
				Global_2667225.f_701 = 1;
				break;
			case 23:
				if (PLAYER::IS_PLAYER_DEAD(PLAYER::PLAYER_ID()))
				{
					Var17 = { Global_2667225.f_512 };
				}
				else
				{
					Var17 = { func_1074(PLAYER::PLAYER_ID()) };
				}
				fVar10 = __LIB_2__::func_686(Var17, &Global_2671974, &iVar7);
				if (iVar7 > -1)
				{
					__LIB_2__::func_690(&(Global_2671974[iVar7 /*12*/]));
				}
				else
				{
					__LIB_2__::func_690(&(Global_2671974[0 /*12*/]));
				}
				Global_2667225.f_2696 = 1;
				Global_2667225.f_701 = 1;
				break;
			case 25:
				Var17 = { Global_2676213 };
				fVar11 = __LIB_2__::func_686(Var17, &Global_2672120, &iVar8);
				if (iVar8 > -1)
				{
					__LIB_2__::func_690(&(Global_2672120[iVar8 /*12*/]));
				}
				else
				{
					__LIB_2__::func_690(&(Global_2672120[0 /*12*/]));
				}
				Global_2667225.f_701 = 1;
				break;
			case 24:
				if (PLAYER::IS_PLAYER_DEAD(PLAYER::PLAYER_ID()))
				{
					Var17 = { Global_2667225.f_512 };
				}
				else
				{
					Var17 = { func_1074(PLAYER::PLAYER_ID()) };
				}
				fVar10 = __LIB_2__::func_686(Var17, &Global_2672035, &iVar7);
				if (iVar7 > -1)
				{
					__LIB_2__::func_690(&(Global_2672035[iVar7 /*12*/]));
				}
				else
				{
					__LIB_2__::func_690(&(Global_2672035[0 /*12*/]));
				}
				Global_2667225.f_701 = 1;
				break;
			case 22:
				Var17 = { Global_2676213 };
				fVar10 = __LIB_2__::func_686(Var17, &Global_2671974, &iVar7);
				if (__LIB_2__::func_771(0, -1) > 0)
				{
					iVar0 = 0;
					iVar0 = 0;
					while (iVar0 < 29)
					{
						iVar15 = __LIB_2__::func_771(iVar0, -1);
						if (Global_1312193[iVar15 /*1951*/].f_34 == 0 || Global_1312193[iVar15 /*1951*/].f_34 == 3)
						{
							if (fVar11 == 0f || fVar11 > SYSTEM::VDIST(Var17, Global_1312193[iVar15 /*1951*/].f_3[0 /*3*/]))
							{
								fVar11 = SYSTEM::VDIST(Var17, Global_1312193[iVar15 /*1951*/].f_3[0 /*3*/]);
								iVar8 = iVar15;
							}
						}
						else if (fVar11 == 0f)
						{
							fVar11 = 999999.9f;
						}
						iVar0++;
					}
				}
				else
				{
					fVar11 = 999999.9f;
				}
				if (fVar11 < 10000f && fVar11 < fVar10)
				{
					switch (Global_1312193[iVar8 /*1951*/].f_34)
					{
						case 0:
							__LIB_3__::func_394(iVar8, &(Global_2667225.f_555), &(Global_2667225.f_555.f_3));
							Global_2667225.f_2678 = 0;
							break;
						case 1:
							if (Global_2667225.f_607 == 0)
							{
								Global_2667225.f_2678 = 1;
							}
							Global_2667225.f_555 = { Global_1312193[iVar8 /*1951*/].f_1742.f_20 };
							Global_2667225.f_555.f_3 = Global_1312193[iVar8 /*1951*/].f_1742.f_23;
							Global_2667225.f_2697 = 1;
							break;
					}
					bVar2 = true;
					if (Global_2667225.f_607 == 0)
					{
						Global_2667225.f_2677 = 1;
					}
					Global_2667225.f_2676 = 1;
				}
				else if (fVar10 < fVar11)
				{
					if (iVar7 > -1)
					{
						__LIB_2__::func_690(&(Global_2671974[iVar7 /*12*/]));
					}
					else
					{
						__LIB_2__::func_690(&(Global_2671974[0 /*12*/]));
					}
					Global_2667225.f_2696 = 1;
				}
				Global_2667225.f_701 = 1;
				break;
			case 17:
				if (Global_2674954 > 0)
				{
					iVar16 = Global_2674954;
				}
				else
				{
					iVar16 = __LIB_3__::func_232();
				}
				Global_2674954 = 0;
				if (!iVar16 > 0)
				{
				}
				iVar15 = iVar16;
				Global_2667225.f_555 = { Global_1312193[iVar15 /*1951*/].f_1742.f_20 };
				Global_2667225.f_555.f_3 = Global_1312193[iVar15 /*1951*/].f_1742.f_23;
				Global_2667225.f_2697 = 1;
				bVar2 = true;
				Global_2667225.f_701 = 1;
				if (Global_2667225.f_607 == 0)
				{
					Global_2667225.f_2678 = 1;
				}
				if (Global_2667225.f_607 == 0)
				{
					Global_2667225.f_2677 = 1;
				}
				Global_2667225.f_2676 = 1;
				break;
			case 18:
				if (Global_2674954 > 0)
				{
					iVar16 = Global_2674954;
				}
				else
				{
					iVar16 = __LIB_3__::func_232();
				}
				Global_2674954 = 0;
				if (iVar16 <= 0)
				{
				}
				iVar15 = iVar16;
				switch (Global_1312193[iVar15 /*1951*/].f_34)
				{
					case 0:
					case 3:
						__LIB_3__::func_394(iVar15, &(Global_2667225.f_555), &(Global_2667225.f_555.f_3));
						Global_2667225.f_2678 = 0;
						break;
					case 1:
					case 5:
						if (Global_2667225.f_607 == 0)
						{
							Global_2667225.f_2678 = 1;
						}
						Global_2667225.f_555 = { Global_1312193[iVar15 /*1951*/].f_1742.f_20 };
						Global_2667225.f_555.f_3 = Global_1312193[iVar15 /*1951*/].f_1742.f_23;
						Global_2667225.f_2697 = 1;
						break;
				}
				bVar2 = true;
				Global_2667225.f_701 = 1;
				if (Global_2667225.f_607 == 0)
				{
					Global_2667225.f_2677 = 1;
				}
				Global_2667225.f_2676 = 1;
				break;
			case 34:
				if (__LIB_12__::func_762())
				{
					iVar20 = __LIB_1__::func_780(__LIB_0__::func_797());
					if (iVar20 <= 0)
					{
					}
					__LIB_3__::func_259(iVar20, &(Global_2667225.f_555), &(Global_2667225.f_555.f_3));
					bVar2 = true;
					Global_2667225.f_701 = 1;
				}
				else
				{
					Global_2667225.f_555 = { func_1074(__LIB_0__::func_797()) };
					Global_2667225.f_555.f_3 = MISC::GET_RANDOM_FLOAT_IN_RANGE(0f, 360f);
				}
				break;
			case 27:
				iVar20 = __LIB_2__::func_745();
				if (iVar20 <= 0)
				{
				}
				__LIB_3__::func_259(iVar20, &(Global_2667225.f_555), &(Global_2667225.f_555.f_3));
				bVar2 = true;
				Global_2667225.f_701 = 1;
				break;
			case 29:
				if (Global_2667225.f_2855 < 0)
				{
				}
				__LIB_3__::func_259(Global_2667225.f_2855, &(Global_2667225.f_555), &(Global_2667225.f_555.f_3));
				bVar2 = true;
				Global_2667225.f_701 = 1;
				break;
			case 30:
				if (Global_2667225.f_2855 < 0)
				{
				}
				__LIB_3__::func_179(0, Global_2667225.f_2855, &(Global_2667225.f_555), &(Global_2667225.f_555.f_3), 1);
				Global_2667225.f_555.f_4 = 150f;
				Global_2667225.f_555.f_7 = 0;
				Global_2667225.f_555.f_8 = { 0f, 0f, 0f };
				Global_2667225.f_555.f_11 = { 0f, 0f, 0f };
				Global_2667225.f_555.f_14 = 0f;
				Global_2667225.f_593 = { Global_2667225.f_555 };
				Global_2667225.f_596 = 12f;
				Global_2667225.f_520.f_13[0 /*3*/] = { Global_2667225.f_593 };
				Global_2667225.f_520.f_20[0] = Global_2667225.f_596;
				Global_2667225.f_520.f_6 = 1;
				Global_2667225.f_520.f_4 = 1;
				Global_2667225.f_520.f_3 = 0;
				Global_2667225.f_555.f_16 = 1;
				Global_2667225.f_520.f_5 = 5f;
				Global_2667225.f_555.f_22 = 0;
				Global_2667225.f_515 = 0;
				break;
			case 28:
				iVar20 = __LIB_2__::func_745();
				switch (Global_4196263[iVar20 /*2012*/].f_34)
				{
					case 2:
						switch (__LIB_1__::func_670())
						{
							case 4:
								Global_2667225.f_555 = { Global_4196263[iVar20 /*2012*/].f_146.f_82[4 /*102*/] };
								Global_2667225.f_555.f_3 = Global_4196263[iVar20 /*2012*/].f_146.f_82[4 /*102*/].f_3;
								break;
							case 5:
								Global_2667225.f_555 = { Global_4196263[iVar20 /*2012*/].f_146.f_82[1 /*102*/] };
								Global_2667225.f_555.f_3 = Global_4196263[iVar20 /*2012*/].f_146.f_82[1 /*102*/].f_3;
								break;
							default:
								__LIB_3__::func_283(iVar20, &(Global_2667225.f_555), &(Global_2667225.f_555.f_3));
								break;
						}
						Global_2667225.f_2678 = 0;
						break;
				}
				MISC::SET_BIT(&(Global_1853348[PLAYER::PLAYER_ID() /*834*/].f_267.f_30), 4);
				bVar2 = true;
				Global_2667225.f_701 = 1;
				if (Global_2667225.f_607 == 0)
				{
					Global_2667225.f_2677 = 1;
				}
				Global_2667225.f_2679 = 1;
				Global_2667225.f_2676 = 1;
				break;
			case 19:
				iVar16 = __LIB_3__::func_232();
				if (iVar16 <= 0)
				{
				}
				if (iVar16 > 128)
				{
					iVar16 = Global_2359296[__LIB_0__::func_155() /*5567*/].f_681.f_1303;
				}
				if (iVar16 > 128)
				{
					iVar16 = 0;
				}
				iVar15 = iVar16;
				switch (Global_1312193[iVar15 /*1951*/].f_34)
				{
					case 0:
					case 3:
						switch (__LIB_1__::func_670())
						{
							case 4:
								Global_2667225.f_555 = { Global_1312193[iVar15 /*1951*/].f_146.f_82[4 /*102*/] };
								Global_2667225.f_555.f_3 = Global_1312193[iVar15 /*1951*/].f_146.f_82[4 /*102*/].f_3;
								break;
							case 5:
								Global_2667225.f_555 = { Global_1312193[iVar15 /*1951*/].f_146.f_82[1 /*102*/] };
								Global_2667225.f_555.f_3 = Global_1312193[iVar15 /*1951*/].f_146.f_82[1 /*102*/].f_3;
								break;
							default:
								__LIB_3__::func_394(iVar16, &(Global_2667225.f_555), &(Global_2667225.f_555.f_3));
								break;
						}
						Global_2667225.f_2678 = 0;
						break;
					case 1:
					case 5:
						if (Global_2667225.f_607 == 0)
						{
							Global_2667225.f_2678 = 1;
						}
						Global_2667225.f_555 = { Global_1312193[iVar15 /*1951*/].f_1742.f_20 };
						Global_2667225.f_555.f_3 = Global_1312193[iVar15 /*1951*/].f_1742.f_23;
						Global_2667225.f_2697 = 1;
						break;
				}
				MISC::SET_BIT(&(Global_1853348[PLAYER::PLAYER_ID() /*834*/].f_267.f_30), 4);
				bVar2 = true;
				Global_2667225.f_701 = 1;
				if (Global_2667225.f_607 == 0)
				{
					Global_2667225.f_2677 = 1;
				}
				Global_2667225.f_2676 = 1;
				break;
			case 35:
				iVar16 = __LIB_2__::func_771(5, -1);
				if (iVar16 <= 0)
				{
				}
				else
				{
					__LIB_2__::func_682(iVar16);
				}
				iVar15 = iVar16;
				switch (__LIB_1__::func_670())
				{
					case 4:
						Global_2667225.f_555 = { Global_1312193[iVar15 /*1951*/].f_146.f_82[4 /*102*/] };
						Global_2667225.f_555.f_3 = Global_1312193[iVar15 /*1951*/].f_146.f_82[4 /*102*/].f_3;
						break;
					case 5:
						__LIB_3__::func_210(iVar15, 612, &Var44, __LIB_2__::func_681(iVar15), 0);
						Global_2667225.f_555 = { Var44 };
						Global_2667225.f_555.f_3 = Var44.f_3.f_2;
						break;
					default:
						__LIB_3__::func_394(iVar16, &(Global_2667225.f_555), &(Global_2667225.f_555.f_3));
						break;
				}
				bVar2 = true;
				Global_2667225.f_701 = 1;
				if (Global_2667225.f_607 == 0)
				{
					Global_2667225.f_2677 = 1;
				}
				Global_2667225.f_2676 = 1;
				break;
			case 36:
				iVar16 = __LIB_2__::func_771(6, -1);
				if (iVar16 <= 0)
				{
					if (Global_2667225.f_2684 == 0)
					{
					}
				}
				else
				{
					__LIB_2__::func_682(iVar16);
				}
				if (Global_2667225.f_2685 > -1)
				{
					iVar16 = Global_2667225.f_2685;
					Global_2667225.f_2685 = -1;
				}
				iVar15 = iVar16;
				switch (__LIB_1__::func_670())
				{
					case 5:
						__LIB_3__::func_210(iVar15, 612, &Var45, __LIB_2__::func_681(iVar15), 0);
						Global_2667225.f_555 = { Var45 };
						Global_2667225.f_555.f_3 = Var45.f_3.f_2;
						break;
					case 6:
						__LIB_3__::func_210(iVar15, 912, &Var45, __LIB_2__::func_681(iVar15), 0);
						Global_2667225.f_555 = { Var45 };
						Global_2667225.f_555.f_3 = Var45.f_3.f_2;
						break;
					default:
						__LIB_3__::func_394(iVar16, &(Global_2667225.f_555), &(Global_2667225.f_555.f_3));
						break;
				}
				bVar2 = true;
				Global_2667225.f_701 = 1;
				if (Global_2667225.f_607 == 0)
				{
					Global_2667225.f_2677 = 1;
				}
				Global_2667225.f_2676 = 1;
				break;
			case 39:
			case 40:
			case 41:
			case 42:
			case 43:
			case 44:
			case 45:
			case 46:
			case 48:
			case 49:
			case 50:
			case 54:
			case 55:
			case 56:
			case 59:
				switch (__LIB_1__::func_670())
				{
					case 5:
						if (Global_2667225.f_489 == 39)
						{
							Global_2667225.f_555 = { 959.4153f, -3005.433f, -40.6349f };
							Global_2667225.f_555.f_3 = 288.1089f;
						}
						else if (Global_2667225.f_489 == 40)
						{
							Global_2667225.f_555 = { 905.5001f, -3200.1077f, -98.1879f };
							Global_2667225.f_555.f_3 = 190.2091f;
						}
						else if (Global_2667225.f_489 == 41)
						{
							Global_2667225.f_555 = { -1235.6235f, -2984.2317f, -42.2601f };
							Global_2667225.f_555.f_3 = 189.5472f;
						}
						else if (Global_2667225.f_489 == 42)
						{
							Global_2667225.f_555 = { 368.9986f, 4822.7114f, -59.9797f };
							Global_2667225.f_555.f_3 = 313.7473f;
						}
						else if (Global_2667225.f_489 == 43)
						{
							Global_2667225.f_555 = { -1614.179f, -3019.259f, -75.18f };
							Global_2667225.f_555.f_3 = 135f;
						}
						else if (Global_2667225.f_489 == 44)
						{
							Global_2667225.f_555 = { 208.8848f, 5164.2656f, -89.1985f };
							Global_2667225.f_555.f_3 = 97.78f;
						}
						else if (Global_2667225.f_489 == 46)
						{
							Global_2667225.f_555 = { 970.7293f, 78.29094f, 115.1642f };
							Global_2667225.f_555.f_3 = 236.0848f;
						}
						else if (Global_2667225.f_489 == 48)
						{
							Global_2667225.f_555 = { 2723.0068f, -368.7443f, -56.3809f };
							Global_2667225.f_555.f_3 = 267.6547f;
						}
						else if (Global_2667225.f_489 == 50)
						{
							Global_2667225.f_555 = { 1558.369f, 384.953f, -53.8531f };
							Global_2667225.f_555.f_3 = 0f;
							Global_2815059.f_933 = 1;
						}
						else if (Global_2667225.f_489 == 55)
						{
							Global_2667225.f_555 = { -1360.148f, 144.8f, -95.7f };
							Global_2667225.f_555.f_3 = 90f;
						}
						else if (Global_2667225.f_489 == 56)
						{
							switch (__LIB_0__::func_813(PLAYER::PLAYER_ID()))
							{
								case 1:
									Global_2667225.f_555 = { 387.949f, -69.676f, 112f };
									Global_2667225.f_555.f_3 = 26.279999f;
									break;
								case 2:
									Global_2667225.f_555 = { -1011.61f, -431.12f, 72.4981f };
									Global_2667225.f_555.f_3 = 73.229996f;
									break;
								case 3:
									Global_2667225.f_555 = { -595.463f, -709.173f, 121.642f };
									Global_2667225.f_555.f_3 = 226.13f;
									break;
								case 4:
									Global_2667225.f_555 = { -996.574f, -753.597f, 70.5312f };
									Global_2667225.f_555.f_3 = 136.28f;
									break;
								}
						}
						break;
					case 6:
						if (Global_2667225.f_489 == 43)
						{
							Global_2667225.f_555 = { -1609.1658f, -3016.9788f, -80.0061f };
							Global_2667225.f_555.f_3 = 270f;
						}
						else if (Global_2667225.f_489 == 45)
						{
							Global_2667225.f_555 = { 1105.1066f, 213.3884f, -50.4406f };
							Global_2667225.f_555.f_3 = 180f;
						}
						else if (Global_2667225.f_489 == 46)
						{
							Global_2667225.f_555 = { 978.4244f, 57.9174f, 115.164f };
							Global_2667225.f_555.f_3 = 55f;
						}
						else if (Global_2667225.f_489 == 48)
						{
							Global_2667225.f_555 = { 2723.8425f, -377.4552f, -48.4f };
							Global_2667225.f_555.f_3 = 180f;
						}
						else if (Global_2667225.f_489 == 49)
						{
							Global_2667225.f_555 = { 1542.7819f, 246.4772f, -50.006f };
							Global_2667225.f_555.f_3 = 270f;
						}
						else if (Global_2667225.f_489 == 50)
						{
							Global_2667225.f_555 = { 1558.4023f, 382.5171f, -54.2844f };
							Global_2667225.f_555.f_3 = 180f;
						}
						else if (Global_2667225.f_489 == 55)
						{
							Global_2667225.f_555 = { -1356.4492f, 160.3916f, -100.1943f };
							Global_2667225.f_555.f_3 = 184.3954f;
						}
						else if (Global_2667225.f_489 == 56)
						{
							Global_2667225.f_555 = { 386.225f, -68.459f, 111.39f };
							Global_2667225.f_555.f_3 = -115.2f;
						}
						break;
					case 7:
						if (Global_2667225.f_489 == 43)
						{
						}
						else if (Global_2667225.f_489 == 45)
						{
						}
						else if (Global_2667225.f_489 == 48)
						{
						}
						else if (Global_2667225.f_489 == 49)
						{
						}
						else if (Global_2667225.f_489 == 50)
						{
						}
						else if (Global_2667225.f_489 == 55)
						{
						}
						else if (Global_2667225.f_489 == 56)
						{
						}
						else if (Global_2667225.f_489 == 59)
						{
						}
						break;
					case 4:
						if (Global_2667225.f_489 == 44)
						{
							Global_2667225.f_555 = { 202.819f, 5162.1733f, -88.8851f };
							Global_2667225.f_555.f_3 = 90f;
						}
						break;
					default:
						if (Global_2667225.f_489 == 39)
						{
							iVar46 = __LIB_1__::func_669(__LIB_2__::func_744(PLAYER::PLAYER_ID()));
						}
						else if (Global_2667225.f_489 == 40)
						{
							iVar46 = __LIB_1__::func_656(__LIB_1__::func_721(PLAYER::PLAYER_ID()));
						}
						else if (Global_2667225.f_489 == 41)
						{
							iVar46 = __LIB_1__::func_654(__LIB_1__::func_380(PLAYER::PLAYER_ID()));
						}
						else if (Global_2667225.f_489 == 42)
						{
							iVar46 = __LIB_1__::func_651(__LIB_1__::func_817(PLAYER::PLAYER_ID()));
						}
						else if (Global_2667225.f_489 == 43)
						{
							iVar46 = __LIB_1__::func_639(__LIB_1__::func_642(PLAYER::PLAYER_ID()));
						}
						else if (Global_2667225.f_489 == 44)
						{
							if (Global_2715699.f_6602)
							{
								iVar47 = NETWORK::NETWORK_GET_PLAYER_FROM_GAMER_HANDLE(&(Global_2715699.f_6603));
								if (iVar47 != __LIB_0__::func_162())
								{
									iVar46 = __LIB_1__::func_635(__LIB_1__::func_636(iVar47));
								}
							}
							else
							{
								iVar46 = __LIB_1__::func_635(__LIB_1__::func_636(PLAYER::PLAYER_ID()));
							}
						}
						else if (Global_2667225.f_489 == 45)
						{
							iVar46 = 123;
						}
						else if (Global_2667225.f_489 == 46)
						{
							iVar46 = __LIB_1__::func_630(__LIB_1__::func_631(PLAYER::PLAYER_ID()));
						}
						else if (Global_2667225.f_489 == 48)
						{
							iVar46 = __LIB_1__::func_626(__LIB_1__::func_627(PLAYER::PLAYER_ID()));
						}
						else if (Global_2667225.f_489 == 49)
						{
							iVar46 = 146;
						}
						else if (Global_2667225.f_489 == 50)
						{
							Global_2815059.f_933 = 1;
							iVar46 = 147;
						}
						else if (Global_2667225.f_489 == 54)
						{
							iVar46 = 154;
						}
						else if (Global_2667225.f_489 == 55)
						{
							iVar46 = __LIB_1__::func_604(__LIB_1__::func_605(PLAYER::PLAYER_ID()));
						}
						else if (Global_2667225.f_489 == 56)
						{
							iVar46 = __LIB_1__::func_578(__LIB_0__::func_813(PLAYER::PLAYER_ID()));
						}
						else if (Global_2667225.f_489 == 59)
						{
							iVar46 = 148;
						}
						if (iVar46 != -1)
						{
							__LIB_11__::func_977(iVar46, &(Global_2667225.f_555), &(Global_2667225.f_555.f_3), Global_2671449.f_26);
						}
						break;
				}
				bVar2 = true;
				Global_2667225.f_701 = 1;
				if (Global_2667225.f_607 == 0)
				{
					Global_2667225.f_2680 = 1;
					MISC::SET_BIT(&(Global_2689235[PLAYER::PLAYER_ID() /*453*/].f_318), 28);
				}
				Global_2667225.f_2676 = 1;
				break;
			case 4:
				if (!NETWORK::NETWORK_FIND_LARGEST_BUNCH_OF_PLAYERS(0, &(Global_2667225.f_555)))
				{
					Global_2667225.f_555 = { __LIB_2__::func_879() };
					Global_2667225.f_555 = { __LIB_2__::func_878(Global_2667225.f_555, 50f, 25f) };
				}
				Global_2667225.f_555.f_3 = MISC::GET_RANDOM_FLOAT_IN_RANGE(0f, 360f);
				break;
			case 31:
				if (__LIB_0__::func_796(PLAYER::PLAYER_ID()))
				{
					iVar37 = __LIB_10__::func_716(PLAYER::PLAYER_ID(), 1);
					if (!iVar37 == __LIB_0__::func_162())
					{
						Global_2667225.f_555 = { func_1074(iVar37) };
					}
					else
					{
						Global_2667225.f_555 = { func_1074(PLAYER::PLAYER_ID()) };
					}
				}
				else
				{
					Global_2667225.f_555 = { func_1074(__LIB_0__::func_797()) };
				}
				Global_2667225.f_555.f_3 = 0f;
				Global_2667225.f_555.f_4 = 50f;
				Global_2667225.f_555.f_7 = 0;
				Global_2667225.f_555.f_8 = { 0f, 0f, 0f };
				Global_2667225.f_555.f_11 = { 0f, 0f, 0f };
				Global_2667225.f_555.f_14 = 0f;
				Global_2667225.f_593 = { Global_2667225.f_555 };
				Global_2667225.f_596 = 2f;
				Global_2667225.f_520.f_13[0 /*3*/] = { Global_2667225.f_593 };
				Global_2667225.f_520.f_20[0] = Global_2667225.f_596;
				Global_2667225.f_520.f_6 = 0;
				Global_2667225.f_520 = { Global_2667225.f_555 };
				Global_2667225.f_520.f_4 = 1;
				Global_2667225.f_520.f_3 = 0;
				Global_2667225.f_555.f_16 = 1;
				Global_2667225.f_555.f_17 = 1;
				Global_2667225.f_515 = 1;
				break;
			case 33:
				if (__LIB_0__::func_796(PLAYER::PLAYER_ID()))
				{
					iVar37 = __LIB_10__::func_716(PLAYER::PLAYER_ID(), 1);
					if (!iVar37 == __LIB_0__::func_162())
					{
						Global_2667225.f_555 = { func_1074(iVar37) };
					}
					else
					{
						Global_2667225.f_555 = { func_1074(PLAYER::PLAYER_ID()) };
					}
				}
				else
				{
					Global_2667225.f_555 = { func_1074(__LIB_0__::func_797()) };
				}
				Global_2667225.f_555.f_3 = 0f;
				Global_2667225.f_555.f_4 = 50f;
				Global_2667225.f_555.f_7 = 0;
				Global_2667225.f_555.f_8 = { 0f, 0f, 0f };
				Global_2667225.f_555.f_11 = { 0f, 0f, 0f };
				Global_2667225.f_555.f_14 = 0f;
				Global_2667225.f_593 = { Global_2667225.f_555 };
				Global_2667225.f_596 = 2f;
				Global_2667225.f_520.f_13[0 /*3*/] = { Global_2667225.f_593 };
				Global_2667225.f_520.f_20[0] = Global_2667225.f_596;
				Global_2667225.f_520.f_6 = 0;
				Global_2667225.f_520 = { Global_2667225.f_555 };
				Global_2667225.f_520.f_4 = 1;
				Global_2667225.f_520.f_3 = 0;
				Global_2667225.f_555.f_16 = 1;
				Global_2667225.f_555.f_17 = 1;
				Global_2667225.f_515 = 1;
				break;
			case 5:
				Global_2667225.f_555 = { __LIB_0__::func_85(PLAYER::PLAYER_ID()) };
				Global_2667225.f_593 = { Global_2667225.f_555 };
				Global_2667225.f_596 = 20f;
				Global_2667225.f_520.f_13[0 /*3*/] = { Global_2667225.f_593 };
				Global_2667225.f_520.f_20[0] = Global_2667225.f_596;
				Global_2667225.f_555.f_3 = MISC::GET_RANDOM_FLOAT_IN_RANGE(0f, 360f);
				Global_2667225.f_520.f_6 = 1;
				Global_2667225.f_555.f_4 = 150f;
				break;
			case 37:
				Global_2667225.f_555 = { __LIB_0__::func_85(PLAYER::PLAYER_ID()) };
				Global_2667225.f_593 = { Global_2667225.f_555 };
				Global_2667225.f_596 = 0.01f;
				Global_2667225.f_520.f_13[0 /*3*/] = { Global_2667225.f_593 };
				Global_2667225.f_520.f_20[0] = Global_2667225.f_596;
				Global_2667225.f_555.f_3 = MISC::GET_RANDOM_FLOAT_IN_RANGE(0f, 360f);
				Global_2667225.f_520.f_6 = 1;
				Global_2667225.f_555.f_4 = 150f;
				break;
			case 38:
				Global_2667225.f_555 = { func_1074(PLAYER::PLAYER_ID()) };
				Global_2667225.f_593 = { Global_2667225.f_555 };
				Global_2667225.f_596 = 0.01f;
				Global_2667225.f_520.f_13[0 /*3*/] = { Global_2667225.f_593 };
				Global_2667225.f_520.f_20[0] = Global_2667225.f_596;
				Global_2667225.f_555.f_3 = MISC::GET_RANDOM_FLOAT_IN_RANGE(0f, 360f);
				Global_2667225.f_520.f_6 = 1;
				Global_2667225.f_555.f_4 = 150f;
				break;
			case 53:
				Global_2667225.f_555 = { func_1074(PLAYER::PLAYER_ID()) };
				Global_2667225.f_555 = { __LIB_3__::func_176(Global_2667225.f_555) };
				Global_2667225.f_593 = { Global_2667225.f_555 };
				Global_2667225.f_596 = 0.01f;
				Global_2667225.f_520.f_13[0 /*3*/] = { Global_2667225.f_593 };
				Global_2667225.f_520.f_20[0] = Global_2667225.f_596;
				Global_2667225.f_555.f_3 = MISC::GET_RANDOM_FLOAT_IN_RANGE(0f, 360f);
				Global_2667225.f_520.f_6 = 1;
				Global_2667225.f_555.f_4 = 150f;
				break;
			case 21:
				Global_2667225.f_555 = { __LIB_2__::func_876(__LIB_0__::func_85(PLAYER::PLAYER_ID()), 200f) };
				Global_2667225.f_593 = { Global_2667225.f_555 };
				Global_2667225.f_596 = 0f;
				Global_2667225.f_520.f_13[0 /*3*/] = { Global_2667225.f_593 };
				Global_2667225.f_520.f_20[0] = Global_2667225.f_596;
				Global_2667225.f_555.f_3 = MISC::GET_RANDOM_FLOAT_IN_RANGE(0f, 360f);
				Global_2667225.f_520.f_6 = 0;
				Global_2667225.f_555.f_4 = 150f;
				break;
			case 6:
				Global_2667225.f_555 = { __LIB_0__::func_85(PLAYER::PLAYER_ID()) };
				Global_2667225.f_555.f_3 = MISC::GET_RANDOM_FLOAT_IN_RANGE(0f, 360f);
				break;
			case 14:
				if (!Global_2676213.f_10)
				{
				}
				else
				{
					Global_2667225.f_555 = { Global_2676213 };
					Global_2667225.f_555.f_3 = 0f;
					Global_2667225.f_555.f_4 = 0f;
					Global_2667225.f_555.f_7 = 2;
					Global_2667225.f_555.f_8 = { Global_2676213.f_11 };
					Global_2667225.f_555.f_11 = { Global_2676213.f_14 };
					Global_2667225.f_555.f_14 = Global_2676213.f_17;
					Global_2667225.f_593 = { 0f, 0f, 0f };
					Global_2667225.f_596 = 0f;
					Global_2667225.f_520.f_13[0 /*3*/] = { Global_2667225.f_593 };
					Global_2667225.f_520.f_20[0] = Global_2667225.f_596;
					Global_2667225.f_520.f_6 = Global_2676213.f_22;
					if (SYSTEM::VMAG(Global_2676213.f_18) > 0f)
					{
						Global_2667225.f_520 = { Global_2676213.f_18 };
					}
					else
					{
						Global_2667225.f_520 = { Global_2676213.f_11 + Global_2676213.f_14 / Vector(2f, 2f, 2f) };
					}
					Global_2667225.f_520.f_4 = Global_2676213.f_8;
					Global_2667225.f_520.f_3 = Global_2676213.f_9;
					Global_2667225.f_555.f_16 = Global_2676213.f_7;
					Global_2667225.f_520.f_5 = Global_2676213.f_21;
					Global_2667225.f_555.f_22 = Global_2676213.f_23;
					Global_2667225.f_555.f_26 = Global_2676213.f_25;
					Global_2667225.f_520.f_32 = Global_2676213.f_27;
				}
				break;
			case 10:
				if (Global_2676213.f_10)
				{
				}
				else
				{
					Global_2667225.f_555 = { Global_2676213 };
					Global_2667225.f_555.f_3 = Global_2676213.f_5;
					Global_2667225.f_555.f_4 = Global_2676213.f_4;
					Global_2667225.f_555.f_7 = 0;
					Global_2667225.f_555.f_8 = { 0f, 0f, 0f };
					Global_2667225.f_555.f_11 = { 0f, 0f, 0f };
					Global_2667225.f_555.f_14 = 0f;
					Global_2667225.f_593 = { Global_2667225.f_555 };
					Global_2667225.f_596 = Global_2676213.f_3;
					Global_2667225.f_520.f_13[0 /*3*/] = { Global_2667225.f_593 };
					Global_2667225.f_520.f_20[0] = Global_2667225.f_596;
					Global_2667225.f_520.f_6 = Global_2676213.f_22;
					if (SYSTEM::VMAG(Global_2676213.f_18) > 0f)
					{
						Global_2667225.f_520 = { Global_2676213.f_18 };
					}
					else
					{
						Global_2667225.f_520 = { Global_2676213 };
					}
					Global_2667225.f_520.f_4 = Global_2676213.f_8;
					Global_2667225.f_520.f_3 = Global_2676213.f_9;
					Global_2667225.f_555.f_16 = Global_2676213.f_7;
					Global_2667225.f_520.f_5 = Global_2676213.f_21;
					Global_2667225.f_555.f_22 = Global_2676213.f_23;
					Global_2667225.f_555.f_26 = Global_2676213.f_25;
					Global_2667225.f_515 = Global_2676213.f_24;
					Global_2667225.f_520.f_32 = Global_2676213.f_27;
				}
				break;
			case 32:
				if (Global_2676213.f_10)
				{
				}
				else
				{
					Global_2667225.f_555 = { Global_2676213 };
					Global_2667225.f_555.f_3 = Global_2676213.f_5;
					Global_2667225.f_555.f_4 = Global_2676213.f_4;
					Global_2667225.f_555.f_7 = 0;
					Global_2667225.f_555.f_8 = { 0f, 0f, 0f };
					Global_2667225.f_555.f_11 = { 0f, 0f, 0f };
					Global_2667225.f_555.f_14 = 0f;
					Global_2667225.f_593 = { Global_2667225.f_555 };
					Global_2667225.f_596 = Global_2676213.f_3;
					Global_2667225.f_520.f_13[0 /*3*/] = { Global_2667225.f_593 };
					Global_2667225.f_520.f_20[0] = Global_2667225.f_596;
					Global_2667225.f_520.f_6 = Global_2676213.f_22;
					Global_2667225.f_520 = { Global_2676213.f_18 };
					Global_2667225.f_520.f_4 = Global_2676213.f_8;
					Global_2667225.f_520.f_3 = Global_2676213.f_9;
					Global_2667225.f_555.f_16 = Global_2676213.f_7;
					Global_2667225.f_520.f_5 = Global_2676213.f_21;
					Global_2667225.f_555.f_22 = Global_2676213.f_23;
					Global_2667225.f_515 = Global_2676213.f_24;
					Global_2667225.f_555.f_26 = Global_2676213.f_25;
					Global_2667225.f_520.f_32 = Global_2676213.f_27;
					if (__LIB_10__::func_721(Global_2667225.f_555, Global_2667225.f_555.f_4, &(Global_2667225.f_555), 0))
					{
						if (Global_2667225.f_555.f_4 > 50f)
						{
							Global_2667225.f_555.f_4 = 50f;
						}
						Global_2667225.f_593 = { Global_2667225.f_555 };
						Global_2667225.f_596 = 1.5f;
						Global_2667225.f_520.f_5 = 1.5f;
						Global_2667225.f_520.f_6 = 1;
						Global_2667225.f_555.f_16 = 0;
						Global_2667225.f_555.f_17 = 1;
						Global_2667225.f_520 = { Global_2667225.f_555 };
					}
					else
					{
						Global_2667225.f_518 = 1;
					}
				}
				break;
			case 16:
				if (Global_2667225.f_490.f_3 && !__LIB_10__::func_737(Global_2676213))
				{
					Global_2667225.f_555 = { __LIB_11__::func_276() };
					Global_2667225.f_555.f_3 = Global_2676213.f_5;
					Global_2667225.f_555.f_4 = Global_2676213.f_4;
					Global_2667225.f_555.f_27 = Global_2676213.f_26;
					bVar2 = true;
					bParam2 = false;
					Global_2667225.f_2697 = 1;
				}
				else
				{
					Global_2667225.f_555 = { Global_2676213 };
					Global_2667225.f_555.f_3 = Global_2676213.f_5;
					Global_2667225.f_555.f_4 = Global_2676213.f_4;
					Global_2667225.f_555.f_27 = Global_2676213.f_26;
					bVar2 = true;
					bParam2 = false;
					if (!Global_2667225.f_490.f_3)
					{
						Global_2667225.f_2697 = 1;
					}
				}
				break;
			case 11:
				if (Global_2676213.f_10)
				{
				}
				else
				{
					Global_2667225.f_555 = { Global_2676213 };
					Global_2667225.f_555.f_3 = Global_2676213.f_5;
					Global_2667225.f_555.f_4 = Global_2676213.f_4;
					Global_2667225.f_2697 = 1;
					bVar2 = true;
					bParam2 = false;
				}
				break;
			case 13:
				if (Global_2676213.f_10)
				{
				}
				else if (Global_2667225.f_2479 == 1)
				{
					Global_2667225.f_555 = { Global_2676213 };
					Global_2667225.f_555.f_3 = Global_2676213.f_5;
					Global_2667225.f_555.f_4 = Global_2676213.f_4;
					bVar2 = true;
				}
				else
				{
					Global_2667225.f_555 = { Global_2676213 };
					Global_2667225.f_555.f_3 = Global_2676213.f_5;
					Global_2667225.f_555.f_4 = Global_2676213.f_4;
					Global_2667225.f_593 = { Global_2667225.f_555 };
					if (Global_2676213.f_3 < (Global_2676213.f_4 / 2f))
					{
						Global_2667225.f_596 = (Global_2676213.f_4 / 2f);
					}
					else
					{
						Global_2667225.f_596 = Global_2676213.f_3;
					}
					Global_2667225.f_520.f_13[0 /*3*/] = { Global_2667225.f_593 };
					Global_2667225.f_520.f_20[0] = Global_2667225.f_596;
					Global_2667225.f_555.f_26 = Global_2676213.f_25;
					Global_2667225.f_520.f_6 = 1;
					Global_2667225.f_520.f_32 = Global_2676213.f_27;
				}
				if (func_741(&(Global_2667225.f_555), 0, 0, 0, 1))
				{
					Global_2667225.f_515 = 1;
				}
				break;
		}
		if (SYSTEM::VMAG(Global_2667225.f_520) > 0f)
		{
			Global_2667225.f_2674 = 1;
		}
		if (__LIB_10__::func_734(Global_2667225.f_555, &iVar0))
		{
			Global_2667225.f_515 = 1;
		}
		if (bParam2 && iParam4 == 0)
		{
			if (__LIB_10__::func_741())
			{
				Global_2667225.f_587 = 4;
			}
			else
			{
				if (Global_2667225.f_45.f_309)
				{
					Var17 = { Global_2667225.f_520 };
					if (SYSTEM::VMAG(Var17) == 0f)
					{
						Var17 = { Global_2667225.f_555 };
					}
					if (!__LIB_2__::func_674(Var17))
					{
						Global_2667225.f_555.f_23 = 0;
					}
				}
				Global_2667225.f_555.f_24 = Global_2667225.f_45.f_310;
				Global_2667225.f_587 = 3;
			}
		}
		else if (bVar2)
		{
			Var18[0 /*3*/] = { Global_2667225.f_555 };
			Var18.f_16[0] = Global_2667225.f_555.f_3;
			Global_2667225.f_587 = 0;
			Global_2667225.f_589 = 0;
			Global_2667225.f_667 = 0;
			Global_2667225.f_668 = 0;
			Global_2667225.f_2478 = 0;
			Global_2667225.f_2479 = 0;
			Global_2667225.f_2477 = 0;
			Global_2667225.f_2898 = Global_2667225.f_555.f_27;
			*uParam0 = { Var18 };
			return 1;
		}
		else
		{
			func_1003();
		}
	}
	if (Global_2667225.f_587 == 3)
	{
		if (bParam2)
		{
			switch (Global_2667225.f_555.f_7)
			{
				case 0:
					fVar3 = (Global_2667225.f_555 - Global_2667225.f_555.f_4);
					fVar5 = (Global_2667225.f_555.f_1 - Global_2667225.f_555.f_4);
					fVar4 = (Global_2667225.f_555 + Global_2667225.f_555.f_4);
					fVar6 = (Global_2667225.f_555.f_1 + Global_2667225.f_555.f_4);
					break;
				case 1:
					if (Global_2667225.f_555.f_8 < Global_2667225.f_555.f_11)
					{
						fVar3 = Global_2667225.f_555.f_8;
						fVar4 = Global_2667225.f_555.f_11;
					}
					else
					{
						fVar3 = Global_2667225.f_555.f_11;
						fVar4 = Global_2667225.f_555.f_8;
					}
					if (Global_2667225.f_555.f_8.f_1 < Global_2667225.f_555.f_11.f_1)
					{
						fVar5 = Global_2667225.f_555.f_8.f_1;
						fVar6 = Global_2667225.f_555.f_11.f_1;
					}
					else
					{
						fVar5 = Global_2667225.f_555.f_11.f_1;
						fVar6 = Global_2667225.f_555.f_8.f_1;
					}
					break;
				case 2:
					if (Global_2667225.f_555.f_8 < Global_2667225.f_555.f_11)
					{
						fVar3 = (Global_2667225.f_555.f_8 - (0.5f * Global_2667225.f_555.f_14));
						fVar4 = (Global_2667225.f_555.f_11 + (0.5f * Global_2667225.f_555.f_14));
					}
					else
					{
						fVar3 = (Global_2667225.f_555.f_11 - (0.5f * Global_2667225.f_555.f_14));
						fVar4 = (Global_2667225.f_555.f_8 + (0.5f * Global_2667225.f_555.f_14));
					}
					if (Global_2667225.f_555.f_8.f_1 < Global_2667225.f_555.f_11.f_1)
					{
						fVar5 = (Global_2667225.f_555.f_8.f_1 - (0.5f * Global_2667225.f_555.f_14));
						fVar6 = (Global_2667225.f_555.f_11.f_1 + (0.5f * Global_2667225.f_555.f_14));
					}
					else
					{
						fVar5 = (Global_2667225.f_555.f_11.f_1 - (0.5f * Global_2667225.f_555.f_14));
						fVar6 = (Global_2667225.f_555.f_8.f_1 + (0.5f * Global_2667225.f_555.f_14));
					}
					break;
				}
		}
		PATHFIND::REQUEST_PATH_NODES_IN_AREA_THIS_FRAME(fVar3, fVar5, fVar4, fVar6);
		if (PATHFIND::ARE_NODES_LOADED_FOR_AREA(fVar3, fVar5, fVar4, fVar6))
		{
			if (Global_2667225.f_555.f_21)
			{
				Var18[0 /*3*/] = { Global_2667225.f_555.f_18 };
				Var18.f_16[0] = Global_2667225.f_555.f_3;
			}
			else
			{
				Var18[0 /*3*/] = { Global_2667225.f_555 };
				Var18.f_16[0] = Global_2667225.f_555.f_3;
			}
			Var48.f_6 = 1082130432;
			Var48.f_7 = 1176255488;
			Var48.f_8 = 1;
			Var48.f_10 = 1;
			Var48.f_13 = 1;
			Var48.f_15 = 1;
			Var48.f_16 = 1;
			Var48.f_31 = 1;
			Var48.f_34 = joaat("tailgater");
			Var48.f_38 = 2;
			Var48.f_45 = 2;
			Var48.f_49 = 1123024896;
			Var48.f_53 = 999;
			Var48.f_54 = 1176256410;
			Var48.f_55 = 1;
			Var48.f_56 = 1;
			Var48.f_57 = 1;
			Var48 = { Global_2667225.f_520 };
			Var48.f_4 = Global_2667225.f_596;
			Var48.f_12 = bParam2;
			Var48.f_3 = Global_2667225.f_520.f_5;
			Var48.f_5 = fVar36;
			Var48.f_16 = Global_2667225.f_555.f_23;
			if (Global_2667225.f_555.f_26)
			{
				Var48.f_10 = 0;
			}
			if (Global_2667225.f_520.f_32 > 0f)
			{
				Var48.f_6 = Global_2667225.f_520.f_32;
			}
			if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
			{
				iVar49 = PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false);
				if (ENTITY::DOES_ENTITY_EXIST(iVar49))
				{
					Var48.f_34 = ENTITY::GET_ENTITY_MODEL(iVar49);
				}
			}
			if (iParam7 != 0)
			{
				Var48.f_34 = iParam7;
			}
			Var48.f_18 = 1;
			switch (Global_2667225.f_555.f_7)
			{
				case 0:
					Var48.f_19 = { Global_2667225.f_555 };
					Var48.f_25 = Global_2667225.f_555.f_4;
					Var48.f_4 = 0f;
					break;
				case 1:
					Var48.f_19 = { Global_2667225.f_555.f_8 };
					Var48.f_22 = { Global_2667225.f_555.f_11 };
					Var48.f_25 = 0f;
					break;
				case 2:
					Var48.f_19 = { Global_2667225.f_555.f_8 };
					Var48.f_22 = { Global_2667225.f_555.f_11 };
					Var48.f_25 = Global_2667225.f_555.f_14;
					break;
			}
			Var48.f_26 = Global_2667225.f_555.f_7;
			if ((__LIB_0__::func_975() && __LIB_2__::func_854()) && func_741(&(Global_2667225.f_512), 0, 0, 0, 1))
			{
				Var48.f_10 = 0;
			}
			Var48.f_9 = uParam5;
			Var48.f_11 = __LIB_10__::func_736();
			if (Global_2667225.f_520.f_6)
			{
				Var48.f_30 = 1;
				Var48.f_29 = 0;
			}
			else
			{
				Var48.f_30 = 0;
				Var48.f_29 = 1;
			}
			if (Global_2667225.f_489 == 3)
			{
				Var48.f_28 = 1;
				Var48.f_29 = 1;
				Var48.f_30 = 0;
			}
			else if (Global_2667225.f_489 == 26)
			{
				Var48.f_28 = 1;
				Var48.f_30 = 1;
				Var48.f_29 = 0;
				Var48.f_32 = 1;
			}
			if (Global_2667225.f_489 == 1)
			{
				Var48.f_7 = 15f;
			}
			if (Global_2667225.f_45.f_311 > 0f)
			{
				Var48.f_7 = Global_2667225.f_45.f_311;
			}
			Var48.f_17 = uParam6;
			Var48.f_55 = Global_2667225.f_555.f_16;
			Var48.f_60 = Global_2667225.f_555.f_30;
			if (__LIB_1__::func_603(PLAYER::PLAYER_ID()))
			{
				Var48.f_58 = 1;
			}
			func_697(&(Var18[0 /*3*/]), &(Var18.f_16[0]), &Var48);
			iVar0 = 0;
			while (iVar0 < 5)
			{
				if (iVar0 < Global_2674786.f_162 && iVar0 > 0)
				{
					Var18[iVar0 /*3*/] = { Global_2674786[iVar0 /*3*/] };
					Var18.f_16[iVar0] = Global_2674786.f_121[iVar0];
				}
				iVar0++;
			}
			if (Var48.f_11 && Var48.f_27)
			{
				Global_2667225.f_45.f_304 = 1;
			}
			else
			{
				Global_2667225.f_45.f_304 = 0;
			}
			Global_2667225.f_590++;
			Global_2667225.f_588 = 3;
			Global_2667225.f_587 = 5;
		}
	}
	if (Global_2667225.f_587 == 4)
	{
		iVar0 = 0;
		while (iVar0 < 5)
		{
			Var18[iVar0 /*3*/] = { Global_2667225.f_555.f_18 };
			if (((iVar0 == 0 && Global_2667225.f_489 == 26) && Global_2667225.f_555.f_25) && func_995(&(Var18[iVar0 /*3*/]), __LIB_1__::func_560(Var18[iVar0 /*3*/], 1008981770)))
			{
			}
			else
			{
				switch (Global_2667225.f_555.f_7)
				{
					case 0:
						Var18[iVar0 /*3*/] = { func_992(Global_2667225.f_555, 0f, 0f, 0f, Global_2667225.f_555.f_4, Global_2667225.f_555.f_7) };
						break;
					case 1:
						Var18[iVar0 /*3*/] = { func_992(Global_2667225.f_555.f_8, Global_2667225.f_555.f_11, 0f, Global_2667225.f_555.f_7) };
						break;
					case 2:
						Var18[iVar0 /*3*/] = { func_992(Global_2667225.f_555.f_8, Global_2667225.f_555.f_11, Global_2667225.f_555.f_14, Global_2667225.f_555.f_7) };
						break;
					}
			}
			if (SYSTEM::VMAG(Global_2667225.f_520) > 0f)
			{
				Var17 = { Global_2667225.f_520 - Var18[iVar0 /*3*/] };
				Var18.f_16[iVar0] = MISC::GET_HEADING_FROM_VECTOR_2D(Var17.f_0, Var17.f_1);
			}
			iVar0++;
		}
		Global_2667225.f_45.f_304 = 0;
		Global_2667225.f_590++;
		Global_2667225.f_588 = 4;
		Global_2667225.f_587 = 5;
	}
	if (Global_2667225.f_587 == 5)
	{
		if (Global_2667225.f_489 == 11 && Global_2667225.f_45.f_59 > 0f)
		{
			if (SYSTEM::VDIST(Var18[0 /*3*/], Global_2667225.f_45.f_60) > SYSTEM::VDIST(Global_2676213, Global_2667225.f_45.f_60))
			{
				Var18[0 /*3*/] = { Global_2676213 };
				Var18.f_16[0] = Global_2676213.f_5;
			}
		}
		iVar0 = 0;
		while (iVar0 < 5)
		{
			if ((__LIB_1__::func_410(Global_2667225.f_489) && !__LIB_1__::func_560(Var18[iVar0 /*3*/], 0.01f)) && !__LIB_10__::func_741())
			{
				if (iVar0 == 4 || SYSTEM::VMAG(Var18[iVar0 + 1 /*3*/]) == 0f)
				{
					if ((Global_2667225.f_588 == 4 || Global_2667225.f_588 == 3) && Global_2667225.f_590 < 2)
					{
						Global_2667225.f_587 = Global_2667225.f_588;
						iVar0 = 5;
					}
					else if (Global_2667225.f_555.f_24)
					{
						func_1003();
						return 0;
					}
					else
					{
						__LIB_2__::func_670(&Var18, &iVar0);
					}
				}
			}
			else if ((__LIB_2__::func_850(Var18[iVar0 /*3*/], 3.5f, 1, 1, 0, 0, 0, 0, 0) || __LIB_10__::func_742(Var18[iVar0 /*3*/], 0.5f, PLAYER::PLAYER_ID(), 0, 0)) || Global_2667225.f_45.f_304)
			{
				if (iVar0 == 4 || SYSTEM::VMAG(Var18[iVar0 + 1 /*3*/]) == 0f)
				{
					if ((Global_2667225.f_588 == 4 || Global_2667225.f_588 == 3) && Global_2667225.f_590 < 2)
					{
						Global_2667225.f_587 = Global_2667225.f_588;
						iVar0 = 5;
					}
					else if (Global_2667225.f_555.f_24)
					{
						func_1003();
						return 0;
					}
					else
					{
						__LIB_2__::func_670(&Var18, &iVar0);
					}
				}
			}
			else
			{
				__LIB_2__::func_670(&Var18, &iVar0);
			}
			iVar0++;
		}
	}
	if (Global_2667225.f_587 == 6)
	{
		if (Global_2667225.f_589 == 2 || Global_2667225.f_555.f_16 == 0)
		{
			iVar1 = 0;
		}
		else
		{
			iVar1 = iParam3;
		}
		if (Global_2667225.f_555.f_7 == 0)
		{
			if (Global_2667225.f_520.f_5 > (Global_2667225.f_555.f_4 * 2f))
			{
				Global_2667225.f_520.f_5 = (Global_2667225.f_555.f_4 * 2f);
			}
		}
		Global_2667225.f_555.f_5 = 1;
		Global_2667225.f_555.f_6 = iVar1;
		Global_2667225.f_555.f_15 = Global_2667225.f_45.f_65;
		Global_2667225.f_555.f_30 = Global_2667225.f_45.f_182;
		Global_2667225.f_520.f_8 = 0;
		Global_2667225.f_520.f_9 = __LIB_10__::func_736();
		Global_2667225.f_520.f_10 = 0;
		if (func_920(&(Global_2667225.f_555), &(Global_2667225.f_520), &Var18))
		{
			Global_2667225.f_511 = 0;
			Global_2667225.f_587 = 2;
		}
	}
	if (Global_2667225.f_587 == 2)
	{
		*uParam0 = { Var18 };
		Global_2667225.f_587 = 0;
		Global_2667225.f_589 = 0;
		Global_2667225.f_667 = 0;
		Global_2667225.f_668 = 0;
		Global_2667225.f_2478 = 0;
		Global_2667225.f_2479 = 0;
		Global_2667225.f_2477 = 0;
		return 1;
	}
	return 0;
}

int func_920(var uParam0, var uParam1, var uParam2)//Position - 0x86CC2
{
	int iVar0;
	struct<3> Var1;
	float fVar2;
	float fVar3;
	float fVar4;
	float fVar5;
	struct<3> Var6;
	struct<3> Var7;
	struct<3> Var8;
	int iVar9;
	struct<3> Var10;
	struct<3> Var11;
	float fVar12;
	bool bVar13;
	struct<61> Var14;
	bool bVar15;
	bVar13 = false;
	switch (uParam0->f_7)
	{
		case 0:
			if (((!Global_2667225.f_2466 == *uParam0 || !Global_2667225.f_2466.f_1 == uParam0->f_1) || !Global_2667225.f_2466.f_2 == uParam0->f_2) || !Global_2667225.f_2469 == uParam0->f_4)
			{
				bVar13 = true;
			}
			break;
		case 1:
			if (((((!Global_2667225.f_2480 == uParam0->f_8 || !Global_2667225.f_2480.f_1 == uParam0->f_8.f_1) || !Global_2667225.f_2480.f_2 == uParam0->f_8.f_2) || !Global_2667225.f_2483 == uParam0->f_11) || !Global_2667225.f_2483.f_1 == uParam0->f_11.f_1) || !Global_2667225.f_2483.f_2 == uParam0->f_11.f_2)
			{
				bVar13 = true;
			}
			break;
		case 2:
			if ((((((!Global_2667225.f_2480 == uParam0->f_8 || !Global_2667225.f_2480.f_1 == uParam0->f_8.f_1) || !Global_2667225.f_2480.f_2 == uParam0->f_8.f_2) || !Global_2667225.f_2483 == uParam0->f_11) || !Global_2667225.f_2483.f_1 == uParam0->f_11.f_1) || !Global_2667225.f_2483.f_2 == uParam0->f_11.f_2) || !Global_2667225.f_2486 == uParam0->f_14)
			{
				bVar13 = true;
			}
			break;
	}
	if (Global_1574477)
	{
		if (!Global_2667225.f_2487 == uParam0->f_7)
		{
			bVar13 = true;
		}
		if (SCRIPT::IS_THREAD_ACTIVE(Global_2667225.f_2473) && !Global_2667225.f_2473 == SCRIPT::GET_ID_OF_THIS_THREAD())
		{
			bVar13 = true;
		}
	}
	if (bVar13)
	{
		if (Global_2667225.f_2464 == 1)
		{
			if (SCRIPT::IS_THREAD_ACTIVE(Global_2667225.f_2473))
			{
				if (Global_2667225.f_2473 == SCRIPT::GET_ID_OF_THIS_THREAD())
				{
					if (NETWORK::GET_TIME_DIFFERENCE(NETWORK::GET_NETWORK_TIME(), Global_2667225.f_2470) < __LIB_0__::func_853(0))
					{
						return 0;
					}
				}
				else if (NETWORK::GET_TIME_DIFFERENCE(NETWORK::GET_NETWORK_TIME(), Global_2667225.f_2470) < __LIB_0__::func_853(0))
				{
					return 0;
				}
			}
			NETWORK::NETWORK_CANCEL_RESPAWN_SEARCH();
			PED::SPAWNPOINTS_CANCEL_SEARCH();
			__LIB_1__::func_442();
		}
		Global_2667225.f_2464 = 0;
	}
	else if (NETWORK::GET_TIME_DIFFERENCE(NETWORK::GET_NETWORK_TIME(), Global_2667225.f_2470) > __LIB_0__::func_853(0))
	{
		Global_2667225.f_2471 = NETWORK::GET_NETWORK_TIME();
		__LIB_2__::func_740();
	}
	switch (uParam0->f_7)
	{
		case 0:
			fVar2 = (*uParam0 - uParam0->f_4);
			fVar3 = (uParam0->f_1 - uParam0->f_4);
			fVar4 = (*uParam0 + uParam0->f_4);
			fVar5 = (uParam0->f_1 + uParam0->f_4);
			break;
		case 1:
			if (uParam0->f_8 < uParam0->f_11)
			{
				fVar2 = uParam0->f_8;
				fVar4 = uParam0->f_11;
			}
			else
			{
				fVar2 = uParam0->f_11;
				fVar4 = uParam0->f_8;
			}
			if (uParam0->f_8.f_1 < uParam0->f_11.f_1)
			{
				fVar3 = uParam0->f_8.f_1;
				fVar5 = uParam0->f_11.f_1;
			}
			else
			{
				fVar3 = uParam0->f_11.f_1;
				fVar5 = uParam0->f_8.f_1;
			}
			break;
		case 2:
			if (uParam0->f_8 < uParam0->f_11)
			{
				fVar2 = (uParam0->f_8 - (0.5f * uParam0->f_14));
				fVar4 = (uParam0->f_11 + (0.5f * uParam0->f_14));
			}
			else
			{
				fVar2 = (uParam0->f_11 - (0.5f * uParam0->f_14));
				fVar4 = (uParam0->f_8 + (0.5f * uParam0->f_14));
			}
			if (uParam0->f_8.f_1 < uParam0->f_11.f_1)
			{
				fVar3 = (uParam0->f_8.f_1 - (0.5f * uParam0->f_14));
				fVar5 = (uParam0->f_11.f_1 + (0.5f * uParam0->f_14));
			}
			else
			{
				fVar3 = (uParam0->f_11.f_1 - (0.5f * uParam0->f_14));
				fVar5 = (uParam0->f_8.f_1 + (0.5f * uParam0->f_14));
			}
			break;
	}
	PATHFIND::REQUEST_PATH_NODES_IN_AREA_THIS_FRAME(fVar2, fVar3, fVar4, fVar5);
	if (uParam0->f_7 == 0)
	{
		Var6 = { *uParam0 };
	}
	else
	{
		Var6 = { uParam0->f_8 + uParam0->f_11 * Vector(0.5f, 0.5f, 0.5f) };
	}
	Var7 = { Var6 + Vector(-0.1f, -0.1f, -0.1f) };
	Var8 = { Var6 + Vector(0.1f, 0.1f, 0.1f) };
	if (!Global_2667225.f_2464)
	{
		NETWORK::NETWORK_CANCEL_RESPAWN_SEARCH();
		PED::SPAWNPOINTS_CANCEL_SEARCH();
		__LIB_1__::func_442();
		if (uParam1->f_7 && uParam0->f_7 == 0)
		{
			if (SYSTEM::VMAG(*uParam0) > 0f)
			{
				if (__LIB_2__::func_992(*uParam0, 6f, 1f, 1f, 5f, 1, 1, 1, 120f, 0, -1, 1, uParam1->f_5, uParam0->f_17, 0, 0, 0))
				{
					*(uParam2[0 /*3*/]) = { *uParam0 };
					uParam2->f_16[0] = uParam0->f_3;
					return 1;
				}
			}
		}
		if (!PED::SPAWNPOINTS_IS_SEARCH_ACTIVE())
		{
			Global_2667225.f_2487 = uParam0->f_7;
			switch (uParam0->f_7)
			{
				case 0:
					Global_2667225.f_2466 = { *uParam0 };
					Global_2667225.f_2469 = uParam0->f_4;
					break;
				case 1:
					Global_2667225.f_2480 = { uParam0->f_8 };
					Global_2667225.f_2483 = { uParam0->f_11 };
					Global_2667225.f_2486 = 0f;
					Global_2667225.f_2466 = { uParam0->f_8 + uParam0->f_11 / Vector(2f, 2f, 2f) };
					break;
				case 2:
					Global_2667225.f_2480 = { uParam0->f_8 };
					Global_2667225.f_2483 = { uParam0->f_11 };
					Global_2667225.f_2486 = uParam0->f_14;
					Global_2667225.f_2466 = { uParam0->f_8 + uParam0->f_11 / Vector(2f, 2f, 2f) };
					break;
			}
			if (!uParam1->f_8 && !uParam1->f_9)
			{
				__LIB_1__::func_436(Var6.f_0, Var6.f_1);
			}
			Global_2667225.f_2465 = 1;
			Global_2667225.f_2464 = 1;
			Global_2667225.f_2471 = NETWORK::GET_NETWORK_TIME();
			Global_2667225.f_2470 = NETWORK::GET_NETWORK_TIME();
			Global_2667225.f_2473 = SCRIPT::GET_ID_OF_THIS_THREAD();
		}
		else
		{
			return 0;
		}
	}
	if (Global_2667225.f_2464)
	{
		if (Global_2667225.f_2465 == 1)
		{
			if (PATHFIND::ARE_NODES_LOADED_FOR_AREA(fVar2, fVar3, fVar4, fVar5) || NETWORK::GET_TIME_DIFFERENCE(NETWORK::GET_NETWORK_TIME(), Global_2667225.f_2471) > 5000)
			{
				Global_2667225.f_2471 = NETWORK::GET_NETWORK_TIME();
				if (uParam1->f_8 || uParam1->f_9)
				{
					if (uParam0->f_21)
					{
						*(uParam2[0 /*3*/]) = { uParam0->f_18 };
					}
					else
					{
						*(uParam2[0 /*3*/]) = { Var6 };
					}
					Var14.f_6 = 1082130432;
					Var14.f_7 = 1176255488;
					Var14.f_8 = 1;
					Var14.f_10 = 1;
					Var14.f_13 = 1;
					Var14.f_15 = 1;
					Var14.f_16 = 1;
					Var14.f_31 = 1;
					Var14.f_34 = joaat("tailgater");
					Var14.f_38 = 2;
					Var14.f_45 = 2;
					Var14.f_49 = 1123024896;
					Var14.f_53 = 999;
					Var14.f_54 = 1176256410;
					Var14.f_55 = 1;
					Var14.f_56 = 1;
					Var14.f_57 = 1;
					Var14 = { *uParam1 };
					Var14.f_3 = uParam1->f_5;
					Var14.f_11 = uParam1->f_9;
					Var14.f_18 = 1;
					if (uParam1->f_32 > 0f)
					{
						Var14.f_6 = uParam1->f_32;
					}
					switch (uParam0->f_7)
					{
						case 0:
							Var14.f_19 = { *uParam0 };
							Var14.f_25 = uParam0->f_4;
							break;
						case 1:
							Var14.f_19 = { uParam0->f_8 };
							Var14.f_22 = { uParam0->f_11 };
							Var14.f_25 = 0f;
							break;
						case 2:
							Var14.f_19 = { uParam0->f_8 };
							Var14.f_22 = { uParam0->f_11 };
							Var14.f_25 = uParam0->f_14;
							break;
					}
					Var14.f_26 = uParam0->f_7;
					Var14.f_12 = uParam0->f_15;
					if (uParam0->f_21)
					{
						Var14.f_30 = 1;
						Var14.f_32 = 1;
					}
					iVar9 = 0;
					while (iVar9 < 2)
					{
						Var14.f_38[iVar9 /*3*/] = { uParam1->f_13[iVar9 /*3*/] };
						Var14.f_45[iVar9] = uParam1->f_20[iVar9];
						iVar9++;
					}
					Var14.f_51 = uParam1->f_30;
					Var14.f_55 = uParam0->f_16;
					if (uParam0->f_26)
					{
						Var14.f_10 = 0;
					}
					if (__LIB_1__::func_435(Global_4718592.f_168757))
					{
						Var14.f_9 = 1;
					}
					Var14.f_60 = uParam0->f_30;
					func_697(uParam2[0 /*3*/], &(uParam2->f_16[0]), &Var14);
					if ((uParam1->f_7 && uParam1->f_9) && uParam0->f_7 == 0)
					{
						if (!__LIB_0__::func_828(*(uParam2[0 /*3*/]), *uParam0, uParam0->f_4, 1, 1))
						{
							*(uParam2[0 /*3*/]) = { *uParam0 };
							uParam2->f_16[0] = uParam0->f_3;
						}
					}
					Global_2667225.f_2465 = 9;
				}
				else
				{
					Global_2667225.f_2465 = 2;
				}
			}
		}
		if (Global_2667225.f_2465 == 2)
		{
			if ((PATHFIND::IS_NAVMESH_LOADED_IN_AREA(Var7, Var8) || NETWORK::GET_TIME_DIFFERENCE(NETWORK::GET_NETWORK_TIME(), Global_2667225.f_2471) > 15000) || PATHFIND::GET_NUM_NAVMESHES_EXISTING_IN_AREA(Var7, Var8) == 0)
			{
				Global_2667225.f_2471 = NETWORK::GET_NETWORK_TIME();
				if (uParam0->f_5 && !__LIB_0__::func_361(PLAYER::PLAYER_ID(), 0))
				{
					Global_2667225.f_2465 = 3;
				}
				else
				{
					Global_2667225.f_2465 = 4;
				}
			}
			else if (NETWORK::GET_TIME_DIFFERENCE(NETWORK::GET_NETWORK_TIME(), Global_2667225.f_2475) > 7000)
			{
				__LIB_2__::func_739(Var6.f_0, Var6.f_1);
			}
		}
		if (Global_2667225.f_2465 == 3)
		{
			if (__LIB_1__::func_432() || NETWORK::GET_TIME_DIFFERENCE(NETWORK::GET_NETWORK_TIME(), Global_2667225.f_2471) > 10000)
			{
				Global_2667225.f_2471 = NETWORK::GET_NETWORK_TIME();
				Global_2667225.f_2465 = 4;
			}
		}
		if (Global_2667225.f_2465 == 4)
		{
			if (PED::SPAWNPOINTS_IS_SEARCH_ACTIVE())
			{
				NETWORK::NETWORK_CANCEL_RESPAWN_SEARCH();
				PED::SPAWNPOINTS_CANCEL_SEARCH();
			}
			else
			{
				iVar0 = 0;
				__LIB_2__::func_740();
				if (uParam0->f_5)
				{
					if (SYSTEM::VMAG(*uParam1) == 0f)
					{
						iVar0 += 2;
					}
					if (uParam1->f_3)
					{
						iVar0 += 8;
					}
					iVar0 += 16;
					iVar0 += 32;
					if (!PLAYER::GET_PLAYER_TEAM(PLAYER::PLAYER_ID()) == -1)
					{
						iVar0 += 64;
						iVar0 += 128;
						iVar0 += 256;
					}
					iVar0 += 2048;
					iVar0 += 512;
					iVar0 += 1024;
					switch (uParam0->f_7)
					{
						case 0:
							if (NETWORK::NETWORK_START_RESPAWN_SEARCH_FOR_PLAYER(PLAYER::PLAYER_ID(), *uParam0, uParam0->f_4, *uParam1, iVar0))
							{
								Global_2667225.f_2471 = NETWORK::GET_NETWORK_TIME();
								Global_2667225.f_2465 = 5;
							}
							break;
						case 1:
							__LIB_2__::func_669(uParam0->f_8, uParam0->f_11, &Var10, &Var11, &fVar12);
							if (NETWORK::NETWORK_START_RESPAWN_SEARCH_IN_ANGLED_AREA_FOR_PLAYER(PLAYER::PLAYER_ID(), Var10, Var11, fVar12, *uParam1, iVar0))
							{
								Global_2667225.f_2471 = NETWORK::GET_NETWORK_TIME();
								Global_2667225.f_2465 = 5;
							}
							break;
						case 2:
							if (NETWORK::NETWORK_START_RESPAWN_SEARCH_IN_ANGLED_AREA_FOR_PLAYER(PLAYER::PLAYER_ID(), uParam0->f_8, uParam0->f_11, uParam0->f_14, *uParam1, iVar0))
							{
								Global_2667225.f_2471 = NETWORK::GET_NETWORK_TIME();
								Global_2667225.f_2465 = 5;
							}
							break;
					}
				}
				else
				{
					if (uParam1->f_3)
					{
						iVar0++;
					}
					iVar0 += 2;
					if (uParam1->f_10)
					{
						iVar0 += 32;
					}
					Global_2667225.f_2471 = NETWORK::GET_NETWORK_TIME();
					Global_2667225.f_2465 = 5;
					switch (uParam0->f_7)
					{
						case 0:
							PED::SPAWNPOINTS_START_SEARCH(*uParam0, uParam0->f_4, 5f, iVar0, 2f, 5000);
							break;
						case 1:
							__LIB_2__::func_669(uParam0->f_8, uParam0->f_11, &Var10, &Var11, &fVar12);
							PED::SPAWNPOINTS_START_SEARCH_IN_ANGLED_AREA(Var10, Var11, fVar12, iVar0, 2f, 5000);
							break;
						case 2:
							PED::SPAWNPOINTS_START_SEARCH_IN_ANGLED_AREA(uParam0->f_8, uParam0->f_11, uParam0->f_14, iVar0, 2f, 5000);
							break;
						}
					}
				}
		}
		if (Global_2667225.f_2465 == 5)
		{
			if (func_930(uParam2, uParam0, uParam1, 0))
			{
				if (Global_2667225.f_2491.f_5)
				{
					Global_2667225.f_2471 = NETWORK::GET_NETWORK_TIME();
					Global_2667225.f_2465 = 6;
				}
				else
				{
					Global_2667225.f_2471 = NETWORK::GET_NETWORK_TIME();
					if (!uParam0->f_5)
					{
						if (!SYSTEM::VMAG(*uParam1) == 0f)
						{
							Var1 = { *uParam1 - *(uParam2[0 /*3*/]) };
							uParam2->f_16[0] = MISC::GET_HEADING_FROM_VECTOR_2D(Var1.f_0, Var1.f_1);
						}
					}
					Global_2667225.f_2465 = 9;
				}
			}
			else if (NETWORK::GET_TIME_DIFFERENCE(NETWORK::GET_NETWORK_TIME(), Global_2667225.f_2471) > 20000)
			{
				NETWORK::NETWORK_CANCEL_RESPAWN_SEARCH();
				PED::SPAWNPOINTS_CANCEL_SEARCH();
				Global_2667225.f_2471 = NETWORK::GET_NETWORK_TIME();
				Global_2667225.f_2465 = 8;
			}
		}
		if (Global_2667225.f_2465 == 6)
		{
			iVar0 = 0;
			Global_2667225.f_2491.f_1 = 0;
			if (uParam1->f_3)
			{
				iVar0++;
			}
			else if (uParam0->f_7 == 0)
			{
				if (!__LIB_1__::func_413(uParam0->f_4))
				{
					if (INTERIOR::IS_VALID_INTERIOR(INTERIOR::GET_INTERIOR_AT_COORDS(Var6)))
					{
						iVar0++;
					}
				}
			}
			else if (!__LIB_1__::func_412(uParam0->f_8, uParam0->f_11, uParam0->f_14))
			{
				if (INTERIOR::IS_VALID_INTERIOR(INTERIOR::GET_INTERIOR_AT_COORDS(Var6)))
				{
					iVar0++;
				}
			}
			iVar0 += 2;
			if (uParam1->f_10)
			{
				iVar0 += 32;
			}
			if (uParam0->f_15)
			{
				iVar0 += 16;
			}
			Global_2667225.f_2471 = NETWORK::GET_NETWORK_TIME();
			Global_2667225.f_2465 = 7;
			switch (uParam0->f_7)
			{
				case 0:
					PED::SPAWNPOINTS_START_SEARCH(*uParam0, uParam0->f_4, 5f, iVar0, 2f, 5000);
					break;
				case 1:
					__LIB_2__::func_669(uParam0->f_8, uParam0->f_11, &Var10, &Var11, &fVar12);
					PED::SPAWNPOINTS_START_SEARCH_IN_ANGLED_AREA(Var10, Var11, fVar12, iVar0, 2f, 5000);
					break;
				case 2:
					PED::SPAWNPOINTS_START_SEARCH_IN_ANGLED_AREA(uParam0->f_8, uParam0->f_11, uParam0->f_14, iVar0, 2f, 5000);
					break;
				}
		}
		if (Global_2667225.f_2465 == 7)
		{
			if (func_930(uParam2, uParam0, uParam1, 1))
			{
				if (SYSTEM::VMAG(*(uParam2[0 /*3*/])) == 0f)
				{
					iVar9 = 0;
					while (iVar9 < 3)
					{
						if (SYSTEM::VMAG(*(uParam2[0 /*3*/])) == 0f)
						{
							if (!SYSTEM::VMAG(Global_2667225.f_2625[iVar9 /*3*/]) == 0f)
							{
								switch (uParam0->f_7)
								{
									case 0:
										if (__LIB_0__::func_828(Global_2667225.f_2625[iVar9 /*3*/], *uParam0, uParam0->f_4, 0, 0))
										{
											*(uParam2[0 /*3*/]) = { Global_2667225.f_2625[iVar9 /*3*/] };
										}
										break;
									case 1:
										if (__LIB_1__::func_453(Global_2667225.f_2625[iVar9 /*3*/], uParam0->f_8, uParam0->f_11, 0, 0))
										{
											*(uParam2[0 /*3*/]) = { Global_2667225.f_2625[iVar9 /*3*/] };
										}
										break;
									case 2:
										if (OBJECT::IS_POINT_IN_ANGLED_AREA(Global_2667225.f_2625[iVar9 /*3*/], uParam0->f_8, uParam0->f_11, uParam0->f_14, false, true))
										{
											*(uParam2[0 /*3*/]) = { Global_2667225.f_2625[iVar9 /*3*/] };
										}
										break;
									}
								}
						}
						iVar9++;
					}
					if (SYSTEM::VMAG(*(uParam2[0 /*3*/])) == 0f)
					{
						switch (uParam0->f_7)
						{
							case 0:
								Var1 = { *uParam0 };
								break;
							case 1:
							case 2:
								Var1 = { uParam0->f_8 + uParam0->f_11 / Vector(2f, 2f, 2f) };
								break;
						}
						func_922(&Var1, 0, 1, 1, 0, uParam0, uParam1);
						*(uParam2[0 /*3*/]) = { Var1 };
					}
				}
				Global_2667225.f_2471 = NETWORK::GET_NETWORK_TIME();
				if (!SYSTEM::VMAG(*uParam1) == 0f)
				{
					iVar9 = 0;
					while (iVar9 < 5)
					{
						Var1 = { *uParam1 - *(uParam2[iVar9 /*3*/]) };
						uParam2->f_16[iVar9] = MISC::GET_HEADING_FROM_VECTOR_2D(Var1.f_0, Var1.f_1);
						iVar9++;
					}
				}
				Global_2667225.f_2465 = 9;
			}
			else if (NETWORK::GET_TIME_DIFFERENCE(NETWORK::GET_NETWORK_TIME(), Global_2667225.f_2471) > 20000)
			{
				Global_2667225.f_2471 = NETWORK::GET_NETWORK_TIME();
				Global_2667225.f_2465 = 8;
			}
		}
		if (Global_2667225.f_2465 == 8)
		{
			if (uParam0->f_5)
			{
				if (__LIB_1__::func_410(Global_2667225.f_489))
				{
				}
			}
			else if (Global_2667225.f_2491.f_2)
			{
				__LIB_1__::func_409(uParam2, &(Global_2667225.f_2491.f_6));
			}
			else
			{
				if (uParam0->f_15)
				{
					bVar15 = false;
				}
				else
				{
					bVar15 = true;
				}
				*(uParam2[0 /*3*/]) = { Global_2667225.f_2466 };
				func_922(uParam2[0 /*3*/], 0, bVar15, 0, 0, uParam0, uParam1);
			}
			Global_2667225.f_2471 = NETWORK::GET_NETWORK_TIME();
			Global_2667225.f_2465 = 9;
		}
		if (Global_2667225.f_2465 == 9)
		{
			Global_2667225.f_2464 = 0;
			NETWORK::NETWORK_CANCEL_RESPAWN_SEARCH();
			PED::SPAWNPOINTS_CANCEL_SEARCH();
			__LIB_1__::func_442();
			return 1;
		}
		Global_2667225.f_2470 = NETWORK::GET_NETWORK_TIME();
	}
	return 0;
}

void func_922(var uParam0, bool bParam1, bool bParam2, int iParam3, bool bParam4, var uParam5, var uParam6)//Position - 0x87D0A
{
	struct<3> Var0;
	var uVar1;
	struct<61> Var2;
	var uVar3;
	int iVar4;
	bool bVar5;
	int iVar6;
	struct<3> Var7;
	struct<3> Var8;
	struct<3> Var9;
	float fVar10;
	Var2.f_6 = 1082130432;
	Var2.f_7 = 1176255488;
	Var2.f_8 = 1;
	Var2.f_10 = 1;
	Var2.f_13 = 1;
	Var2.f_15 = 1;
	Var2.f_16 = 1;
	Var2.f_31 = 1;
	Var2.f_34 = joaat("tailgater");
	Var2.f_38 = 2;
	Var2.f_45 = 2;
	Var2.f_49 = 1123024896;
	Var2.f_53 = 999;
	Var2.f_54 = 1176256410;
	Var2.f_55 = 1;
	Var2.f_56 = 1;
	Var2.f_57 = 1;
	if (bParam1)
	{
		iVar6 = 0;
	}
	else
	{
		iVar6 = 16;
	}
	if (!uParam6->f_3)
	{
		if (uParam5->f_5)
		{
			if (!uParam5->f_22)
			{
				iVar6 += 4;
			}
			else
			{
				switch (uParam5->f_7)
				{
					case 0:
						Var7 = { *uParam5 };
						if (__LIB_1__::func_413(uParam5->f_4) || !INTERIOR::IS_VALID_INTERIOR(INTERIOR::GET_INTERIOR_AT_COORDS(Var7)))
						{
							iVar6 += 4;
						}
						break;
					case 1:
						Var7 = { uParam5->f_8 + uParam5->f_11 * Vector(0.5f, 0.5f, 0.5f) };
						if (__LIB_1__::func_412(uParam5->f_8, uParam5->f_11, 0f) || !INTERIOR::IS_VALID_INTERIOR(INTERIOR::GET_INTERIOR_AT_COORDS(Var7)))
						{
							iVar6 += 4;
						}
						break;
					case 2:
						Var7 = { uParam5->f_8 + uParam5->f_11 * Vector(0.5f, 0.5f, 0.5f) };
						if (__LIB_1__::func_412(uParam5->f_8, uParam5->f_11, uParam5->f_14) || !INTERIOR::IS_VALID_INTERIOR(INTERIOR::GET_INTERIOR_AT_COORDS(Var7)))
						{
							iVar6 += 4;
						}
						break;
					}
			}
		}
		else
		{
			iVar6 += 4;
		}
	}
	if (func_924(*uParam0, &Var0, iVar6, iParam3, 1))
	{
	}
	else
	{
		bVar5 = true;
	}
	if (bVar5)
	{
		Var0 = { *uParam0 };
		Var2 = { *uParam6 };
		Var2.f_8 = 1;
		Var2.f_3 = uParam6->f_5;
		if (bParam2)
		{
			Var2.f_10 = 0;
		}
		else
		{
			Var2.f_10 = 1;
		}
		Var2.f_13 = uParam5->f_15;
		Var2.f_15 = iParam3;
		if (uParam6->f_32 > 0f)
		{
			Var2.f_6 = uParam6->f_32;
		}
		if (bParam4)
		{
			Var2.f_18 = 1;
			Var2.f_26 = uParam5->f_7;
			switch (uParam5->f_7)
			{
				case 0:
					Var2.f_19 = { *uParam5 };
					Var2.f_25 = uParam5->f_4;
					break;
				case 1:
					Var2.f_19 = { uParam5->f_8 };
					Var2.f_22 = { uParam5->f_11 };
					Var2.f_25 = 0f;
					break;
				case 2:
					Var2.f_19 = { uParam5->f_8 };
					Var2.f_22 = { uParam5->f_11 };
					Var2.f_25 = uParam5->f_14;
					break;
				}
		}
		iVar4 = 0;
		while (iVar4 < 2)
		{
			Var2.f_38[iVar4 /*3*/] = { uParam6->f_13[iVar4 /*3*/] };
			Var2.f_45[iVar4] = uParam6->f_20[iVar4];
			iVar4++;
		}
		Var2.f_51 = uParam6->f_30;
		Var2.f_55 = uParam5->f_16;
		if (__LIB_0__::func_891(PLAYER::PLAYER_ID(), 0))
		{
			Var2.f_9 = 1;
		}
		Var2.f_60 = uParam5->f_30;
		func_697(&Var0, &uVar1, &Var2);
	}
	if (bParam4)
	{
		switch (uParam5->f_7)
		{
			case 0:
				Var8 = { *uParam5 };
				fVar10 = uParam5->f_4;
				break;
			case 1:
				Var8 = { uParam5->f_8 };
				Var9 = { uParam5->f_11 };
				break;
			case 2:
				Var8 = { uParam5->f_8 };
				Var9 = { uParam5->f_11 };
				fVar10 = uParam5->f_14;
				break;
		}
		if (!__LIB_2__::func_735(Var0, uParam5->f_7, Var8, Var9, fVar10))
		{
			if (func_924(*uParam0, &Var0, iVar6, iParam3, 0))
			{
				if (!__LIB_2__::func_735(Var0, uParam5->f_7, Var8, Var9, fVar10))
				{
					if (uParam5->f_7 == 2 || uParam5->f_7 == 1)
					{
						Var0 = { Var8 + Var9 * Vector(0.5f, 0.5f, 0.5f) };
					}
					else
					{
						Var0 = { Var8 };
					}
					if (MISC::GET_GROUND_Z_FOR_3D_COORD(Var0, &uVar3, false, false))
					{
						Var0.f_2 = uVar3;
					}
				}
			}
			else if (func_741(uParam0, 1, 1, 1, 1))
			{
				func_922(uParam0, bParam1, bParam2, iParam3, bParam4, uParam5, uParam6);
			}
			else
			{
				if (uParam5->f_7 == 2 || uParam5->f_7 == 1)
				{
					Var0 = { Var8 + Var9 * Vector(0.5f, 0.5f, 0.5f) };
				}
				else
				{
					Var0 = { Var8 };
				}
				if (MISC::GET_GROUND_Z_FOR_3D_COORD(Var0, &uVar3, false, false))
				{
					Var0.f_2 = uVar3;
				}
			}
		}
	}
	*uParam0 = { Var0 };
	Global_2667225.f_667 = 1;
}

int func_924(struct<3> Param0, var* uParam1, int iParam2, int iParam3, bool bParam4)//Position - 0x881EB
{
	if (__LIB_1__::func_411(Param0, uParam1))
	{
		if (func_925(Param0, uParam1, iParam3, bParam4))
		{
			return 1;
		}
	}
	if (PATHFIND::GET_SAFE_COORD_FOR_PED(Param0, false, uParam1, iParam2))
	{
		if (func_925(Param0, uParam1, iParam3, bParam4))
		{
			return 1;
		}
	}
	return 0;
}

int func_925(struct<3> Param0, var* uParam1, int iParam2, bool bParam3)//Position - 0x88247
{
	float fVar0;
	var uVar1;
	var uVar2;
	fVar0 = SYSTEM::VDIST(Param0, *uParam1);
	if (fVar0 < 40f)
	{
		uVar1 = 2;
		uVar2 = 2;
		if ((iParam2 == 1 && !func_738(Global_2667225.f_512, uParam1, &uVar1, &uVar2, bParam3, 1)) || iParam2 == 0)
		{
			if (!__LIB_2__::func_990(*uParam1, 1056964608))
			{
				if (!__LIB_2__::func_664(uParam1, 0))
				{
					return 1;
				}
			}
		}
	}
	return 0;
}

int func_930(var uParam0, var uParam1, var uParam2, bool bParam3)//Position - 0x88516
{
	struct<3> Var0;
	float fVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	bool bVar6;
	if (Global_2667225.f_2491.f_1 == 0 && Global_2667225.f_2491 == 0)
	{
		if (uParam1->f_5 && !bParam3)
		{
			switch (NETWORK::NETWORK_QUERY_RESPAWN_RESULTS(&(Global_2667225.f_2491.f_1)))
			{
				case 0:
					func_977(uParam1, uParam2);
					if (!Global_2667225.f_2491.f_2)
					{
						if (uParam2->f_7 && Global_2667225.f_555.f_7 == 0)
						{
							*(uParam0[0 /*3*/]) = { *uParam1 };
							uParam0->f_16[0] = uParam1->f_3;
							return 1;
						}
						else
						{
							if (uParam1->f_21)
							{
								*(uParam0[0 /*3*/]) = { uParam1->f_18 };
							}
							else
							{
								*(uParam0[0 /*3*/]) = { Global_2667225.f_2466 };
							}
							if (uParam1->f_5 && __LIB_1__::func_410(Global_2667225.f_489))
							{
								if (!Global_2667225.f_2491.f_5)
								{
									Global_2667225.f_2491.f_5 = 1;
								}
								else
								{
									func_922(uParam0[0 /*3*/], 1, 0, 1, 1, uParam1, uParam2);
								}
							}
							else
							{
								func_922(uParam0[0 /*3*/], 0, 0, 1, 0, uParam1, uParam2);
							}
							uParam0->f_16[0] = MISC::GET_RANDOM_FLOAT_IN_RANGE(0f, 360f);
							return 1;
						}
					}
					break;
				case 1:
					func_977(uParam1, uParam2);
					break;
				case 2:
					return 0;
					break;
				case 3:
					return 0;
					break;
			}
		}
		else if (PED::SPAWNPOINTS_IS_SEARCH_ACTIVE())
		{
			if (!PED::SPAWNPOINTS_IS_SEARCH_FAILED())
			{
				if (PED::SPAWNPOINTS_IS_SEARCH_COMPLETE())
				{
					func_977(uParam1, uParam2);
					Global_2667225.f_2491.f_1 = PED::SPAWNPOINTS_GET_NUM_SEARCH_RESULTS();
				}
				else
				{
					return 0;
				}
			}
			else
			{
				PED::SPAWNPOINTS_CANCEL_SEARCH();
				func_977(uParam1, uParam2);
				if (!Global_2667225.f_2491.f_2)
				{
					Global_2667225.f_2491.f_5 = 1;
					return 1;
				}
			}
		}
		else
		{
			return 0;
		}
	}
	if (uParam1->f_5)
	{
		func_974(Global_2667225.f_555, &(Global_2667225.f_2491.f_57), &(Global_2667225.f_2491.f_90));
	}
	if (uParam2->f_7 && !Global_2667225.f_2491.f_4)
	{
		Global_2667225.f_2491.f_4 = 1;
		func_938(*uParam1, uParam1->f_3, uParam1, uParam2, 1, -1);
	}
	iVar4 = 0;
	if (uParam1->f_5)
	{
		iVar5 = 64;
	}
	else
	{
		iVar5 = 32;
	}
	if (Global_2667225.f_2491.f_1 > 0 || Global_2667225.f_2491 > 0)
	{
		if (uParam1->f_5 || PED::SPAWNPOINTS_IS_SEARCH_ACTIVE())
		{
			iVar2 = 0;
			while (iVar2 < Global_2667225.f_2491.f_1)
			{
				if (iVar4 < iVar5)
				{
					if (iVar2 <= Global_2667225.f_2491.f_3)
					{
						iVar2 = Global_2667225.f_2491.f_3 + 1;
					}
					if (iVar2 > (Global_2667225.f_2491.f_1 - 1))
					{
						iVar2 = (Global_2667225.f_2491.f_1 - 1);
					}
					if (iVar2 < 0)
					{
						iVar2 = 0;
					}
					if (uParam1->f_5 && !bParam3)
					{
						NETWORK::NETWORK_GET_RESPAWN_RESULT(iVar2, &Var0, &fVar1);
						fVar1 = (fVar1 * 57.29578f);
					}
					else
					{
						PED::SPAWNPOINTS_GET_SEARCH_RESULT(iVar2, &Var0, &(Var0.f_1), &(Var0.f_2));
					}
					if (uParam1->f_5 && !bParam3)
					{
						iVar3 = NETWORK::NETWORK_GET_RESPAWN_RESULT_FLAGS(iVar2);
					}
					else
					{
						PED::SPAWNPOINTS_GET_SEARCH_RESULT_FLAGS(iVar2, &iVar3);
					}
					func_938(Var0, fVar1, uParam1, uParam2, 0, iVar3);
					iVar4++;
					Global_2667225.f_2491.f_3 = iVar2;
				}
				else
				{
					return 0;
				}
				iVar2++;
			}
		}
		else
		{
			iVar2 = Global_2667225.f_2491.f_1;
		}
		if (Global_2667225.f_2491.f_1 == iVar2)
		{
			if (uParam1->f_5 && Global_2667225.f_2889)
			{
				__LIB_2__::func_736(&(Global_2667225.f_2491.f_6[0 /*10*/]), &(Global_2667225.f_2491.f_6[1 /*10*/]), &(Global_2667225.f_2491.f_6[2 /*10*/]));
			}
			if (uParam1->f_5 && __LIB_1__::func_410(Global_2667225.f_489))
			{
				if (Global_2667225.f_2491.f_2)
				{
					__LIB_1__::func_409(uParam0, &(Global_2667225.f_2491.f_6));
					__LIB_1__::func_414(*(uParam0[0 /*3*/]));
					return 1;
				}
				else
				{
					*(uParam0[0 /*3*/]) = { Global_2667225.f_2466 };
					func_922(uParam0[0 /*3*/], 0, 0, 0, 0, uParam1, uParam2);
					uParam0->f_16[0] = MISC::GET_RANDOM_FLOAT_IN_RANGE(0f, 360f);
					__LIB_1__::func_414(*(uParam0[0 /*3*/]));
					return 1;
				}
			}
			else if (Global_2667225.f_2491.f_2)
			{
				__LIB_1__::func_409(uParam0, &(Global_2667225.f_2491.f_6));
				__LIB_1__::func_414(*(uParam0[0 /*3*/]));
				return 1;
			}
			else if (uParam1->f_5)
			{
				iVar2 = MISC::GET_RANDOM_INT_IN_RANGE(0, Global_2667225.f_2491.f_1);
				NETWORK::NETWORK_GET_RESPAWN_RESULT(iVar2, uParam0[0 /*3*/], &(uParam0->f_16[0]));
				if (!__LIB_2__::func_664(uParam0[0 /*3*/], 0))
				{
					uParam0->f_16[0] = (uParam0->f_16[0] * 57.29578f);
					__LIB_1__::func_414(*(uParam0[0 /*3*/]));
					return 1;
				}
				else
				{
					*(uParam0[0 /*3*/]) = { Global_2667225.f_2466 };
					func_922(uParam0[0 /*3*/], 1, 0, 1, 1, uParam1, uParam2);
					uParam0->f_16[0] = MISC::GET_RANDOM_FLOAT_IN_RANGE(0f, 360f);
					__LIB_1__::func_414(*(uParam0[0 /*3*/]));
					return 1;
				}
			}
			else
			{
				*(uParam0[0 /*3*/]) = { Global_2667225.f_2466 };
				func_922(uParam0[0 /*3*/], 0, 0, 0, 0, uParam1, uParam2);
				uParam0->f_16[0] = MISC::GET_RANDOM_FLOAT_IN_RANGE(0f, 360f);
				__LIB_1__::func_414(*(uParam0[0 /*3*/]));
				return 1;
			}
		}
	}
	else
	{
		*(uParam0[0 /*3*/]) = { Global_2667225.f_2466 };
		if (uParam1->f_5 && __LIB_1__::func_410(Global_2667225.f_489))
		{
			if (!Global_2667225.f_2491.f_5)
			{
				Global_2667225.f_2491.f_5 = 1;
			}
			else
			{
				func_922(uParam0[0 /*3*/], 1, 0, 1, 1, uParam1, uParam2);
			}
		}
		else
		{
			if (uParam1->f_15)
			{
				bVar6 = false;
			}
			else
			{
				bVar6 = true;
			}
			func_922(uParam0[0 /*3*/], 0, bVar6, 0, 0, uParam1, uParam2);
		}
		uParam0->f_16[0] = MISC::GET_RANDOM_FLOAT_IN_RANGE(0f, 360f);
		__LIB_1__::func_414(*(uParam0[0 /*3*/]));
		return 1;
	}
	return 0;
}

void func_938(struct<3> Param0, float fParam1, var uParam2, var uParam3, bool bParam4, int iParam5)//Position - 0x88DDA
{
	float fVar0;
	float fVar1;
	float fVar2;
	float fVar3;
	bool bVar4;
	float fVar5;
	float fVar6;
	float fVar7;
	int iVar8;
	bool bVar9;
	int iVar10;
	int iVar11;
	struct<3> Var12;
	bool bVar13;
	int iVar14;
	struct<3> Var15;
	struct<3> Var16;
	float fVar17;
	int iVar18;
	struct<10> Var19;
	bool bVar20;
	bool bVar21;
	iVar10 = 0;
	iVar8 = 0;
	bVar9 = false;
	if (uParam2->f_5)
	{
		if (Global_2667225.f_489 == 1)
		{
			if (MISC::ABSF((Global_2667225.f_512.f_2 - Param0.f_2)) < 25f)
			{
				iVar8++;
			}
		}
		else
		{
			iVar8++;
		}
	}
	else
	{
		iVar8++;
	}
	if (uParam2->f_5)
	{
		if (__LIB_2__::func_103(PLAYER::PLAYER_ID()))
		{
			if (iParam5 == -1)
			{
				bVar9 = true;
			}
			else if (!iParam5 & 1 == 0)
			{
				bVar9 = true;
			}
		}
		else if (iParam5 == -1)
		{
			iVar8 += 2;
		}
		else if (!iParam5 & 1 == 0)
		{
			iVar8 += 2;
		}
	}
	else
	{
		iVar8 += 2;
	}
	if (uParam2->f_5 && uParam2->f_6)
	{
		if (!__LIB_2__::func_855(Param0, 1084227584, 1123024896, 0))
		{
			iVar8 += 4;
		}
	}
	else
	{
		iVar8 += 4;
	}
	if (uParam2->f_5)
	{
		if (!PED::IS_ANY_HOSTILE_PED_NEAR_POINT(PLAYER::PLAYER_PED_ID(), Param0, 65f))
		{
			iVar8 += 8;
			iVar8 += 16;
		}
		else if (!PED::IS_ANY_HOSTILE_PED_NEAR_POINT(PLAYER::PLAYER_PED_ID(), Param0, 20f))
		{
			iVar8 += 8;
		}
	}
	else
	{
		iVar8 += 8;
		iVar8 += 16;
	}
	if (uParam2->f_5)
	{
		if (!__LIB_2__::func_850(Param0, uParam3->f_5, 1, 1, 1, 1, 1, 1, 0))
		{
			iVar8 += 32;
		}
	}
	else
	{
		iVar8 += 32;
	}
	bVar13 = true;
	iVar11 = 0;
	while (iVar11 < 2)
	{
		if (SYSTEM::VMAG(uParam3->f_13[iVar11 /*3*/]) > 0f)
		{
			if (!SYSTEM::VDIST(Param0, uParam3->f_13[iVar11 /*3*/]) > uParam3->f_20[iVar11])
			{
				bVar13 = false;
			}
		}
		iVar11++;
	}
	if (bVar13)
	{
		if ((SYSTEM::VMAG(uParam3->f_23) > 0f && SYSTEM::VMAG(uParam3->f_26) > 0f) && uParam3->f_29 > 0f)
		{
			if (OBJECT::IS_POINT_IN_ANGLED_AREA(Param0, uParam3->f_23, uParam3->f_26, uParam3->f_29, false, true))
			{
				bVar13 = false;
			}
		}
	}
	if (bVar13)
	{
		iVar8 += 256;
	}
	if (uParam2->f_5)
	{
		if (__LIB_11__::func_275(Param0, fParam1, uParam2->f_15, __LIB_1__::func_430(1), uParam2->f_16, 0, 1123024896, 1101004800, 1101004800, 1084227584, 1092616192, 0, 0, 0))
		{
			iVar8 += 64;
			iVar8 += 128;
		}
		else
		{
			iVar10 = Global_2667225.f_3;
		}
	}
	else if (!__LIB_10__::func_742(Param0, 25f, PLAYER::PLAYER_ID(), 1, 1))
	{
		if (uParam2->f_15)
		{
			fVar1 = 3.5f;
		}
		else
		{
			fVar1 = 1f;
		}
		if (!__LIB_0__::func_944(Param0, fVar1, 1, 1, 120f, 0, -1, 0f, 1))
		{
			iVar8 += 128;
			iVar8 += 64;
		}
		else if (!__LIB_0__::func_944(Param0, fVar1, 1, 1, 60f, 0, -1, 0f, 1))
		{
			iVar8 += 64;
		}
	}
	if (uParam2->f_5)
	{
		if (!Global_2667225.f_701)
		{
			Var12 = { Global_2667225.f_512 };
			if (Global_2667225.f_489 == 26)
			{
				Var12 = { Global_2667225.f_555.f_18 };
			}
			if (!__LIB_0__::func_822(Param0, 0.5f))
			{
				if (func_789(Var12))
				{
					if (!func_741(&Param0, 0, 0, 0, 1) && !__LIB_2__::func_784(&Param0, 0))
					{
						iVar8 += 512;
					}
				}
				else if (!__LIB_2__::func_784(&Param0, 0))
				{
					iVar8 += 512;
				}
			}
		}
		else
		{
			iVar8 += 512;
		}
	}
	else if (!__LIB_1__::func_428(Param0, 2.5f, 3))
	{
		iVar8 += 512;
	}
	if (uParam2->f_5)
	{
		if (!(__LIB_1__::func_456(PLAYER::PLAYER_ID()) && __LIB_1__::func_872(PLAYER::PLAYER_ID())))
		{
			if (!__LIB_2__::func_668(&Param0, &(Global_2667225.f_2491.f_90), 0, 1065353216))
			{
				iVar8 += 1024;
			}
		}
		else
		{
			iVar8 += 1024;
		}
	}
	else
	{
		iVar8 += 1024;
	}
	if (uParam2->f_5)
	{
		if (!__LIB_1__::func_872(PLAYER::PLAYER_ID()))
		{
			if (!__LIB_1__::func_427(Param0, &(Global_2667225.f_2491.f_57), &(Global_2667225.f_2491.f_90), 1073741824))
			{
				iVar8 += 2048;
			}
		}
		else
		{
			iVar8 += 2048;
		}
	}
	else
	{
		iVar8 += 2048;
	}
	if (__LIB_2__::func_738(Param0))
	{
		if (uParam2->f_5)
		{
			if (__LIB_1__::func_410(Global_2667225.f_489))
			{
				if (__LIB_1__::func_560(Param0, 0.01f))
				{
					iVar8 += 4096;
				}
			}
			else
			{
				iVar8 += 4096;
			}
		}
		else
		{
			iVar8 += 4096;
		}
	}
	if (uParam2->f_5)
	{
		if (__LIB_1__::func_426(Param0))
		{
			iVar8 += 8192;
		}
	}
	else
	{
		iVar8 += 8192;
	}
	if (!Global_2667225.f_45.f_55)
	{
		iVar8 += 16384;
	}
	else if (uParam2->f_5)
	{
		if (!iParam5 & 1 == 0)
		{
			if (INTERIOR::IS_VALID_INTERIOR(INTERIOR::GET_INTERIOR_AT_COORDS(Param0)))
			{
				iVar8 += 16384;
			}
		}
	}
	else if (!iParam5 & 2 == 0)
	{
		if (INTERIOR::IS_VALID_INTERIOR(INTERIOR::GET_INTERIOR_AT_COORDS(Param0)))
		{
			iVar8 += 16384;
		}
	}
	if (uParam2->f_5)
	{
		if (!Global_2667225.f_701)
		{
			if (!__LIB_2__::func_766(&Param0, 0, 0))
			{
				iVar8 = (iVar8 + 32768);
			}
		}
		else
		{
			iVar8 = (iVar8 + 32768);
		}
	}
	else
	{
		iVar8 = (iVar8 + 32768);
	}
	if (!__LIB_2__::func_664(&Param0, 0))
	{
		iVar8 = (iVar8 + 65536);
	}
	else
	{
		iVar14 = __LIB_1__::func_559(Param0, 1008981770);
		if (iVar14 > -1)
		{
			__LIB_2__::func_667(Param0, &Var15, &Var16, &fVar17);
			if (!__LIB_2__::func_975(&(Global_2667225.f_45[iVar14 /*12*/]), Var15, Var16, fVar17))
			{
				iVar8 = -1;
			}
		}
		else
		{
			iVar8 = -1;
		}
	}
	if (__LIB_2__::func_990(Param0, 1056964608))
	{
		iVar8 = -1;
	}
	if (uParam3->f_33)
	{
		if (PED::IS_ANY_PED_NEAR_POINT(Param0.f_0, Param0.f_1, (Param0.f_2 + 1f), 0.3f))
		{
			iVar8 = -1;
		}
	}
	if (uParam3->f_34)
	{
		if (VEHICLE::IS_ANY_VEHICLE_NEAR_POINT(Param0.f_0, Param0.f_1, (Param0.f_2 + 1f), 1f))
		{
			iVar8 = -1;
		}
	}
	if (uParam2->f_5)
	{
	}
	else if (__LIB_1__::func_423(Param0, 1, 0, uParam2->f_15, 1060320051, 1086324736, 1065353216, 1088421888))
	{
		iVar8 = 0;
	}
	Var19.f_2 = 1176256410;
	bVar20 = false;
	bVar21 = false;
	if (Global_2667225.f_2889 && uParam2->f_5)
	{
		if (iVar8 > 0)
		{
			if (bParam4)
			{
				uParam3->f_4 = 0;
				bVar4 = false;
			}
			else
			{
				bVar4 = true;
			}
			if (uParam2->f_21)
			{
				fVar0 = __LIB_10__::func_744(Param0, uParam2->f_18, uParam3->f_6, uParam3->f_4, bVar4, iVar10, &(Var19.f_8));
			}
			else
			{
				fVar0 = __LIB_10__::func_744(Param0, Global_2667225.f_2466, uParam3->f_6, uParam3->f_4, bVar4, iVar10, &(Var19.f_8));
			}
			if (bVar9)
			{
				fVar0 = (fVar0 * 3f);
			}
			if (__LIB_1__::func_410(Global_2667225.f_489) && iVar8 < 4096)
			{
				Var19.f_2 = __LIB_3__::func_256(Param0);
			}
			fVar7 = __LIB_2__::func_993(Param0, 1, 0, 0, 0, 0);
			Var19.f_4 = { Param0 };
			Var19.f_7 = fParam1;
			Var19.f_0 = iVar8;
			Var19.f_1 = fVar0;
			Var19.f_9 = fVar7;
			__LIB_2__::func_665(Var19);
			Global_2667225.f_2491.f_2 = 1;
		}
	}
	else
	{
		iVar18 = 0;
		while (iVar18 < 5)
		{
			if (iVar8 >= Global_2667225.f_2491.f_6[iVar18 /*10*/])
			{
				if (uParam2->f_5)
				{
					if (!bVar20)
					{
						if (bParam4)
						{
							uParam3->f_4 = 0;
							bVar4 = false;
						}
						else
						{
							bVar4 = true;
						}
						if (uParam2->f_21)
						{
							fVar0 = __LIB_10__::func_744(Param0, uParam2->f_18, uParam3->f_6, uParam3->f_4, bVar4, iVar10, &(Var19.f_8));
						}
						else
						{
							fVar0 = __LIB_10__::func_744(Param0, Global_2667225.f_2466, uParam3->f_6, uParam3->f_4, bVar4, iVar10, &(Var19.f_8));
						}
						if (bVar9)
						{
							fVar0 = (fVar0 * 3f);
						}
						bVar20 = true;
					}
					if ((__LIB_1__::func_410(Global_2667225.f_489) && iVar8 == Global_2667225.f_2491.f_6[iVar18 /*10*/]) && iVar8 < 4096)
					{
						if (!bVar21)
						{
							fVar2 = __LIB_3__::func_256(Param0);
							bVar21 = true;
						}
						if (fVar2 < Global_2667225.f_2491.f_6[iVar18 /*10*/].f_2)
						{
							Var19.f_4 = { Param0 };
							Var19.f_7 = fParam1;
							Var19.f_0 = iVar8;
							Var19.f_1 = fVar0;
							Var19.f_2 = fVar2;
							func_941(Var19, iVar18);
							Global_2667225.f_2491.f_2 = 1;
							return;
						}
					}
					else if (iVar8 > Global_2667225.f_2491.f_6[iVar18 /*10*/] || (iVar8 == Global_2667225.f_2491.f_6[iVar18 /*10*/] && fVar0 > Global_2667225.f_2491.f_6[iVar18 /*10*/].f_1))
					{
						Var19.f_4 = { Param0 };
						Var19.f_7 = fParam1;
						Var19.f_0 = iVar8;
						Var19.f_1 = fVar0;
						func_941(Var19, iVar18);
						Global_2667225.f_2491.f_2 = 1;
						return;
					}
				}
				else
				{
					if (!bVar20)
					{
						if (uParam2->f_15)
						{
							fVar1 = 3.5f;
						}
						else
						{
							fVar1 = 1f;
						}
						fVar5 = __LIB_2__::func_853(Param0, fVar1, 1, 1, 0, -1, 1);
						fVar6 = __LIB_2__::func_993(Param0, 1, 1, 1, 1, 0);
						if (fVar5 > 15f && fVar6 > 5f)
						{
							fVar3 = __LIB_1__::func_420(fVar5, 0f, 80f, 160f, 1f, 1.2f);
						}
						else
						{
							fVar3 = __LIB_1__::func_420(fVar6, 0f, 80f, 160f, 0f, 0.2f);
						}
						bVar20 = true;
					}
					if (iVar8 > Global_2667225.f_2491.f_6[iVar18 /*10*/] || (iVar8 == Global_2667225.f_2491.f_6[iVar18 /*10*/] && fVar3 > Global_2667225.f_2491.f_6[iVar18 /*10*/].f_3))
					{
						Var19.f_4 = { Param0 };
						Var19.f_7 = fParam1;
						Var19.f_0 = iVar8;
						Var19.f_3 = fVar3;
						func_941(Var19, iVar18);
						Global_2667225.f_2491.f_2 = 1;
						return;
					}
				}
			}
			iVar18++;
		}
	}
}

void func_941(struct<10> Param0, int iParam1)//Position - 0x899CD
{
	struct<10> Var0;
	Var0.f_2 = 1176256410;
	Var0 = { Global_2667225.f_2491.f_6[iParam1 /*10*/] };
	Global_2667225.f_2491.f_6[iParam1 /*10*/] = { Param0 };
	if (iParam1 < 4)
	{
		func_941(Var0, iParam1 + 1);
	}
}

void func_974(struct<3> Param0, var uParam1, var uParam2)//Position - 0x8AF55
{
	int iVar0;
	int iVar1;
	int iVar2;
	struct<4> Var3;
	struct<8> Var4;
	struct<3> Var5;
	struct<3> Var6;
	iVar0 = 0;
	while (iVar0 < *uParam1)
	{
		*(uParam1[iVar0 /*4*/]) = { Var3 };
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < *uParam2)
	{
		*(uParam2[iVar0 /*10*/]) = { Var4 };
		iVar0++;
	}
	iVar0 = 0;
	iVar1 = 0;
	iVar1 = 0;
	while (iVar1 < Global_1573885)
	{
		iVar0 = 0;
		while (iVar0 < *uParam1)
		{
			if (!BitTest(Global_2621865[iVar1 /*26*/].f_12, 11))
			{
				if (SYSTEM::VMAG(*(uParam1[iVar0 /*4*/])) == 0f || SYSTEM::VDIST(Global_2621865[iVar1 /*26*/].f_3, Param0) < SYSTEM::VDIST(*(uParam1[iVar0 /*4*/]), Param0))
				{
					Var3 = { Global_2621865[iVar1 /*26*/].f_3 };
					Var3.f_3 = Global_2621865[iVar1 /*26*/].f_6.f_2;
					func_976(&Var3, uParam1, iVar0);
					iVar0 = *uParam1;
				}
			}
			iVar0++;
		}
		iVar1++;
	}
	iVar0 = 0;
	iVar1 = 0;
	iVar1 = 0;
	while (iVar1 < 19)
	{
		iVar0 = 0;
		while (iVar0 < *uParam1)
		{
			if (SYSTEM::VMAG(*(uParam1[iVar0 /*4*/])) == 0f || SYSTEM::VDIST(Global_262145.f_6292[iVar1 /*3*/], Param0) < SYSTEM::VDIST(*(uParam1[iVar0 /*4*/]), Param0))
			{
				Var3 = { Global_262145.f_6292[iVar1 /*3*/] };
				Var3.f_3 = 3f;
				func_976(&Var3, uParam1, iVar0);
				iVar0 = *uParam1;
			}
			iVar0++;
		}
		iVar1++;
	}
	iVar0 = 0;
	iVar1 = 0;
	iVar2 = 0;
	iVar1 = 0;
	while (iVar1 < 19)
	{
		iVar2 = 0;
		while (iVar2 < 6)
		{
			iVar0 = 0;
			while (iVar0 < *uParam1)
			{
				if (SYSTEM::VMAG(*(uParam1[iVar0 /*4*/])) == 0f || SYSTEM::VDIST(Global_262145.f_6350[iVar1 /*19*/][iVar2 /*3*/], Param0) < SYSTEM::VDIST(*(uParam1[iVar0 /*4*/]), Param0))
				{
					Var3 = { Global_262145.f_6350[iVar1 /*19*/][iVar2 /*3*/] };
					Var3.f_3 = 3f;
					func_976(&Var3, uParam1, iVar0);
					iVar0 = *uParam1;
				}
				iVar0++;
			}
			iVar2++;
		}
		iVar1++;
	}
	iVar0 = 0;
	iVar1 = 0;
	iVar1 = 0;
	while (iVar1 < Global_1573850)
	{
		iVar0 = 0;
		while (iVar0 < *uParam2)
		{
			Var5 = { Global_1573169[iVar1 /*8*/].f_1 + Global_1573169[iVar1 /*8*/].f_4 * Vector(0.5f, 0.5f, 0.5f) };
			Var6 = { *(uParam2[iVar0 /*10*/]) + (uParam2[iVar0 /*10*/])->f_3 * Vector(0.5f, 0.5f, 0.5f) };
			if (SYSTEM::VMAG(*(uParam2[iVar0 /*10*/])) == 0f || SYSTEM::VDIST(Var5, Param0) < SYSTEM::VDIST(Var6, Param0))
			{
				Var4 = { Global_1573169[iVar1 /*8*/].f_1 };
				Var4.f_3 = { Global_1573169[iVar1 /*8*/].f_4 };
				Var4.f_6 = Global_1573169[iVar1 /*8*/].f_7;
				Var4.f_7 = { Global_2621541[iVar1 /*3*/] };
				func_975(&Var4, uParam2, iVar0);
				iVar0 = *uParam2;
			}
			iVar0++;
		}
		iVar1++;
	}
}

void func_975(var uParam0, var uParam1, int iParam2)//Position - 0x8B275
{
	Global_2674776 = { *(uParam1[iParam2 /*10*/]) };
	*(uParam1[iParam2 /*10*/]) = { *uParam0 };
	if (iParam2 + 1 < *uParam1)
	{
		func_975(&Global_2674776, uParam1, iParam2 + 1);
	}
}

void func_976(var uParam0, var uParam1, int iParam2)//Position - 0x8B2B3
{
	Global_2674772 = { *(uParam1[iParam2 /*4*/]) };
	*(uParam1[iParam2 /*4*/]) = { *uParam0 };
	if (iParam2 + 1 < *uParam1)
	{
		func_976(&Global_2674772, uParam1, iParam2 + 1);
	}
}

void func_977(var uParam0, var uParam1)//Position - 0x8B2ED
{
	int iVar0;
	struct<3> Var1;
	float fVar2;
	if (Global_2667225.f_2262 > 0)
	{
		iVar0 = 0;
		while (iVar0 < Global_2667225.f_2262)
		{
			if (__LIB_2__::func_851(Global_2667225.f_2263[iVar0 /*4*/], uParam0))
			{
				fVar2 = Global_2667225.f_2263[iVar0 /*4*/].f_3;
				if (SYSTEM::VMAG(*uParam1) > 0.01f)
				{
					Var1 = { *uParam1 - Global_2667225.f_2263[iVar0 /*4*/] };
					fVar2 = MISC::GET_HEADING_FROM_VECTOR_2D(Var1.f_0, Var1.f_1);
				}
				func_938(Global_2667225.f_2263[iVar0 /*4*/], fVar2, uParam0, uParam1, 0, uParam0->f_28);
				Global_2667225.f_2491++;
			}
			iVar0++;
		}
	}
	if (uParam0->f_5 && Global_2667225.f_2889)
	{
		__LIB_2__::func_736(&(Global_2667225.f_2491.f_6[0 /*10*/]), &(Global_2667225.f_2491.f_6[1 /*10*/]), &(Global_2667225.f_2491.f_6[2 /*10*/]));
	}
}

Vector3 func_992(struct<3> Param0, struct<3> Param1, float fParam2, int iParam3)//Position - 0x8B6CE
{
	int iVar0;
	struct<3> Var1;
	iVar0 = 0;
	while (iVar0 < 10)
	{
		switch (iParam3)
		{
			case 0:
				Var1 = { __LIB_2__::func_878(Param0, fParam2, 0) };
				break;
			case 1:
				Var1 = { __LIB_2__::func_671(Param0, Param1) };
				break;
			case 2:
				Var1 = { __LIB_2__::func_875(Param0, Param1, fParam2) };
				break;
		}
		if (func_995(&Var1, 0))
		{
			return Var1;
		}
		iVar0++;
	}
	return Var1;
}

int func_995(var uParam0, bool bParam1)//Position - 0x8B80F
{
	func_996(uParam0, bParam1);
	if (__LIB_2__::func_992(*uParam0, 6f, 1f, 1f, 5f, 0, 0, 0, 120f, 0, -1, 1, 0f, 0, 0, 0, 0))
	{
		return 1;
	}
	return 0;
}

void func_996(var uParam0, bool bParam1)//Position - 0x8B846
{
	float fVar0;
	if (!bParam1)
	{
		func_998(uParam0, 1, 1, 1, 1, 1);
	}
	else
	{
		func_998(uParam0, 1, 1, 1, 1, 0);
	}
	fVar0 = PATHFIND::GET_APPROX_HEIGHT_FOR_POINT(*uParam0, uParam0->f_1);
	fVar0 = (fVar0 + 100f);
	if (uParam0->f_2 < fVar0)
	{
		uParam0->f_2 = fVar0;
	}
	__LIB_2__::func_672(uParam0);
}

void func_998(var uParam0, bool bParam1, bool bParam2, bool bParam3, bool bParam4, bool bParam5)//Position - 0x8B91C
{
	if (bParam1)
	{
		if (func_789(Global_2667225.f_512))
		{
			if (func_741(uParam0, 1, 0, 0, bParam5))
			{
			}
		}
	}
	if (bParam2)
	{
		if (__LIB_2__::func_766(uParam0, 1, 0))
		{
		}
	}
	if (bParam3)
	{
		if (__LIB_2__::func_784(uParam0, 1))
		{
		}
	}
	if (bParam4)
	{
		__LIB_10__::func_715(uParam0, 7f, PLAYER::PLAYER_ID(), 0);
	}
	__LIB_2__::func_673(uParam0, 1120403456);
}

void func_1003()//Position - 0x8BB66
{
	if (!Global_2667225.f_701)
	{
		if (func_789(Global_2667225.f_555))
		{
			if (func_741(&(Global_2667225.f_555), 1, 0, 0, 1))
			{
				Global_2667225.f_520.f_7 = 0;
			}
			if (Global_2667225.f_555.f_2 <= 0f)
			{
				if (func_1135(&(Global_2667225.f_555), 1))
				{
					Global_2667225.f_520.f_7 = 0;
				}
			}
		}
		if (__LIB_2__::func_766(&(Global_2667225.f_555), 1, 0))
		{
			Global_2667225.f_520.f_7 = 0;
		}
		if (__LIB_2__::func_784(&(Global_2667225.f_555), 1))
		{
			Global_2667225.f_520.f_7 = 0;
		}
	}
	if (__LIB_10__::func_741())
	{
		Global_2667225.f_587 = 4;
	}
	else
	{
		Global_2667225.f_2673 = 1;
		Global_2667225.f_587 = 6;
	}
}

Vector3 func_1074(int iParam0)//Position - 0x91178
{
	struct<3> Var0;
	if (HUD::DOES_BLIP_EXIST(Global_2678393[iParam0]))
	{
		Var0 = { __LIB_1__::func_722(Global_2678393[iParam0]) };
	}
	else if (HUD::DOES_BLIP_EXIST(Global_2678393.f_33[iParam0]) && !iParam0 == Global_2703735)
	{
		Var0 = { __LIB_1__::func_722(Global_2678393.f_33[iParam0]) };
	}
	if (SYSTEM::VMAG(Var0) > 0f)
	{
		return Var0;
	}
	return func_1075(iParam0);
}

Vector3 func_1075(int iParam0)//Position - 0x911EC
{
	int iVar0;
	struct<3> Var1;
	int iVar2;
	if (Global_2676198)
	{
		if (__LIB_2__::func_889(iParam0))
		{
			Var1 = { __LIB_2__::func_888(iParam0) };
			if (SYSTEM::VMAG(Var1) > 0f)
			{
				return Var1;
			}
		}
		if (Global_2689235[iParam0 /*453*/].f_71.f_11)
		{
			if (SYSTEM::VMAG(Global_2689235[iParam0 /*453*/].f_71.f_12) > 0f)
			{
				return Global_2689235[iParam0 /*453*/].f_71.f_12;
			}
		}
	}
	if (Global_1853348[iParam0 /*834*/].f_267.f_32 > 0)
	{
		Var1 = { __LIB_2__::func_683(__LIB_2__::func_684(Global_1853348[PLAYER::PLAYER_ID() /*834*/].f_267.f_32)) };
		if (SYSTEM::VMAG(Var1) > 0f)
		{
			return Var1;
		}
	}
	else
	{
		func_1109(__LIB_0__::func_85(iParam0), &iVar0);
		if (iVar0 > 0)
		{
			Var1 = { __LIB_2__::func_683(__LIB_2__::func_684(iVar0)) };
			if (SYSTEM::VMAG(Var1) > 0f)
			{
				return Var1;
			}
		}
	}
	if (__LIB_0__::func_334(iParam0))
	{
		Var1 = { __LIB_3__::func_497(iParam0) };
		if (SYSTEM::VMAG(Var1) > 0f)
		{
			return Var1;
		}
	}
	if (__LIB_2__::func_883(iParam0))
	{
		iVar2 = __LIB_1__::func_668(iParam0);
		if (iVar2 > -1)
		{
			Var1 = { Global_1946250.f_533[iVar2 /*3*/] };
			if (SYSTEM::VMAG(Var1) > 0f)
			{
				return Var1;
			}
		}
	}
	if (!Global_2676198)
	{
		if (__LIB_2__::func_889(iParam0))
		{
			Var1 = { __LIB_2__::func_888(iParam0) };
			if (SYSTEM::VMAG(Var1) > 0f)
			{
				return Var1;
			}
		}
		if (Global_2689235[iParam0 /*453*/].f_71.f_11)
		{
			if (SYSTEM::VMAG(Global_2689235[iParam0 /*453*/].f_71.f_12) > 0f)
			{
				return Global_2689235[iParam0 /*453*/].f_71.f_12;
			}
		}
	}
	return __LIB_0__::func_85(iParam0);
}

void func_1109(struct<3> Param0, var uParam1)//Position - 0x91FDA
{
	int iVar0;
	int iVar1;
	iVar0 = 1;
	iVar1 = 7;
	while (iVar0 <= iVar1)
	{
		if (func_1110(Param0, iVar0, 0))
		{
			*uParam1 = iVar0;
			return;
		}
		iVar0++;
	}
	iVar0 = 34;
	iVar1 = 43;
	while (iVar0 <= iVar1)
	{
		if (func_1110(Param0, iVar0, 0))
		{
			*uParam1 = iVar0;
			return;
		}
		iVar0++;
	}
	iVar0 = 61;
	iVar1 = 65;
	while (iVar0 <= iVar1)
	{
		if (func_1110(Param0, iVar0, 0))
		{
			*uParam1 = iVar0;
			return;
		}
		iVar0++;
	}
	iVar0 = 8;
	if (func_1110(Param0, iVar0, 0))
	{
		if (Global_1853348[PLAYER::PLAYER_ID() /*834*/].f_267.f_32 > 0)
		{
			*uParam1 = Global_1853348[PLAYER::PLAYER_ID() /*834*/].f_267.f_32;
		}
		else if (Global_2666811.f_1 > 0)
		{
			*uParam1 = Global_2666811.f_1;
		}
		else
		{
			*uParam1 = iVar0;
		}
		return;
	}
	iVar0 = 17;
	if (func_1110(Param0, iVar0, 0))
	{
		if (Global_1853348[PLAYER::PLAYER_ID() /*834*/].f_267.f_32 > 0)
		{
			*uParam1 = Global_1853348[PLAYER::PLAYER_ID() /*834*/].f_267.f_32;
		}
		else if (Global_2666811.f_1 > 0)
		{
			*uParam1 = Global_2666811.f_1;
		}
		else
		{
			*uParam1 = iVar0;
		}
		return;
	}
}

int func_1110(struct<3> Param0, int iParam1, float fParam2)//Position - 0x9211E
{
	int iVar0;
	struct<3> Var1[3];
	struct<3> Var2[3];
	int iVar3;
	if (iParam1 != 999)
	{
		iVar3 = 0;
		while (iVar3 < 3)
		{
			if (Global_1312193[iParam1 /*1951*/].f_146.f_57[iVar3 /*8*/].f_2 > Global_1312193[iParam1 /*1951*/].f_146.f_57[iVar3 /*8*/].f_3.f_2)
			{
				Var1[iVar3 /*3*/] = { Global_1312193[iParam1 /*1951*/].f_146.f_57[iVar3 /*8*/] };
				Var2[iVar3 /*3*/] = { Global_1312193[iParam1 /*1951*/].f_146.f_57[iVar3 /*8*/].f_3 };
			}
			else
			{
				Var1[iVar3 /*3*/] = { Global_1312193[iParam1 /*1951*/].f_146.f_57[iVar3 /*8*/].f_3 };
				Var2[iVar3 /*3*/] = { Global_1312193[iParam1 /*1951*/].f_146.f_57[iVar3 /*8*/] };
			}
			Var1[iVar3 /*3*/].f_2 = (Var1[iVar3 /*3*/].f_2 + fParam2);
			Var2[iVar3 /*3*/].f_2 = (Var2[iVar3 /*3*/].f_2 - fParam2);
			iVar3++;
		}
		if (((Global_1312193[iParam1 /*1951*/].f_146.f_57[0 /*8*/].f_6 != 0f && OBJECT::IS_POINT_IN_ANGLED_AREA(Param0, Var2[0 /*3*/], Var1[0 /*3*/], Global_1312193[iParam1 /*1951*/].f_146.f_57[0 /*8*/].f_6, false, true)) || (Global_1312193[iParam1 /*1951*/].f_146.f_57[1 /*8*/].f_6 != 0f && OBJECT::IS_POINT_IN_ANGLED_AREA(Param0, Var2[1 /*3*/], Var1[1 /*3*/], Global_1312193[iParam1 /*1951*/].f_146.f_57[1 /*8*/].f_6, false, true))) || (Global_1312193[iParam1 /*1951*/].f_146.f_57[2 /*8*/].f_6 != 0f && OBJECT::IS_POINT_IN_ANGLED_AREA(Param0, Var2[2 /*3*/], Var1[2 /*3*/], Global_1312193[iParam1 /*1951*/].f_146.f_57[2 /*8*/].f_6, false, true)))
		{
			return 1;
		}
	}
	else
	{
		iVar0 = 1;
		while (iVar0 <= 7)
		{
			if (func_1110(Param0, iVar0, fParam2))
			{
				return 1;
			}
			iVar0++;
		}
		iVar0 = 34;
		while (iVar0 <= 43)
		{
			if (func_1110(Param0, iVar0, fParam2))
			{
				return 1;
			}
			iVar0++;
		}
		iVar0 = 61;
		while (iVar0 <= 65)
		{
			if (func_1110(Param0, iVar0, fParam2))
			{
				return 1;
			}
			iVar0++;
		}
		iVar0 = 73;
		while (iVar0 <= 76)
		{
			if (func_1110(Param0, iVar0, fParam2))
			{
				return 1;
			}
			iVar0++;
		}
		iVar0 = 77;
		while (iVar0 <= 82)
		{
			if (func_1110(Param0, iVar0, fParam2))
			{
				return 1;
			}
			iVar0++;
		}
		iVar0 = 83;
		while (iVar0 <= 85)
		{
			if (func_1110(Param0, iVar0, fParam2))
			{
				return 1;
			}
			iVar0++;
		}
		iVar0 = 87;
		while (iVar0 <= 90)
		{
			if (func_1110(Param0, iVar0, fParam2))
			{
				return 1;
			}
			iVar0++;
		}
		iVar0 = 91;
		while (iVar0 <= 102)
		{
			if (func_1110(Param0, iVar0, fParam2))
			{
				return 1;
			}
			iVar0++;
		}
		iVar0 = 103;
		while (iVar0 <= 113)
		{
			if (func_1110(Param0, iVar0, fParam2))
			{
				return 1;
			}
			iVar0++;
		}
		if (func_1110(Param0, 8, fParam2))
		{
			return 1;
		}
		if (func_1110(Param0, 17, fParam2))
		{
			return 1;
		}
	}
	return 0;
}

int func_1135(var uParam0, bool bParam1)//Position - 0x95925
{
	int iVar0;
	struct<3> Var1;
	iVar0 = 0;
	while (iVar0 < 12)
	{
		if (Global_2672169[iVar0 /*17*/].f_9 == 1)
		{
			if (__LIB_1__::func_528(*uParam0, &(Global_2672169[iVar0 /*17*/]), 1008981770, 0, 1) && !__LIB_1__::func_528(*uParam0, &(Global_2672169[iVar0 /*17*/]), 1008981770, 0, 0))
			{
				if (bParam1)
				{
					if (Global_2672169[iVar0 /*17*/].f_12)
					{
						*uParam0 = { Global_2672169[iVar0 /*17*/].f_13 };
					}
					else
					{
						Var1 = { *uParam0 };
						Var1.f_2 = __LIB_2__::func_692(&(Global_2672169[iVar0 /*17*/]));
						__LIB_1__::func_566(&Var1, &(Global_2672169[iVar0 /*17*/]), 1036831949, 0, 0);
						if (func_741(&Var1, 0, 0, 0, 1))
						{
							Var1 = { *uParam0 };
							__LIB_1__::func_566(&Var1, &(Global_2672169[iVar0 /*17*/]), 1036831949, 1, 0);
						}
						*uParam0 = { Var1 };
					}
				}
				return 1;
			}
		}
		iVar0++;
	}
	return 0;
}

struct<18> func_1146(bool bParam0)//Position - 0x96361
{
	struct<18> Var0;
	int iVar1;
	int iVar2;
	float fVar3;
	float fVar4;
	float fVar5;
	float fVar6;
	int iVar7;
	float fVar8;
	Var0 = 5;
	Var0.f_6 = 5;
	Var0.f_12 = 5;
	iVar1 = 0;
	while (iVar1 < 5)
	{
		Var0[iVar1] = -1;
		Var0.f_6[iVar1] = -1f;
		iVar1++;
	}
	if (Global_2667225.f_714 == 1)
	{
		Var0[0] = 0;
		Var0.f_6[0] = 1f;
		return Var0;
	}
	iVar2 = 0;
	if (STREAMING::IS_PLAYER_SWITCH_IN_PROGRESS())
	{
		iVar2 = 1;
	}
	fVar8 = 0f;
	if (Global_2667225.f_714.f_507)
	{
		fVar8 = 0.001f;
	}
	iVar1 = 0;
	while (iVar1 < Global_2667225.f_714)
	{
		fVar4 = 1f;
		fVar6 = 0f;
		if (Global_2667225.f_2878 && Global_2667225.f_714.f_503 == iVar1)
		{
			fVar4 = fVar8;
			fVar6 = 0.01f;
		}
		else if (Global_2667225.f_714.f_503 == iVar1 && Global_2667225.f_714.f_504)
		{
			fVar4 = fVar8;
			fVar6 = 0.01f;
		}
		else
		{
			if (!Global_2667225.f_714.f_505)
			{
				if (__LIB_1__::func_423(Global_2667225.f_714.f_1[iVar1 /*5*/], 0, 1, bParam0, Global_2667225.f_714.f_512, Global_2667225.f_714.f_513, Global_2667225.f_714.f_510, Global_2667225.f_714.f_511))
				{
					fVar4 = fVar8;
				}
			}
			if (__LIB_0__::func_822(Global_2667225.f_714.f_1[iVar1 /*5*/], 0.1f))
			{
				fVar4 = fVar8;
			}
			if (__LIB_0__::func_944(Global_2667225.f_714.f_1[iVar1 /*5*/], 1f, 0, 0, 100f, 1, -1, 0, 1))
			{
				fVar4 = (fVar4 * 0.94f);
			}
			if (__LIB_0__::func_944(Global_2667225.f_714.f_1[iVar1 /*5*/], 1f, 0, 0, 50f, 1, -1, 0, 1))
			{
				fVar4 = (fVar4 * 0.94f);
			}
			if (__LIB_0__::func_944(Global_2667225.f_714.f_1[iVar1 /*5*/], 1f, 0, 0, 25f, 1, -1, 0, 1))
			{
				fVar4 = (fVar4 * 0.94f);
			}
			if (!Global_2667225.f_714.f_506)
			{
				fVar5 = __LIB_2__::func_874(Global_2667225.f_714.f_1[iVar1 /*5*/], PLAYER::PLAYER_ID(), 0);
				if (fVar5 < 10000f)
				{
					fVar3 = __LIB_1__::func_420(fVar5, Global_2667225.f_714.f_514, -1f, 100f, fVar8, 1f);
					fVar4 = (fVar4 * (fVar3 * 0.91f));
				}
				fVar5 = __LIB_2__::func_993(Global_2667225.f_714.f_1[iVar1 /*5*/], 1, 0, 0, 0, iVar2);
				fVar6 = fVar5;
				fVar3 = __LIB_1__::func_420(fVar5, Global_2667225.f_714.f_515, __LIB_2__::func_974(), __LIB_2__::func_973(), fVar8, 0.3f);
				fVar4 = (fVar4 * (fVar3 * 0.91f));
				fVar5 = __LIB_2__::func_993(Global_2667225.f_714.f_1[iVar1 /*5*/], 0, 1, 0, 0, iVar2);
				if (fVar5 < 10000f)
				{
					fVar3 = __LIB_1__::func_420(fVar5, Global_2667225.f_714.f_516, 15f, 150f, fVar8, 0.2f);
					fVar4 = (fVar4 * (fVar3 * 0.92f));
				}
				fVar5 = MISC::GET_DISTANCE_BETWEEN_COORDS(Global_2667225.f_714.f_1[iVar1 /*5*/], Global_2667225.f_512, true);
				fVar3 = __LIB_1__::func_420(fVar5, 0f, 0f, Global_2667225.f_714.f_517, fVar8, (40f / Global_2667225.f_714.f_517));
				fVar4 = (fVar4 * (fVar3 * 0.93f));
				if (Global_2667225.f_714.f_508)
				{
					fVar5 = __LIB_2__::func_737(Global_2667225.f_714.f_1[iVar1 /*5*/]);
					fVar3 = __LIB_1__::func_420(fVar5, Global_2667225.f_714.f_515, __LIB_2__::func_974(), __LIB_2__::func_973(), fVar8, 0.3f);
					fVar4 = (fVar4 * (fVar3 * 0.95f));
				}
				if (Global_2667225.f_714.f_509)
				{
					fVar5 = __LIB_2__::func_695(Global_2667225.f_714.f_1[iVar1 /*5*/], &Var0);
					fVar3 = __LIB_1__::func_420(fVar5, 0f, 0f, 65f, 0.8f, 1f);
					fVar4 = (fVar4 * (fVar3 * 1f));
				}
			}
			fVar4 = (fVar4 * Global_2667225.f_714.f_1[iVar1 /*5*/].f_4);
		}
		iVar7 = 0;
		while (iVar7 < 5)
		{
			if (fVar4 > 0f || Global_2667225.f_714.f_507)
			{
				if (fVar4 > Var0.f_6[iVar7])
				{
					func_1147(&Var0, iVar1, fVar4, iVar7, fVar6);
					iVar7 = 5;
				}
				else if (fVar4 == Var0.f_6[iVar7])
				{
					if (MISC::GET_RANDOM_INT_IN_RANGE(0, 2) > 0)
					{
						func_1147(&Var0, iVar1, fVar4, iVar7, fVar6);
						iVar7 = 5;
					}
				}
			}
			iVar7++;
		}
		iVar1++;
	}
	return Var0;
}

void func_1147(var uParam0, int iParam1, float fParam2, int iParam3, float fParam4)//Position - 0x967C4
{
	var uVar0;
	var uVar1;
	var uVar2;
	uVar0 = (*uParam0)[iParam3];
	uVar1 = uParam0->f_6[iParam3];
	uVar2 = uParam0->f_12[iParam3];
	(*uParam0)[iParam3] = iParam1;
	uParam0->f_6[iParam3] = fParam2;
	uParam0->f_12[iParam3] = fParam4;
	if (iParam3 < 4)
	{
		func_1147(uParam0, uVar0, uVar1, iParam3 + 1, uVar2);
	}
}

int func_1156()//Position - 0x96DD2
{
	int iVar0;
	if (MISC::GET_INDEX_OF_CURRENT_LEVEL() == 5)
	{
		return 7;
	}
	else
	{
		if (!Global_2667225.f_490 == 0)
		{
			if (!SCRIPT::IS_THREAD_ACTIVE(Global_2667225.f_490.f_1))
			{
				if (Global_2667225.f_490 == 8)
				{
					__LIB_2__::func_892();
				}
				Global_2667225.f_490 = 0;
			}
		}
		if (!Global_2667225.f_490 == 0)
		{
			return Global_2667225.f_490;
		}
		else if (__LIB_0__::func_361(PLAYER::PLAYER_ID(), 0))
		{
			return 6;
		}
		else if (Global_2667225.f_45[0 /*12*/].f_9)
		{
			if (__LIB_2__::func_897())
			{
				Global_2667225.f_45.f_54 = 1;
			}
			else
			{
				Global_2667225.f_45.f_54 = 0;
			}
			if (Global_2667225.f_45.f_54)
			{
				return 26;
			}
			else
			{
				return 3;
			}
		}
		else
		{
			if (!Global_2667225.f_24 == 0)
			{
				if (!SCRIPT::IS_THREAD_ACTIVE(Global_2667225.f_24.f_1))
				{
					Global_2667225.f_24 = 0;
				}
			}
			if (!Global_2667225.f_24 == 0)
			{
				return Global_2667225.f_24;
			}
			else
			{
				if (__LIB_0__::func_938(PLAYER::PLAYER_ID()))
				{
					if (__LIB_2__::func_896() && (__LIB_2__::func_940(PLAYER::PLAYER_ID()) || __LIB_2__::func_700(Global_2667225.f_512)))
					{
						return 52;
					}
					else
					{
						return 51;
					}
				}
				if (__LIB_0__::func_974())
				{
					if (func_1169(PLAYER::PLAYER_ID()))
					{
						return 33;
					}
					else
					{
						return 20;
					}
				}
				else if (__LIB_0__::func_975())
				{
					return 20;
				}
				else if ((((((__LIB_1__::func_520(1) && func_1169(PLAYER::PLAYER_ID())) && (__LIB_0__::func_492(PLAYER::PLAYER_ID()) != 157 || (__LIB_0__::func_492(PLAYER::PLAYER_ID()) == 157 && __LIB_0__::func_797() != __LIB_1__::func_730()))) && !__LIB_2__::func_895()) && !__LIB_2__::func_939(PLAYER::PLAYER_ID())) && !__LIB_1__::func_375(1)) && !(__LIB_0__::func_321(PLAYER::PLAYER_ID(), 0) == 0 && func_1163(PLAYER::PLAYER_ID()) == 1))
				{
					if (__LIB_12__::func_762())
					{
						return 34;
					}
					else if (__LIB_12__::func_760(10f))
					{
						return 27;
					}
					else
					{
						iVar0 = __LIB_2__::func_894(PLAYER::PLAYER_ID(), 0);
						if ((__LIB_2__::func_867(iVar0) && __LIB_10__::func_723(iVar0)) && (__LIB_11__::func_972(iVar0) || __LIB_0__::func_796(PLAYER::PLAYER_ID())))
						{
							Global_2667225.f_2855 = iVar0;
							return 29;
						}
						else
						{
							return 31;
						}
					}
				}
				else if (__LIB_12__::func_760(10f))
				{
					return 27;
				}
				else
				{
					iVar0 = __LIB_2__::func_894(PLAYER::PLAYER_ID(), 0);
					if (__LIB_2__::func_867(iVar0) && __LIB_10__::func_723(iVar0))
					{
						Global_2667225.f_2855 = iVar0;
						return 29;
					}
					else
					{
						return 1;
					}
				}
			}
		}
	}
	return 1;
}

int func_1163(int iParam0)//Position - 0x97292
{
	int iVar0;
	struct<3> Var1;
	if (__LIB_1__::func_30(iParam0, 0))
	{
		iVar0 = __LIB_0__::func_818(iParam0);
		Var1 = { func_1074(iVar0) };
		return func_741(&Var1, 0, 0, 0, 1);
	}
	return 0;
}

int func_1169(int iParam0)//Position - 0x9739F
{
	struct<3> Var0;
	int iVar1;
	struct<3> Var2;
	int iVar3;
	struct<3> Var4;
	Var0 = { func_1074(iParam0) };
	if (__LIB_1__::func_30(iParam0, 0))
	{
		iVar1 = __LIB_0__::func_818(iParam0);
		Var2 = { func_1074(iVar1) };
		Var0.f_2 = 0f;
		Var2.f_2 = 0f;
		if (SYSTEM::VDIST2(Var0, Var2) < 250000f)
		{
			return 1;
		}
	}
	else
	{
		iVar3 = __LIB_10__::func_716(iParam0, 1);
		if (!iVar3 == __LIB_0__::func_162())
		{
			Var4 = { func_1074(iVar3) };
			Var0.f_2 = 0f;
			Var4.f_2 = 0f;
			if (SYSTEM::VDIST2(Var0, Var4) < 250000f)
			{
				return 1;
			}
		}
	}
	return 0;
}

void func_1186(bool bParam0)//Position - 0x977C0
{
	struct<3> Var0;
	var uVar1;
	float fVar2;
	float fVar3;
	int iVar4;
	if (!Global_2667225.f_1753)
	{
		if (!bParam0)
		{
			fVar2 = 1f;
		}
		func_218(1, 0, 1, 0.01f, 2f, 1065353216, 1088421888, 0.01f, 0, 1066192077, 1, 1, 1, 0, 1109393408);
		while (__LIB_20__::func_785(iVar4, &Var0, &uVar1))
		{
			if (bParam0)
			{
				if (SYSTEM::VDIST2(Var0, __LIB_0__::func_85(PLAYER::PLAYER_ID())) > fVar3)
				{
					fVar3 = SYSTEM::VDIST2(Var0, __LIB_0__::func_85(PLAYER::PLAYER_ID()));
				}
			}
			else
			{
				__LIB_8__::func_273(Var0, uVar1, fVar2);
				fVar2 = (fVar2 - 0.025f);
			}
			iVar4++;
		}
		if (bParam0)
		{
			iVar4 = 0;
			while (__LIB_20__::func_785(iVar4, &Var0, &uVar1))
			{
				fVar2 = (1f - (SYSTEM::VDIST2(__LIB_0__::func_85(PLAYER::PLAYER_ID()), Var0) / fVar3));
				__LIB_8__::func_273(Var0, uVar1, fVar2);
				iVar4++;
			}
		}
	}
}

void func_1190(var uParam0, var uParam1, var uParam2, bool bParam3, bool bParam4, bool bParam5)//Position - 0x97DD5
{
	int iVar0;
	HUD::USE_FAKE_MP_CASH(false);
	*uParam2 = 0;
	uParam2->f_6 = 0f;
	uParam2->f_8 = 0.5f;
	uParam2->f_7 = 0.5f;
	uParam2->f_9 = 0f;
	uParam2->f_10 = 0f;
	uParam2->f_19 = 0;
	__LIB_0__::func_794(&(uParam2->f_120));
	__LIB_0__::func_794(&(uParam2->f_112));
	__LIB_0__::func_794(&(uParam2->f_118));
	__LIB_9__::func_725(uParam2);
	if (uParam2->f_5 == 15)
	{
		CAM::RENDER_SCRIPT_CAMS(false, false, 3000, true, false, 0);
	}
	if (uParam2->f_5 == 14 || uParam2->f_5 == 15)
	{
		HUD::DISPLAY_RADAR(true);
	}
	if (bParam3)
	{
		if (bParam5)
		{
			if (uParam2->f_15 != -1 && PED::IS_SYNCHRONIZED_SCENE_RUNNING(NETWORK::NETWORK_GET_LOCAL_SCENE_FROM_NETWORK_ID(uParam2->f_15)))
			{
				NETWORK::NETWORK_STOP_SYNCHRONISED_SCENE(uParam2->f_15);
			}
		}
		if (ENTITY::DOES_ENTITY_EXIST(uParam2->f_24))
		{
			OBJECT::DELETE_OBJECT(&(uParam2->f_24));
		}
		if (ENTITY::DOES_ENTITY_EXIST(uParam2->f_25))
		{
			OBJECT::DELETE_OBJECT(&(uParam2->f_25));
		}
		if (ENTITY::DOES_ENTITY_EXIST(uParam2->f_29))
		{
			OBJECT::DELETE_OBJECT(&(uParam2->f_29));
		}
		if (ENTITY::DOES_ENTITY_EXIST(uParam2->f_31))
		{
			OBJECT::DELETE_OBJECT(&(uParam2->f_31));
		}
		if (ENTITY::DOES_ENTITY_EXIST(uParam2->f_30))
		{
			OBJECT::DELETE_OBJECT(&(uParam2->f_30));
		}
		if (ENTITY::DOES_ENTITY_EXIST(uParam2->f_26))
		{
			OBJECT::DELETE_OBJECT(&(uParam2->f_26));
		}
		if (ENTITY::DOES_ENTITY_EXIST(uParam2->f_27))
		{
			if (ENTITY::IS_ENTITY_ATTACHED(uParam2->f_27))
			{
				ENTITY::DETACH_ENTITY(uParam2->f_27, true, true);
			}
			OBJECT::DELETE_OBJECT(&(uParam2->f_27));
		}
		if (ENTITY::DOES_ENTITY_EXIST(uParam2->f_28))
		{
			if (ENTITY::IS_ENTITY_ATTACHED(uParam2->f_28))
			{
				ENTITY::DETACH_ENTITY(uParam2->f_28, true, true);
			}
			OBJECT::DELETE_OBJECT(&(uParam2->f_28));
		}
	}
	if (bParam4)
	{
		iVar0 = 0;
		while (iVar0 < 32)
		{
			if (GRAPHICS::DOES_PARTICLE_FX_LOOPED_EXIST(uParam2->f_136[iVar0]))
			{
				GRAPHICS::STOP_PARTICLE_FX_LOOPED(uParam2->f_136[iVar0], false);
				__LIB_0__::func_794(&(uParam2->f_35[iVar0 /*2*/]));
			}
			iVar0++;
		}
	}
	if (uParam2->f_5 > 1 && !Global_2667225.f_2681)
	{
		if (((((!__LIB_3__::func_366() && !__LIB_1__::func_584()) && !__LIB_0__::func_629()) && !__LIB_5__::func_845()) && !__LIB_0__::func_890(PLAYER::PLAYER_ID())) && !PLAYER::IS_PLAYER_TELEPORT_ACTIVE())
		{
			__LIB_1__::func_376(PLAYER::PLAYER_ID(), 1, 0, 0);
		}
		MISC::CLEAR_BIT(&(Global_2689235[PLAYER::PLAYER_ID() /*453*/].f_318.f_4), 13);
	}
	if (uParam2->f_20 != -1)
	{
		__LIB_3__::func_122(&(uParam2->f_20));
		uParam2->f_20 = -1;
	}
	if ((uParam2->f_5 > 7 && uParam2->f_5 < 27) && uParam2->f_13 >= 0)
	{
		if (!__LIB_4__::func_128(__LIB_3__::func_648()))
		{
			TASK::CLEAR_PED_TASKS_IMMEDIATELY(PLAYER::PLAYER_PED_ID());
		}
		HUD::CLEAR_HELP(true);
		if (NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(uParam0->f_4[uParam2->f_13]))
		{
			if (NETWORK::NETWORK_HAS_CONTROL_OF_NETWORK_ID(uParam0->f_4[uParam2->f_13]))
			{
				uParam2->f_15 = NETWORK::NETWORK_CREATE_SYNCHRONISED_SCENE(func_30(uParam2->f_13), func_26(uParam2->f_13), 2, false, true, 1f, 0f, 1f);
				NETWORK::NETWORK_ADD_PED_TO_SYNCHRONISED_SCENE(NETWORK::NET_TO_PED(uParam0->f_4[uParam2->f_13]), uParam2->f_15, func_1201(), "Bartender_Idle", 2f, -2f, 13, 16, 2f, 0);
				NETWORK::NETWORK_START_SYNCHRONISED_SCENE(uParam2->f_15);
			}
		}
	}
	if (GRAPHICS::DOES_PARTICLE_FX_LOOPED_EXIST(uParam2->f_136[PLAYER::PLAYER_ID()]))
	{
		GRAPHICS::STOP_PARTICLE_FX_LOOPED(uParam2->f_136[PLAYER::PLAYER_ID()], false);
	}
	(*uParam1)[PLAYER::PLAYER_ID() /*2*/] = 0;
	STREAMING::REMOVE_NAMED_PTFX_ASSET("scr_ba_club");
	AUDIO::RELEASE_NAMED_SCRIPT_AUDIO_BANK("SAFEHOUSE_TREVOR_DRINK_WHISKEY");
	AUDIO::RELEASE_NAMED_SCRIPT_AUDIO_BANK("DLC_BATTLE/BTL_CHAMPAGNE_MINIGAME");
	AUDIO::RELEASE_NAMED_SCRIPT_AUDIO_BANK("DLC_HEI4/DLC_HEI4_Anims_Tequila");
	if (uParam2->f_5 > 3)
	{
		STREAMING::REMOVE_ANIM_DICT(func_22(uParam2->f_13));
		STREAMING::REMOVE_ANIM_DICT(func_1200(uParam2->f_13));
		STREAMING::REMOVE_ANIM_DICT(func_1199(uParam2->f_13));
		STREAMING::REMOVE_ANIM_DICT(func_1198(uParam2->f_13, 0));
		STREAMING::REMOVE_ANIM_DICT(func_1198(uParam2->f_13, 1));
		STREAMING::REMOVE_ANIM_DICT(func_1198(uParam2->f_13, 2));
		STREAMING::REMOVE_ANIM_DICT(func_1198(uParam2->f_13, 3));
		STREAMING::REMOVE_ANIM_DICT(func_1201());
		STREAMING::REMOVE_ANIM_DICT("ANIM@AMB@NIGHTCLUB@MINI@DRINKING@CHAMPAGNE_DRINKING@BASE@");
		STREAMING::REMOVE_ANIM_DICT(__LIB_9__::func_384());
		STREAMING::REMOVE_ANIM_DICT(__LIB_9__::func_383(0));
		STREAMING::REMOVE_ANIM_DICT(__LIB_9__::func_383(1));
		STREAMING::REMOVE_ANIM_DICT(__LIB_9__::func_383(2));
		STREAMING::REMOVE_ANIM_DICT(__LIB_9__::func_383(3));
	}
	if (uParam2->f_5 > 1)
	{
		PED::SET_PED_CONFIG_FLAG(PLAYER::PLAYER_PED_ID(), 185, false);
		PED::SET_PED_CAN_HEAD_IK(PLAYER::PLAYER_PED_ID(), true);
	}
	__LIB_0__::func_794(&(uParam2->f_108));
	func_1193(uParam2);
	__LIB_9__::func_407(uParam1);
	__LIB_9__::func_408(uParam2, 1);
}

void func_1193(var uParam0)//Position - 0x98211
{
	if (uParam0->f_2 == 1)
	{
		__LIB_5__::func_828(PLAYER::PLAYER_PED_ID());
		uParam0->f_2 = 0;
	}
	if (BitTest(uParam0->f_12, 0))
	{
		func_309(PLAYER::PLAYER_PED_ID(), 1, uParam0->f_32, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
		MISC::CLEAR_BIT(&(uParam0->f_12), 0);
	}
}

char* func_1198(int iParam0, int iParam1)//Position - 0x983AE
{
	char* sVar0;
	sVar0 = "";
	if (__LIB_2__::func_573(PLAYER::PLAYER_ID()) || __LIB_1__::func_35())
	{
		switch (iParam1)
		{
			case 0:
				sVar0 = "anim@amb@nightclub@mini@drinking@bar@drink@one";
				break;
			case 1:
				sVar0 = "anim@amb@nightclub@mini@drinking@bar@drink@two";
				break;
			case 2:
				sVar0 = "anim@amb@nightclub@mini@drinking@bar@drink@three";
				break;
			case 3:
				sVar0 = "anim@amb@nightclub@mini@drinking@bar@drink@four";
				break;
		}
		return sVar0;
	}
	switch (iParam0)
	{
		case 0:
			switch (iParam1)
			{
				case 0:
					sVar0 = "anim@amb@casino@mini@drinking@bar@drink@heels@one";
					break;
				case 1:
					sVar0 = "anim@amb@casino@mini@drinking@bar@drink@heels@two";
					break;
				case 2:
					sVar0 = "anim@amb@casino@mini@drinking@bar@drink@heels@three";
					break;
				case 3:
					sVar0 = "anim@amb@casino@mini@drinking@bar@drink@heels@four";
					break;
			}
			break;
		case 1:
			switch (iParam1)
			{
				case 0:
					sVar0 = "anim@amb@casino@mini@drinking@bar@drink@heels@one";
					break;
				case 1:
					sVar0 = "anim@amb@casino@mini@drinking@bar@drink@heels@two";
					break;
				case 2:
					sVar0 = "anim@amb@casino@mini@drinking@bar@drink@heels@three";
					break;
				case 3:
					sVar0 = "anim@amb@casino@mini@drinking@bar@drink@heels@four";
					break;
			}
			break;
		case 2:
			switch (iParam1)
			{
				case 0:
					sVar0 = "anim@amb@casino@mini@drinking@bar@drink@heels@one";
					break;
				case 1:
					sVar0 = "anim@amb@casino@mini@drinking@bar@drink@heels@two";
					break;
				case 2:
					sVar0 = "anim@amb@casino@mini@drinking@bar@drink@heels@three";
					break;
				case 3:
					sVar0 = "anim@amb@casino@mini@drinking@bar@drink@heels@four";
					break;
			}
			break;
		case 3:
			switch (iParam1)
			{
				case 0:
					sVar0 = "anim@amb@casino@mini@drinking@bar@drink@heels@one";
					break;
				case 1:
					sVar0 = "anim@amb@casino@mini@drinking@bar@drink@heels@two";
					break;
				case 2:
					sVar0 = "anim@amb@casino@mini@drinking@bar@drink@heels@three";
					break;
				case 3:
					sVar0 = "anim@amb@casino@mini@drinking@bar@drink@heels@four";
					break;
			}
			break;
	}
	return sVar0;
}

char* func_1199(int iParam0)//Position - 0x98552
{
	char* sVar0;
	sVar0 = "";
	if (__LIB_2__::func_573(PLAYER::PLAYER_ID()) || __LIB_1__::func_35())
	{
		return "anim@amb@nightclub@mini@drinking@bar@drink@beer";
	}
	switch (iParam0)
	{
		case 0:
			sVar0 = "anim@amb@casino@mini@drinking@bar@drink_v2@heels@beer";
			break;
		case 1:
			sVar0 = "anim@amb@casino@mini@drinking@bar@drink@heels@beer";
			break;
	}
	return sVar0;
}

char* func_1200(int iParam0)//Position - 0x985A3
{
	char* sVar0;
	sVar0 = "";
	if (__LIB_2__::func_573(PLAYER::PLAYER_ID()) || __LIB_1__::func_35())
	{
		return "anim@amb@nightclub@mini@drinking@bar@drink@base";
	}
	switch (iParam0)
	{
		case 0:
			sVar0 = "anim@amb@casino@mini@drinking@bar@drink_v2@heels@base";
			break;
		case 1:
			sVar0 = "anim@amb@casino@mini@drinking@bar@drink@heels@base";
			break;
	}
	return sVar0;
}

char* func_1201()//Position - 0x985F4
{
	if (__LIB_2__::func_573(PLAYER::PLAYER_ID()) || __LIB_1__::func_35())
	{
		return "anim@amb@nightclub@mini@drinking@champagne_drinking@base@";
	}
	return "anim@amb@casino@mini@drinking@champagne_drinking@heels@base";
}

void func_1212(int iParam0)//Position - 0x9886A
{
	Local_150.f_1212 = iParam0;
}

void func_1213(var uParam0)//Position - 0x98879
{
	func_1214(uParam0);
}

void func_1214(var uParam0)//Position - 0x98887
{
	bool bVar0;
	int iVar1;
	float fVar2;
	bVar0 = (__LIB_8__::func_355(uParam0->f_2, 10000, 0) && PED::IS_PED_SWIMMING(PLAYER::PLAYER_PED_ID()));
	if (*uParam0 && (TASK::GET_SCRIPT_TASK_STATUS(PLAYER::PLAYER_PED_ID(), joaat("SCRIPT_TASK_FOLLOW_NAV_MESH_TO_COORD")) != 1 || bVar0))
	{
		if (bVar0)
		{
			TASK::CLEAR_PED_TASKS(PLAYER::PLAYER_PED_ID());
		}
		if (!__LIB_1__::func_603(PLAYER::PLAYER_ID()))
		{
			__LIB_1__::func_376(PLAYER::PLAYER_ID(), 1, 0, 0);
		}
		*uParam0 = 0;
		__LIB_9__::func_50(&Global_1579024, 9);
		__LIB_0__::func_794(&(uParam0->f_2));
	}
	if (!__LIB_20__::func_858())
	{
		uParam0->f_1 = 0;
		__LIB_0__::func_794(&(uParam0->f_2));
		return;
	}
	if (!func_1223(&iVar1))
	{
		return;
	}
	if (Global_2667225.f_2681)
	{
		return;
	}
	if (Global_2789756.f_1 != 0)
	{
		return;
	}
	if (__LIB_1__::func_603(PLAYER::PLAYER_ID()))
	{
		return;
	}
	if ((__LIB_0__::func_629() || !__LIB_0__::func_893()) || __LIB_11__::func_233())
	{
		uParam0->f_1 = 0;
		return;
	}
	if (__LIB_11__::func_254(PLAYER::PLAYER_ID()))
	{
		uParam0->f_1 = 0;
		__LIB_0__::func_794(&(uParam0->f_2));
	}
	if (!*uParam0)
	{
		uParam0->f_1++;
		if (uParam0->f_1 >= 8)
		{
			uParam0->f_1 = 0;
			MISC::SET_BIT(&(Global_2789756.f_1), 0);
			Global_2789756.f_5 = 0;
			return;
		}
		fVar2 = __LIB_0__::func_373(iVar1 == 0, 2f, 1f);
		TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(PLAYER::PLAYER_PED_ID(), func_1218(iVar1), 1f, 20000, fVar2, 0, 40000f);
		__LIB_1__::func_376(PLAYER::PLAYER_ID(), 0, 256, 0);
		*uParam0 = 1;
		__LIB_9__::func_137(&Global_1579024, 9);
		__LIB_0__::func_794(&(uParam0->f_2));
		__LIB_0__::func_795(&(uParam0->f_2), 0, 0);
		if (!__LIB_11__::func_254(PLAYER::PLAYER_ID()))
		{
			__LIB_0__::func_151("BP_RESTRICTION" /* GXT: Return to the beach party. El Rubio's guards will remove you from the island if they turn you away too many times. */, 10000);
		}
	}
}

Vector3 func_1218(int iParam0)//Position - 0x98A89
{
	struct<3> Var0;
	struct<3> Var1;
	struct<3> Var2;
	struct<3> Var3;
	switch (iParam0)
	{
		case 1:
			return 4946.8164f, -4877.6006f, 2.8446f;
		case 2:
			return 4953.307f, -4916.282f, 3.7098f;
		default:
	}
	Var0 = { func_1220() };
	Var1 = { ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true) };
	Var2 = { Var0 - Var1 };
	Var3 = { Var1 + __LIB_0__::func_79(Var2) * Vector(5f, 5f, 5f) };
	return Var3;
}

Vector3 func_1220()//Position - 0x98B41
{
	return 4897.608f, -4942.0103f, 3.336017f;
}

int func_1223(var uParam0)//Position - 0x98B9C
{
	int iVar0;
	iVar0 = 0;
	while (iVar0 < 4)
	{
		*uParam0 = iVar0;
		if (!__LIB_32__::func_376(*uParam0))
		{
		}
		else if (func_1224(*uParam0))
		{
			return 1;
		}
		iVar0++;
	}
	return 0;
}

int func_1224(int iParam0)//Position - 0x98BD8
{
	int iVar0;
	iVar0 = PLAYER::PLAYER_PED_ID();
	switch (iParam0)
	{
		case 0:
			return ENTITY::IS_ENTITY_IN_ANGLED_AREA(iVar0, 4791.023f, -4958.3604f, 6.490686f, 4826.247f, -4896.496f, -5.38957f, 6f, false, true, 0);
		case 1:
			return ENTITY::IS_ENTITY_IN_ANGLED_AREA(iVar0, 4949.43f, -4873.04f, 0.379f, 4955.6f, -4844.63f, 10.72f, 24f, false, true, 0);
		case 2:
			return ENTITY::IS_ENTITY_IN_ANGLED_AREA(iVar0, 4956.94f, -4917.65f, -0.938f, 4977.68f, -4934.75f, 9.985f, 29.5f, false, true, 0);
		case 3:
			return !func_1225(1123024896);
		default:
	}
	return 0;
}

bool func_1225(float fParam0)//Position - 0x98C9C
{
	struct<3> Var0;
	struct<3> Var1;
	float fVar2;
	Var0 = { func_1220() };
	if (__LIB_0__::func_121(PLAYER::PLAYER_PED_ID()))
	{
		Var1 = { ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true) };
	}
	else
	{
		Var1 = { CAM::GET_GAMEPLAY_CAM_COORD() };
	}
	fVar2 = __LIB_11__::func_99(Var0, Var1);
	return fVar2 <= (fParam0 * fParam0);
}

void func_1232()//Position - 0x98DC5
{
	bool bVar0;
	bool bVar1;
	int iVar2;
	if (Local_150.f_170.f_2 == 0)
	{
		func_1586(&(Local_150.f_170));
	}
	bVar0 = __LIB_4__::func_358(PLAYER::PLAYER_ID());
	bVar1 = func_1581();
	iVar2 = __LIB_11__::func_211(Local_150.f_1198.f_4);
	__LIB_31__::func_369(&(Local_150.f_170), __LIB_11__::func_210(&(Local_150.f_1123)));
	func_1285(&(Local_150.f_170), bVar1, iVar2);
	__LIB_44__::func_237(&(Local_150.f_1123));
	if (!bVar0 && __LIB_4__::func_358(PLAYER::PLAYER_ID()))
	{
		__LIB_1__::func_28(180);
	}
}

void func_1285(var uParam0, bool bParam1, int iParam2)//Position - 0x99A66
{
	bool bVar0;
	func_1577(uParam0);
	if (uParam0->f_930 != 0)
	{
		uParam0->f_933 = 1;
	}
	else
	{
		uParam0->f_933 = 0;
	}
	if (uParam0->f_2 == 0)
	{
		return;
	}
	if (uParam0->f_2 != 1 && uParam0->f_2 != 2)
	{
		func_1576(&(uParam0->f_874));
	}
	__LIB_11__::func_209(&(uParam0->f_785));
	bVar0 = __LIB_4__::func_358(uParam0->f_948);
	__LIB_11__::func_208(uParam0, bParam1);
	switch (uParam0->f_2)
	{
		case 1:
			func_1586(uParam0);
			break;
		case 2:
			__LIB_31__::func_384(uParam0);
			break;
		case 3:
			func_1545(uParam0);
			break;
		case 4:
			__LIB_31__::func_383(uParam0);
			break;
		case 5:
			func_1493(uParam0, iParam2);
			break;
		case 6:
			func_1488(uParam0);
			break;
		case 7:
			func_1428(uParam0);
			break;
		case 8:
			__LIB_31__::func_365(uParam0);
			break;
		case 9:
			func_1415(uParam0);
			break;
		case 10:
			func_1408(uParam0);
			break;
		case 11:
			func_1398(uParam0);
			break;
		case 13:
			func_1387(uParam0);
			break;
		case 12:
			func_1355(uParam0);
			break;
	}
	if (uParam0->f_2 >= 4 && uParam0->f_2 <= 8)
	{
		if (uParam0->f_930 == 1)
		{
			PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 1 /*INPUT_LOOK_LR*/, true);
			PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 2 /*INPUT_LOOK_UD*/, true);
		}
		else if (uParam0->f_930 == 2)
		{
			if (PAD::IS_CONTROL_PRESSED(0 /*PLAYER_CONTROL*/, 227 /*INPUT_SCRIPT_RB*/))
			{
				PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 1 /*INPUT_LOOK_LR*/, true);
				PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 2 /*INPUT_LOOK_UD*/, true);
			}
		}
		else if (uParam0->f_930 == 3)
		{
			if (!__LIB_0__::func_624(&(uParam0->f_390), 21))
			{
				PLAYER::SET_PLAYER_HEALTH_RECHARGE_MAX_PERCENT(uParam0->f_948, 1f);
				__LIB_2__::func_486(&(uParam0->f_390), 21);
			}
			if (PAD::IS_CONTROL_PRESSED(0 /*PLAYER_CONTROL*/, 229 /*INPUT_SCRIPT_RT*/))
			{
				PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 1 /*INPUT_LOOK_LR*/, true);
				PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 2 /*INPUT_LOOK_UD*/, true);
			}
		}
		else if (uParam0->f_930 == 4)
		{
			if (PAD::IS_CONTROL_PRESSED(0 /*PLAYER_CONTROL*/, 229 /*INPUT_SCRIPT_RT*/))
			{
				PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 30 /*INPUT_MOVE_LR*/, true);
				PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 31 /*INPUT_MOVE_UD*/, true);
			}
		}
		else if (uParam0->f_930 == 5)
		{
			if (!PAD::IS_CONTROL_PRESSED(0 /*PLAYER_CONTROL*/, 229 /*INPUT_SCRIPT_RT*/))
			{
				PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 30 /*INPUT_MOVE_LR*/, true);
				PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 31 /*INPUT_MOVE_UD*/, true);
			}
		}
	}
	if (uParam0->f_2 != 5)
	{
		__LIB_11__::func_476(uParam0);
	}
	__LIB_11__::func_128(uParam0);
	__LIB_11__::func_243(uParam0);
	if ((__LIB_0__::func_624(&(uParam0->f_390), 29) && !__LIB_4__::func_358(uParam0->f_948)) && !__LIB_11__::func_127(uParam0))
	{
		__LIB_11__::func_238(uParam0, 1);
	}
	if (__LIB_11__::func_127(uParam0))
	{
		__LIB_11__::func_242();
		return;
	}
	if (__LIB_11__::func_475(uParam0))
	{
		if (uParam0->f_2 == 6 || !uParam0->f_636)
		{
			__LIB_11__::func_126();
		}
		__LIB_11__::func_242();
		PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 28 /*INPUT_SPECIAL_ABILITY*/, true);
		PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 29 /*INPUT_SPECIAL_ABILITY_SECONDARY*/, true);
		PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 52 /*INPUT_CONTEXT_SECONDARY*/, true);
		__LIB_11__::func_265(uParam0);
		CAM::SET_FOLLOW_PED_CAM_THIS_UPDATE("NIGHTCLUB_FOLLOW_PED_CAMERA", 1000);
		if (CAM::GET_CAM_VIEW_MODE_FOR_CONTEXT(0) == 4)
		{
			CAM::SET_FIRST_PERSON_AIM_CAM_RELATIVE_HEADING_LIMITS_THIS_UPDATE(-65f, 65f);
			CAM::SET_FIRST_PERSON_AIM_CAM_RELATIVE_PITCH_LIMITS_THIS_UPDATE(-39f, 65f);
		}
		__LIB_11__::func_518(uParam0, 0);
		__LIB_11__::func_235(uParam0, 0);
		__LIB_31__::func_359(uParam0);
		__LIB_11__::func_474(uParam0);
		if (uParam0->f_915.f_11 != 0)
		{
			func_1288(uParam0);
		}
		PED::SET_PED_RESET_FLAG(uParam0->f_950, 71, true);
		if (!bVar0)
		{
			__LIB_2__::func_486(&(uParam0->f_390), 16);
			PED::SET_PED_CONFIG_FLAG(uParam0->f_950, 185, true);
		}
		__LIB_11__::func_240(&(uParam0->f_791), uParam0->f_675.f_1, iParam2);
		__LIB_0__::func_502();
	}
	else
	{
		if (bVar0)
		{
			__LIB_2__::func_487(&(uParam0->f_390), 16);
			PED::SET_PED_CONFIG_FLAG(uParam0->f_950, 185, false);
		}
		if ((HUD::IS_RADAR_HIDDEN() && __LIB_0__::func_624(&(uParam0->f_390), 6)) && !__LIB_0__::func_877())
		{
			HUD::DISPLAY_RADAR(true);
			__LIB_2__::func_487(&(uParam0->f_390), 6);
		}
		__LIB_11__::func_518(uParam0, 1);
		__LIB_11__::func_235(uParam0, 1);
	}
}

void func_1288(var uParam0)//Position - 0x99FB2
{
	int iVar0;
	int iVar1;
	if (!__LIB_0__::func_937(&(uParam0->f_655), 60000, 0))
	{
		return;
	}
	__LIB_0__::func_794(&(uParam0->f_655));
	if (!__LIB_11__::func_121(&(uParam0->f_649)))
	{
		return;
	}
	iVar0 = __LIB_1__::func_724(&(uParam0->f_649), 0, 0);
	iVar1 = __LIB_11__::func_415(iVar0);
	__LIB_11__::func_120(iVar1);
	if (iVar1 > 0)
	{
		__LIB_11__::func_281(0, uParam0->f_950, "", joaat("XPTYPE_ACTION"), 1187146110, iVar1, 1, -1, 0, 0, 0);
	}
}

void func_1355(var uParam0)//Position - 0x9BA91
{
	func_1384(uParam0);
	__LIB_11__::func_245(uParam0);
	if (__LIB_42__::func_873(uParam0, 0, 15000))
	{
		__LIB_11__::func_82(uParam0, 3);
		__LIB_2__::func_487(&(uParam0->f_390), 26);
		__LIB_42__::func_870(uParam0);
		return;
	}
	if (!__LIB_40__::func_839(uParam0))
	{
		func_1384(uParam0);
		return;
	}
	__LIB_31__::func_360(uParam0);
	if (__LIB_0__::func_624(&(uParam0->f_390), 26) && !(uParam0->f_930 != 0 && uParam0->f_931))
	{
		__LIB_11__::func_82(uParam0, 3);
		__LIB_2__::func_487(&(uParam0->f_390), 26);
		__LIB_42__::func_870(uParam0);
	}
	else
	{
		__LIB_42__::func_870(uParam0);
		__LIB_40__::func_838(uParam0);
		__LIB_11__::func_244(&(uParam0->f_390), 1, __LIB_31__::func_465(uParam0, &(uParam0->f_795)));
	}
}

void func_1384(var uParam0)//Position - 0x9C3C2
{
	__LIB_11__::func_126();
	PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 28 /*INPUT_SPECIAL_ABILITY*/, true);
	PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 29 /*INPUT_SPECIAL_ABILITY_SECONDARY*/, true);
	PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 52 /*INPUT_CONTEXT_SECONDARY*/, true);
	PED::SET_PED_RESET_FLAG(uParam0->f_950, 71, true);
	__LIB_11__::func_265(uParam0);
	__LIB_11__::func_474(uParam0);
	func_1385(uParam0);
	__LIB_0__::func_502();
}

void func_1385(var uParam0)//Position - 0x9C408
{
	int iVar0;
	int iVar1;
	if (!__LIB_0__::func_937(&(uParam0->f_655), 60000, 0))
	{
		return;
	}
	__LIB_0__::func_794(&(uParam0->f_655));
	iVar0 = __LIB_1__::func_724(&(uParam0->f_649), 0, 0);
	iVar1 = __LIB_11__::func_416(iVar0);
	if (iVar1 > 0)
	{
		__LIB_11__::func_281(0, uParam0->f_950, "", joaat("XPTYPE_ACTION"), 1187146110, iVar1, 1, -1, 0, 0, 0);
	}
}

void func_1387(var uParam0)//Position - 0x9C480
{
	func_1384(uParam0);
	CAM::SET_FOLLOW_PED_CAM_THIS_UPDATE("NIGHTCLUB_FOLLOW_PED_CAMERA", 1000);
	__LIB_11__::func_245(uParam0);
	if (__LIB_42__::func_873(uParam0, 0, 15000))
	{
		__LIB_42__::func_874(uParam0, 1, uParam0->f_950);
		__LIB_11__::func_82(uParam0, 12);
		return;
	}
	if (!__LIB_31__::func_361(uParam0))
	{
		if (__LIB_40__::func_842(uParam0) == 13)
		{
			return;
		}
	}
	__LIB_42__::func_874(uParam0, 1, uParam0->f_950);
	__LIB_11__::func_82(uParam0, 12);
}

void func_1398(var uParam0)//Position - 0x9C7ED
{
	func_1384(uParam0);
	CAM::SET_FOLLOW_PED_CAM_THIS_UPDATE("NIGHTCLUB_FOLLOW_PED_CAMERA", 1000);
	__LIB_11__::func_245(uParam0);
	if (((__LIB_40__::func_842(uParam0) == 12 || __LIB_40__::func_842(uParam0) == 3) || __LIB_40__::func_842(uParam0) == 5) || __LIB_40__::func_842(uParam0) == 13)
	{
		__LIB_31__::func_466(uParam0);
		__LIB_42__::func_874(uParam0, 0, uParam0->f_950);
		__LIB_11__::func_82(uParam0, 12);
		return;
	}
	if (__LIB_42__::func_873(uParam0, 1, 15000))
	{
		__LIB_42__::func_870(uParam0);
		__LIB_40__::func_838(uParam0);
		__LIB_11__::func_244(&(uParam0->f_390), 1, __LIB_31__::func_465(uParam0, &(uParam0->f_795)));
	}
	if (__LIB_42__::func_875(uParam0))
	{
		__LIB_31__::func_466(uParam0);
		__LIB_2__::func_486(&(uParam0->f_390), 26);
		__LIB_11__::func_82(uParam0, 13);
	}
}

void func_1408(var uParam0)//Position - 0x9D6DD
{
	func_1384(uParam0);
	CAM::SET_FOLLOW_PED_CAM_THIS_UPDATE("NIGHTCLUB_FOLLOW_PED_CAMERA", 1000);
	__LIB_11__::func_245(uParam0);
	if (__LIB_11__::func_481(uParam0))
	{
		if (__LIB_31__::func_361(uParam0))
		{
			__LIB_43__::func_634(uParam0);
			__LIB_11__::func_82(uParam0, 11);
		}
		if (__LIB_42__::func_873(uParam0, 0, 15000))
		{
			__LIB_11__::func_82(uParam0, 3);
			__LIB_42__::func_870(uParam0);
			return;
		}
	}
	else
	{
		if (__LIB_40__::func_842(uParam0) >= 11)
		{
			__LIB_42__::func_876(uParam0);
			__LIB_11__::func_82(uParam0, 11);
		}
		if (__LIB_42__::func_873(uParam0, 0, 15000))
		{
			__LIB_42__::func_870(uParam0);
			__LIB_40__::func_838(uParam0);
			__LIB_11__::func_244(&(uParam0->f_390), 1, __LIB_31__::func_465(uParam0, &(uParam0->f_795)));
		}
	}
}

void func_1415(var uParam0)//Position - 0x9D963
{
	int iVar0;
	func_1384(uParam0);
	CAM::SET_FOLLOW_PED_CAM_THIS_UPDATE("NIGHTCLUB_FOLLOW_PED_CAMERA", 1000);
	if (__LIB_40__::func_847(uParam0))
	{
		iVar0 = __LIB_31__::func_351(uParam0);
		if (uParam0->f_949 < iVar0)
		{
			__LIB_40__::func_854(uParam0, iVar0, 0);
		}
		return;
	}
	if (__LIB_11__::func_481(uParam0))
	{
		__LIB_43__::func_934(uParam0);
	}
	else
	{
		__LIB_11__::func_245(uParam0);
		__LIB_43__::func_635(uParam0);
	}
}

void func_1428(var uParam0)//Position - 0x9DF6C
{
	int iVar0;
	bool bVar1;
	bool bVar2;
	var uVar3;
	var uVar4;
	var uVar5;
	var uVar6;
	var uVar7;
	struct<8> Var8;
	int iVar9;
	char* sVar10;
	if (uParam0->f_930 != 0)
	{
		__LIB_42__::func_880(uParam0, uParam0->f_930 != 0);
	}
	iVar0 = uParam0->f_950;
	if (!TASK::IS_TASK_MOVE_NETWORK_ACTIVE(iVar0))
	{
		uParam0->f_796.f_75 = 0;
		__LIB_11__::func_419(&(uParam0->f_796));
		__LIB_11__::func_82(uParam0, 5);
		return;
	}
	if (uParam0->f_930 != 0)
	{
		if (uParam0->f_930 == 0 || PAD::IS_USING_KEYBOARD_AND_MOUSE(0 /*PLAYER_CONTROL*/))
		{
			bVar1 = PAD::IS_CONTROL_PRESSED(0 /*PLAYER_CONTROL*/, 226 /*INPUT_SCRIPT_LB*/);
			bVar2 = PAD::IS_CONTROL_PRESSED(0 /*PLAYER_CONTROL*/, 227 /*INPUT_SCRIPT_RB*/);
		}
		else if (((uParam0->f_930 == 1 || uParam0->f_930 == 2) || uParam0->f_930 == 3) || uParam0->f_930 == 4)
		{
			bVar1 = PAD::GET_CONTROL_NORMAL(0 /*PLAYER_CONTROL*/, 30 /*INPUT_MOVE_LR*/) < -0.5f;
			bVar2 = PAD::GET_CONTROL_NORMAL(0 /*PLAYER_CONTROL*/, 30 /*INPUT_MOVE_LR*/) > 0.5f;
		}
		else if (uParam0->f_930 == 5)
		{
			if (PAD::IS_CONTROL_PRESSED(0 /*PLAYER_CONTROL*/, 229 /*INPUT_SCRIPT_RT*/))
			{
				bVar1 = PAD::GET_CONTROL_NORMAL(0 /*PLAYER_CONTROL*/, 30 /*INPUT_MOVE_LR*/) < -0.5f;
				bVar2 = PAD::GET_CONTROL_NORMAL(0 /*PLAYER_CONTROL*/, 30 /*INPUT_MOVE_LR*/) > 0.5f;
			}
		}
		__LIB_11__::func_491(uParam0, bVar1, bVar2);
		if ((uParam0->f_930 == 0 || uParam0->f_930 == 1) || PAD::IS_USING_KEYBOARD_AND_MOUSE(0 /*PLAYER_CONTROL*/))
		{
			if (PAD::IS_CONTROL_JUST_PRESSED(0 /*PLAYER_CONTROL*/, 233 /*INPUT_SCRIPT_PAD_DOWN*/))
			{
				__LIB_11__::func_490(1);
			}
		}
		else if ((uParam0->f_930 == 2 || uParam0->f_930 == 4) || uParam0->f_930 == 5)
		{
			if (PAD::IS_CONTROL_JUST_PRESSED(0 /*PLAYER_CONTROL*/, 232 /*INPUT_SCRIPT_PAD_UP*/))
			{
				__LIB_11__::func_490(1);
			}
			else if (PAD::IS_CONTROL_JUST_PRESSED(0 /*PLAYER_CONTROL*/, 233 /*INPUT_SCRIPT_PAD_DOWN*/))
			{
				__LIB_11__::func_490(0);
			}
		}
		else if (uParam0->f_930 == 3)
		{
			if (PAD::IS_CONTROL_JUST_PRESSED(0 /*PLAYER_CONTROL*/, 235 /*INPUT_SCRIPT_PAD_RIGHT*/))
			{
				__LIB_11__::func_490(1);
			}
			else if (PAD::IS_CONTROL_JUST_PRESSED(0 /*PLAYER_CONTROL*/, 234 /*INPUT_SCRIPT_PAD_LEFT*/))
			{
				__LIB_11__::func_490(0);
			}
		}
		if (!__LIB_0__::func_624(&(uParam0->f_390), 13))
		{
			if ((uParam0->f_930 == 0 || uParam0->f_930 == 1) || PAD::IS_USING_KEYBOARD_AND_MOUSE(0 /*PLAYER_CONTROL*/))
			{
				if (PAD::IS_CONTROL_JUST_PRESSED(0 /*PLAYER_CONTROL*/, 232 /*INPUT_SCRIPT_PAD_UP*/))
				{
					uParam0->f_1++;
					if (!__LIB_11__::func_92(uParam0, uParam0->f_1, &uVar3))
					{
						uParam0->f_1 = 0;
					}
				}
			}
			else if ((uParam0->f_930 == 2 || uParam0->f_930 == 4) || uParam0->f_930 == 5)
			{
				if (PAD::IS_CONTROL_JUST_PRESSED(0 /*PLAYER_CONTROL*/, 235 /*INPUT_SCRIPT_PAD_RIGHT*/))
				{
					uParam0->f_1++;
					if (!__LIB_11__::func_92(uParam0, uParam0->f_1, &uVar4))
					{
						uParam0->f_1 = 0;
					}
				}
				else if (PAD::IS_CONTROL_JUST_PRESSED(0 /*PLAYER_CONTROL*/, 234 /*INPUT_SCRIPT_PAD_LEFT*/))
				{
					uParam0->f_1 = (uParam0->f_1 - 1);
					if (!__LIB_11__::func_92(uParam0, uParam0->f_1, &uVar5))
					{
						uParam0->f_1 = 9;
					}
				}
			}
			else if (uParam0->f_930 == 3)
			{
				if (PAD::IS_CONTROL_JUST_PRESSED(0 /*PLAYER_CONTROL*/, 232 /*INPUT_SCRIPT_PAD_UP*/))
				{
					uParam0->f_1++;
					if (!__LIB_11__::func_92(uParam0, uParam0->f_1, &uVar6))
					{
						uParam0->f_1 = 0;
					}
				}
				else if (PAD::IS_CONTROL_JUST_PRESSED(0 /*PLAYER_CONTROL*/, 233 /*INPUT_SCRIPT_PAD_DOWN*/))
				{
					uParam0->f_1 = (uParam0->f_1 - 1);
					if (!__LIB_11__::func_92(uParam0, uParam0->f_1, &uVar7))
					{
						uParam0->f_1 = 9;
					}
				}
			}
			if (uParam0->f_1 != *uParam0)
			{
				__LIB_1__::func_354(uParam0->f_915.f_6, uParam0->f_1, -1, 1, 0);
				__LIB_11__::func_255(uParam0);
				func_1473(uParam0);
				__LIB_2__::func_486(&(uParam0->f_390), 19);
			}
		}
	}
	__LIB_11__::func_246(uParam0, &Var8);
	__LIB_11__::func_489(uParam0, &Var8);
	if (uParam0->f_930 == 3)
	{
		if (uParam0->f_785.f_5)
		{
			uParam0->f_670 = uParam0->f_669;
			uParam0->f_669 = 0;
			uParam0->f_907++;
			__LIB_11__::func_172(&(uParam0->f_675));
			if (__LIB_11__::func_171(uParam0) && uParam0->f_666)
			{
				__LIB_11__::func_170(&(uParam0->f_675));
			}
		}
		iVar9 = 0;
		switch (uParam0->f_3)
		{
			case 0:
				__LIB_42__::func_879(uParam0, &Var8, &iVar9);
				break;
			case 1:
				__LIB_42__::func_878(uParam0, &Var8, &iVar9);
				break;
		}
		if (iVar9 == 3)
		{
			__LIB_11__::func_163(&(uParam0->f_675), 1);
			if (uParam0->f_930 == 3)
			{
				PAD::SET_CONTROL_SHAKE(0 /*PLAYER_CONTROL*/, 65, 240);
			}
		}
		else if (iVar9 == 2)
		{
			__LIB_11__::func_163(&(uParam0->f_675), 0);
		}
	}
	__LIB_31__::func_380(uParam0);
	TASK::SET_TASK_MOVE_NETWORK_SIGNAL_FLOAT(iVar0, "INTENSITY", __LIB_0__::func_331(uParam0->f_394, 0f, uParam0->f_672));
	TASK::SET_TASK_MOVE_NETWORK_SIGNAL_LOCAL_FLOAT(iVar0, "SPEED", uParam0->f_630);
	TASK::SET_TASK_MOVE_NETWORK_SIGNAL_FLOAT(iVar0, "DIRECTION", uParam0->f_395);
	TASK::SET_TASK_MOVE_NETWORK_SIGNAL_FLOAT(iVar0, "DIRECTION_UP_DOWN", uParam0->f_395.f_1);
	uParam0->f_629 = TASK::GET_TASK_MOVE_NETWORK_SIGNAL_FLOAT(iVar0, "PHASE_OUT");
	sVar10 = "UpperbodyClipEnded";
	switch (uParam0->f_796.f_75)
	{
		case 0:
			TASK::SET_TASK_MOVE_NETWORK_SIGNAL_BOOL(iVar0, "UpperBodyOnOff", true);
			uParam0->f_796.f_75++;
			break;
		case 1:
			TASK::SET_TASK_MOVE_NETWORK_SIGNAL_BOOL(iVar0, "UpperBodyOnOff", true);
			if (TASK::GET_TASK_MOVE_NETWORK_EVENT(iVar0, sVar10))
			{
				__LIB_0__::func_794(&(uParam0->f_913));
				uParam0->f_796.f_75++;
			}
			break;
		case 2:
			if (PAD::IS_CONTROL_PRESSED(0 /*PLAYER_CONTROL*/, __LIB_11__::func_161(uParam0)))
			{
				if (__LIB_0__::func_864(&(uParam0->f_913)))
				{
					TASK::SET_TASK_MOVE_NETWORK_SIGNAL_BOOL(iVar0, "UpperBodyOnOff", false);
					uParam0->f_796.f_75++;
				}
				else
				{
					TASK::SET_TASK_MOVE_NETWORK_SIGNAL_BOOL(iVar0, "UpperBodyOnOff", true);
				}
			}
			else if (__LIB_0__::func_864(&(uParam0->f_913)))
			{
				if (__LIB_0__::func_937(&(uParam0->f_913), 500, 0))
				{
					TASK::SET_TASK_MOVE_NETWORK_SIGNAL_BOOL(iVar0, "UpperBodyOnOff", false);
					__LIB_0__::func_794(&(uParam0->f_913));
					uParam0->f_796.f_75++;
				}
			}
			else
			{
				__LIB_0__::func_627(&(uParam0->f_913), 0, 0);
			}
			break;
		case 3:
			TASK::SET_TASK_MOVE_NETWORK_SIGNAL_BOOL(iVar0, "UpperBodyOnOff", false);
			if (TASK::GET_TASK_MOVE_NETWORK_EVENT(iVar0, sVar10))
			{
				uParam0->f_796.f_75 = 0;
				if (__LIB_0__::func_864(&(uParam0->f_913)))
				{
					__LIB_11__::func_160(&(uParam0->f_796), 1);
					__LIB_31__::func_468(uParam0);
				}
				else
				{
					__LIB_11__::func_419(&(uParam0->f_796));
					__LIB_11__::func_82(uParam0, 5);
					if (!Var8.f_7)
					{
						__LIB_9__::func_819(uParam0, 0);
					}
					__LIB_11__::func_152(uParam0, 4, !Var8.f_7);
				}
			}
			break;
	}
	func_1473(uParam0);
}

void func_1473(var uParam0)//Position - 0xA426D
{
	if (uParam0->f_785.f_5)
	{
		__LIB_11__::func_172(&(uParam0->f_675));
	}
	func_1476(uParam0);
	if (uParam0->f_930 == 0)
	{
		__LIB_11__::func_247(uParam0);
	}
}

void func_1476(var uParam0)//Position - 0xA42DE
{
	int iVar0;
	float fVar1;
	iVar0 = __LIB_11__::func_174(uParam0->f_628, 0);
	if (uParam0->f_933)
	{
		if (uParam0->f_628 == uParam0->f_943)
		{
			iVar0 = 0;
		}
		else if (uParam0->f_628 == uParam0->f_944)
		{
			iVar0 = 1;
		}
		else if (uParam0->f_628 == uParam0->f_945)
		{
			iVar0 = 2;
		}
		else if (uParam0->f_628 == uParam0->f_946)
		{
			iVar0 = 3;
		}
		else if (uParam0->f_628 == uParam0->f_947)
		{
			iVar0 = 4;
		}
	}
	if (iVar0 != uParam0->f_675.f_1)
	{
		uParam0->f_675.f_1 = iVar0;
		__LIB_11__::func_133(&(uParam0->f_675), iVar0);
	}
	fVar1 = __LIB_31__::func_366(iVar0, uParam0->f_628);
	uParam0->f_675.f_2 = (func_1477((360f * uParam0->f_675.f_2), (360f * fVar1), (6f * MISC::GET_FRAME_TIME()), 0) / 360f);
	__LIB_11__::func_478(&(uParam0->f_675), uParam0->f_675.f_2, __LIB_0__::func_624(&(uParam0->f_390), 17));
}

float func_1477(float fParam0, float fParam1, float fParam2, int iParam3)//Position - 0xA43D0
{
	float fVar0;
	float fVar1;
	float fVar2;
	fVar0 = MISC::ABSF((fParam1 - fParam0));
	if (fVar0 > 180f)
	{
		if (fParam1 > fParam0)
		{
			fParam0 = (fParam0 + 360f);
		}
		else
		{
			fParam1 = (fParam1 + 360f);
		}
	}
	fVar1 = func_1478(fParam0, fParam1, fParam2, iParam3);
	fVar2 = 360f;
	if (fVar1 >= 0f && fVar1 <= 360f)
	{
		return fVar1;
	}
	return (fVar1 % fVar2);
}

float func_1478(float fParam0, float fParam1, float fParam2, int iParam3)//Position - 0xA4440
{
	float fVar0;
	switch (iParam3)
	{
		case 1:
		case 6:
			fParam2 = SYSTEM::POW(fParam2, 2f);
			break;
		case 2:
		case 7:
			fParam2 = (1f - SYSTEM::POW((1f - fParam2), 2f));
			break;
		case 3:
		case 8:
			fParam2 = ((-SYSTEM::COS(__LIB_0__::func_503((3.1415927f * fParam2))) / 2f) + 0.5f);
			break;
		case 4:
		case 9:
			fParam2 = (SYSTEM::POW(fParam2, 2f) * (3f - (2f * fParam2)));
			break;
	}
	switch (iParam3)
	{
		case 0:
			fVar0 = (fParam0 + (fParam2 * (fParam1 - fParam0)));
			break;
		case 1:
		case 2:
		case 3:
		case 4:
			fVar0 = func_1478(fParam0, fParam1, fParam2, 0);
			break;
		case 5:
			fVar0 = (((1f - fParam2) * fParam0) + (fParam2 * fParam1));
			break;
		case 6:
		case 7:
		case 8:
		case 9:
			fVar0 = func_1478(fParam0, fParam1, fParam2, 5);
			break;
	}
	return fVar0;
}

void func_1488(var uParam0)//Position - 0xA4879
{
	struct<8> Var0;
	int iVar1;
	bool bVar2;
	bool bVar3;
	var uVar4;
	var uVar5;
	var uVar6;
	var uVar7;
	var uVar8;
	int iVar9;
	float fVar10;
	int iVar11;
	int iVar12;
	__LIB_11__::func_248(uParam0);
	__LIB_42__::func_880(uParam0, uParam0->f_930 != 0);
	__LIB_11__::func_246(uParam0, &Var0);
	__LIB_11__::func_489(uParam0, &Var0);
	if (uParam0->f_930 == 3)
	{
		if (uParam0->f_785.f_5)
		{
			uParam0->f_670 = uParam0->f_669;
			uParam0->f_669 = 0;
			uParam0->f_907++;
			__LIB_11__::func_172(&(uParam0->f_675));
			if (__LIB_11__::func_171(uParam0) && uParam0->f_666)
			{
				__LIB_11__::func_170(&(uParam0->f_675));
			}
		}
		iVar1 = 0;
		switch (uParam0->f_3)
		{
			case 0:
				__LIB_42__::func_879(uParam0, &Var0, &iVar1);
				break;
			case 1:
				__LIB_42__::func_878(uParam0, &Var0, &iVar1);
				break;
		}
		if (iVar1 == 3)
		{
			__LIB_11__::func_163(&(uParam0->f_675), 1);
			if (uParam0->f_930 == 3)
			{
				PAD::SET_CONTROL_SHAKE(0 /*PLAYER_CONTROL*/, 65, 240);
			}
		}
		else if (iVar1 == 2)
		{
			__LIB_11__::func_163(&(uParam0->f_675), 0);
		}
	}
	if (uParam0->f_930 != 0)
	{
		if (uParam0->f_930 == 0 || PAD::IS_USING_KEYBOARD_AND_MOUSE(0 /*PLAYER_CONTROL*/))
		{
			bVar2 = PAD::IS_CONTROL_PRESSED(0 /*PLAYER_CONTROL*/, 226 /*INPUT_SCRIPT_LB*/);
			bVar3 = PAD::IS_CONTROL_PRESSED(0 /*PLAYER_CONTROL*/, 227 /*INPUT_SCRIPT_RB*/);
		}
		else if (((uParam0->f_930 == 1 || uParam0->f_930 == 2) || uParam0->f_930 == 3) || uParam0->f_930 == 4)
		{
			bVar2 = PAD::GET_DISABLED_CONTROL_NORMAL(0 /*PLAYER_CONTROL*/, 30 /*INPUT_MOVE_LR*/) < -0.5f;
			bVar3 = PAD::GET_DISABLED_CONTROL_NORMAL(0 /*PLAYER_CONTROL*/, 30 /*INPUT_MOVE_LR*/) > 0.5f;
		}
		else if (uParam0->f_930 == 5)
		{
			if (PAD::IS_CONTROL_PRESSED(0 /*PLAYER_CONTROL*/, 229 /*INPUT_SCRIPT_RT*/))
			{
				bVar2 = PAD::GET_CONTROL_NORMAL(0 /*PLAYER_CONTROL*/, 30 /*INPUT_MOVE_LR*/) < -0.5f;
				bVar3 = PAD::GET_CONTROL_NORMAL(0 /*PLAYER_CONTROL*/, 30 /*INPUT_MOVE_LR*/) > 0.5f;
			}
		}
		if ((uParam0->f_930 == 0 || uParam0->f_930 == 1) || PAD::IS_USING_KEYBOARD_AND_MOUSE(0 /*PLAYER_CONTROL*/))
		{
			if (PAD::IS_CONTROL_JUST_PRESSED(0 /*PLAYER_CONTROL*/, 233 /*INPUT_SCRIPT_PAD_DOWN*/))
			{
				__LIB_11__::func_490(1);
			}
		}
		else if ((uParam0->f_930 == 2 || uParam0->f_930 == 4) || uParam0->f_930 == 5)
		{
			if (PAD::IS_CONTROL_JUST_PRESSED(0 /*PLAYER_CONTROL*/, 232 /*INPUT_SCRIPT_PAD_UP*/))
			{
				__LIB_11__::func_490(1);
			}
			else if (PAD::IS_CONTROL_JUST_PRESSED(0 /*PLAYER_CONTROL*/, 233 /*INPUT_SCRIPT_PAD_DOWN*/))
			{
				__LIB_11__::func_490(0);
			}
		}
		else if (uParam0->f_930 == 3)
		{
			if (PAD::IS_CONTROL_JUST_PRESSED(0 /*PLAYER_CONTROL*/, 235 /*INPUT_SCRIPT_PAD_RIGHT*/))
			{
				__LIB_11__::func_490(1);
			}
			else if (PAD::IS_CONTROL_JUST_PRESSED(0 /*PLAYER_CONTROL*/, 234 /*INPUT_SCRIPT_PAD_LEFT*/))
			{
				__LIB_11__::func_490(0);
			}
		}
		if (!__LIB_0__::func_624(&(uParam0->f_390), 13))
		{
			uParam0->f_1 = *uParam0;
			if ((uParam0->f_930 == 0 || uParam0->f_930 == 1) || PAD::IS_USING_KEYBOARD_AND_MOUSE(0 /*PLAYER_CONTROL*/))
			{
				if (PAD::IS_CONTROL_JUST_PRESSED(0 /*PLAYER_CONTROL*/, 232 /*INPUT_SCRIPT_PAD_UP*/))
				{
					uParam0->f_1++;
					if (!__LIB_11__::func_92(uParam0, uParam0->f_1, &uVar4))
					{
						uParam0->f_1 = 0;
					}
				}
			}
			else if ((uParam0->f_930 == 2 || uParam0->f_930 == 4) || uParam0->f_930 == 5)
			{
				if (PAD::IS_CONTROL_JUST_PRESSED(0 /*PLAYER_CONTROL*/, 235 /*INPUT_SCRIPT_PAD_RIGHT*/))
				{
					uParam0->f_1++;
					if (!__LIB_11__::func_92(uParam0, uParam0->f_1, &uVar5))
					{
						uParam0->f_1 = 0;
					}
				}
				else if (PAD::IS_CONTROL_JUST_PRESSED(0 /*PLAYER_CONTROL*/, 234 /*INPUT_SCRIPT_PAD_LEFT*/))
				{
					uParam0->f_1 = (uParam0->f_1 - 1);
					if (!__LIB_11__::func_92(uParam0, uParam0->f_1, &uVar6))
					{
						uParam0->f_1 = 9;
					}
				}
			}
			else if (uParam0->f_930 == 3)
			{
				if (PAD::IS_CONTROL_JUST_PRESSED(0 /*PLAYER_CONTROL*/, 232 /*INPUT_SCRIPT_PAD_UP*/))
				{
					uParam0->f_1++;
					if (!__LIB_11__::func_92(uParam0, uParam0->f_1, &uVar7))
					{
						uParam0->f_1 = 0;
					}
				}
				else if (PAD::IS_CONTROL_JUST_PRESSED(0 /*PLAYER_CONTROL*/, 233 /*INPUT_SCRIPT_PAD_DOWN*/))
				{
					uParam0->f_1 = (uParam0->f_1 - 1);
					if (!__LIB_11__::func_92(uParam0, uParam0->f_1, &uVar8))
					{
						uParam0->f_1 = 9;
					}
				}
			}
			if (uParam0->f_1 != *uParam0)
			{
				__LIB_1__::func_354(uParam0->f_915.f_6, uParam0->f_1, -1, 1, 0);
				__LIB_11__::func_255(uParam0);
				func_1473(uParam0);
				__LIB_2__::func_486(&(uParam0->f_390), 19);
			}
		}
	}
	iVar9 = 0;
	if (__LIB_11__::func_179(&(uParam0->f_796[uParam0->f_796.f_33 /*16*/]), &(uParam0->f_796.f_34[0 /*16*/]), 925) || __LIB_11__::func_179(&(uParam0->f_796[uParam0->f_796.f_33 /*16*/]), &(uParam0->f_796.f_34[1 /*16*/]), 750))
	{
		fVar10 = ENTITY::GET_ENTITY_HEADING(uParam0->f_950);
		ENTITY::SET_ENTITY_HEADING(uParam0->f_950, fVar10);
		__LIB_11__::func_178(&(uParam0->f_796), 0);
		iVar9 = 1;
	}
	if (uParam0->f_930 != 0 && iVar9 == 0)
	{
		if (uParam0->f_796.f_69 != 57)
		{
			__LIB_11__::func_491(uParam0, bVar2, bVar3);
		}
	}
	iVar11 = TASK::GET_SCRIPT_TASK_STATUS(uParam0->f_950, joaat("SCRIPT_TASK_PERFORM_SEQUENCE"));
	iVar12 = TASK::GET_SCRIPT_TASK_STATUS(uParam0->f_950, joaat("SCRIPT_TASK_PLAY_ANIM"));
	if (iVar9 || (((((iVar11 != 0 && iVar11 != 1) && iVar12 != 0) && iVar12 != 1) && !__LIB_4__::func_849()) && __LIB_0__::func_937(&(uParam0->f_647), 1000, 0)))
	{
		__LIB_11__::func_419(&(uParam0->f_796));
		__LIB_11__::func_82(uParam0, 5);
		if (!Var0.f_7)
		{
			__LIB_9__::func_819(uParam0, 0);
		}
		__LIB_11__::func_152(uParam0, 4, !Var0.f_7);
	}
	func_1473(uParam0);
}

void func_1493(var uParam0, int iParam1)//Position - 0xA4ECF
{
	int iVar0;
	int iVar1;
	int iVar2;
	bool bVar3;
	bool bVar4;
	bool bVar5;
	struct<8> Var6;
	var uVar7;
	var uVar8;
	var uVar9;
	var uVar10;
	var uVar11;
	bool bVar12;
	bool bVar13;
	struct<3> Var14;
	int iVar15;
	bool bVar16;
	struct<3> Var17;
	struct<3> Var18;
	float fVar19;
	float fVar20;
	struct<3> Var21;
	struct<3> Var22;
	float fVar23;
	float fVar24;
	float fVar25;
	struct<3> Var26;
	struct<3> Var27;
	struct<3> Var28;
	struct<3> Var29;
	if (func_1536(uParam0))
	{
		return;
	}
	if (uParam0->f_930 != 0)
	{
		__LIB_42__::func_880(uParam0, 1);
		if (uParam0->f_934)
		{
			if (__LIB_0__::func_864(&(uParam0->f_935)))
			{
				if (__LIB_0__::func_937(&(uParam0->f_935), Global_262145.f_30188 /* Tunable: -690436439 */, 0))
				{
					if (!__LIB_0__::func_864(&(uParam0->f_937)))
					{
						__LIB_0__::func_795(&(uParam0->f_937), 0, 0);
					}
					else if (__LIB_0__::func_937(&(uParam0->f_937), Global_262145.f_30189 /* Tunable: 1670227182 */, 0))
					{
						__LIB_2__::func_487(&(uParam0->f_390), 23);
						__LIB_2__::func_487(&(uParam0->f_390), 24);
						if (!__LIB_0__::func_864(&(uParam0->f_939)))
						{
							__LIB_0__::func_795(&(uParam0->f_939), 0, 0);
						}
						else if (__LIB_0__::func_937(&(uParam0->f_939), Global_262145.f_30190 /* Tunable: 665251918 */, 0))
						{
							__LIB_0__::func_794(&(uParam0->f_935));
							__LIB_0__::func_794(&(uParam0->f_937));
							__LIB_0__::func_794(&(uParam0->f_939));
						}
					}
				}
			}
		}
	}
	iVar0 = uParam0->f_950;
	iVar1 = TASK::GET_SCRIPT_TASK_STATUS(iVar0, joaat("SCRIPT_TASK_GO_STRAIGHT_TO_COORD"));
	if (iVar1 == 0 || iVar1 == 1)
	{
		__LIB_31__::func_466(uParam0);
		__LIB_11__::func_82(uParam0, 3);
		return;
	}
	if (!__LIB_11__::func_135(uParam0))
	{
		return;
	}
	if (__LIB_43__::func_638(uParam0))
	{
		uParam0->f_638 = MISC::GET_GAME_TIMER();
		if (!PED::IS_PED_INJURED(iVar0) && uParam0->f_952)
		{
			TASK::CLEAR_PED_TASKS(iVar0);
		}
		__LIB_11__::func_82(uParam0, 8);
		return;
	}
	__LIB_11__::func_248(uParam0);
	__LIB_11__::func_197(uParam0);
	iVar2 = TASK::GET_SCRIPT_TASK_STATUS(iVar0, joaat("SCRIPT_TASK_MOVE_NETWORK"));
	if (iVar2 != 0 && iVar2 != 1)
	{
		__LIB_11__::func_495(uParam0);
		uParam0->f_637 = 0;
		uParam0->f_636 = 0;
		func_1473(uParam0);
	}
	else if (uParam0->f_634)
	{
		__LIB_11__::func_495(uParam0);
		uParam0->f_634 = 0;
		uParam0->f_637 = 0;
		uParam0->f_636 = 0;
		func_1473(uParam0);
	}
	else if (TASK::IS_TASK_MOVE_NETWORK_ACTIVE(iVar0))
	{
		if ((!uParam0->f_635 || (uParam0->f_635 && TASK::GET_TASK_MOVE_NETWORK_EVENT(iVar0, "IntroFinished"))) && !uParam0->f_636)
		{
			uParam0->f_635 = 0;
			uParam0->f_637 = 1;
		}
		if (uParam0->f_637 && TASK::IS_TASK_MOVE_NETWORK_READY_FOR_TRANSITION(iVar0))
		{
			if (TASK::REQUEST_TASK_MOVE_NETWORK_STATE_TRANSITION(iVar0, "DANCE"))
			{
				uParam0->f_637 = 0;
				uParam0->f_636 = 1;
				__LIB_0__::func_794(&(uParam0->f_649));
				__LIB_0__::func_795(&(uParam0->f_649), 0, 0);
				__LIB_0__::func_794(&(uParam0->f_655));
				__LIB_0__::func_795(&(uParam0->f_655), 0, 0);
			}
		}
		if (uParam0->f_636)
		{
			if (__LIB_0__::func_624(&(uParam0->f_390), 13))
			{
				if (__LIB_11__::func_194(&(uParam0->f_796)))
				{
					__LIB_2__::func_487(&(uParam0->f_390), 13);
					__LIB_11__::func_425(&(uParam0->f_796));
					__LIB_31__::func_468(uParam0);
					__LIB_40__::func_849(uParam0, uParam0->f_675.f_1);
				}
				bVar3 = true;
			}
			else if ((!__LIB_9__::func_615() || uParam0->f_930 == 3) && __LIB_11__::func_424(uParam0, &bVar4, &bVar5))
			{
				__LIB_2__::func_486(&(uParam0->f_390), 13);
				if (!uParam0->f_796.f_70)
				{
					func_1521(&(uParam0->f_796));
				}
				if (CAM::GET_CAM_VIEW_MODE_FOR_CONTEXT(0) == 4)
				{
					bVar4 = false;
				}
				__LIB_11__::func_160(&(uParam0->f_796), bVar4);
				bVar3 = true;
			}
			else if (bVar5)
			{
				if (!uParam0->f_796.f_70)
				{
					func_1521(&(uParam0->f_796));
				}
				bVar3 = true;
			}
			if (bVar3)
			{
				__LIB_11__::func_246(uParam0, &Var6);
				if (Var6.f_2 || Var6.f_7)
				{
					__LIB_11__::func_173(&(uParam0->f_675));
				}
				func_1473(uParam0);
				return;
			}
			if ((uParam0->f_930 == 0 || uParam0->f_930 == 1) || PAD::IS_USING_KEYBOARD_AND_MOUSE(0 /*PLAYER_CONTROL*/))
			{
				if ((!__LIB_9__::func_615() || uParam0->f_930 == 0) || PAD::IS_USING_KEYBOARD_AND_MOUSE(0 /*PLAYER_CONTROL*/))
				{
					if (PAD::IS_CONTROL_JUST_PRESSED(0 /*PLAYER_CONTROL*/, 233 /*INPUT_SCRIPT_PAD_DOWN*/))
					{
						__LIB_11__::func_490(1);
					}
				}
			}
			else if ((uParam0->f_930 == 2 || uParam0->f_930 == 4) || uParam0->f_930 == 5)
			{
				if (!__LIB_9__::func_615())
				{
					if (PAD::IS_CONTROL_JUST_PRESSED(0 /*PLAYER_CONTROL*/, 232 /*INPUT_SCRIPT_PAD_UP*/))
					{
						__LIB_11__::func_490(1);
					}
					else if (PAD::IS_CONTROL_JUST_PRESSED(0 /*PLAYER_CONTROL*/, 233 /*INPUT_SCRIPT_PAD_DOWN*/))
					{
						__LIB_11__::func_490(0);
					}
				}
			}
			else if (uParam0->f_930 == 3)
			{
				if (PAD::IS_CONTROL_JUST_PRESSED(0 /*PLAYER_CONTROL*/, 235 /*INPUT_SCRIPT_PAD_RIGHT*/))
				{
					__LIB_11__::func_490(1);
				}
				else if (PAD::IS_CONTROL_JUST_PRESSED(0 /*PLAYER_CONTROL*/, 234 /*INPUT_SCRIPT_PAD_LEFT*/))
				{
					__LIB_11__::func_490(0);
				}
			}
			if (!__LIB_0__::func_624(&(uParam0->f_390), 13))
			{
				if ((uParam0->f_930 == 0 || uParam0->f_930 == 1) || PAD::IS_USING_KEYBOARD_AND_MOUSE(0 /*PLAYER_CONTROL*/))
				{
					if (PAD::IS_CONTROL_JUST_PRESSED(0 /*PLAYER_CONTROL*/, 232 /*INPUT_SCRIPT_PAD_UP*/))
					{
						uParam0->f_1++;
						if (!__LIB_11__::func_92(uParam0, uParam0->f_1, &uVar7))
						{
							uParam0->f_1 = 0;
						}
					}
				}
				else if ((uParam0->f_930 == 2 || uParam0->f_930 == 4) || uParam0->f_930 == 5)
				{
					if (PAD::IS_CONTROL_JUST_PRESSED(0 /*PLAYER_CONTROL*/, 235 /*INPUT_SCRIPT_PAD_RIGHT*/))
					{
						uParam0->f_1++;
						if (!__LIB_11__::func_92(uParam0, uParam0->f_1, &uVar8))
						{
							uParam0->f_1 = 0;
						}
					}
					else if (PAD::IS_CONTROL_JUST_PRESSED(0 /*PLAYER_CONTROL*/, 234 /*INPUT_SCRIPT_PAD_LEFT*/))
					{
						uParam0->f_1 = (uParam0->f_1 - 1);
						if (!__LIB_11__::func_92(uParam0, uParam0->f_1, &uVar9))
						{
							uParam0->f_1 = 9;
						}
					}
				}
				else if (uParam0->f_930 == 3)
				{
					if (PAD::IS_CONTROL_JUST_PRESSED(0 /*PLAYER_CONTROL*/, 232 /*INPUT_SCRIPT_PAD_UP*/))
					{
						uParam0->f_1++;
						if (!__LIB_11__::func_92(uParam0, uParam0->f_1, &uVar10))
						{
							uParam0->f_1 = 0;
						}
					}
					else if (PAD::IS_CONTROL_JUST_PRESSED(0 /*PLAYER_CONTROL*/, 233 /*INPUT_SCRIPT_PAD_DOWN*/))
					{
						uParam0->f_1 = (uParam0->f_1 - 1);
						if (!__LIB_11__::func_92(uParam0, uParam0->f_1, &uVar11))
						{
							uParam0->f_1 = 9;
						}
					}
				}
				if (uParam0->f_1 != *uParam0 || __LIB_0__::func_624(&(uParam0->f_390), 19))
				{
					__LIB_2__::func_487(&(uParam0->f_390), 19);
					__LIB_1__::func_354(uParam0->f_915.f_6, uParam0->f_1, -1, 1, 0);
					__LIB_11__::func_255(uParam0);
					func_1473(uParam0);
					__LIB_11__::func_136(uParam0, uParam0->f_631, uParam0->f_632, uParam0->f_672);
					__LIB_9__::func_819(uParam0, 0);
					__LIB_11__::func_164(&(uParam0->f_675), 0);
					__LIB_11__::func_169(uParam0);
					__LIB_31__::func_378(uParam0);
					uParam0->f_636 = 0;
					uParam0->f_634 = 1;
					return;
				}
			}
			if (uParam0->f_930 == 0 || PAD::IS_USING_KEYBOARD_AND_MOUSE(0 /*PLAYER_CONTROL*/))
			{
				bVar12 = PAD::IS_CONTROL_PRESSED(0 /*PLAYER_CONTROL*/, 226 /*INPUT_SCRIPT_LB*/);
				bVar13 = PAD::IS_CONTROL_PRESSED(0 /*PLAYER_CONTROL*/, 227 /*INPUT_SCRIPT_RB*/);
			}
			else if (((uParam0->f_930 == 1 || uParam0->f_930 == 2) || uParam0->f_930 == 3) || uParam0->f_930 == 4)
			{
				bVar12 = PAD::GET_CONTROL_NORMAL(0 /*PLAYER_CONTROL*/, 30 /*INPUT_MOVE_LR*/) < -0.5f;
				bVar13 = PAD::GET_CONTROL_NORMAL(0 /*PLAYER_CONTROL*/, 30 /*INPUT_MOVE_LR*/) > 0.5f;
			}
			else if (uParam0->f_930 == 5)
			{
				if (PAD::IS_CONTROL_PRESSED(0 /*PLAYER_CONTROL*/, 229 /*INPUT_SCRIPT_RT*/))
				{
					bVar12 = PAD::GET_CONTROL_NORMAL(0 /*PLAYER_CONTROL*/, 30 /*INPUT_MOVE_LR*/) < -0.5f;
					bVar13 = PAD::GET_CONTROL_NORMAL(0 /*PLAYER_CONTROL*/, 30 /*INPUT_MOVE_LR*/) > 0.5f;
				}
			}
			__LIB_11__::func_491(uParam0, bVar12, bVar13);
			if (uParam0->f_930 == 0 || PAD::IS_USING_KEYBOARD_AND_MOUSE(0 /*PLAYER_CONTROL*/))
			{
				Var14.f_0 = PAD::GET_CONTROL_NORMAL(0 /*PLAYER_CONTROL*/, 30 /*INPUT_MOVE_LR*/);
				Var14.f_1 = PAD::GET_CONTROL_NORMAL(0 /*PLAYER_CONTROL*/, 31 /*INPUT_MOVE_UD*/);
			}
			else if (uParam0->f_930 == 1)
			{
				PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 1 /*INPUT_LOOK_LR*/, true);
				PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 2 /*INPUT_LOOK_UD*/, true);
				Var14.f_0 = PAD::GET_DISABLED_CONTROL_NORMAL(0 /*PLAYER_CONTROL*/, 1 /*INPUT_LOOK_LR*/);
				Var14.f_1 = PAD::GET_DISABLED_CONTROL_NORMAL(0 /*PLAYER_CONTROL*/, 2 /*INPUT_LOOK_UD*/);
			}
			else if (uParam0->f_930 == 2)
			{
				if (PAD::IS_CONTROL_PRESSED(0 /*PLAYER_CONTROL*/, 227 /*INPUT_SCRIPT_RB*/))
				{
					PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 1 /*INPUT_LOOK_LR*/, true);
					PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 2 /*INPUT_LOOK_UD*/, true);
					Var14.f_0 = PAD::GET_DISABLED_CONTROL_NORMAL(0 /*PLAYER_CONTROL*/, 1 /*INPUT_LOOK_LR*/);
					Var14.f_1 = PAD::GET_DISABLED_CONTROL_NORMAL(0 /*PLAYER_CONTROL*/, 2 /*INPUT_LOOK_UD*/);
				}
			}
			else if (uParam0->f_930 == 3)
			{
				if (PAD::IS_CONTROL_PRESSED(0 /*PLAYER_CONTROL*/, 229 /*INPUT_SCRIPT_RT*/))
				{
					PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 1 /*INPUT_LOOK_LR*/, true);
					PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 2 /*INPUT_LOOK_UD*/, true);
					if (PAD::IS_LOOK_INVERTED())
					{
						Var14.f_0 = PAD::GET_DISABLED_CONTROL_NORMAL(0 /*PLAYER_CONTROL*/, 1 /*INPUT_LOOK_LR*/);
						Var14.f_1 = (PAD::GET_DISABLED_CONTROL_NORMAL(0 /*PLAYER_CONTROL*/, 2 /*INPUT_LOOK_UD*/) * -1f);
					}
					else
					{
						Var14.f_0 = PAD::GET_DISABLED_CONTROL_NORMAL(0 /*PLAYER_CONTROL*/, 1 /*INPUT_LOOK_LR*/);
						Var14.f_1 = PAD::GET_DISABLED_CONTROL_NORMAL(0 /*PLAYER_CONTROL*/, 2 /*INPUT_LOOK_UD*/);
					}
				}
			}
			else if (uParam0->f_930 == 4)
			{
				if (PAD::IS_CONTROL_PRESSED(0 /*PLAYER_CONTROL*/, 229 /*INPUT_SCRIPT_RT*/))
				{
					PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 30 /*INPUT_MOVE_LR*/, true);
					PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 31 /*INPUT_MOVE_UD*/, true);
					Var14.f_0 = PAD::GET_DISABLED_CONTROL_NORMAL(0 /*PLAYER_CONTROL*/, 30 /*INPUT_MOVE_LR*/);
					Var14.f_1 = PAD::GET_DISABLED_CONTROL_NORMAL(0 /*PLAYER_CONTROL*/, 31 /*INPUT_MOVE_UD*/);
				}
			}
			else if (uParam0->f_930 == 5)
			{
				if (!PAD::IS_CONTROL_PRESSED(0 /*PLAYER_CONTROL*/, 229 /*INPUT_SCRIPT_RT*/))
				{
					PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 30 /*INPUT_MOVE_LR*/, true);
					PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 31 /*INPUT_MOVE_UD*/, true);
					Var14.f_0 = PAD::GET_DISABLED_CONTROL_NORMAL(0 /*PLAYER_CONTROL*/, 30 /*INPUT_MOVE_LR*/);
					Var14.f_1 = PAD::GET_DISABLED_CONTROL_NORMAL(0 /*PLAYER_CONTROL*/, 31 /*INPUT_MOVE_UD*/);
				}
			}
			if (!PAD::IS_USING_KEYBOARD_AND_MOUSE(0 /*PLAYER_CONTROL*/))
			{
				__LIB_11__::func_193(Var14.f_0, Var14.f_1, &Var14, &(Var14.f_1));
			}
			Var14.f_0 = ((Var14.f_0 + 1f) / 2f);
			Var14.f_1 = ((Var14.f_1 + 1f) / 2f);
			if (__LIB_0__::func_937(&(uParam0->f_397.f_229), 60, 0))
			{
				__LIB_11__::func_423(&(uParam0->f_397), Var14.f_0, Var14.f_1);
			}
			iVar15 = __LIB_11__::func_422(&(uParam0->f_397));
			bVar16 = __LIB_31__::func_382(&(uParam0->f_397));
			if (!bVar16)
			{
				uParam0->f_397.f_227 = iVar15;
			}
			Var14 = { __LIB_11__::func_421(&(uParam0->f_397)) };
			Var17 = { __LIB_11__::func_192(uParam0->f_395) };
			Var18 = { Var14 - Var17 };
			fVar19 = SYSTEM::VMAG2(Var18);
			while (fVar19 <= 0.0001f && uParam0->f_397.f_227 != iVar15)
			{
				Var14 = { __LIB_31__::func_381(&(uParam0->f_397)) };
				Var18 = { Var14 - Var17 };
				fVar19 = SYSTEM::VMAG2(Var18);
			}
			if (fVar19 > 0.0001f)
			{
				fVar20 = 0f;
				if (SYSTEM::VMAG2(Var14 - Vector(0.5f, 0.5f, 0.5f)) >= 0.1f)
				{
					fVar20 = 2f;
				}
				else
				{
					fVar20 = 0.1f;
				}
				fVar20 = (fVar20 * MISC::GET_FRAME_TIME());
				Var21 = { __LIB_0__::func_79(Var18) };
				Var22 = { Var21 * Vector(fVar20, fVar20, fVar20) };
				fVar23 = SYSTEM::SQRT(fVar19);
				if (fVar23 < 0.3f)
				{
					fVar24 = __LIB_0__::func_331((fVar23 / 0.3f), 0.2f, 1f);
					fVar25 = (0.5f * fVar24);
					Var26 = { fVar25, fVar25, 0f };
					Var22 = { Var22 * Var26 };
				}
				Var27 = { Var17 + Var22 };
				if (Var14.f_0 > uParam0->f_395)
				{
					Var28.f_0 = 0f;
					Var29.f_0 = Var14.f_0;
				}
				else
				{
					Var28.f_0 = Var14.f_0;
					Var29.f_0 = 1f;
				}
				if (Var14.f_1 > uParam0->f_395.f_1)
				{
					Var28.f_1 = 0f;
					Var29.f_1 = Var14.f_1;
				}
				else
				{
					Var28.f_1 = Var14.f_1;
					Var29.f_1 = 1f;
				}
				if (uParam0->f_930 == 3 && !PAD::IS_USING_KEYBOARD_AND_MOUSE(0 /*PLAYER_CONTROL*/))
				{
					if (PAD::IS_CONTROL_PRESSED(0 /*PLAYER_CONTROL*/, 229 /*INPUT_SCRIPT_RT*/))
					{
						if (PAD::GET_DISABLED_CONTROL_NORMAL(0 /*PLAYER_CONTROL*/, 1 /*INPUT_LOOK_LR*/) != 0f || PAD::GET_DISABLED_CONTROL_NORMAL(0 /*PLAYER_CONTROL*/, 2 /*INPUT_LOOK_UD*/) != 0f)
						{
							if (__LIB_0__::func_624(&(uParam0->f_390), 25))
							{
								if (!__LIB_0__::func_864(&(uParam0->f_941)))
								{
									__LIB_0__::func_795(&(uParam0->f_941), 0, 0);
								}
								else if (__LIB_0__::func_937(&(uParam0->f_941), 350, 0))
								{
									__LIB_0__::func_794(&(uParam0->f_941));
									__LIB_2__::func_487(&(uParam0->f_390), 25);
								}
							}
							else
							{
								uParam0->f_395 = { __LIB_11__::func_190(__LIB_11__::func_191(Var27, Var28, Var29)) };
							}
						}
						else
						{
							__LIB_2__::func_486(&(uParam0->f_390), 25);
						}
					}
					else
					{
						uParam0->f_395 = { __LIB_11__::func_190(__LIB_11__::func_191(Var27, Var28, Var29)) };
					}
				}
				else
				{
					uParam0->f_395 = { __LIB_11__::func_190(__LIB_11__::func_191(Var27, Var28, Var29)) };
				}
			}
			__LIB_43__::func_637(uParam0, iParam1);
			__LIB_31__::func_380(uParam0);
			CAM::SET_GAMEPLAY_CAM_SHAKE_AMPLITUDE(__LIB_11__::func_149(uParam0));
			TASK::SET_TASK_MOVE_NETWORK_SIGNAL_FLOAT(iVar0, "INTENSITY", __LIB_0__::func_331(uParam0->f_394, 0f, uParam0->f_672));
			TASK::SET_TASK_MOVE_NETWORK_SIGNAL_LOCAL_FLOAT(iVar0, "SPEED", uParam0->f_630);
			TASK::SET_TASK_MOVE_NETWORK_SIGNAL_FLOAT(iVar0, "DIRECTION", uParam0->f_395);
			TASK::SET_TASK_MOVE_NETWORK_SIGNAL_FLOAT(iVar0, "DIRECTION_UP_DOWN", uParam0->f_395.f_1);
			uParam0->f_629 = TASK::GET_TASK_MOVE_NETWORK_SIGNAL_FLOAT(iVar0, "PHASE_OUT");
			TASK::SET_TASK_MOVE_NETWORK_SIGNAL_BOOL(iVar0, "UpperBodyOnOff", false);
			TASK::SET_TASK_MOVE_NETWORK_SIGNAL_FLOAT_LERP_RATE(iVar0, "INTENSITY", 0.5f);
			TASK::SET_TASK_MOVE_NETWORK_SIGNAL_FLOAT_LERP_RATE(iVar0, "DIRECTION", 0.5f);
			TASK::SET_TASK_MOVE_NETWORK_SIGNAL_FLOAT_LERP_RATE(iVar0, "DIRECTION_UP_DOWN", 0.5f);
			if (__LIB_1__::func_724(&(uParam0->f_649), 0, 0) < 500)
			{
				PED::SET_PED_CAPSULE(iVar0, 0.5f);
			}
			func_1476(uParam0);
			if (uParam0->f_930 == 0)
			{
				func_1494(uParam0);
				__LIB_11__::func_247(uParam0);
			}
			__LIB_1__::func_33(0);
		}
		else
		{
			func_1473(uParam0);
		}
	}
}

void func_1494(var uParam0)//Position - 0xA5A78
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	iVar0 = __LIB_11__::func_182(uParam0);
	iVar1 = Global_262145.f_24360 /* Tunable: -649414206 */;
	iVar2 = (iVar0 / iVar1);
	if (uParam0->f_773.f_7 < iVar2)
	{
		uParam0->f_773.f_7++;
		iVar3 = __LIB_0__::func_253(22047, -1);
		if (iVar3 < 10)
		{
			iVar4 = __LIB_11__::func_181(iVar2);
			__LIB_11__::func_281(0, uParam0->f_950, "", joaat("XPTYPE_ACTION"), 1187146110, iVar4, 1, -1, 0, 0, 0);
			if (iVar3 == 0)
			{
				__LIB_1__::func_379(22048, 48, -1);
			}
			iVar3++;
			__LIB_1__::func_379(22047, iVar3, -1);
		}
		else if (iVar3 == 10 && !__LIB_0__::func_624(&(uParam0->f_390), 9))
		{
			__LIB_2__::func_486(&(uParam0->f_390), 9);
			__LIB_0__::func_795(&(uParam0->f_645), 0, 0);
		}
	}
	iVar5 = (iVar0 / 60000);
	if (uParam0->f_773.f_6 < iVar5)
	{
		uParam0->f_773.f_6++;
		iVar6 = (1 + __LIB_1__::func_360(7237, -1, 0));
		__LIB_1__::func_354(7237, iVar6, -1, 1, 0);
		__LIB_11__::func_180(uParam0, uParam0->f_773.f_6);
	}
}

void func_1521(var uParam0)//Position - 0xA691F
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	struct<430> Var4;
	bool bVar5;
	iVar0 = __LIB_0__::func_138(__LIB_5__::func_834(PLAYER::PLAYER_PED_ID()), 11, 10);
	iVar1 = 0;
	iVar2 = __LIB_2__::func_434();
	iVar3 = __LIB_2__::func_433();
	if (!__LIB_1__::func_208(iVar2) || (iVar2 == 2 && __LIB_11__::func_175(iVar2)))
	{
		iVar2 = 2;
		iVar3 = 30;
	}
	Var4 = 13;
	Var4.f_489 = -1;
	__LIB_11__::func_159(iVar2, iVar3, &Var4, 0, 0);
	bVar5 = (iVar2 == 2 && __LIB_11__::func_91(iVar3));
	if ((MISC::IS_STRING_NULL_OR_EMPTY(&(Var4[iVar0 /*16*/])) || MISC::IS_STRING_NULL_OR_EMPTY(&(Var4[iVar1 /*16*/]))) || (!bVar5 && Var4.f_419))
	{
		iVar2 = 2;
		iVar3 = 30;
		__LIB_11__::func_159(2, 30, &Var4, 0, 0);
	}
	if (__LIB_11__::func_91(iVar3))
	{
		func_1522(iVar3);
	}
	*(uParam0[1 /*16*/]) = { Var4[iVar1 /*16*/] };
	*(uParam0[0 /*16*/]) = { Var4[iVar0 /*16*/] };
	uParam0->f_34[1 /*16*/] = { Var4.f_241 };
	uParam0->f_34[0 /*16*/] = { Var4.f_257 };
	uParam0->f_68 = iVar2;
	uParam0->f_69 = iVar3;
	uParam0->f_33 = 0;
	uParam0->f_67 = 0;
	uParam0->f_72 = Var4.f_429;
	uParam0->f_73 = Var4.f_424;
	uParam0->f_74 = Var4.f_423;
	__LIB_11__::func_194(uParam0);
}

void func_1522(int iParam0)//Position - 0xA6A69
{
	struct<3> Var0;
	int iVar1;
	Var0.f_0 = 1028831660;
	Var0.f_1 = PLAYER::PLAYER_ID();
	Var0.f_2 = iParam0;
	iVar1 = __LIB_1__::func_26(0);
	if (iVar1 > 0)
	{
		SCRIPT::SEND_TU_SCRIPT_EVENT(1, &Var0, 3, iVar1);
	}
}

int func_1536(var uParam0)//Position - 0xA6F5C
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	if (!__LIB_11__::func_256(uParam0))
	{
		if ((MISC::GET_FRAME_COUNT() % 120) == 0)
		{
		}
		return 0;
	}
	iVar1 = NETWORK::NETWORK_GET_MAX_NUM_PARTICIPANTS();
	iVar3 = uParam0->f_948;
	iVar0 = 0;
	while (iVar0 < iVar1)
	{
		iVar4 = PLAYER::INT_TO_PARTICIPANTINDEX(iVar0);
		if (!NETWORK::NETWORK_IS_PARTICIPANT_ACTIVE(iVar4))
		{
		}
		else
		{
			iVar2 = NETWORK::NETWORK_GET_PLAYER_INDEX(iVar4);
			if (iVar2 == iVar3)
			{
			}
			else if (!__LIB_0__::func_156(iVar2, 1, 1))
			{
				if ((MISC::GET_FRAME_COUNT() % 120) == 0)
				{
				}
			}
			else if (__LIB_11__::func_89(uParam0, iVar2) != iVar3)
			{
				if ((MISC::GET_FRAME_COUNT() % 120) == 0)
				{
				}
			}
			else if (!__LIB_11__::func_138(uParam0, iVar2))
			{
				if ((MISC::GET_FRAME_COUNT() % 120) == 0)
				{
				}
			}
			else if (__LIB_11__::func_140(uParam0, iVar2) != 9)
			{
				if ((MISC::GET_FRAME_COUNT() % 120) == 0)
				{
				}
			}
			else
			{
				__LIB_40__::func_854(uParam0, iVar2, 0);
				__LIB_11__::func_237(uParam0);
				return 1;
			}
		}
		iVar0++;
	}
	return 0;
}

void func_1545(var uParam0)//Position - 0xA72D1
{
	if (__LIB_0__::func_864(&(uParam0->f_655)))
	{
		__LIB_0__::func_794(&(uParam0->f_655));
	}
	if (__LIB_0__::func_624(&(uParam0->f_390), 1))
	{
		__LIB_2__::func_486(&(uParam0->f_390), 2);
	}
	else
	{
		__LIB_2__::func_487(&(uParam0->f_390), 2);
	}
	__LIB_11__::func_255(uParam0);
	if (func_1549(uParam0))
	{
		return;
	}
	if (func_1547(uParam0))
	{
		__LIB_31__::func_466(uParam0);
		return;
	}
	if (__LIB_11__::func_426(uParam0))
	{
		__LIB_31__::func_466(uParam0);
		if (PAD::IS_CONTROL_PRESSED(0 /*PLAYER_CONTROL*/, __LIB_11__::func_201(uParam0)))
		{
			__LIB_2__::func_486(&(uParam0->f_390), 15);
		}
		__LIB_0__::func_794(&(uParam0->f_641));
		return;
	}
	if (__LIB_31__::func_465(uParam0, &(uParam0->f_795)))
	{
		if (__LIB_40__::func_844(uParam0, 1, 1, 0, 0))
		{
			__LIB_40__::func_838(uParam0);
		}
		__LIB_2__::func_486(&(uParam0->f_390), 1);
	}
	else
	{
		if (uParam0->f_915.f_8 && __LIB_40__::func_844(uParam0, 2, 1, 0, 0))
		{
			__LIB_40__::func_838(uParam0);
		}
		__LIB_2__::func_487(&(uParam0->f_390), 1);
	}
}

int func_1547(var uParam0)//Position - 0xA7424
{
	int iVar0;
	int iVar1;
	var uVar2;
	if (BitTest(Global_1946250.f_3, 16))
	{
		MISC::CLEAR_BIT(&(Global_1946250.f_3), 16);
		return 1;
	}
	if (!uParam0->f_951)
	{
		return 1;
	}
	iVar0 = uParam0->f_950;
	iVar1 = TASK::GET_SCRIPT_TASK_STATUS(iVar0, joaat("SCRIPT_TASK_GO_STRAIGHT_TO_COORD"));
	if (iVar1 == 0 || iVar1 == 1)
	{
		return 1;
	}
	if (SCRIPT::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(joaat("spawn_activities")) > 0 || Global_2671449.f_16)
	{
		return 1;
	}
	if (__LIB_0__::func_624(&(uParam0->f_390), 4))
	{
		return 1;
	}
	if (PED::IS_PED_IN_ANY_VEHICLE(iVar0, true))
	{
		return 1;
	}
	if (!uParam0->f_915.f_8 && !__LIB_31__::func_465(uParam0, &uVar2))
	{
		return 1;
	}
	if (ENTITY::IS_ENTITY_IN_WATER(iVar0) || PED::IS_PED_SWIMMING(iVar0))
	{
		return 1;
	}
	if (ENTITY::IS_ENTITY_IN_AIR(iVar0))
	{
		return 1;
	}
	if (FIRE::IS_ENTITY_ON_FIRE(iVar0))
	{
		return 1;
	}
	if (NETWORK::IS_PLAYER_IN_CUTSCENE(uParam0->f_948))
	{
		return 1;
	}
	if ((((!uParam0->f_951 || !PLAYER::IS_PLAYER_CONTROL_ON(uParam0->f_948)) || __LIB_4__::func_849()) || __LIB_3__::func_558()) || __LIB_0__::func_890(uParam0->f_948))
	{
		return 1;
	}
	return 0;
}

int func_1549(var uParam0)//Position - 0xA756A
{
	bool bVar0;
	if (func_1547(uParam0))
	{
		return 0;
	}
	if (!func_1552(uParam0, &(uParam0->f_660), 60f))
	{
		return 0;
	}
	__LIB_40__::func_844(uParam0, 7, 1, uParam0->f_660, 0);
	if (uParam0->f_930 == 0 || PAD::IS_USING_KEYBOARD_AND_MOUSE(0 /*PLAYER_CONTROL*/))
	{
		if (PAD::IS_USING_KEYBOARD_AND_MOUSE(0 /*PLAYER_CONTROL*/) && PAD::IS_CONTROL_JUST_PRESSED(2 /*FRONTEND_CONTROL*/, 238 /*INPUT_CURSOR_CANCEL*/))
		{
			__LIB_40__::func_838(uParam0);
			__LIB_11__::func_244(&(uParam0->f_390), 1, __LIB_31__::func_465(uParam0, &(uParam0->f_795)));
			return 1;
		}
		else if (PAD::IS_CONTROL_JUST_PRESSED(2 /*FRONTEND_CONTROL*/, 51 /*INPUT_CONTEXT*/))
		{
			__LIB_40__::func_838(uParam0);
			__LIB_11__::func_244(&(uParam0->f_390), 1, __LIB_31__::func_465(uParam0, &(uParam0->f_795)));
			return 1;
		}
	}
	else if (PAD::GET_CONTROL_NORMAL(2 /*FRONTEND_CONTROL*/, 207 /*INPUT_FRONTEND_LT*/) >= Global_2789765)
	{
		__LIB_40__::func_838(uParam0);
		__LIB_11__::func_244(&(uParam0->f_390), 1, __LIB_31__::func_465(uParam0, &(uParam0->f_795)));
		return 1;
	}
	if (PAD::IS_CONTROL_JUST_PRESSED(2 /*FRONTEND_CONTROL*/, 52 /*INPUT_CONTEXT_SECONDARY*/))
	{
		__LIB_11__::func_203(uParam0, uParam0->f_660);
	}
	bVar0 = false;
	if (__LIB_11__::func_202(uParam0, &bVar0) == 2)
	{
		if (bVar0)
		{
			__LIB_2__::func_486(&(uParam0->f_390), 30);
			__LIB_31__::func_466(uParam0);
			__LIB_0__::func_794(&(uParam0->f_641));
			return 1;
		}
		else
		{
			__LIB_40__::func_854(uParam0, uParam0->f_660, 1);
			__LIB_31__::func_466(uParam0);
			return 1;
		}
	}
	return 1;
}

bool func_1552(var uParam0, var uParam1, float fParam2)//Position - 0xA776A
{
	struct<2> Var0[32];
	*uParam1 = __LIB_0__::func_162();
	if (!__LIB_31__::func_469(uParam0))
	{
		return 0;
	}
	func_1553(uParam0, &Var0, fParam2);
	*uParam1 = Var0[0 /*2*/].f_1;
	return *uParam1 != __LIB_0__::func_162();
}

void func_1553(var uParam0, var uParam1, float fParam2)//Position - 0xA77A9
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	var uVar5;
	iVar0 = 0;
	iVar1 = 0;
	iVar2 = *uParam1;
	iVar0 = 0;
	while (iVar0 < iVar2)
	{
		(uParam1[iVar0 /*2*/])->f_1 = __LIB_0__::func_162();
		iVar4 = PLAYER::INT_TO_PARTICIPANTINDEX(iVar0);
		if (!NETWORK::NETWORK_IS_PARTICIPANT_ACTIVE(iVar4))
		{
		}
		else
		{
			iVar3 = NETWORK::NETWORK_GET_PLAYER_INDEX(iVar4);
			if (iVar3 == uParam0->f_948)
			{
			}
			else if (!__LIB_0__::func_156(iVar3, 1, 1))
			{
			}
			else if (!func_1556(uParam0, iVar3, fParam2))
			{
			}
			else
			{
				uVar5 = __LIB_11__::func_204(iVar3);
				(*uParam1)[iVar1 /*2*/] = uVar5;
				(uParam1[iVar1 /*2*/])->f_1 = iVar3;
				iVar1++;
			}
		}
		iVar0++;
	}
	func_1554(uParam1, 0, (iVar1 - 1));
}

void func_1554(var uParam0, int iParam1, int iParam2)//Position - 0xA7850
{
	int iVar0;
	int iVar1;
	struct<2> Var2;
	struct<2> Var3;
	Var2 = { *(uParam0[((iVar0 + iVar1) / 2) /*2*/]) };
	iVar0 = iParam1;
	iVar1 = iParam2;
	while (iVar0 <= iVar1)
	{
		while ((*uParam0)[iVar0 /*2*/] < Var2.f_0 && iVar0 < iParam2)
		{
			iVar0++;
		}
		while (Var2.f_0 < (*uParam0)[iVar1 /*2*/] && iVar1 > iParam1)
		{
			iVar1 = (iVar1 - 1);
		}
		if (iVar0 <= iVar1)
		{
			Var3 = { *(uParam0[iVar0 /*2*/]) };
			*(uParam0[iVar0 /*2*/]) = { *(uParam0[iVar1 /*2*/]) };
			*(uParam0[iVar1 /*2*/]) = { Var3 };
			iVar0++;
			iVar1 = (iVar1 - 1);
		}
	}
	if (iVar0 < iParam2)
	{
		func_1554(uParam0, iVar0, iParam2);
	}
	if (iParam1 < iVar1)
	{
		func_1554(uParam0, iParam1, iVar1);
	}
}

int func_1556(var uParam0, int iParam1, float fParam2)//Position - 0xA7947
{
	int iVar0;
	if (!__LIB_4__::func_358(iParam1))
	{
		return 0;
	}
	iVar0 = uParam0->f_4[iParam1 /*12*/].f_11;
	if (iVar0 == 6 || iVar0 == 7)
	{
		return 0;
	}
	if (__LIB_11__::func_206(uParam0, iParam1))
	{
		return 0;
	}
	if (!__LIB_11__::func_205(iParam1))
	{
		return 0;
	}
	if (!__LIB_11__::func_249(iParam1, fParam2))
	{
		return 0;
	}
	if (!func_1557(iParam1))
	{
		return 0;
	}
	return 1;
}

int func_1557(int iParam0)//Position - 0xA79BA
{
	int iVar0;
	int iVar1;
	struct<13> Var2;
	int iVar3;
	bool bVar4;
	iVar0 = Global_2689235[iParam0 /*453*/].f_433;
	iVar1 = __LIB_3__::func_680();
	Var2 = { __LIB_0__::func_819(iParam0) };
	iVar3 = __LIB_3__::func_106(&Var2);
	bVar4 = iVar1 == iVar3;
	switch (iVar0)
	{
		case 1:
			return bVar4;
		case 2:
			return (__LIB_9__::func_855(PLAYER::PLAYER_ID(), iParam0) || bVar4);
		case 0:
			return 1;
		case 3:
			return 0;
		case 4:
			return __LIB_0__::func_941(PLAYER::PLAYER_ID(), iParam0);
		default:
	}
	return 1;
}

void func_1576(var uParam0)//Position - 0xA805D
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	iVar0 = __LIB_11__::func_153();
	iVar1 = 0;
	while (iVar1 < Global_1951066)
	{
		if (Global_1951066[iVar1] != 0)
		{
			iVar2 = PLAYER::GET_PLAYER_PED(iVar1);
			if ((!ENTITY::DOES_ENTITY_EXIST(iVar2) || ENTITY::IS_ENTITY_DEAD(iVar2, false)) || !TASK::IS_TASK_MOVE_NETWORK_ACTIVE(iVar2))
			{
				Global_1951066[iVar1] = 0;
				(*uParam0)[iVar1] = 0;
			}
			else if (Global_1951066[iVar1] != (*uParam0)[iVar1])
			{
				iVar3 = PLAYER::GET_PLAYER_PED(iVar1);
				if ((ENTITY::DOES_ENTITY_EXIST(iVar3) && !ENTITY::IS_ENTITY_DEAD(iVar3, false)) && TASK::IS_TASK_MOVE_NETWORK_ACTIVE(iVar3))
				{
					(*uParam0)[iVar1] = Global_1951066[iVar1];
					iVar4 = __LIB_11__::func_132(Global_1951066[iVar1]);
					if (iVar4 == 0)
					{
						return;
					}
					TASK::SET_TASK_MOVE_NETWORK_ANIM_SET(iVar3, iVar4, iVar0);
				}
				else
				{
					Global_1951066[iVar1] = 0;
					(*uParam0)[iVar1] = 0;
				}
			}
			iVar1++;
		}
void func_1577(var uParam0)//Position - 0xA8147
{
	uParam0->f_948 = PLAYER::PLAYER_ID();
	uParam0->f_949 = uParam0->f_948;
	uParam0->f_950 = PLAYER::PLAYER_PED_ID();
	uParam0->f_951 = __LIB_0__::func_156(uParam0->f_948, 1, 1);
	uParam0->f_952 = __LIB_0__::func_121(uParam0->f_950);
}

int func_1581()//Position - 0xA821C
{
	if (!__LIB_0__::func_156(PLAYER::PLAYER_ID(), 1, 1))
	{
		return 1;
	}
	if (Local_150.f_1207)
	{
		return 1;
	}
	if ((CAM::IS_SCREEN_FADING_OUT() || CAM::IS_SCREEN_FADED_OUT()) || TASK::IS_PED_RUNNING(PLAYER::PLAYER_PED_ID()))
	{
		return 1;
	}
	if ((((TASK::IS_PED_RUNNING(PLAYER::PLAYER_PED_ID()) || ENTITY::IS_ENTITY_IN_AIR(PLAYER::PLAYER_PED_ID())) || TASK::IS_PED_GETTING_UP(PLAYER::PLAYER_PED_ID())) || PLAYER::IS_PLAYER_CLIMBING(PLAYER::PLAYER_ID())) || PED::IS_PED_RAGDOLL(PLAYER::PLAYER_PED_ID()))
	{
		return 1;
	}
	if ((CAM::IS_SCREEN_FADING_OUT() || CAM::IS_SCREEN_FADED_OUT()) || TASK::IS_PED_RUNNING(PLAYER::PLAYER_PED_ID()))
	{
		return 1;
	}
	if (Local_150.f_1.f_5 > 1 || Local_150.f_1.f_20 != -1)
	{
		return 1;
	}
	if (Global_2667225.f_2681 || __LIB_4__::func_850(PLAYER::PLAYER_PED_ID()) >= 10)
	{
		return 1;
	}
	if (BitTest(Global_1946250.f_4, 2))
	{
		return 1;
	}
	if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), true))
	{
		return 1;
	}
	if (Global_1946234 || Global_1931614)
	{
		return 1;
	}
	if (((__LIB_1__::func_512() || __LIB_0__::func_193()) || __LIB_3__::func_718()) || __LIB_0__::func_877())
	{
		return 1;
	}
	if (__LIB_0__::func_77(0) || __LIB_3__::func_100())
	{
		return 1;
	}
	if (__LIB_4__::func_473() != -1)
	{
		return 1;
	}
	return 0;
}

void func_1586(var uParam0)//Position - 0xA83E3
{
	func_1577(uParam0);
	*uParam0 = __LIB_1__::func_360(uParam0->f_915.f_6, -1, 0);
	uParam0->f_1 = *uParam0;
	uParam0->f_392 = -1;
	uParam0->f_391 = 0;
	uParam0->f_660 = __LIB_0__::func_162();
	__LIB_11__::func_427(uParam0);
	NETWORK::NETWORK_ALLOW_REMOTE_SYNCED_SCENE_LOCAL_PLAYER_REQUESTS(1);
	__LIB_11__::func_87(uParam0, __LIB_0__::func_162());
	__LIB_11__::func_82(uParam0, 2);
}

void func_1587(var uParam0, var uParam1, var uParam2)//Position - 0xA843A
{
	bool bVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	float fVar5;
	float fVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	float fVar10;
	int iVar11;
	int iVar12;
	int iVar13;
	float fVar14;
	bool bVar15;
	bVar0 = true;
	if (__LIB_1__::func_35())
	{
		bVar0 = false;
	}
	if (bVar0)
	{
		iVar1 = 0;
		while (iVar1 < 32)
		{
			iVar2 = PLAYER::INT_TO_PLAYERINDEX(iVar1);
			if (__LIB_0__::func_156(iVar2, 1, 1) && !NETWORK::NETWORK_IS_PLAYER_CONCEALED(iVar2))
			{
				if (iVar2 != PLAYER::PLAYER_ID())
				{
					if ((*uParam1)[iVar1 /*2*/] != 0)
					{
						if (!GRAPHICS::DOES_PARTICLE_FX_LOOPED_EXIST(uParam2->f_136[iVar1]))
						{
							STREAMING::REQUEST_NAMED_PTFX_ASSET("scr_ba_club");
							if (STREAMING::HAS_NAMED_PTFX_ASSET_LOADED("scr_ba_club"))
							{
								if (BitTest((*uParam1)[iVar1 /*2*/], 0))
								{
									iVar4 = MISC::GET_HASH_KEY("Ba_Prop_Battle_Champ_Open");
								}
								else if (BitTest((*uParam1)[iVar1 /*2*/], 1))
								{
									iVar4 = MISC::GET_HASH_KEY("Ba_Prop_Battle_Champ_Open_02");
								}
								else if (BitTest((*uParam1)[iVar1 /*2*/], 2))
								{
									iVar4 = MISC::GET_HASH_KEY("Ba_Prop_Battle_Champ_Open_03");
								}
								iVar3 = ENTITY::GET_ENTITY_OF_TYPE_ATTACHED_TO_ENTITY(PLAYER::GET_PLAYER_PED(iVar2), iVar4);
								if (ENTITY::DOES_ENTITY_EXIST(iVar3) && !ENTITY::IS_ENTITY_DEAD(iVar3, false))
								{
									GRAPHICS::USE_PARTICLE_FX_ASSET("scr_ba_club");
									uParam2->f_136[iVar1] = GRAPHICS::START_PARTICLE_FX_LOOPED_ON_ENTITY_BONE("scr_ba_club_champagne_spray", iVar3, 0f, 0f, 0f, 0f, 0f, 0f, ENTITY::GET_ENTITY_BONE_INDEX_BY_NAME(iVar3, "VFX"), 1f, false, false, false);
									__LIB_0__::func_795(&(uParam2->f_35[iVar1 /*2*/]), 0, 0);
								}
							}
						}
						else
						{
							if (BitTest((*uParam1)[iVar1 /*2*/], 0))
							{
								fVar5 = 8000f;
							}
							else if (BitTest((*uParam1)[iVar1 /*2*/], 1))
							{
								fVar5 = 12000f;
							}
							else if (BitTest((*uParam1)[iVar1 /*2*/], 2))
							{
								fVar5 = 15000f;
							}
							fVar6 = (SYSTEM::TO_FLOAT(__LIB_1__::func_724(&(uParam2->f_35[iVar1 /*2*/]), 0, 0)) / fVar5);
							if (fVar6 < 0f)
							{
								fVar6 = 0f;
							}
							else if (fVar6 > 1f)
							{
								fVar6 = 1f;
							}
							GRAPHICS::SET_PARTICLE_FX_LOOPED_EVOLUTION(uParam2->f_136[iVar1], "fade", fVar6, false);
						}
					}
					else if (GRAPHICS::DOES_PARTICLE_FX_LOOPED_EXIST(uParam2->f_136[iVar1]))
					{
						GRAPHICS::STOP_PARTICLE_FX_LOOPED(uParam2->f_136[iVar1], false);
						__LIB_0__::func_794(&(uParam2->f_35[iVar1 /*2*/]));
					}
				}
			}
			else if (GRAPHICS::DOES_PARTICLE_FX_LOOPED_EXIST(uParam2->f_136[iVar1]))
			{
				GRAPHICS::STOP_PARTICLE_FX_LOOPED(uParam2->f_136[iVar1], false);
			}
			iVar1++;
		}
	}
	if (Global_2667225.f_2681 && CAM::IS_SCREEN_FADED_OUT())
	{
		if (BitTest(Global_1946250.f_4, 2))
		{
			MISC::CLEAR_BIT(&(Global_1946250.f_4), 2);
			MISC::CLEAR_BIT(&(uParam2->f_12), 2);
		}
	}
	if (BitTest(Global_1946250.f_4, 2))
	{
		if (__LIB_1__::func_548(PLAYER::PLAYER_ID()) && CAM::IS_SCREEN_FADED_OUT())
		{
			MISC::CLEAR_BIT(&(Global_1946250.f_4), 2);
			MISC::CLEAR_BIT(&(uParam2->f_12), 2);
		}
	}
	if (BitTest(Global_1946250.f_4, 2) && !BitTest(uParam2->f_12, 2))
	{
		if (!BitTest(Global_1853348[PLAYER::PLAYER_ID() /*834*/].f_267.f_30, 4))
		{
			if (!__LIB_0__::func_864(&(uParam2->f_33)))
			{
				__LIB_0__::func_795(&(uParam2->f_33), 0, 0);
			}
			else if (__LIB_0__::func_937(&(uParam2->f_33), 10000, 0))
			{
				__LIB_6__::func_999(PLAYER::PLAYER_PED_ID(), 0, 10);
				MISC::SET_BIT(&(uParam2->f_12), 2);
			}
		}
	}
	else if (__LIB_0__::func_864(&(uParam2->f_33)))
	{
		__LIB_0__::func_794(&(uParam2->f_33));
	}
	if (BitTest(Global_1946250.f_4, 2))
	{
		__LIB_1__::func_33(1);
	}
	func_1772(uParam0, uParam2);
	func_1771(uParam0, uParam2);
	iVar7 = __LIB_4__::func_850(PLAYER::PLAYER_PED_ID());
	if (iVar7 < uParam2->f_14)
	{
		MISC::SET_BIT(&(uParam2->f_11), 0);
	}
	uParam2->f_14 = iVar7;
	func_1770(uParam2, uParam0, uParam1);
	if (__LIB_0__::func_864(&(uParam2->f_116)))
	{
		if (__LIB_0__::func_937(&(uParam2->f_116), 2000, 0))
		{
			__LIB_0__::func_794(&(uParam2->f_116));
		}
	}
	if (uParam2->f_5 > 1 && (Global_1946250.f_3603 || (Global_2667225.f_2681 && CAM::IS_SCREEN_FADED_OUT())))
	{
		func_1190(uParam0, uParam1, uParam2, 1, 0, 0);
		Global_1946250.f_3603 = 0;
	}
	if (uParam2->f_5 > 1)
	{
		PED::SET_PED_CAN_HEAD_IK(PLAYER::PLAYER_PED_ID(), false);
	}
	if (((uParam2->f_5 >= 7 && uParam2->f_5 != 9) && uParam2->f_5 != 13) && uParam2->f_5 != 22)
	{
		if (!func_1768(uParam2, PLAYER::PLAYER_ID(), uParam2->f_13, 0))
		{
			func_1190(uParam0, uParam1, uParam2, 1, 0, 0);
		}
	}
	if ((uParam2->f_5 > 1 && uParam2->f_5 <= 7) && NETWORK::NETWORK_IS_IN_MP_CUTSCENE())
	{
		func_1190(uParam0, uParam1, uParam2, 1, 0, 0);
	}
	if (__LIB_2__::func_573(PLAYER::PLAYER_ID()))
	{
		Global_2789038 = uParam0->f_4[0];
	}
	switch (uParam2->f_5)
	{
		case 0:
			__LIB_9__::func_408(uParam2, 1);
			break;
		case 1:
			__LIB_9__::func_407(uParam1);
			if ((((((((((((((((__LIB_0__::func_156(PLAYER::PLAYER_ID(), 1, 1) && PLAYER::IS_PLAYER_CONTROL_ON(PLAYER::PLAYER_ID())) && func_1768(uParam2, PLAYER::PLAYER_ID(), -1, 1)) && !__LIB_4__::func_849()) && !__LIB_3__::func_558()) && !__LIB_0__::func_890(PLAYER::PLAYER_ID())) && __LIB_4__::func_850(PLAYER::PLAYER_PED_ID()) <= 9) && !Global_2667225.f_2681) && !PED::IS_PED_RAGDOLL(PLAYER::PLAYER_PED_ID())) && !TASK::IS_PED_RUNNING(PLAYER::PLAYER_PED_ID())) && func_36(uParam2->f_13)) && NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(uParam0->f_4[uParam2->f_13])) && func_20(uParam0, uParam2->f_13, 0)) && !BitTest(Global_1946250.f_4, 2)) && !PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false)) && !(Global_262145.f_26971 /* Tunable: VC_CASINO_DISABLE_BAR */ && __LIB_1__::func_783(PLAYER::PLAYER_ID()))) && !(__LIB_3__::func_597() && __LIB_1__::func_783(PLAYER::PLAYER_ID())))
			{
				if (__LIB_9__::func_406(uParam0, uParam2->f_13) || !func_1765(uParam2))
				{
					if (__LIB_0__::func_1("CLU_BAR_PROMPT" /* GXT: Press ~INPUT_CONTEXT~ to order a drink. */))
					{
						__LIB_3__::func_122(&(uParam2->f_20));
						uParam2->f_20 = -1;
					}
					if (uParam2->f_20 == -1)
					{
						__LIB_5__::func_569(&(uParam2->f_20), 4, "POD_TOO_MANY" /* GXT: Too many players near activity. */, 0, 0, 0, 0);
					}
				}
				else
				{
					if (__LIB_0__::func_1("POD_TOO_MANY" /* GXT: Too many players near activity. */))
					{
						__LIB_3__::func_122(&(uParam2->f_20));
						uParam2->f_20 = -1;
					}
					if (uParam2->f_20 == -1)
					{
						__LIB_5__::func_569(&(uParam2->f_20), 4, "CLU_BAR_PROMPT" /* GXT: Press ~INPUT_CONTEXT~ to order a drink. */, 0, 0, 0, 0);
					}
					else
					{
						if (!BitTest(uParam2->f_12, 1))
						{
							if (func_1764(uParam2->f_13) || __LIB_2__::func_573(PLAYER::PLAYER_ID()))
							{
								if (__LIB_0__::func_864(&(uParam2->f_126)) && !__LIB_0__::func_937(&(uParam2->f_126), 60000, 0))
								{
									func_1745(uParam0, uParam2, 26);
									__LIB_0__::func_794(&(uParam2->f_126));
								}
								else
								{
									iVar9 = MISC::GET_RANDOM_INT_IN_RANGE(0, 2);
									if (iVar9 == 0)
									{
										func_1745(uParam0, uParam2, 0);
									}
									else if (iVar9 == 1)
									{
										if (__LIB_1__::func_394())
										{
											func_1745(uParam0, uParam2, 19);
										}
										else
										{
											func_1745(uParam0, uParam2, 18);
										}
									}
								}
								__LIB_0__::func_795(&(uParam2->f_124), 0, 0);
							}
							else
							{
								func_1745(uParam0, uParam2, 0);
							}
							MISC::SET_BIT(&(uParam2->f_12), 1);
						}
						if (func_1764(uParam2->f_13) || __LIB_2__::func_573(PLAYER::PLAYER_ID()))
						{
							if (!BitTest(uParam2->f_11, 9))
							{
								if (BitTest(uParam2->f_12, 3))
								{
									func_1745(uParam0, uParam2, 24);
									MISC::SET_BIT(&(uParam2->f_11), 9);
								}
								else if (__LIB_0__::func_864(&(uParam2->f_124)))
								{
									if (__LIB_0__::func_937(&(uParam2->f_124), 20000, 0))
									{
										func_1745(uParam0, uParam2, 25);
										__LIB_0__::func_627(&(uParam2->f_124), 0, 0);
									}
								}
							}
						}
						if (__LIB_3__::func_113(uParam2->f_20, 1))
						{
							__LIB_3__::func_122(&(uParam2->f_20));
							uParam2->f_20 = -1;
							__LIB_1__::func_376(PLAYER::PLAYER_ID(), 0, 256, 0);
							PED::FORCE_PED_AI_AND_ANIMATION_UPDATE(PLAYER::PLAYER_PED_ID(), false, false);
							PED::SET_PED_CONFIG_FLAG(PLAYER::PLAYER_PED_ID(), 185, true);
							__LIB_0__::func_794(&(uParam2->f_110));
							__LIB_0__::func_794(&(uParam2->f_124));
							__LIB_9__::func_402(uParam1, uParam2->f_13);
							MISC::SET_BIT(&(Global_2689235[PLAYER::PLAYER_ID() /*453*/].f_318.f_4), 13);
							MISC::CLEAR_BIT(&(uParam2->f_11), 8);
							__LIB_9__::func_408(uParam2, 2);
						}
					}
				}
			}
			else
			{
				if (BitTest(uParam2->f_12, 1))
				{
					if (!func_1768(uParam2, PLAYER::PLAYER_ID(), -1, 0))
					{
						if (func_1764(uParam2->f_13) || __LIB_2__::func_573(PLAYER::PLAYER_ID()))
						{
							iVar9 = MISC::GET_RANDOM_INT_IN_RANGE(0, 2);
							if (iVar9 == 0)
							{
								func_1745(uParam0, uParam2, 1);
							}
							else if (iVar9 == 1)
							{
								func_1745(uParam0, uParam2, 20);
							}
							__LIB_0__::func_794(&(uParam2->f_124));
							if (BitTest(uParam2->f_12, 3))
							{
								__LIB_0__::func_794(&(uParam2->f_126));
								__LIB_0__::func_795(&(uParam2->f_126), 0, 0);
							}
						}
						else
						{
							func_1745(uParam0, uParam2, 1);
						}
						MISC::CLEAR_BIT(&(uParam2->f_12), 1);
					}
				}
				if (uParam2->f_20 != -1)
				{
					__LIB_3__::func_122(&(uParam2->f_20));
					uParam2->f_20 = -1;
				}
			}
			break;
		case 2:
			if (__LIB_9__::func_401(uParam0, uParam2->f_13))
			{
				__LIB_0__::func_794(&(uParam2->f_110));
				if (__LIB_2__::func_573(PLAYER::PLAYER_ID()))
				{
					if (CAM::GET_CAM_VIEW_MODE_FOR_CONTEXT(0) == 4)
					{
						__LIB_9__::func_408(uParam2, 5);
					}
					else
					{
						__LIB_9__::func_408(uParam2, 3);
					}
				}
				else
				{
					__LIB_9__::func_408(uParam2, 3);
				}
			}
			else
			{
				if (__LIB_9__::func_406(uParam0, uParam2->f_13))
				{
					__LIB_9__::func_762(uParam1, uParam2);
				}
				if (__LIB_9__::func_450(uParam2))
				{
					__LIB_9__::func_762(uParam1, uParam2);
				}
			}
			break;
		case 3:
			STREAMING::REQUEST_ANIM_DICT(func_1198(uParam2->f_13, 0));
			if (STREAMING::HAS_ANIM_DICT_LOADED(func_1198(uParam2->f_13, 0)))
			{
				TASK::TASK_GO_STRAIGHT_TO_COORD(PLAYER::PLAYER_PED_ID(), func_1740(uParam2->f_13), 1f, 5000, func_1739(uParam2->f_13), 0.25f);
				STREAMING::REMOVE_ANIM_DICT(func_1198(uParam2->f_13, 0));
				__LIB_9__::func_408(uParam2, 4);
			}
			break;
		case 4:
			if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
			{
				if (TASK::GET_SCRIPT_TASK_STATUS(PLAYER::PLAYER_PED_ID(), joaat("SCRIPT_TASK_GO_STRAIGHT_TO_COORD")) != 1 && TASK::GET_SCRIPT_TASK_STATUS(PLAYER::PLAYER_PED_ID(), joaat("SCRIPT_TASK_GO_STRAIGHT_TO_COORD")) != 0)
				{
					func_1745(uParam0, uParam2, 3);
					__LIB_9__::func_408(uParam2, 7);
				}
			}
			break;
		case 5:
			STREAMING::REQUEST_ANIM_DICT(func_1198(uParam2->f_13, 0));
			if (STREAMING::HAS_ANIM_DICT_LOADED(func_1198(uParam2->f_13, 0)))
			{
				TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(PLAYER::PLAYER_PED_ID(), func_1740(uParam2->f_13), 1f, 5000, 0.25f, 0, func_1739(uParam2->f_13));
				STREAMING::REMOVE_ANIM_DICT(func_1198(uParam2->f_13, 0));
				__LIB_9__::func_408(uParam2, 6);
			}
			break;
		case 6:
			if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
			{
				if (TASK::GET_SCRIPT_TASK_STATUS(PLAYER::PLAYER_PED_ID(), joaat("SCRIPT_TASK_FOLLOW_NAV_MESH_TO_COORD")) != 1 && TASK::GET_SCRIPT_TASK_STATUS(PLAYER::PLAYER_PED_ID(), joaat("SCRIPT_TASK_FOLLOW_NAV_MESH_TO_COORD")) != 0)
				{
					func_1745(uParam0, uParam2, 3);
					__LIB_9__::func_408(uParam2, 7);
				}
			}
			break;
		case 7:
			if (CAM::GET_CAM_VIEW_MODE_FOR_CONTEXT(0) == 4)
			{
				PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 1 /*INPUT_LOOK_LR*/, true);
				PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 2 /*INPUT_LOOK_UD*/, true);
				PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 5 /*INPUT_LOOK_LEFT_ONLY*/, true);
				PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 6 /*INPUT_LOOK_RIGHT_ONLY*/, true);
			}
			func_1657(uParam0, uParam2);
			CAM::INVALIDATE_IDLE_CAM();
			break;
		case 8:
			STREAMING::REQUEST_ANIM_DICT(func_1199(uParam2->f_13));
			if (!STREAMING::HAS_ANIM_DICT_LOADED(func_1199(uParam2->f_13)))
			{
				return;
			}
			if (!ENTITY::DOES_ENTITY_EXIST(uParam2->f_26))
			{
				func_1654(uParam2, uParam2->f_13);
				return;
			}
			if (!NETWORK::NETWORK_HAS_CONTROL_OF_NETWORK_ID(uParam0->f_4[uParam2->f_13]) || !NETWORK::NETWORK_HAS_CONTROL_OF_ENTITY(uParam2->f_26))
			{
				if (!NETWORK::NETWORK_HAS_CONTROL_OF_NETWORK_ID(uParam0->f_4[uParam2->f_13]))
				{
					NETWORK::NETWORK_REQUEST_CONTROL_OF_NETWORK_ID(uParam0->f_4[uParam2->f_13]);
				}
				if (!NETWORK::NETWORK_HAS_CONTROL_OF_ENTITY(uParam2->f_26))
				{
					NETWORK::NETWORK_REQUEST_CONTROL_OF_ENTITY(uParam2->f_26);
				}
			}
			else if (AUDIO::REQUEST_SCRIPT_AUDIO_BANK("SAFEHOUSE_TREVOR_DRINK_WHISKEY", false, -1) && !PED::IS_PED_INJURED(NETWORK::NET_TO_PED(uParam0->f_4[uParam2->f_13])))
			{
				uParam2->f_15 = NETWORK::NETWORK_CREATE_SYNCHRONISED_SCENE(func_30(uParam2->f_13), func_26(uParam2->f_13), 2, true, false, 1f, 0f, 1f);
				NETWORK::NETWORK_ADD_PED_TO_SYNCHRONISED_SCENE(NETWORK::NET_TO_PED(uParam0->f_4[uParam2->f_13]), uParam2->f_15, func_1199(uParam2->f_13), "intro_bartender", 2f, -2f, 13, 16, 2f, 0);
				NETWORK::NETWORK_ADD_ENTITY_TO_SYNCHRONISED_SCENE(uParam2->f_26, uParam2->f_15, func_1199(uParam2->f_13), "intro_bottle", 2f, -2f, 13);
				NETWORK::NETWORK_START_SYNCHRONISED_SCENE(uParam2->f_15);
				__LIB_9__::func_408(uParam2, 9);
			}
			break;
		case 9:
			if (!NETWORK::NETWORK_HAS_CONTROL_OF_NETWORK_ID(uParam0->f_4[uParam2->f_13]) || !NETWORK::NETWORK_HAS_CONTROL_OF_ENTITY(uParam2->f_26))
			{
				if (!NETWORK::NETWORK_HAS_CONTROL_OF_NETWORK_ID(uParam0->f_4[uParam2->f_13]))
				{
					NETWORK::NETWORK_REQUEST_CONTROL_OF_NETWORK_ID(uParam0->f_4[uParam2->f_13]);
				}
				if (!NETWORK::NETWORK_HAS_CONTROL_OF_ENTITY(uParam2->f_26))
				{
					NETWORK::NETWORK_REQUEST_CONTROL_OF_ENTITY(uParam2->f_26);
				}
			}
			else
			{
				iVar8 = NETWORK::NETWORK_GET_LOCAL_SCENE_FROM_NETWORK_ID(uParam2->f_15);
				if (!BitTest(uParam2->f_11, 7))
				{
					if (PED::GET_SYNCHRONIZED_SCENE_PHASE(iVar8) >= 0.45f)
					{
						func_1745(uParam0, uParam2, 12);
						MISC::SET_BIT(&(uParam2->f_11), 7);
					}
				}
				if (iVar8 == -1 || PED::GET_SYNCHRONIZED_SCENE_PHASE(iVar8) >= 0.99f)
				{
					if (NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(uParam0->f_4[uParam2->f_13]) && ENTITY::DOES_ENTITY_EXIST(uParam2->f_26))
					{
						uParam2->f_15 = NETWORK::NETWORK_CREATE_SYNCHRONISED_SCENE(func_30(uParam2->f_13), func_26(uParam2->f_13), 2, false, true, 1f, 0f, 1f);
						NETWORK::NETWORK_ADD_PED_TO_SYNCHRONISED_SCENE(NETWORK::NET_TO_PED(uParam0->f_4[uParam2->f_13]), uParam2->f_15, func_22(uParam2->f_13), "idle_a_bartender", 2f, -2f, 13, 16, 2f, 0);
						NETWORK::NETWORK_START_SYNCHRONISED_SCENE(uParam2->f_15);
						AUDIO::PLAY_SOUND_FRONTEND(-1, "PICK_UP", "HUD_FRONTEND_DEFAULT_SOUNDSET", true);
						__LIB_1__::func_746(63, 1, -1);
						MISC::CLEAR_BIT(&(uParam2->f_11), 7);
						__LIB_9__::func_408(uParam2, 27);
					}
				}
			}
			break;
		case 10:
			STREAMING::REQUEST_ANIM_DICT(func_1200(uParam2->f_13));
			if (!STREAMING::HAS_ANIM_DICT_LOADED(func_1200(uParam2->f_13)))
			{
				return;
			}
			STREAMING::REQUEST_ANIM_DICT(func_1198(uParam2->f_13, __LIB_9__::func_398(PLAYER::PLAYER_PED_ID())));
			if (!STREAMING::HAS_ANIM_DICT_LOADED(func_1198(uParam2->f_13, __LIB_9__::func_398(PLAYER::PLAYER_PED_ID()))))
			{
				return;
			}
			if (!ENTITY::DOES_ENTITY_EXIST(uParam2->f_24))
			{
				func_1648(uParam2, uParam2->f_13);
				return;
			}
			if (!ENTITY::DOES_ENTITY_EXIST(uParam2->f_25))
			{
				func_1644(uParam2, uParam2->f_13);
				return;
			}
			if ((!NETWORK::NETWORK_HAS_CONTROL_OF_NETWORK_ID(uParam0->f_4[uParam2->f_13]) || !NETWORK::NETWORK_HAS_CONTROL_OF_ENTITY(uParam2->f_24)) || !NETWORK::NETWORK_HAS_CONTROL_OF_ENTITY(uParam2->f_25))
			{
				if (!NETWORK::NETWORK_HAS_CONTROL_OF_NETWORK_ID(uParam0->f_4[uParam2->f_13]))
				{
					NETWORK::NETWORK_REQUEST_CONTROL_OF_NETWORK_ID(uParam0->f_4[uParam2->f_13]);
				}
				if (!NETWORK::NETWORK_HAS_CONTROL_OF_ENTITY(uParam2->f_24))
				{
					NETWORK::NETWORK_REQUEST_CONTROL_OF_ENTITY(uParam2->f_24);
				}
				if (!NETWORK::NETWORK_HAS_CONTROL_OF_ENTITY(uParam2->f_25))
				{
					NETWORK::NETWORK_REQUEST_CONTROL_OF_ENTITY(uParam2->f_25);
				}
			}
			else if ((!PED::IS_PED_INJURED(NETWORK::NET_TO_PED(uParam0->f_4[uParam2->f_13])) && !PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID())) && AUDIO::REQUEST_SCRIPT_AUDIO_BANK("SAFEHOUSE_TREVOR_DRINK_WHISKEY", false, -1))
			{
				uParam2->f_15 = NETWORK::NETWORK_CREATE_SYNCHRONISED_SCENE(func_30(uParam2->f_13), func_26(uParam2->f_13), 2, true, false, 1f, 0f, 1f);
				NETWORK::NETWORK_ADD_PED_TO_SYNCHRONISED_SCENE(NETWORK::NET_TO_PED(uParam0->f_4[uParam2->f_13]), uParam2->f_15, func_1200(uParam2->f_13), "intro_bartender", 2f, -2f, 13, 16, 2f, 0);
				NETWORK::NETWORK_ADD_ENTITY_TO_SYNCHRONISED_SCENE(uParam2->f_24, uParam2->f_15, func_1200(uParam2->f_13), "intro_shot_glass", 1000f, -1000f, 13);
				NETWORK::NETWORK_ADD_ENTITY_TO_SYNCHRONISED_SCENE(uParam2->f_25, uParam2->f_15, func_1200(uParam2->f_13), "intro_whiskey", 1000f, -1000f, 13);
				NETWORK::NETWORK_START_SYNCHRONISED_SCENE(uParam2->f_15);
				__LIB_9__::func_408(uParam2, 11);
			}
			break;
		case 11:
			if ((!NETWORK::NETWORK_HAS_CONTROL_OF_NETWORK_ID(uParam0->f_4[uParam2->f_13]) || !NETWORK::NETWORK_HAS_CONTROL_OF_ENTITY(uParam2->f_24)) || !NETWORK::NETWORK_HAS_CONTROL_OF_ENTITY(uParam2->f_25))
			{
				if (!NETWORK::NETWORK_HAS_CONTROL_OF_NETWORK_ID(uParam0->f_4[uParam2->f_13]))
				{
					NETWORK::NETWORK_REQUEST_CONTROL_OF_NETWORK_ID(uParam0->f_4[uParam2->f_13]);
				}
				if (!NETWORK::NETWORK_HAS_CONTROL_OF_ENTITY(uParam2->f_24))
				{
					NETWORK::NETWORK_REQUEST_CONTROL_OF_ENTITY(uParam2->f_24);
				}
				if (!NETWORK::NETWORK_HAS_CONTROL_OF_ENTITY(uParam2->f_25))
				{
					NETWORK::NETWORK_REQUEST_CONTROL_OF_ENTITY(uParam2->f_25);
				}
			}
			else
			{
				iVar8 = NETWORK::NETWORK_GET_LOCAL_SCENE_FROM_NETWORK_ID(uParam2->f_15);
				if (iVar8 == -1 || PED::GET_SYNCHRONIZED_SCENE_PHASE(iVar8) >= 0.99f)
				{
					if ((NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(uParam0->f_4[uParam2->f_13]) && ENTITY::DOES_ENTITY_EXIST(uParam2->f_25)) && ENTITY::DOES_ENTITY_EXIST(uParam2->f_24))
					{
						uParam2->f_15 = NETWORK::NETWORK_CREATE_SYNCHRONISED_SCENE(func_30(uParam2->f_13), func_26(uParam2->f_13), 2, true, false, 1f, 0f, 1f);
						NETWORK::NETWORK_ADD_PED_TO_SYNCHRONISED_SCENE(NETWORK::NET_TO_PED(uParam0->f_4[uParam2->f_13]), uParam2->f_15, func_1198(uParam2->f_13, __LIB_9__::func_398(PLAYER::PLAYER_PED_ID())), __LIB_9__::func_395(uParam2->f_13, __LIB_9__::func_398(PLAYER::PLAYER_PED_ID())), 2f, -2f, 13, 16, 2f, 0);
						NETWORK::NETWORK_ADD_PED_TO_SYNCHRONISED_SCENE(PLAYER::PLAYER_PED_ID(), uParam2->f_15, func_1198(uParam2->f_13, __LIB_9__::func_398(PLAYER::PLAYER_PED_ID())), __LIB_9__::func_394(uParam2->f_13, __LIB_9__::func_398(PLAYER::PLAYER_PED_ID())), 2f, -2f, 13, 16, 2f, 0);
						NETWORK::NETWORK_ADD_ENTITY_TO_SYNCHRONISED_SCENE(uParam2->f_24, uParam2->f_15, func_1198(uParam2->f_13, __LIB_9__::func_398(PLAYER::PLAYER_PED_ID())), __LIB_9__::func_393(uParam2->f_13, __LIB_9__::func_398(PLAYER::PLAYER_PED_ID())), 1000f, -1000f, 13);
						NETWORK::NETWORK_ADD_ENTITY_TO_SYNCHRONISED_SCENE(uParam2->f_25, uParam2->f_15, func_1198(uParam2->f_13, __LIB_9__::func_398(PLAYER::PLAYER_PED_ID())), __LIB_9__::func_392(uParam2->f_13, __LIB_9__::func_398(PLAYER::PLAYER_PED_ID())), 1000f, -1000f, 13);
						NETWORK::NETWORK_START_SYNCHRONISED_SCENE(uParam2->f_15);
						__LIB_9__::func_408(uParam2, 12);
					}
				}
			}
			break;
		case 12:
			CAM::SET_GAMEPLAY_CAM_IGNORE_ENTITY_COLLISION_THIS_UPDATE(uParam2->f_24);
			if ((!NETWORK::NETWORK_HAS_CONTROL_OF_NETWORK_ID(uParam0->f_4[uParam2->f_13]) || !NETWORK::NETWORK_HAS_CONTROL_OF_ENTITY(uParam2->f_25)) || !NETWORK::NETWORK_HAS_CONTROL_OF_ENTITY(uParam2->f_24))
			{
				if (!NETWORK::NETWORK_HAS_CONTROL_OF_NETWORK_ID(uParam0->f_4[uParam2->f_13]))
				{
					NETWORK::NETWORK_REQUEST_CONTROL_OF_NETWORK_ID(uParam0->f_4[uParam2->f_13]);
				}
				if (!NETWORK::NETWORK_HAS_CONTROL_OF_ENTITY(uParam2->f_25))
				{
					NETWORK::NETWORK_REQUEST_CONTROL_OF_ENTITY(uParam2->f_25);
				}
				if (!NETWORK::NETWORK_HAS_CONTROL_OF_ENTITY(uParam2->f_24))
				{
					NETWORK::NETWORK_REQUEST_CONTROL_OF_ENTITY(uParam2->f_24);
				}
			}
			else
			{
				iVar8 = NETWORK::NETWORK_GET_LOCAL_SCENE_FROM_NETWORK_ID(uParam2->f_15);
				if (!BitTest(uParam2->f_11, 7))
				{
					fVar10 = 0.325f;
					if (__LIB_9__::func_398(PLAYER::PLAYER_PED_ID()) >= 3)
					{
						fVar10 = 0.425f;
					}
					if (PED::GET_SYNCHRONIZED_SCENE_PHASE(iVar8) >= fVar10)
					{
						if (func_1764(uParam2->f_13) || __LIB_2__::func_573(PLAYER::PLAYER_ID()))
						{
							if ((uParam2->f_21 == 2 || uParam2->f_21 == 3) || uParam2->f_21 == 4)
							{
								func_1745(uParam0, uParam2, 13);
							}
							else
							{
								iVar11 = MISC::GET_RANDOM_INT_IN_RANGE(0, 2);
								if (iVar11 == 0)
								{
									func_1745(uParam0, uParam2, 10);
								}
								else if (iVar11 == 1)
								{
									func_1745(uParam0, uParam2, 11);
								}
							}
						}
						else
						{
							iVar11 = MISC::GET_RANDOM_INT_IN_RANGE(0, 2);
							if (iVar11 == 0)
							{
								func_1745(uParam0, uParam2, 10);
							}
							else if (iVar11 == 1)
							{
								func_1745(uParam0, uParam2, 11);
							}
						}
						MISC::SET_BIT(&(uParam2->f_11), 7);
					}
				}
				if (iVar8 == -1 || PED::GET_SYNCHRONIZED_SCENE_PHASE(iVar8) >= 0.99f)
				{
					if ((NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(uParam0->f_4[uParam2->f_13]) && ENTITY::DOES_ENTITY_EXIST(uParam2->f_25)) && ENTITY::DOES_ENTITY_EXIST(uParam2->f_24))
					{
						uParam2->f_15 = NETWORK::NETWORK_CREATE_SYNCHRONISED_SCENE(func_30(uParam2->f_13), func_26(uParam2->f_13), 2, true, false, 1f, 0f, 1f);
						NETWORK::NETWORK_ADD_PED_TO_SYNCHRONISED_SCENE(NETWORK::NET_TO_PED(uParam0->f_4[uParam2->f_13]), uParam2->f_15, func_1200(uParam2->f_13), "outro_bartender", 2f, -2f, 13, 16, 2f, 0);
						NETWORK::NETWORK_ADD_ENTITY_TO_SYNCHRONISED_SCENE(uParam2->f_24, uParam2->f_15, func_1200(uParam2->f_13), "outro_shot_glass", 1000f, -1000f, 13);
						NETWORK::NETWORK_ADD_ENTITY_TO_SYNCHRONISED_SCENE(uParam2->f_25, uParam2->f_15, func_1200(uParam2->f_13), "outro_whiskey", 1000f, -1000f, 13);
						NETWORK::NETWORK_START_SYNCHRONISED_SCENE(uParam2->f_15);
						__LIB_1__::func_376(PLAYER::PLAYER_ID(), 1, 0, 0);
						if (uParam2->f_21 == 4 && (__LIB_4__::func_850(PLAYER::PLAYER_PED_ID()) + Global_262145.f_24325 /* Tunable: 1479811117 */) >= 10)
						{
							func_1745(uParam0, uParam2, 15);
							MISC::SET_BIT(&(Global_1946250.f_4), 0);
							MISC::SET_BIT(&(Global_1946250.f_4), 2);
						}
						else
						{
							MISC::CLEAR_BIT(&(Global_1946250.f_4), 0);
						}
						if (__LIB_4__::func_850(PLAYER::PLAYER_PED_ID()) >= 9)
						{
							if (!BitTest(Global_1946250.f_4, 2))
							{
								__LIB_6__::func_999(PLAYER::PLAYER_PED_ID(), 0, __LIB_9__::func_391(uParam2->f_21));
							}
						}
						else
						{
							__LIB_6__::func_999(PLAYER::PLAYER_PED_ID(), 0, __LIB_9__::func_391(uParam2->f_21));
						}
						MISC::CLEAR_BIT(&(uParam2->f_11), 7);
						func_1193(uParam2);
						__LIB_9__::func_408(uParam2, 13);
					}
				}
			}
			break;
		case 13:
			if ((!NETWORK::NETWORK_HAS_CONTROL_OF_NETWORK_ID(uParam0->f_4[uParam2->f_13]) || !NETWORK::NETWORK_HAS_CONTROL_OF_ENTITY(uParam2->f_25)) || !NETWORK::NETWORK_HAS_CONTROL_OF_ENTITY(uParam2->f_24))
			{
				if (!NETWORK::NETWORK_HAS_CONTROL_OF_NETWORK_ID(uParam0->f_4[uParam2->f_13]))
				{
					NETWORK::NETWORK_REQUEST_CONTROL_OF_NETWORK_ID(uParam0->f_4[uParam2->f_13]);
				}
				if (!NETWORK::NETWORK_HAS_CONTROL_OF_ENTITY(uParam2->f_25))
				{
					NETWORK::NETWORK_REQUEST_CONTROL_OF_ENTITY(uParam2->f_25);
				}
				if (!NETWORK::NETWORK_HAS_CONTROL_OF_ENTITY(uParam2->f_24))
				{
					NETWORK::NETWORK_REQUEST_CONTROL_OF_ENTITY(uParam2->f_24);
				}
			}
			else
			{
				iVar8 = NETWORK::NETWORK_GET_LOCAL_SCENE_FROM_NETWORK_ID(uParam2->f_15);
				if (iVar8 == -1 || PED::GET_SYNCHRONIZED_SCENE_PHASE(iVar8) >= 0.99f)
				{
					if (NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(uParam0->f_4[uParam2->f_13]))
					{
						uParam2->f_15 = NETWORK::NETWORK_CREATE_SYNCHRONISED_SCENE(func_30(uParam2->f_13), func_26(uParam2->f_13), 2, false, true, 1f, 0f, 1f);
						NETWORK::NETWORK_ADD_PED_TO_SYNCHRONISED_SCENE(NETWORK::NET_TO_PED(uParam0->f_4[uParam2->f_13]), uParam2->f_15, func_22(uParam2->f_13), "idle_a_bartender", 2f, -2f, 13, 16, 2f, 0);
						NETWORK::NETWORK_START_SYNCHRONISED_SCENE(uParam2->f_15);
					}
					__LIB_9__::func_408(uParam2, 27);
				}
			}
			break;
		case 14:
			STREAMING::REQUEST_ANIM_DICT(func_1201());
			STREAMING::REQUEST_ANIM_DICT("ANIM@AMB@NIGHTCLUB@MINI@DRINKING@CHAMPAGNE_DRINKING@BASE@");
			if (!STREAMING::HAS_ANIM_DICT_LOADED(func_1201()))
			{
				return;
			}
			if (!STREAMING::HAS_ANIM_DICT_LOADED("ANIM@AMB@NIGHTCLUB@MINI@DRINKING@CHAMPAGNE_DRINKING@BASE@"))
			{
				return;
			}
			if (!ENTITY::DOES_ENTITY_EXIST(uParam2->f_27))
			{
				func_1637(uParam2, uParam2->f_13);
				return;
			}
			if (!ENTITY::DOES_ENTITY_EXIST(uParam2->f_28))
			{
				func_1633(uParam2, uParam2->f_13);
				return;
			}
			if ((!NETWORK::NETWORK_HAS_CONTROL_OF_NETWORK_ID(uParam0->f_4[uParam2->f_13]) || !NETWORK::NETWORK_HAS_CONTROL_OF_ENTITY(uParam2->f_27)) || !NETWORK::NETWORK_HAS_CONTROL_OF_ENTITY(uParam2->f_28))
			{
				if (!NETWORK::NETWORK_HAS_CONTROL_OF_NETWORK_ID(uParam0->f_4[uParam2->f_13]))
				{
					NETWORK::NETWORK_REQUEST_CONTROL_OF_NETWORK_ID(uParam0->f_4[uParam2->f_13]);
				}
				if (!NETWORK::NETWORK_HAS_CONTROL_OF_ENTITY(uParam2->f_27))
				{
					NETWORK::NETWORK_REQUEST_CONTROL_OF_ENTITY(uParam2->f_27);
				}
				if (!NETWORK::NETWORK_HAS_CONTROL_OF_ENTITY(uParam2->f_28))
				{
					NETWORK::NETWORK_REQUEST_CONTROL_OF_ENTITY(uParam2->f_28);
				}
			}
			else if (!PED::IS_PED_INJURED(NETWORK::NET_TO_PED(uParam0->f_4[uParam2->f_13])) && AUDIO::REQUEST_SCRIPT_AUDIO_BANK("DLC_BATTLE/BTL_CHAMPAGNE_MINIGAME", false, -1))
			{
				uParam2->f_15 = NETWORK::NETWORK_CREATE_SYNCHRONISED_SCENE(func_30(uParam2->f_13), func_26(uParam2->f_13), 2, true, false, 1f, 0f, 1f);
				NETWORK::NETWORK_ADD_PED_TO_SYNCHRONISED_SCENE(NETWORK::NET_TO_PED(uParam0->f_4[uParam2->f_13]), uParam2->f_15, func_1201(), "Bartender_Intro", 2f, -2f, 13, 16, 2f, 0);
				NETWORK::NETWORK_ADD_ENTITY_TO_SYNCHRONISED_SCENE(uParam2->f_28, uParam2->f_15, func_1201(), "Bartender_Intro_Bottle", 2f, -2f, 13);
				NETWORK::NETWORK_ADD_ENTITY_TO_SYNCHRONISED_SCENE(uParam2->f_27, uParam2->f_15, func_1201(), "Bartender_Intro_Bottle", 2f, -2f, 13);
				NETWORK::NETWORK_ADD_SYNCHRONISED_SCENE_CAMERA(uParam2->f_15, func_1201(), "Bartender_Intro_Cam");
				NETWORK::NETWORK_FORCE_LOCAL_USE_OF_SYNCED_SCENE_CAMERA(uParam2->f_15);
				NETWORK::NETWORK_START_SYNCHRONISED_SCENE(uParam2->f_15);
				STREAMING::REQUEST_NAMED_PTFX_ASSET("scr_ba_club");
				__LIB_9__::func_408(uParam2, 15);
			}
			break;
		case 15:
			PAD::DISABLE_CONTROL_ACTION(2 /*FRONTEND_CONTROL*/, 200 /*INPUT_FRONTEND_PAUSE_ALTERNATE*/, true);
			PAD::DISABLE_CONTROL_ACTION(2 /*FRONTEND_CONTROL*/, 199 /*INPUT_FRONTEND_PAUSE*/, true);
			if (!BitTest(uParam2->f_12, 0))
			{
				func_1619(uParam2);
			}
			if (HUD::IS_HELP_MESSAGE_BEING_DISPLAYED())
			{
				HUD::CLEAR_HELP(true);
			}
			if ((!NETWORK::NETWORK_HAS_CONTROL_OF_NETWORK_ID(uParam0->f_4[uParam2->f_13]) || !NETWORK::NETWORK_HAS_CONTROL_OF_ENTITY(uParam2->f_27)) || !NETWORK::NETWORK_HAS_CONTROL_OF_ENTITY(uParam2->f_28))
			{
				if (!NETWORK::NETWORK_HAS_CONTROL_OF_NETWORK_ID(uParam0->f_4[uParam2->f_13]))
				{
					NETWORK::NETWORK_REQUEST_CONTROL_OF_NETWORK_ID(uParam0->f_4[uParam2->f_13]);
				}
				if (!NETWORK::NETWORK_HAS_CONTROL_OF_ENTITY(uParam2->f_27))
				{
					NETWORK::NETWORK_REQUEST_CONTROL_OF_ENTITY(uParam2->f_27);
				}
				if (!NETWORK::NETWORK_HAS_CONTROL_OF_ENTITY(uParam2->f_28))
				{
					NETWORK::NETWORK_REQUEST_CONTROL_OF_ENTITY(uParam2->f_28);
				}
			}
			else
			{
				iVar8 = NETWORK::NETWORK_GET_LOCAL_SCENE_FROM_NETWORK_ID(uParam2->f_15);
				if (iVar8 == -1 || PED::GET_SYNCHRONIZED_SCENE_PHASE(iVar8) >= 0.99f)
				{
					uParam2->f_15 = NETWORK::NETWORK_CREATE_SYNCHRONISED_SCENE(func_30(uParam2->f_13), func_26(uParam2->f_13), 2, false, true, 1f, 0f, 1f);
					NETWORK::NETWORK_ADD_PED_TO_SYNCHRONISED_SCENE(NETWORK::NET_TO_PED(uParam0->f_4[uParam2->f_13]), uParam2->f_15, func_1201(), "Bartender_Idle", 2f, -2f, 13, 16, 2f, 0);
					NETWORK::NETWORK_START_SYNCHRONISED_SCENE(uParam2->f_15);
					TASK::TASK_MOVE_NETWORK_ADVANCED_BY_NAME(PLAYER::PLAYER_PED_ID(), "Champagne_Drinking_Mini_Game", func_30(uParam2->f_13), func_26(uParam2->f_13), 2, 0f, false, "ANIM@AMB@NIGHTCLUB@MINI@DRINKING@CHAMPAGNE_DRINKING@BASE@", 4);
					if (CAM::GET_CAM_VIEW_MODE_FOR_CONTEXT(0) == 1)
					{
						CAM::SET_CAM_VIEW_MODE_FOR_CONTEXT(0, 4);
						CAM::SET_CAM_VIEW_MODE_FOR_CONTEXT(0, 0);
					}
					func_1745(uParam0, uParam2, 14);
					if (uParam2->f_21 == 8)
					{
						MISC::SET_BIT(&(Global_1853348[PLAYER::PLAYER_ID() /*834*/].f_800), 12);
					}
					CAM::RENDER_SCRIPT_CAMS(false, false, 3000, true, false, 0);
					HUD::DISPLAY_RADAR(true);
					HUD::CLEAR_HELP(true);
					__LIB_9__::func_408(uParam2, 16);
				}
			}
			break;
		case 16:
			PAD::DISABLE_CONTROL_ACTION(2 /*FRONTEND_CONTROL*/, 200 /*INPUT_FRONTEND_PAUSE_ALTERNATE*/, true);
			PAD::DISABLE_CONTROL_ACTION(2 /*FRONTEND_CONTROL*/, 199 /*INPUT_FRONTEND_PAUSE*/, true);
			if (HUD::IS_HELP_MESSAGE_BEING_DISPLAYED())
			{
				HUD::CLEAR_HELP(true);
			}
			if ((!NETWORK::NETWORK_HAS_CONTROL_OF_NETWORK_ID(uParam0->f_4[uParam2->f_13]) || !NETWORK::NETWORK_HAS_CONTROL_OF_ENTITY(uParam2->f_27)) || !NETWORK::NETWORK_HAS_CONTROL_OF_ENTITY(uParam2->f_28))
			{
				if (!NETWORK::NETWORK_HAS_CONTROL_OF_NETWORK_ID(uParam0->f_4[uParam2->f_13]))
				{
					NETWORK::NETWORK_REQUEST_CONTROL_OF_NETWORK_ID(uParam0->f_4[uParam2->f_13]);
				}
				if (!NETWORK::NETWORK_HAS_CONTROL_OF_ENTITY(uParam2->f_27))
				{
					NETWORK::NETWORK_REQUEST_CONTROL_OF_ENTITY(uParam2->f_27);
				}
				if (!NETWORK::NETWORK_HAS_CONTROL_OF_ENTITY(uParam2->f_28))
				{
					NETWORK::NETWORK_REQUEST_CONTROL_OF_ENTITY(uParam2->f_28);
				}
			}
			else if (TASK::IS_TASK_MOVE_NETWORK_ACTIVE(PLAYER::PLAYER_PED_ID()))
			{
				TASK::SET_TASK_MOVE_NETWORK_SIGNAL_FLOAT(PLAYER::PLAYER_PED_ID(), "SHAKE_INTENSITY", uParam2->f_10);
				TASK::SET_TASK_MOVE_NETWORK_SIGNAL_FLOAT(PLAYER::PLAYER_PED_ID(), "HORIZONTAL_AIM", uParam2->f_8);
				TASK::SET_TASK_MOVE_NETWORK_SIGNAL_FLOAT(PLAYER::PLAYER_PED_ID(), "VERTICLE_AIM", uParam2->f_7);
				if (ENTITY::HAS_ANIM_EVENT_FIRED(PLAYER::PLAYER_PED_ID(), MISC::GET_HASH_KEY("PickupBottle")))
				{
					if (!ENTITY::IS_ENTITY_ATTACHED_TO_ANY_PED(uParam2->f_28))
					{
						if (__LIB_0__::func_121(uParam2->f_28) && __LIB_0__::func_121(PLAYER::PLAYER_PED_ID()))
						{
							ENTITY::ATTACH_ENTITY_TO_ENTITY(uParam2->f_28, PLAYER::PLAYER_PED_ID(), PED::GET_PED_BONE_INDEX(PLAYER::PLAYER_PED_ID(), 28422), 0f, 0f, 0f, 0f, 0f, 0f, false, false, false, true, 2, true, 0);
						}
					}
					if (!ENTITY::IS_ENTITY_ATTACHED_TO_ANY_PED(uParam2->f_27))
					{
						if (__LIB_0__::func_121(uParam2->f_27) && __LIB_0__::func_121(PLAYER::PLAYER_PED_ID()))
						{
							ENTITY::ATTACH_ENTITY_TO_ENTITY(uParam2->f_27, PLAYER::PLAYER_PED_ID(), PED::GET_PED_BONE_INDEX(PLAYER::PLAYER_PED_ID(), 28422), 0f, 0f, 0f, 0f, 0f, 0f, false, false, false, true, 2, true, 0);
						}
					}
				}
				if (TASK::GET_TASK_MOVE_NETWORK_EVENT(PLAYER::PLAYER_PED_ID(), "IntroFinished") && TASK::IS_TASK_MOVE_NETWORK_READY_FOR_TRANSITION(PLAYER::PLAYER_PED_ID()))
				{
					if (TASK::REQUEST_TASK_MOVE_NETWORK_STATE_TRANSITION(PLAYER::PLAYER_PED_ID(), "BottleHold"))
					{
						__LIB_0__::func_627(&(uParam2->f_112), 0, 0);
						__LIB_9__::func_408(uParam2, 17);
					}
				}
			}
			break;
		case 17:
			PAD::DISABLE_CONTROL_ACTION(2 /*FRONTEND_CONTROL*/, 200 /*INPUT_FRONTEND_PAUSE_ALTERNATE*/, true);
			PAD::DISABLE_CONTROL_ACTION(2 /*FRONTEND_CONTROL*/, 199 /*INPUT_FRONTEND_PAUSE*/, true);
			if (PAD::HAVE_CONTROLS_CHANGED(2 /*FRONTEND_CONTROL*/) && __LIB_0__::func_1("CHAMP_SHAKE" /* GXT: Tap ~INPUT_FRONTEND_ACCEPT~ to shake the champagne bottle. */))
			{
				HUD::CLEAR_HELP(true);
			}
			if (!__LIB_0__::func_1("CHAMP_SHAKE" /* GXT: Tap ~INPUT_FRONTEND_ACCEPT~ to shake the champagne bottle. */))
			{
				__LIB_0__::func_190("CHAMP_SHAKE" /* GXT: Tap ~INPUT_FRONTEND_ACCEPT~ to shake the champagne bottle. */);
			}
			__LIB_9__::func_388(uParam2);
			if (__LIB_0__::func_864(&(uParam2->f_112)))
			{
				if (__LIB_0__::func_937(&(uParam2->f_112), 10000, 0))
				{
					*uParam2 = 1;
					__LIB_0__::func_794(&(uParam2->f_112));
				}
			}
			if ((!NETWORK::NETWORK_HAS_CONTROL_OF_NETWORK_ID(uParam0->f_4[uParam2->f_13]) || !NETWORK::NETWORK_HAS_CONTROL_OF_ENTITY(uParam2->f_27)) || !NETWORK::NETWORK_HAS_CONTROL_OF_ENTITY(uParam2->f_28))
			{
				if (!NETWORK::NETWORK_HAS_CONTROL_OF_NETWORK_ID(uParam0->f_4[uParam2->f_13]))
				{
					NETWORK::NETWORK_REQUEST_CONTROL_OF_NETWORK_ID(uParam0->f_4[uParam2->f_13]);
				}
				if (!NETWORK::NETWORK_HAS_CONTROL_OF_ENTITY(uParam2->f_27))
				{
					NETWORK::NETWORK_REQUEST_CONTROL_OF_ENTITY(uParam2->f_27);
				}
				if (!NETWORK::NETWORK_HAS_CONTROL_OF_ENTITY(uParam2->f_28))
				{
					NETWORK::NETWORK_REQUEST_CONTROL_OF_ENTITY(uParam2->f_28);
				}
			}
			else if (TASK::IS_TASK_MOVE_NETWORK_ACTIVE(PLAYER::PLAYER_PED_ID()))
			{
				TASK::SET_TASK_MOVE_NETWORK_SIGNAL_FLOAT(PLAYER::PLAYER_PED_ID(), "SHAKE_INTENSITY", uParam2->f_10);
				TASK::SET_TASK_MOVE_NETWORK_SIGNAL_FLOAT(PLAYER::PLAYER_PED_ID(), "HORIZONTAL_AIM", uParam2->f_8);
				TASK::SET_TASK_MOVE_NETWORK_SIGNAL_FLOAT(PLAYER::PLAYER_PED_ID(), "VERTICLE_AIM", uParam2->f_7);
				if (*uParam2 && TASK::IS_TASK_MOVE_NETWORK_READY_FOR_TRANSITION(PLAYER::PLAYER_PED_ID()))
				{
					if (TASK::REQUEST_TASK_MOVE_NETWORK_STATE_TRANSITION(PLAYER::PLAYER_PED_ID(), "BottleShake"))
					{
						__LIB_0__::func_627(&(uParam2->f_118), 0, 0);
						__LIB_9__::func_408(uParam2, 18);
					}
				}
			}
			break;
		case 18:
			PAD::DISABLE_CONTROL_ACTION(2 /*FRONTEND_CONTROL*/, 200 /*INPUT_FRONTEND_PAUSE_ALTERNATE*/, true);
			PAD::DISABLE_CONTROL_ACTION(2 /*FRONTEND_CONTROL*/, 199 /*INPUT_FRONTEND_PAUSE*/, true);
			if (PAD::HAVE_CONTROLS_CHANGED(2 /*FRONTEND_CONTROL*/) && __LIB_0__::func_1("CHAMP_SHAKE" /* GXT: Tap ~INPUT_FRONTEND_ACCEPT~ to shake the champagne bottle. */))
			{
				HUD::CLEAR_HELP(true);
			}
			if (!__LIB_0__::func_1("CHAMP_SHAKE" /* GXT: Tap ~INPUT_FRONTEND_ACCEPT~ to shake the champagne bottle. */))
			{
				__LIB_0__::func_190("CHAMP_SHAKE" /* GXT: Tap ~INPUT_FRONTEND_ACCEPT~ to shake the champagne bottle. */);
			}
			__LIB_9__::func_446(uParam2);
			if (uParam2->f_9 > 0.5f)
			{
				PAD::SET_CONTROL_SHAKE(0 /*PLAYER_CONTROL*/, 5, 30);
			}
			if (__LIB_0__::func_864(&(uParam2->f_118)))
			{
				if (__LIB_0__::func_937(&(uParam2->f_118), 30000, 0))
				{
					uParam2->f_6 = 1f;
					__LIB_0__::func_794(&(uParam2->f_118));
				}
			}
			if (uParam2->f_6 == 1f)
			{
				iVar12 = 1;
			}
			if ((!NETWORK::NETWORK_HAS_CONTROL_OF_NETWORK_ID(uParam0->f_4[uParam2->f_13]) || !NETWORK::NETWORK_HAS_CONTROL_OF_ENTITY(uParam2->f_27)) || !NETWORK::NETWORK_HAS_CONTROL_OF_ENTITY(uParam2->f_28))
			{
				if (!NETWORK::NETWORK_HAS_CONTROL_OF_NETWORK_ID(uParam0->f_4[uParam2->f_13]))
				{
					NETWORK::NETWORK_REQUEST_CONTROL_OF_NETWORK_ID(uParam0->f_4[uParam2->f_13]);
				}
				if (!NETWORK::NETWORK_HAS_CONTROL_OF_ENTITY(uParam2->f_27))
				{
					NETWORK::NETWORK_REQUEST_CONTROL_OF_ENTITY(uParam2->f_27);
				}
				if (!NETWORK::NETWORK_HAS_CONTROL_OF_ENTITY(uParam2->f_28))
				{
					NETWORK::NETWORK_REQUEST_CONTROL_OF_ENTITY(uParam2->f_28);
				}
			}
			else if (TASK::IS_TASK_MOVE_NETWORK_ACTIVE(PLAYER::PLAYER_PED_ID()))
			{
				TASK::SET_TASK_MOVE_NETWORK_SIGNAL_FLOAT(PLAYER::PLAYER_PED_ID(), "SHAKE_INTENSITY", uParam2->f_10);
				TASK::SET_TASK_MOVE_NETWORK_SIGNAL_FLOAT(PLAYER::PLAYER_PED_ID(), "HORIZONTAL_AIM", uParam2->f_8);
				TASK::SET_TASK_MOVE_NETWORK_SIGNAL_FLOAT(PLAYER::PLAYER_PED_ID(), "VERTICLE_AIM", uParam2->f_7);
				if (iVar12 && TASK::IS_TASK_MOVE_NETWORK_READY_FOR_TRANSITION(PLAYER::PLAYER_PED_ID()))
				{
					if (TASK::REQUEST_TASK_MOVE_NETWORK_STATE_TRANSITION(PLAYER::PLAYER_PED_ID(), "ChampagneSpray"))
					{
						PAD::SET_CONTROL_SHAKE(0 /*PLAYER_CONTROL*/, 500, 256);
						__LIB_0__::func_794(&(uParam2->f_35[PLAYER::PLAYER_ID() /*2*/]));
						__LIB_0__::func_627(&(uParam2->f_102), 0, 0);
						__LIB_0__::func_627(&(uParam2->f_100), 0, 0);
						__LIB_9__::func_408(uParam2, 19);
					}
				}
			}
			break;
		case 19:
			PAD::DISABLE_CONTROL_ACTION(2 /*FRONTEND_CONTROL*/, 200 /*INPUT_FRONTEND_PAUSE_ALTERNATE*/, true);
			PAD::DISABLE_CONTROL_ACTION(2 /*FRONTEND_CONTROL*/, 199 /*INPUT_FRONTEND_PAUSE*/, true);
			__LIB_9__::func_387(uParam2);
			if (PAD::HAVE_CONTROLS_CHANGED(2 /*FRONTEND_CONTROL*/) && __LIB_0__::func_1("CHAMP_SPRAY" /* GXT: Use ~INPUT_MOVE_LR~ and ~INPUT_MOVE_UD~ to control the champagne spray. */))
			{
				HUD::CLEAR_HELP(true);
			}
			if (!__LIB_0__::func_1("CHAMP_SPRAY" /* GXT: Use ~INPUT_MOVE_LR~ and ~INPUT_MOVE_UD~ to control the champagne spray. */))
			{
				__LIB_0__::func_190("CHAMP_SPRAY" /* GXT: Use ~INPUT_MOVE_LR~ and ~INPUT_MOVE_UD~ to control the champagne spray. */);
			}
			if (__LIB_0__::func_864(&(uParam2->f_102)) && __LIB_0__::func_937(&(uParam2->f_102), 500, 0))
			{
				__LIB_0__::func_794(&(uParam2->f_102));
				PAD::SET_CONTROL_SHAKE(0 /*PLAYER_CONTROL*/, 8000, 50);
			}
			if (!__LIB_0__::func_864(&(uParam2->f_35[PLAYER::PLAYER_ID() /*2*/])))
			{
				__LIB_0__::func_795(&(uParam2->f_35[PLAYER::PLAYER_ID() /*2*/]), 0, 0);
			}
			else if (__LIB_0__::func_937(&(uParam2->f_35[PLAYER::PLAYER_ID() /*2*/]), __LIB_9__::func_386(uParam2), 0))
			{
				iVar13 = 1;
			}
			if ((!NETWORK::NETWORK_HAS_CONTROL_OF_NETWORK_ID(uParam0->f_4[uParam2->f_13]) || !NETWORK::NETWORK_HAS_CONTROL_OF_ENTITY(uParam2->f_27)) || !NETWORK::NETWORK_HAS_CONTROL_OF_ENTITY(uParam2->f_28))
			{
				if (!NETWORK::NETWORK_HAS_CONTROL_OF_NETWORK_ID(uParam0->f_4[uParam2->f_13]))
				{
					NETWORK::NETWORK_REQUEST_CONTROL_OF_NETWORK_ID(uParam0->f_4[uParam2->f_13]);
				}
				if (!NETWORK::NETWORK_HAS_CONTROL_OF_ENTITY(uParam2->f_27))
				{
					NETWORK::NETWORK_REQUEST_CONTROL_OF_ENTITY(uParam2->f_27);
				}
				if (!NETWORK::NETWORK_HAS_CONTROL_OF_ENTITY(uParam2->f_28))
				{
					NETWORK::NETWORK_REQUEST_CONTROL_OF_ENTITY(uParam2->f_28);
				}
			}
			else if (TASK::IS_TASK_MOVE_NETWORK_ACTIVE(PLAYER::PLAYER_PED_ID()))
			{
				TASK::SET_TASK_MOVE_NETWORK_SIGNAL_FLOAT(PLAYER::PLAYER_PED_ID(), "SHAKE_INTENSITY", uParam2->f_10);
				TASK::SET_TASK_MOVE_NETWORK_SIGNAL_FLOAT(PLAYER::PLAYER_PED_ID(), "HORIZONTAL_AIM", uParam2->f_8);
				TASK::SET_TASK_MOVE_NETWORK_SIGNAL_FLOAT(PLAYER::PLAYER_PED_ID(), "VERTICLE_AIM", uParam2->f_7);
				if (ENTITY::HAS_ANIM_EVENT_FIRED(PLAYER::PLAYER_PED_ID(), MISC::GET_HASH_KEY("Swap_Bottle_Open")))
				{
					if (__LIB_0__::func_121(uParam2->f_27) && __LIB_0__::func_121(PLAYER::PLAYER_PED_ID()))
					{
						__LIB_0__::func_795(&(uParam2->f_108), 0, 0);
						ENTITY::SET_ENTITY_VISIBLE(uParam2->f_27, true, false);
					}
				}
				if (__LIB_0__::func_121(uParam2->f_28) && __LIB_0__::func_864(&(uParam2->f_108)))
				{
					if (__LIB_0__::func_937(&(uParam2->f_108), 500, 0))
					{
						ENTITY::SET_ENTITY_VISIBLE(uParam2->f_28, false, false);
						__LIB_0__::func_794(&(uParam2->f_108));
					}
				}
				STREAMING::REQUEST_NAMED_PTFX_ASSET("scr_ba_club");
				if (STREAMING::HAS_NAMED_PTFX_ASSET_LOADED("scr_ba_club"))
				{
					if (!GRAPHICS::DOES_PARTICLE_FX_LOOPED_EXIST(uParam2->f_136[PLAYER::PLAYER_ID()]))
					{
						if (ENTITY::IS_ENTITY_ATTACHED_TO_ANY_PED(uParam2->f_27) && ENTITY::DOES_ENTITY_HAVE_DRAWABLE(uParam2->f_27))
						{
							GRAPHICS::USE_PARTICLE_FX_ASSET("scr_ba_club");
							uParam2->f_136[PLAYER::PLAYER_ID()] = GRAPHICS::START_PARTICLE_FX_LOOPED_ON_ENTITY_BONE("scr_ba_club_champagne_spray", uParam2->f_27, 0f, 0f, 0f, 0f, 0f, 0f, ENTITY::GET_ENTITY_BONE_INDEX_BY_NAME(uParam2->f_27, "VFX"), 1f, false, false, false);
							MISC::SET_BIT(uParam1[PLAYER::PLAYER_ID() /*2*/], (uParam2->f_21 - 6));
						}
					}
					else
					{
						fVar14 = (SYSTEM::TO_FLOAT(__LIB_1__::func_724(&(uParam2->f_35[PLAYER::PLAYER_ID() /*2*/]), 0, 0)) / SYSTEM::TO_FLOAT(__LIB_9__::func_386(uParam2)));
						if (fVar14 < 0f)
						{
							fVar14 = 0f;
						}
						else if (fVar14 > 1f)
						{
							fVar14 = 1f;
						}
						GRAPHICS::SET_PARTICLE_FX_LOOPED_EVOLUTION(uParam2->f_136[PLAYER::PLAYER_ID()], "fade", fVar14, false);
					}
				}
				if (iVar13 && TASK::IS_TASK_MOVE_NETWORK_READY_FOR_TRANSITION(PLAYER::PLAYER_PED_ID()))
				{
					if (TASK::REQUEST_TASK_MOVE_NETWORK_STATE_TRANSITION(PLAYER::PLAYER_PED_ID(), "Outro"))
					{
						if (__LIB_0__::func_864(&(uParam2->f_100)))
						{
						}
						__LIB_0__::func_794(&(uParam2->f_100));
						__LIB_0__::func_794(&(uParam2->f_35[PLAYER::PLAYER_ID() /*2*/]));
						__LIB_0__::func_627(&(uParam2->f_102), 0, 0);
						HUD::CLEAR_HELP(true);
						if (GRAPHICS::DOES_PARTICLE_FX_LOOPED_EXIST(uParam2->f_136[PLAYER::PLAYER_ID()]))
						{
							GRAPHICS::STOP_PARTICLE_FX_LOOPED(uParam2->f_136[PLAYER::PLAYER_ID()], false);
							(*uParam1)[PLAYER::PLAYER_ID() /*2*/] = 0;
						}
						__LIB_9__::func_408(uParam2, 20);
					}
				}
			}
			break;
		case 20:
			PAD::DISABLE_CONTROL_ACTION(2 /*FRONTEND_CONTROL*/, 200 /*INPUT_FRONTEND_PAUSE_ALTERNATE*/, true);
			PAD::DISABLE_CONTROL_ACTION(2 /*FRONTEND_CONTROL*/, 199 /*INPUT_FRONTEND_PAUSE*/, true);
			if ((!NETWORK::NETWORK_HAS_CONTROL_OF_NETWORK_ID(uParam0->f_4[uParam2->f_13]) || !NETWORK::NETWORK_HAS_CONTROL_OF_ENTITY(uParam2->f_27)) || !NETWORK::NETWORK_HAS_CONTROL_OF_ENTITY(uParam2->f_28))
			{
				if (!NETWORK::NETWORK_HAS_CONTROL_OF_NETWORK_ID(uParam0->f_4[uParam2->f_13]))
				{
					NETWORK::NETWORK_REQUEST_CONTROL_OF_NETWORK_ID(uParam0->f_4[uParam2->f_13]);
				}
				if (!NETWORK::NETWORK_HAS_CONTROL_OF_ENTITY(uParam2->f_27))
				{
					NETWORK::NETWORK_REQUEST_CONTROL_OF_ENTITY(uParam2->f_27);
				}
				if (!NETWORK::NETWORK_HAS_CONTROL_OF_ENTITY(uParam2->f_28))
				{
					NETWORK::NETWORK_REQUEST_CONTROL_OF_ENTITY(uParam2->f_28);
				}
			}
			else if (TASK::IS_TASK_MOVE_NETWORK_ACTIVE(PLAYER::PLAYER_PED_ID()))
			{
				TASK::SET_TASK_MOVE_NETWORK_SIGNAL_FLOAT(PLAYER::PLAYER_PED_ID(), "SHAKE_INTENSITY", uParam2->f_10);
				TASK::SET_TASK_MOVE_NETWORK_SIGNAL_FLOAT(PLAYER::PLAYER_PED_ID(), "HORIZONTAL_AIM", uParam2->f_8);
				TASK::SET_TASK_MOVE_NETWORK_SIGNAL_FLOAT(PLAYER::PLAYER_PED_ID(), "VERTICLE_AIM", uParam2->f_7);
				if (ENTITY::HAS_ANIM_EVENT_FIRED(PLAYER::PLAYER_PED_ID(), MISC::GET_HASH_KEY("BottleDetach")))
				{
					if (ENTITY::IS_ENTITY_ATTACHED_TO_ANY_PED(uParam2->f_27))
					{
						ENTITY::DETACH_ENTITY(uParam2->f_27, true, true);
						ENTITY::SET_ENTITY_COORDS_NO_OFFSET(uParam2->f_27, PED::GET_ANIM_INITIAL_OFFSET_POSITION(func_1201(), "Bartender_Outro_Bottle", func_30(uParam2->f_13), func_26(uParam2->f_13), 0.01f, 2), false, false, true);
						ENTITY::SET_ENTITY_ROTATION(uParam2->f_27, PED::GET_ANIM_INITIAL_OFFSET_ROTATION(func_1201(), "Bartender_Outro_Bottle", func_30(uParam2->f_13), func_26(uParam2->f_13), 0.01f, 2), 2, true);
						ENTITY::FREEZE_ENTITY_POSITION(uParam2->f_27, true);
					}
					if (ENTITY::IS_ENTITY_ATTACHED_TO_ANY_PED(uParam2->f_28))
					{
						ENTITY::DETACH_ENTITY(uParam2->f_28, true, true);
						ENTITY::SET_ENTITY_COORDS_NO_OFFSET(uParam2->f_28, PED::GET_ANIM_INITIAL_OFFSET_POSITION(func_1201(), "Bartender_Outro_Bottle", func_30(uParam2->f_13), func_26(uParam2->f_13), 0.01f, 2), false, false, true);
						ENTITY::SET_ENTITY_ROTATION(uParam2->f_28, PED::GET_ANIM_INITIAL_OFFSET_ROTATION(func_1201(), "Bartender_Outro_Bottle", func_30(uParam2->f_13), func_26(uParam2->f_13), 0.01f, 2), 2, true);
						ENTITY::FREEZE_ENTITY_POSITION(uParam2->f_28, true);
					}
				}
				if (TASK::IS_TASK_MOVE_NETWORK_ACTIVE(PLAYER::PLAYER_PED_ID()) && TASK::GET_TASK_MOVE_NETWORK_EVENT(PLAYER::PLAYER_PED_ID(), "OutroFinished"))
				{
					if (__LIB_0__::func_864(&(uParam2->f_102)))
					{
					}
					if (GRAPHICS::DOES_PARTICLE_FX_LOOPED_EXIST(uParam2->f_136[PLAYER::PLAYER_ID()]))
					{
						GRAPHICS::STOP_PARTICLE_FX_LOOPED(uParam2->f_136[PLAYER::PLAYER_ID()], false);
						(*uParam1)[PLAYER::PLAYER_ID() /*2*/] = 0;
					}
					__LIB_0__::func_794(&(uParam2->f_102));
					__LIB_6__::func_999(PLAYER::PLAYER_PED_ID(), 0, __LIB_9__::func_391(uParam2->f_21));
					__LIB_11__::func_281(0, PLAYER::PLAYER_PED_ID(), "", joaat("XPTYPE_ACTION"), joaat("XPCATEGORY_CHAMPAGNE_MINIGAME"), __LIB_9__::func_385(uParam2->f_21), 1, -1, 0, 0, 3000);
					if (__LIB_1__::func_35())
					{
						STATS::PLAYSTATS_MINIGAME_USAGE(2, 600858684, 0);
					}
					else if (__LIB_2__::func_884(PLAYER::PLAYER_ID()))
					{
						STATS::PLAYSTATS_MINIGAME_USAGE(2, -1056724987, 0);
					}
					else
					{
						STATS::PLAYSTATS_MINIGAME_USAGE(2, 0, 0);
					}
					MISC::SET_BIT(&(uParam2->f_11), 2);
					if (ENTITY::IS_ENTITY_ATTACHED_TO_ANY_PED(uParam2->f_27))
					{
						ENTITY::DETACH_ENTITY(uParam2->f_27, true, true);
						ENTITY::SET_ENTITY_COORDS_NO_OFFSET(uParam2->f_27, PED::GET_ANIM_INITIAL_OFFSET_POSITION(func_1201(), "Bartender_Outro_Bottle", func_30(uParam2->f_13), func_26(uParam2->f_13), 0.01f, 2), false, false, true);
						ENTITY::SET_ENTITY_ROTATION(uParam2->f_27, PED::GET_ANIM_INITIAL_OFFSET_ROTATION(func_1201(), "Bartender_Outro_Bottle", func_30(uParam2->f_13), func_26(uParam2->f_13), 0.01f, 2), 2, true);
						ENTITY::FREEZE_ENTITY_POSITION(uParam2->f_27, true);
					}
					if (ENTITY::IS_ENTITY_ATTACHED_TO_ANY_PED(uParam2->f_28))
					{
						ENTITY::DETACH_ENTITY(uParam2->f_28, true, true);
						ENTITY::SET_ENTITY_COORDS_NO_OFFSET(uParam2->f_28, PED::GET_ANIM_INITIAL_OFFSET_POSITION(func_1201(), "Bartender_Outro_Bottle", func_30(uParam2->f_13), func_26(uParam2->f_13), 0.01f, 2), false, false, true);
						ENTITY::SET_ENTITY_ROTATION(uParam2->f_28, PED::GET_ANIM_INITIAL_OFFSET_ROTATION(func_1201(), "Bartender_Outro_Bottle", func_30(uParam2->f_13), func_26(uParam2->f_13), 0.01f, 2), 2, true);
						ENTITY::FREEZE_ENTITY_POSITION(uParam2->f_28, true);
					}
					TASK::CLEAR_PED_TASKS(PLAYER::PLAYER_PED_ID());
					__LIB_9__::func_408(uParam2, 21);
				}
			}
			break;
		case 21:
			if ((!NETWORK::NETWORK_HAS_CONTROL_OF_NETWORK_ID(uParam0->f_4[uParam2->f_13]) || !NETWORK::NETWORK_HAS_CONTROL_OF_ENTITY(uParam2->f_27)) || !NETWORK::NETWORK_HAS_CONTROL_OF_ENTITY(uParam2->f_28))
			{
				if (!NETWORK::NETWORK_HAS_CONTROL_OF_NETWORK_ID(uParam0->f_4[uParam2->f_13]))
				{
					NETWORK::NETWORK_REQUEST_CONTROL_OF_NETWORK_ID(uParam0->f_4[uParam2->f_13]);
				}
				if (!NETWORK::NETWORK_HAS_CONTROL_OF_ENTITY(uParam2->f_27))
				{
					NETWORK::NETWORK_REQUEST_CONTROL_OF_ENTITY(uParam2->f_27);
				}
				if (!NETWORK::NETWORK_HAS_CONTROL_OF_ENTITY(uParam2->f_28))
				{
					NETWORK::NETWORK_REQUEST_CONTROL_OF_ENTITY(uParam2->f_28);
				}
			}
			else if (!PED::IS_PED_INJURED(NETWORK::NET_TO_PED(uParam0->f_4[uParam2->f_13])))
			{
				uParam2->f_15 = NETWORK::NETWORK_CREATE_SYNCHRONISED_SCENE(func_30(uParam2->f_13), func_26(uParam2->f_13), 2, true, false, 1f, 0f, 1f);
				NETWORK::NETWORK_ADD_PED_TO_SYNCHRONISED_SCENE(NETWORK::NET_TO_PED(uParam0->f_4[uParam2->f_13]), uParam2->f_15, func_1201(), "Bartender_Outro", 2f, -2f, 13, 16, 2f, 0);
				NETWORK::NETWORK_ADD_ENTITY_TO_SYNCHRONISED_SCENE(uParam2->f_27, uParam2->f_15, func_1201(), "Bartender_Outro_Bottle", 2f, -2f, 13);
				NETWORK::NETWORK_ADD_ENTITY_TO_SYNCHRONISED_SCENE(uParam2->f_28, uParam2->f_15, func_1201(), "Bartender_Outro_Bottle", 2f, -2f, 13);
				NETWORK::NETWORK_START_SYNCHRONISED_SCENE(uParam2->f_15);
				__LIB_1__::func_376(PLAYER::PLAYER_ID(), 1, 0, 0);
				func_1193(uParam2);
				__LIB_9__::func_408(uParam2, 22);
			}
			break;
		case 22:
			if ((!NETWORK::NETWORK_HAS_CONTROL_OF_NETWORK_ID(uParam0->f_4[uParam2->f_13]) || !NETWORK::NETWORK_HAS_CONTROL_OF_ENTITY(uParam2->f_27)) || !NETWORK::NETWORK_HAS_CONTROL_OF_ENTITY(uParam2->f_28))
			{
				if (!NETWORK::NETWORK_HAS_CONTROL_OF_NETWORK_ID(uParam0->f_4[uParam2->f_13]))
				{
					NETWORK::NETWORK_REQUEST_CONTROL_OF_NETWORK_ID(uParam0->f_4[uParam2->f_13]);
				}
				if (!NETWORK::NETWORK_HAS_CONTROL_OF_ENTITY(uParam2->f_27))
				{
					NETWORK::NETWORK_REQUEST_CONTROL_OF_ENTITY(uParam2->f_27);
				}
				if (!NETWORK::NETWORK_HAS_CONTROL_OF_ENTITY(uParam2->f_28))
				{
					NETWORK::NETWORK_REQUEST_CONTROL_OF_ENTITY(uParam2->f_28);
				}
			}
			else
			{
				iVar8 = NETWORK::NETWORK_GET_LOCAL_SCENE_FROM_NETWORK_ID(uParam2->f_15);
				if (iVar8 == -1 || PED::GET_SYNCHRONIZED_SCENE_PHASE(iVar8) >= 0.99f)
				{
					if (GRAPHICS::DOES_PARTICLE_FX_LOOPED_EXIST(uParam2->f_136[PLAYER::PLAYER_ID()]))
					{
						GRAPHICS::STOP_PARTICLE_FX_LOOPED(uParam2->f_136[PLAYER::PLAYER_ID()], false);
						(*uParam1)[PLAYER::PLAYER_ID() /*2*/] = 0;
					}
					if (NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(uParam0->f_4[uParam2->f_13]))
					{
						uParam2->f_15 = NETWORK::NETWORK_CREATE_SYNCHRONISED_SCENE(func_30(uParam2->f_13), func_26(uParam2->f_13), 2, false, true, 1f, 0f, 1f);
						NETWORK::NETWORK_ADD_PED_TO_SYNCHRONISED_SCENE(NETWORK::NET_TO_PED(uParam0->f_4[uParam2->f_13]), uParam2->f_15, func_1201(), "Bartender_Idle", 2f, -2f, 13, 16, 2f, 0);
						NETWORK::NETWORK_START_SYNCHRONISED_SCENE(uParam2->f_15);
					}
					__LIB_9__::func_408(uParam2, 27);
				}
			}
			break;
		case 23:
			STREAMING::REQUEST_ANIM_DICT(__LIB_9__::func_384());
			if (!STREAMING::HAS_ANIM_DICT_LOADED(__LIB_9__::func_384()))
			{
				return;
			}
			STREAMING::REQUEST_ANIM_DICT(__LIB_9__::func_383(__LIB_9__::func_398(PLAYER::PLAYER_PED_ID())));
			if (!STREAMING::HAS_ANIM_DICT_LOADED(__LIB_9__::func_383(__LIB_9__::func_398(PLAYER::PLAYER_PED_ID()))))
			{
				return;
			}
			if (!ENTITY::DOES_ENTITY_EXIST(uParam2->f_24))
			{
				func_1609(uParam2, uParam2->f_13);
				return;
			}
			if (!ENTITY::DOES_ENTITY_EXIST(uParam2->f_25))
			{
				func_1605(uParam2, uParam2->f_13);
				return;
			}
			if (!ENTITY::DOES_ENTITY_EXIST(uParam2->f_29))
			{
				func_1601(uParam2, uParam2->f_13);
				return;
			}
			if (!ENTITY::DOES_ENTITY_EXIST(uParam2->f_31))
			{
				func_1597(uParam2, uParam2->f_13);
				return;
			}
			if (!ENTITY::DOES_ENTITY_EXIST(uParam2->f_30))
			{
				func_1593(uParam2, uParam2->f_13);
				return;
			}
			if (((((!NETWORK::NETWORK_HAS_CONTROL_OF_NETWORK_ID(uParam0->f_4[uParam2->f_13]) || !NETWORK::NETWORK_HAS_CONTROL_OF_ENTITY(uParam2->f_24)) || !NETWORK::NETWORK_HAS_CONTROL_OF_ENTITY(uParam2->f_25)) || !NETWORK::NETWORK_HAS_CONTROL_OF_ENTITY(uParam2->f_29)) || !NETWORK::NETWORK_HAS_CONTROL_OF_ENTITY(uParam2->f_31)) || !NETWORK::NETWORK_HAS_CONTROL_OF_ENTITY(uParam2->f_30))
			{
				if (!NETWORK::NETWORK_HAS_CONTROL_OF_NETWORK_ID(uParam0->f_4[uParam2->f_13]))
				{
					NETWORK::NETWORK_REQUEST_CONTROL_OF_NETWORK_ID(uParam0->f_4[uParam2->f_13]);
				}
				if (!NETWORK::NETWORK_HAS_CONTROL_OF_ENTITY(uParam2->f_24))
				{
					NETWORK::NETWORK_REQUEST_CONTROL_OF_ENTITY(uParam2->f_24);
				}
				if (!NETWORK::NETWORK_HAS_CONTROL_OF_ENTITY(uParam2->f_25))
				{
					NETWORK::NETWORK_REQUEST_CONTROL_OF_ENTITY(uParam2->f_25);
				}
				if (!NETWORK::NETWORK_HAS_CONTROL_OF_ENTITY(uParam2->f_29))
				{
					NETWORK::NETWORK_REQUEST_CONTROL_OF_ENTITY(uParam2->f_29);
				}
				if (!NETWORK::NETWORK_HAS_CONTROL_OF_ENTITY(uParam2->f_31))
				{
					NETWORK::NETWORK_REQUEST_CONTROL_OF_ENTITY(uParam2->f_31);
				}
				if (!NETWORK::NETWORK_HAS_CONTROL_OF_ENTITY(uParam2->f_30))
				{
					NETWORK::NETWORK_REQUEST_CONTROL_OF_ENTITY(uParam2->f_30);
				}
			}
			else if ((!PED::IS_PED_INJURED(NETWORK::NET_TO_PED(uParam0->f_4[uParam2->f_13])) && !PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID())) && AUDIO::REQUEST_SCRIPT_AUDIO_BANK("DLC_HEI4/DLC_HEI4_Anims_Tequila", false, -1))
			{
				uParam2->f_15 = NETWORK::NETWORK_CREATE_SYNCHRONISED_SCENE(func_30(uParam2->f_13), func_26(uParam2->f_13), 2, true, false, 1f, 0f, 1f);
				NETWORK::NETWORK_ADD_PED_TO_SYNCHRONISED_SCENE(NETWORK::NET_TO_PED(uParam0->f_4[uParam2->f_13]), uParam2->f_15, __LIB_9__::func_384(), "intro_bartender", 2f, -2f, 13, 16, 2f, 0);
				NETWORK::NETWORK_ADD_ENTITY_TO_SYNCHRONISED_SCENE(uParam2->f_24, uParam2->f_15, __LIB_9__::func_384(), "intro_shotglass", 1000f, -1000f, 13);
				NETWORK::NETWORK_ADD_ENTITY_TO_SYNCHRONISED_SCENE(uParam2->f_25, uParam2->f_15, __LIB_9__::func_384(), "intro_tequila_bottle", 1000f, -1000f, 13);
				NETWORK::NETWORK_ADD_ENTITY_TO_SYNCHRONISED_SCENE(uParam2->f_29, uParam2->f_15, __LIB_9__::func_384(), "intro_tray", 1000f, -1000f, 13);
				NETWORK::NETWORK_ADD_ENTITY_TO_SYNCHRONISED_SCENE(uParam2->f_31, uParam2->f_15, __LIB_9__::func_384(), "intro_lime", 1000f, -1000f, 13);
				NETWORK::NETWORK_ADD_ENTITY_TO_SYNCHRONISED_SCENE(uParam2->f_30, uParam2->f_15, __LIB_9__::func_384(), "intro_saltshaker", 1000f, -1000f, 13);
				NETWORK::NETWORK_START_SYNCHRONISED_SCENE(uParam2->f_15);
				__LIB_9__::func_408(uParam2, 24);
			}
			break;
		case 24:
			if (((((!NETWORK::NETWORK_HAS_CONTROL_OF_NETWORK_ID(uParam0->f_4[uParam2->f_13]) || !NETWORK::NETWORK_HAS_CONTROL_OF_ENTITY(uParam2->f_24)) || !NETWORK::NETWORK_HAS_CONTROL_OF_ENTITY(uParam2->f_25)) || !NETWORK::NETWORK_HAS_CONTROL_OF_ENTITY(uParam2->f_29)) || !NETWORK::NETWORK_HAS_CONTROL_OF_ENTITY(uParam2->f_31)) || !NETWORK::NETWORK_HAS_CONTROL_OF_ENTITY(uParam2->f_30))
			{
				if (!NETWORK::NETWORK_HAS_CONTROL_OF_NETWORK_ID(uParam0->f_4[uParam2->f_13]))
				{
					NETWORK::NETWORK_REQUEST_CONTROL_OF_NETWORK_ID(uParam0->f_4[uParam2->f_13]);
				}
				if (!NETWORK::NETWORK_HAS_CONTROL_OF_ENTITY(uParam2->f_24))
				{
					NETWORK::NETWORK_REQUEST_CONTROL_OF_ENTITY(uParam2->f_24);
				}
				if (!NETWORK::NETWORK_HAS_CONTROL_OF_ENTITY(uParam2->f_25))
				{
					NETWORK::NETWORK_REQUEST_CONTROL_OF_ENTITY(uParam2->f_25);
				}
				if (!NETWORK::NETWORK_HAS_CONTROL_OF_ENTITY(uParam2->f_29))
				{
					NETWORK::NETWORK_REQUEST_CONTROL_OF_ENTITY(uParam2->f_29);
				}
				if (!NETWORK::NETWORK_HAS_CONTROL_OF_ENTITY(uParam2->f_31))
				{
					NETWORK::NETWORK_REQUEST_CONTROL_OF_ENTITY(uParam2->f_31);
				}
				if (!NETWORK::NETWORK_HAS_CONTROL_OF_ENTITY(uParam2->f_30))
				{
					NETWORK::NETWORK_REQUEST_CONTROL_OF_ENTITY(uParam2->f_30);
				}
			}
			else
			{
				iVar8 = NETWORK::NETWORK_GET_LOCAL_SCENE_FROM_NETWORK_ID(uParam2->f_15);
				if (iVar8 == -1 || PED::GET_SYNCHRONIZED_SCENE_PHASE(iVar8) >= 0.99f)
				{
					if (((((NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(uParam0->f_4[uParam2->f_13]) && ENTITY::DOES_ENTITY_EXIST(uParam2->f_25)) && ENTITY::DOES_ENTITY_EXIST(uParam2->f_24)) && ENTITY::DOES_ENTITY_EXIST(uParam2->f_29)) && ENTITY::DOES_ENTITY_EXIST(uParam2->f_31)) && ENTITY::DOES_ENTITY_EXIST(uParam2->f_30))
					{
						uParam2->f_15 = NETWORK::NETWORK_CREATE_SYNCHRONISED_SCENE(func_30(uParam2->f_13), func_26(uParam2->f_13), 2, true, false, 1f, 0f, 1f);
						NETWORK::NETWORK_ADD_PED_TO_SYNCHRONISED_SCENE(NETWORK::NET_TO_PED(uParam0->f_4[uParam2->f_13]), uParam2->f_15, __LIB_9__::func_383(__LIB_9__::func_398(PLAYER::PLAYER_PED_ID())), __LIB_9__::func_395(uParam2->f_13, __LIB_9__::func_398(PLAYER::PLAYER_PED_ID())), 2f, -2f, 13, 16, 2f, 0);
						NETWORK::NETWORK_ADD_PED_TO_SYNCHRONISED_SCENE(PLAYER::PLAYER_PED_ID(), uParam2->f_15, __LIB_9__::func_383(__LIB_9__::func_398(PLAYER::PLAYER_PED_ID())), __LIB_9__::func_394(uParam2->f_13, __LIB_9__::func_398(PLAYER::PLAYER_PED_ID())), 2f, -2f, 13, 16, 2f, 0);
						NETWORK::NETWORK_ADD_ENTITY_TO_SYNCHRONISED_SCENE(uParam2->f_24, uParam2->f_15, __LIB_9__::func_383(__LIB_9__::func_398(PLAYER::PLAYER_PED_ID())), __LIB_9__::func_377(__LIB_9__::func_398(PLAYER::PLAYER_PED_ID())), 1000f, -1000f, 13);
						NETWORK::NETWORK_ADD_ENTITY_TO_SYNCHRONISED_SCENE(uParam2->f_25, uParam2->f_15, __LIB_9__::func_383(__LIB_9__::func_398(PLAYER::PLAYER_PED_ID())), __LIB_9__::func_376(__LIB_9__::func_398(PLAYER::PLAYER_PED_ID())), 1000f, -1000f, 13);
						NETWORK::NETWORK_ADD_ENTITY_TO_SYNCHRONISED_SCENE(uParam2->f_29, uParam2->f_15, __LIB_9__::func_383(__LIB_9__::func_398(PLAYER::PLAYER_PED_ID())), __LIB_9__::func_375(__LIB_9__::func_398(PLAYER::PLAYER_PED_ID())), 1000f, -1000f, 13);
						NETWORK::NETWORK_ADD_ENTITY_TO_SYNCHRONISED_SCENE(uParam2->f_31, uParam2->f_15, __LIB_9__::func_383(__LIB_9__::func_398(PLAYER::PLAYER_PED_ID())), __LIB_9__::func_374(__LIB_9__::func_398(PLAYER::PLAYER_PED_ID())), 1000f, -1000f, 13);
						NETWORK::NETWORK_ADD_ENTITY_TO_SYNCHRONISED_SCENE(uParam2->f_30, uParam2->f_15, __LIB_9__::func_383(__LIB_9__::func_398(PLAYER::PLAYER_PED_ID())), __LIB_9__::func_373(__LIB_9__::func_398(PLAYER::PLAYER_PED_ID())), 1000f, -1000f, 13);
						NETWORK::NETWORK_START_SYNCHRONISED_SCENE(uParam2->f_15);
						__LIB_9__::func_408(uParam2, 25);
					}
				}
			}
			break;
		case 25:
			CAM::SET_GAMEPLAY_CAM_IGNORE_ENTITY_COLLISION_THIS_UPDATE(uParam2->f_24);
			CAM::SET_GAMEPLAY_CAM_IGNORE_ENTITY_COLLISION_THIS_UPDATE(uParam2->f_31);
			if (((((!NETWORK::NETWORK_HAS_CONTROL_OF_NETWORK_ID(uParam0->f_4[uParam2->f_13]) || !NETWORK::NETWORK_HAS_CONTROL_OF_ENTITY(uParam2->f_24)) || !NETWORK::NETWORK_HAS_CONTROL_OF_ENTITY(uParam2->f_25)) || !NETWORK::NETWORK_HAS_CONTROL_OF_ENTITY(uParam2->f_29)) || !NETWORK::NETWORK_HAS_CONTROL_OF_ENTITY(uParam2->f_31)) || !NETWORK::NETWORK_HAS_CONTROL_OF_ENTITY(uParam2->f_30))
			{
				if (!NETWORK::NETWORK_HAS_CONTROL_OF_NETWORK_ID(uParam0->f_4[uParam2->f_13]))
				{
					NETWORK::NETWORK_REQUEST_CONTROL_OF_NETWORK_ID(uParam0->f_4[uParam2->f_13]);
				}
				if (!NETWORK::NETWORK_HAS_CONTROL_OF_ENTITY(uParam2->f_24))
				{
					NETWORK::NETWORK_REQUEST_CONTROL_OF_ENTITY(uParam2->f_24);
				}
				if (!NETWORK::NETWORK_HAS_CONTROL_OF_ENTITY(uParam2->f_25))
				{
					NETWORK::NETWORK_REQUEST_CONTROL_OF_ENTITY(uParam2->f_25);
				}
				if (!NETWORK::NETWORK_HAS_CONTROL_OF_ENTITY(uParam2->f_29))
				{
					NETWORK::NETWORK_REQUEST_CONTROL_OF_ENTITY(uParam2->f_29);
				}
				if (!NETWORK::NETWORK_HAS_CONTROL_OF_ENTITY(uParam2->f_31))
				{
					NETWORK::NETWORK_REQUEST_CONTROL_OF_ENTITY(uParam2->f_31);
				}
				if (!NETWORK::NETWORK_HAS_CONTROL_OF_ENTITY(uParam2->f_30))
				{
					NETWORK::NETWORK_REQUEST_CONTROL_OF_ENTITY(uParam2->f_30);
				}
			}
			else
			{
				iVar8 = NETWORK::NETWORK_GET_LOCAL_SCENE_FROM_NETWORK_ID(uParam2->f_15);
				if (iVar8 == -1 || PED::GET_SYNCHRONIZED_SCENE_PHASE(iVar8) >= 0.99f)
				{
					if (((((NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(uParam0->f_4[uParam2->f_13]) && ENTITY::DOES_ENTITY_EXIST(uParam2->f_25)) && ENTITY::DOES_ENTITY_EXIST(uParam2->f_24)) && ENTITY::DOES_ENTITY_EXIST(uParam2->f_29)) && ENTITY::DOES_ENTITY_EXIST(uParam2->f_31)) && ENTITY::DOES_ENTITY_EXIST(uParam2->f_30))
					{
						uParam2->f_15 = NETWORK::NETWORK_CREATE_SYNCHRONISED_SCENE(func_30(uParam2->f_13), func_26(uParam2->f_13), 2, true, false, 1f, 0f, 1f);
						NETWORK::NETWORK_ADD_PED_TO_SYNCHRONISED_SCENE(NETWORK::NET_TO_PED(uParam0->f_4[uParam2->f_13]), uParam2->f_15, __LIB_9__::func_384(), "outro_bartender", 2f, -2f, 13, 16, 2f, 0);
						NETWORK::NETWORK_ADD_ENTITY_TO_SYNCHRONISED_SCENE(uParam2->f_24, uParam2->f_15, __LIB_9__::func_384(), "outro_shotglass", 1000f, -1000f, 13);
						NETWORK::NETWORK_ADD_ENTITY_TO_SYNCHRONISED_SCENE(uParam2->f_25, uParam2->f_15, __LIB_9__::func_384(), "outro_tequila_bottle", 1000f, -1000f, 13);
						NETWORK::NETWORK_ADD_ENTITY_TO_SYNCHRONISED_SCENE(uParam2->f_29, uParam2->f_15, __LIB_9__::func_384(), "outro_tray", 1000f, -1000f, 13);
						NETWORK::NETWORK_ADD_ENTITY_TO_SYNCHRONISED_SCENE(uParam2->f_31, uParam2->f_15, __LIB_9__::func_384(), "outro_lime", 1000f, -1000f, 13);
						NETWORK::NETWORK_ADD_ENTITY_TO_SYNCHRONISED_SCENE(uParam2->f_30, uParam2->f_15, __LIB_9__::func_384(), "outro_saltshaker", 1000f, -1000f, 13);
						NETWORK::NETWORK_START_SYNCHRONISED_SCENE(uParam2->f_15);
						__LIB_1__::func_376(PLAYER::PLAYER_ID(), 1, 0, 0);
						MISC::CLEAR_BIT(&(Global_1946250.f_4), 0);
						__LIB_6__::func_999(PLAYER::PLAYER_PED_ID(), 0, 3);
						func_1193(uParam2);
						__LIB_9__::func_408(uParam2, 26);
					}
				}
			}
			break;
		case 26:
			if (((((!NETWORK::NETWORK_HAS_CONTROL_OF_NETWORK_ID(uParam0->f_4[uParam2->f_13]) || !NETWORK::NETWORK_HAS_CONTROL_OF_ENTITY(uParam2->f_24)) || !NETWORK::NETWORK_HAS_CONTROL_OF_ENTITY(uParam2->f_25)) || !NETWORK::NETWORK_HAS_CONTROL_OF_ENTITY(uParam2->f_29)) || !NETWORK::NETWORK_HAS_CONTROL_OF_ENTITY(uParam2->f_31)) || !NETWORK::NETWORK_HAS_CONTROL_OF_ENTITY(uParam2->f_30))
			{
				if (!NETWORK::NETWORK_HAS_CONTROL_OF_NETWORK_ID(uParam0->f_4[uParam2->f_13]))
				{
					NETWORK::NETWORK_REQUEST_CONTROL_OF_NETWORK_ID(uParam0->f_4[uParam2->f_13]);
				}
				if (!NETWORK::NETWORK_HAS_CONTROL_OF_ENTITY(uParam2->f_24))
				{
					NETWORK::NETWORK_REQUEST_CONTROL_OF_ENTITY(uParam2->f_24);
				}
				if (!NETWORK::NETWORK_HAS_CONTROL_OF_ENTITY(uParam2->f_25))
				{
					NETWORK::NETWORK_REQUEST_CONTROL_OF_ENTITY(uParam2->f_25);
				}
				if (!NETWORK::NETWORK_HAS_CONTROL_OF_ENTITY(uParam2->f_29))
				{
					NETWORK::NETWORK_REQUEST_CONTROL_OF_ENTITY(uParam2->f_29);
				}
				if (!NETWORK::NETWORK_HAS_CONTROL_OF_ENTITY(uParam2->f_31))
				{
					NETWORK::NETWORK_REQUEST_CONTROL_OF_ENTITY(uParam2->f_31);
				}
				if (!NETWORK::NETWORK_HAS_CONTROL_OF_ENTITY(uParam2->f_30))
				{
					NETWORK::NETWORK_REQUEST_CONTROL_OF_ENTITY(uParam2->f_30);
				}
			}
			else
			{
				iVar8 = NETWORK::NETWORK_GET_LOCAL_SCENE_FROM_NETWORK_ID(uParam2->f_15);
				if (iVar8 == -1 || PED::GET_SYNCHRONIZED_SCENE_PHASE(iVar8) >= 0.99f)
				{
					if (NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(uParam0->f_4[uParam2->f_13]))
					{
						uParam2->f_15 = NETWORK::NETWORK_CREATE_SYNCHRONISED_SCENE(func_30(uParam2->f_13), func_26(uParam2->f_13), 2, false, true, 1f, 0f, 1f);
						NETWORK::NETWORK_ADD_PED_TO_SYNCHRONISED_SCENE(NETWORK::NET_TO_PED(uParam0->f_4[uParam2->f_13]), uParam2->f_15, func_22(uParam2->f_13), "idle_a_bartender", 2f, -2f, 13, 16, 2f, 0);
						NETWORK::NETWORK_START_SYNCHRONISED_SCENE(uParam2->f_15);
					}
					__LIB_9__::func_408(uParam2, 27);
				}
			}
			break;
		case 27:
			bVar15 = true;
			if (ENTITY::DOES_ENTITY_EXIST(uParam2->f_24) && !NETWORK::NETWORK_HAS_CONTROL_OF_ENTITY(uParam2->f_24))
			{
				bVar15 = false;
				NETWORK::NETWORK_REQUEST_CONTROL_OF_ENTITY(uParam2->f_24);
			}
			if (ENTITY::DOES_ENTITY_EXIST(uParam2->f_25) && !NETWORK::NETWORK_HAS_CONTROL_OF_ENTITY(uParam2->f_25))
			{
				bVar15 = false;
				NETWORK::NETWORK_REQUEST_CONTROL_OF_ENTITY(uParam2->f_25);
			}
			if (ENTITY::DOES_ENTITY_EXIST(uParam2->f_26) && !NETWORK::NETWORK_HAS_CONTROL_OF_ENTITY(uParam2->f_26))
			{
				bVar15 = false;
				NETWORK::NETWORK_REQUEST_CONTROL_OF_ENTITY(uParam2->f_26);
			}
			if (ENTITY::DOES_ENTITY_EXIST(uParam2->f_27) && !NETWORK::NETWORK_HAS_CONTROL_OF_ENTITY(uParam2->f_27))
			{
				bVar15 = false;
				NETWORK::NETWORK_REQUEST_CONTROL_OF_ENTITY(uParam2->f_27);
			}
			if (ENTITY::DOES_ENTITY_EXIST(uParam2->f_28) && !NETWORK::NETWORK_HAS_CONTROL_OF_ENTITY(uParam2->f_28))
			{
				bVar15 = false;
				NETWORK::NETWORK_REQUEST_CONTROL_OF_ENTITY(uParam2->f_28);
			}
			if (bVar15)
			{
				func_1190(uParam0, uParam1, uParam2, 1, 0, 0);
			}
			break;
	}
}

void func_1593(var uParam0, int iParam1)//Position - 0xAB765
{
	int iVar0;
	STREAMING::REQUEST_MODEL(__LIB_9__::func_378());
	if (!STREAMING::HAS_MODEL_LOADED(__LIB_9__::func_378()))
	{
		return;
	}
	if (!ENTITY::DOES_ENTITY_EXIST(uParam0->f_30))
	{
		iVar0 = OBJECT::CREATE_OBJECT(__LIB_9__::func_378(), func_1595(iParam1), true, false, false);
		STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(__LIB_9__::func_378());
		ENTITY::SET_ENTITY_CAN_BE_DAMAGED(iVar0, false);
		NETWORK::NETWORK_SET_ENTITY_ONLY_EXISTS_FOR_PARTICIPANTS(iVar0, true);
		ENTITY::SET_ENTITY_CAN_ONLY_BE_DAMAGED_BY_SCRIPT_PARTICIPANTS(iVar0, true);
		ENTITY::SET_ENTITY_COORDS_NO_OFFSET(iVar0, func_1595(iParam1), false, false, true);
		ENTITY::SET_ENTITY_HEADING(iVar0, func_1594(iParam1));
		ENTITY::FREEZE_ENTITY_POSITION(iVar0, true);
		uParam0->f_30 = iVar0;
	}
}

var func_1594(int iParam0)//Position - 0xAB7E8
{
	struct<3> Var0;
	Var0 = { PED::GET_ANIM_INITIAL_OFFSET_ROTATION(__LIB_9__::func_384(), "intro_saltshaker", func_30(iParam0), func_26(iParam0), 0.01f, 2) };
	return Var0.f_2;
}

Vector3 func_1595(int iParam0)//Position - 0xAB817
{
	struct<3> Var0;
	Var0 = { PED::GET_ANIM_INITIAL_OFFSET_POSITION(__LIB_9__::func_384(), "intro_saltshaker", func_30(iParam0), func_26(iParam0), 0f, 2) };
	return Var0;
}

void func_1597(var uParam0, int iParam1)//Position - 0xAB853
{
	int iVar0;
	STREAMING::REQUEST_MODEL(__LIB_9__::func_379());
	if (!STREAMING::HAS_MODEL_LOADED(__LIB_9__::func_379()))
	{
		return;
	}
	if (!ENTITY::DOES_ENTITY_EXIST(uParam0->f_31))
	{
		iVar0 = OBJECT::CREATE_OBJECT(__LIB_9__::func_379(), func_1599(iParam1), true, false, false);
		STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(__LIB_9__::func_379());
		ENTITY::SET_ENTITY_CAN_BE_DAMAGED(iVar0, false);
		NETWORK::NETWORK_SET_ENTITY_ONLY_EXISTS_FOR_PARTICIPANTS(iVar0, true);
		ENTITY::SET_ENTITY_CAN_ONLY_BE_DAMAGED_BY_SCRIPT_PARTICIPANTS(iVar0, true);
		ENTITY::SET_ENTITY_COORDS_NO_OFFSET(iVar0, func_1599(iParam1), false, false, true);
		ENTITY::SET_ENTITY_HEADING(iVar0, func_1598(iParam1));
		ENTITY::FREEZE_ENTITY_POSITION(iVar0, true);
		uParam0->f_31 = iVar0;
	}
}

var func_1598(int iParam0)//Position - 0xAB8D6
{
	struct<3> Var0;
	Var0 = { PED::GET_ANIM_INITIAL_OFFSET_ROTATION(__LIB_9__::func_384(), "intro_lime", func_30(iParam0), func_26(iParam0), 0.01f, 2) };
	return Var0.f_2;
}

Vector3 func_1599(int iParam0)//Position - 0xAB905
{
	struct<3> Var0;
	Var0 = { PED::GET_ANIM_INITIAL_OFFSET_POSITION(__LIB_9__::func_384(), "intro_lime", func_30(iParam0), func_26(iParam0), 0f, 2) };
	return Var0;
}

void func_1601(var uParam0, int iParam1)//Position - 0xAB941
{
	int iVar0;
	STREAMING::REQUEST_MODEL(__LIB_9__::func_380());
	if (!STREAMING::HAS_MODEL_LOADED(__LIB_9__::func_380()))
	{
		return;
	}
	if (!ENTITY::DOES_ENTITY_EXIST(uParam0->f_29))
	{
		iVar0 = OBJECT::CREATE_OBJECT(__LIB_9__::func_380(), func_1603(iParam1), true, false, false);
		STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(__LIB_9__::func_380());
		ENTITY::SET_ENTITY_CAN_BE_DAMAGED(iVar0, false);
		NETWORK::NETWORK_SET_ENTITY_ONLY_EXISTS_FOR_PARTICIPANTS(iVar0, true);
		ENTITY::SET_ENTITY_CAN_ONLY_BE_DAMAGED_BY_SCRIPT_PARTICIPANTS(iVar0, true);
		ENTITY::SET_ENTITY_COORDS_NO_OFFSET(iVar0, func_1603(iParam1), false, false, true);
		ENTITY::SET_ENTITY_HEADING(iVar0, func_1602(iParam1));
		ENTITY::FREEZE_ENTITY_POSITION(iVar0, true);
		uParam0->f_29 = iVar0;
	}
}

var func_1602(int iParam0)//Position - 0xAB9C4
{
	struct<3> Var0;
	Var0 = { PED::GET_ANIM_INITIAL_OFFSET_ROTATION(__LIB_9__::func_384(), "intro_tray", func_30(iParam0), func_26(iParam0), 0.01f, 2) };
	return Var0.f_2;
}

Vector3 func_1603(int iParam0)//Position - 0xAB9F3
{
	struct<3> Var0;
	Var0 = { PED::GET_ANIM_INITIAL_OFFSET_POSITION(__LIB_9__::func_384(), "intro_tray", func_30(iParam0), func_26(iParam0), 0f, 2) };
	return Var0;
}

void func_1605(var uParam0, int iParam1)//Position - 0xABA2F
{
	int iVar0;
	STREAMING::REQUEST_MODEL(__LIB_9__::func_381());
	if (!STREAMING::HAS_MODEL_LOADED(__LIB_9__::func_381()))
	{
		return;
	}
	if (!ENTITY::DOES_ENTITY_EXIST(uParam0->f_25))
	{
		iVar0 = OBJECT::CREATE_OBJECT(__LIB_9__::func_381(), func_1607(iParam1), true, false, false);
		STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(__LIB_9__::func_381());
		ENTITY::SET_ENTITY_CAN_BE_DAMAGED(iVar0, false);
		NETWORK::NETWORK_SET_ENTITY_ONLY_EXISTS_FOR_PARTICIPANTS(iVar0, true);
		ENTITY::SET_ENTITY_CAN_ONLY_BE_DAMAGED_BY_SCRIPT_PARTICIPANTS(iVar0, true);
		ENTITY::SET_ENTITY_COORDS_NO_OFFSET(iVar0, func_1607(iParam1), false, false, true);
		ENTITY::SET_ENTITY_HEADING(iVar0, func_1606(iParam1));
		ENTITY::FREEZE_ENTITY_POSITION(iVar0, true);
		uParam0->f_25 = iVar0;
	}
}

var func_1606(int iParam0)//Position - 0xABAB2
{
	struct<3> Var0;
	Var0 = { PED::GET_ANIM_INITIAL_OFFSET_ROTATION(__LIB_9__::func_384(), "intro_tequila_bottle", func_30(iParam0), func_26(iParam0), 0.01f, 2) };
	return Var0.f_2;
}

Vector3 func_1607(int iParam0)//Position - 0xABAE1
{
	struct<3> Var0;
	Var0 = { PED::GET_ANIM_INITIAL_OFFSET_POSITION(__LIB_9__::func_384(), "intro_tequila_bottle", func_30(iParam0), func_26(iParam0), 0f, 2) };
	return Var0;
}

void func_1609(var uParam0, int iParam1)//Position - 0xABB1D
{
	int iVar0;
	STREAMING::REQUEST_MODEL(__LIB_9__::func_382());
	if (!STREAMING::HAS_MODEL_LOADED(__LIB_9__::func_382()))
	{
		return;
	}
	if (!ENTITY::DOES_ENTITY_EXIST(uParam0->f_24))
	{
		iVar0 = OBJECT::CREATE_OBJECT(__LIB_9__::func_382(), func_1611(iParam1), true, false, false);
		STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(__LIB_9__::func_382());
		ENTITY::SET_ENTITY_CAN_BE_DAMAGED(iVar0, false);
		NETWORK::NETWORK_SET_ENTITY_ONLY_EXISTS_FOR_PARTICIPANTS(iVar0, true);
		ENTITY::SET_ENTITY_CAN_ONLY_BE_DAMAGED_BY_SCRIPT_PARTICIPANTS(iVar0, true);
		ENTITY::SET_ENTITY_COORDS_NO_OFFSET(iVar0, func_1611(iParam1), false, false, true);
		ENTITY::SET_ENTITY_HEADING(iVar0, func_1610(iParam1));
		ENTITY::FREEZE_ENTITY_POSITION(iVar0, true);
		uParam0->f_24 = iVar0;
	}
}

var func_1610(int iParam0)//Position - 0xABBA0
{
	struct<3> Var0;
	Var0 = { PED::GET_ANIM_INITIAL_OFFSET_ROTATION(__LIB_9__::func_384(), "intro_shotglass", func_30(iParam0), func_26(iParam0), 0.01f, 2) };
	return Var0.f_2;
}

Vector3 func_1611(int iParam0)//Position - 0xABBCF
{
	struct<3> Var0;
	Var0 = { PED::GET_ANIM_INITIAL_OFFSET_POSITION(__LIB_9__::func_384(), "intro_shotglass", func_30(iParam0), func_26(iParam0), 0f, 2) };
	return Var0;
}

void func_1619(var uParam0)//Position - 0xABEE6
{
	uParam0->f_32 = func_453(PLAYER::PLAYER_PED_ID(), 1, -1);
	if (__LIB_0__::func_348(ENTITY::GET_ENTITY_MODEL(PLAYER::PLAYER_PED_ID()), 14, func_453(PLAYER::PLAYER_PED_ID(), 14, 0), -1))
	{
		uParam0->f_1 = 1;
	}
	if (__LIB_1__::func_102(PLAYER::PLAYER_PED_ID(), 7))
	{
		uParam0->f_3 = 1;
	}
	func_309(PLAYER::PLAYER_PED_ID(), 1, 0, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
	func_1621(PLAYER::PLAYER_PED_ID(), 4, -1, -1);
	if (__LIB_3__::func_332(PLAYER::PLAYER_PED_ID()))
	{
		__LIB_5__::func_828(PLAYER::PLAYER_PED_ID());
		uParam0->f_2 = 1;
	}
	else
	{
		uParam0->f_2 = 0;
	}
	if (uParam0->f_1)
	{
		PED::CLEAR_PED_PROP(PLAYER::PLAYER_PED_ID(), 0);
	}
	if (uParam0->f_3)
	{
		PED::SET_PED_COMPONENT_VARIATION(PLAYER::PLAYER_PED_ID(), 7, 0, 0, 0);
	}
	MISC::SET_BIT(&(uParam0->f_12), 0);
}

void func_1621(int iParam0, int iParam1, int iParam2, int iParam3)//Position - 0xABFE4
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
	if (__LIB_16__::func_378(iParam0, &Global_78200, iParam1, &iParam3))
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
					func_309(iParam0, 2, __LIB_1__::func_360(2053, Global_78127, 0), 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
				}
				else
				{
					func_309(iParam0, 2, __LIB_1__::func_360(753, Global_78127, 0), 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
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

void func_1633(var uParam0, int iParam1)//Position - 0xB4029
{
	int iVar0;
	STREAMING::REQUEST_MODEL(__LIB_9__::func_389(uParam0));
	if (!STREAMING::HAS_MODEL_LOADED(__LIB_9__::func_389(uParam0)))
	{
		return;
	}
	if (!ENTITY::DOES_ENTITY_EXIST(uParam0->f_28))
	{
		iVar0 = OBJECT::CREATE_OBJECT(__LIB_9__::func_389(uParam0), func_1635(iParam1, 0), true, false, false);
		STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(__LIB_9__::func_389(uParam0));
		ENTITY::SET_ENTITY_CAN_BE_DAMAGED(iVar0, false);
		NETWORK::NETWORK_SET_ENTITY_ONLY_EXISTS_FOR_PARTICIPANTS(iVar0, true);
		ENTITY::SET_ENTITY_CAN_ONLY_BE_DAMAGED_BY_SCRIPT_PARTICIPANTS(iVar0, true);
		ENTITY::SET_ENTITY_COORDS_NO_OFFSET(iVar0, func_1635(iParam1, 0), false, false, true);
		ENTITY::SET_ENTITY_HEADING(iVar0, func_1634(iParam1));
		ENTITY::FREEZE_ENTITY_POSITION(iVar0, true);
		uParam0->f_28 = iVar0;
	}
}

var func_1634(int iParam0)//Position - 0xB40B6
{
	struct<3> Var0;
	Var0 = { PED::GET_ANIM_INITIAL_OFFSET_ROTATION(func_1201(), "Bartender_intro_Bottle", func_30(iParam0), func_26(iParam0), 0.01f, 2) };
	return Var0.f_2;
}

Vector3 func_1635(int iParam0, bool bParam1)//Position - 0xB40E5
{
	struct<3> Var0;
	if (bParam1)
	{
		Var0 = { PED::GET_ANIM_INITIAL_OFFSET_POSITION(func_1201(), "Bartender_intro_Bottle", func_30(iParam0), func_26(iParam0), 0.01f, 2) };
	}
	else if (__LIB_1__::func_783(PLAYER::PLAYER_ID()))
	{
		Var0 = { 1105.8104f, 209.7473f, -50.4406f };
	}
	else if (__LIB_2__::func_885(PLAYER::PLAYER_ID()))
	{
		Var0 = { 945.4659f, 15.4252f, 114.3889f };
	}
	else if (__LIB_2__::func_573(PLAYER::PLAYER_ID()))
	{
		Var0 = { 2721.9604f, -387.5453f, -49.4893f };
	}
	else if (__LIB_2__::func_884(PLAYER::PLAYER_ID()))
	{
		Var0 = { 1567.8774f, 249.7245f, -47.0051f };
	}
	else if (__LIB_1__::func_35())
	{
		Var0 = { 4900.55f, -4940.869f, 2.4131f };
	}
	return Var0;
}

void func_1637(var uParam0, int iParam1)//Position - 0xB4207
{
	int iVar0;
	STREAMING::REQUEST_MODEL(__LIB_9__::func_390(uParam0));
	if (!STREAMING::HAS_MODEL_LOADED(__LIB_9__::func_390(uParam0)))
	{
		return;
	}
	if (!ENTITY::DOES_ENTITY_EXIST(uParam0->f_27))
	{
		iVar0 = OBJECT::CREATE_OBJECT(__LIB_9__::func_390(uParam0), func_1635(iParam1, 1), true, false, false);
		STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(__LIB_9__::func_390(uParam0));
		ENTITY::SET_ENTITY_CAN_BE_DAMAGED(iVar0, false);
		NETWORK::NETWORK_SET_ENTITY_ONLY_EXISTS_FOR_PARTICIPANTS(iVar0, true);
		ENTITY::SET_ENTITY_CAN_ONLY_BE_DAMAGED_BY_SCRIPT_PARTICIPANTS(iVar0, true);
		ENTITY::SET_ENTITY_COORDS_NO_OFFSET(iVar0, func_1635(iParam1, 1), false, false, true);
		ENTITY::SET_ENTITY_HEADING(iVar0, func_1634(iParam1));
		ENTITY::FREEZE_ENTITY_POSITION(iVar0, true);
		ENTITY::SET_ENTITY_VISIBLE(iVar0, false, false);
		uParam0->f_27 = iVar0;
	}
}

void func_1644(var uParam0, int iParam1)//Position - 0xB4675
{
	int iVar0;
	STREAMING::REQUEST_MODEL(__LIB_9__::func_396(uParam0->f_22));
	if (!STREAMING::HAS_MODEL_LOADED(__LIB_9__::func_396(uParam0->f_22)))
	{
		return;
	}
	if (!ENTITY::DOES_ENTITY_EXIST(uParam0->f_25))
	{
		iVar0 = OBJECT::CREATE_OBJECT(__LIB_9__::func_396(uParam0->f_22), func_1646(iParam1), true, false, false);
		STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(__LIB_9__::func_396(uParam0->f_22));
		ENTITY::SET_ENTITY_CAN_BE_DAMAGED(iVar0, false);
		NETWORK::NETWORK_SET_ENTITY_ONLY_EXISTS_FOR_PARTICIPANTS(iVar0, true);
		ENTITY::SET_ENTITY_CAN_ONLY_BE_DAMAGED_BY_SCRIPT_PARTICIPANTS(iVar0, true);
		ENTITY::SET_ENTITY_COORDS_NO_OFFSET(iVar0, func_1646(iParam1), false, false, true);
		ENTITY::SET_ENTITY_HEADING(iVar0, func_1645(iParam1));
		ENTITY::FREEZE_ENTITY_POSITION(iVar0, true);
		uParam0->f_25 = iVar0;
	}
}

var func_1645(int iParam0)//Position - 0xB4708
{
	struct<3> Var0;
	Var0 = { PED::GET_ANIM_INITIAL_OFFSET_ROTATION(func_1200(iParam0), "intro_whiskey", func_30(iParam0), func_26(iParam0), 0f, 2) };
	return Var0.f_2;
}

Vector3 func_1646(int iParam0)//Position - 0xB4735
{
	struct<3> Var0;
	Var0 = { PED::GET_ANIM_INITIAL_OFFSET_POSITION(func_1200(iParam0), "intro_whiskey", func_30(iParam0), func_26(iParam0), 0f, 2) };
	return Var0;
}

void func_1648(var uParam0, int iParam1)//Position - 0xB47C2
{
	int iVar0;
	STREAMING::REQUEST_MODEL(__LIB_9__::func_397(uParam0));
	if (!STREAMING::HAS_MODEL_LOADED(__LIB_9__::func_397(uParam0)))
	{
		return;
	}
	if (!ENTITY::DOES_ENTITY_EXIST(uParam0->f_24))
	{
		iVar0 = OBJECT::CREATE_OBJECT(__LIB_9__::func_397(uParam0), func_1650(iParam1), true, false, false);
		STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(__LIB_9__::func_397(uParam0));
		ENTITY::SET_ENTITY_CAN_BE_DAMAGED(iVar0, false);
		NETWORK::NETWORK_SET_ENTITY_ONLY_EXISTS_FOR_PARTICIPANTS(iVar0, true);
		ENTITY::SET_ENTITY_CAN_ONLY_BE_DAMAGED_BY_SCRIPT_PARTICIPANTS(iVar0, true);
		ENTITY::SET_ENTITY_COORDS_NO_OFFSET(iVar0, func_1650(iParam1), false, false, true);
		ENTITY::SET_ENTITY_HEADING(iVar0, func_1649(iParam1));
		ENTITY::FREEZE_ENTITY_POSITION(iVar0, true);
		uParam0->f_24 = iVar0;
	}
}

var func_1649(int iParam0)//Position - 0xB484D
{
	struct<3> Var0;
	Var0 = { PED::GET_ANIM_INITIAL_OFFSET_ROTATION(func_1200(iParam0), "intro_shot_glass", func_30(iParam0), func_26(iParam0), 0.01f, 2) };
	return Var0.f_2;
}

Vector3 func_1650(int iParam0)//Position - 0xB487E
{
	struct<3> Var0;
	Var0 = { PED::GET_ANIM_INITIAL_OFFSET_POSITION(func_1200(iParam0), "intro_shot_glass", func_30(iParam0), func_26(iParam0), 0f, 2) };
	return Var0;
}

void func_1654(var uParam0, int iParam1)//Position - 0xB496C
{
	int iVar0;
	STREAMING::REQUEST_MODEL(joaat("prop_cs_beer_bot_01"));
	if (!STREAMING::HAS_MODEL_LOADED(joaat("prop_cs_beer_bot_01")))
	{
		return;
	}
	if (!ENTITY::DOES_ENTITY_EXIST(uParam0->f_26))
	{
		iVar0 = OBJECT::CREATE_OBJECT(joaat("prop_cs_beer_bot_01"), func_1656(iParam1), true, false, false);
		STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(joaat("prop_cs_beer_bot_01"));
		ENTITY::SET_ENTITY_CAN_BE_DAMAGED(iVar0, false);
		NETWORK::NETWORK_SET_ENTITY_ONLY_EXISTS_FOR_PARTICIPANTS(iVar0, true);
		ENTITY::SET_ENTITY_CAN_ONLY_BE_DAMAGED_BY_SCRIPT_PARTICIPANTS(iVar0, true);
		ENTITY::SET_ENTITY_COORDS_NO_OFFSET(iVar0, func_1656(iParam1), false, false, true);
		ENTITY::SET_ENTITY_HEADING(iVar0, func_1655(iParam1));
		ENTITY::FREEZE_ENTITY_POSITION(iVar0, true);
		uParam0->f_26 = iVar0;
	}
}

var func_1655(int iParam0)//Position - 0xB49F3
{
	struct<3> Var0;
	Var0 = { PED::GET_ANIM_INITIAL_OFFSET_ROTATION(func_1199(iParam0), "intro_bottle", func_30(iParam0), func_26(iParam0), 0.01f, 2) };
	return Var0.f_2;
}

Vector3 func_1656(int iParam0)//Position - 0xB4A24
{
	struct<3> Var0;
	Var0 = { PED::GET_ANIM_INITIAL_OFFSET_POSITION(func_1199(iParam0), "intro_bottle", func_30(iParam0), func_26(iParam0), 0.01f, 2) };
	return Var0;
}

void func_1657(var uParam0, var uParam1)//Position - 0xB4A55
{
	bool bVar0;
	char* sVar1;
	if (!__LIB_3__::func_558())
	{
		bVar0 = false;
		sVar1 = "ShopUI_Title_Casino";
		if (__LIB_2__::func_884(PLAYER::PLAYER_ID()))
		{
			sVar1 = "ShopUI_Title_TheMusicLocker";
		}
		if ((__LIB_1__::func_783(PLAYER::PLAYER_ID()) || __LIB_2__::func_885(PLAYER::PLAYER_ID())) || __LIB_2__::func_884(PLAYER::PLAYER_ID()))
		{
			GRAPHICS::REQUEST_STREAMED_TEXTURE_DICT(sVar1, false);
			bVar0 = true;
		}
		if (BitTest(uParam1->f_11, 10))
		{
			func_1731(uParam1);
		}
		else
		{
			func_1719(uParam0, uParam1);
		}
		if (__LIB_3__::func_67("SNK_MNU", -1, 1) && (!bVar0 || GRAPHICS::HAS_STREAMED_TEXTURE_DICT_LOADED(sVar1)))
		{
			if (BitTest(uParam1->f_11, 0))
			{
				if (BitTest(uParam1->f_11, 10))
				{
					func_1714(uParam1);
				}
				else
				{
					func_1700(uParam1);
				}
				MISC::CLEAR_BIT(&(uParam1->f_11), 0);
			}
			else if (BitTest(uParam1->f_11, 10))
			{
				__LIB_3__::func_110(uParam1->f_128.f_7, 1, 1);
			}
			else
			{
				__LIB_3__::func_110(uParam1->f_21, 1, 1);
			}
			if (BitTest(uParam1->f_11, 10))
			{
				__LIB_9__::func_399(uParam1);
			}
			else
			{
				func_1692(uParam1);
			}
			__LIB_11__::func_266(1, -1, 1, 0, 1, -1082130432, 0, 0, -1);
			__LIB_9__::func_447(uParam1);
			func_1658(uParam0, uParam1);
		}
	}
}

void func_1658(var uParam0, var uParam1)//Position - 0xB4B78
{
	int iVar0;
	if (func_1764(uParam1->f_13) || __LIB_2__::func_573(PLAYER::PLAYER_ID()))
	{
		if (!BitTest(uParam1->f_11, 8))
		{
			__LIB_0__::func_794(&(uParam1->f_122));
			__LIB_0__::func_795(&(uParam1->f_122), 0, 0);
			uParam1->f_23 = MISC::GET_RANDOM_INT_IN_RANGE(10000, 14000);
			MISC::SET_BIT(&(uParam1->f_11), 8);
		}
		else if (__LIB_0__::func_937(&(uParam1->f_122), uParam1->f_23, 0))
		{
			iVar0 = MISC::GET_RANDOM_INT_IN_RANGE(0, 3);
			if (iVar0 == 0)
			{
				func_1745(uParam0, uParam1, 23);
			}
			else if (iVar0 == 1)
			{
				func_1745(uParam0, uParam1, 22);
			}
			else
			{
				func_1745(uParam0, uParam1, 21);
			}
			MISC::CLEAR_BIT(&(uParam1->f_11), 8);
		}
	}
}

void func_1692(var uParam0)//Position - 0xB93D1
{
	if (__LIB_1__::func_783(PLAYER::PLAYER_ID()) || __LIB_2__::func_884(PLAYER::PLAYER_ID()))
	{
		if (((uParam0->f_21 == 6 || uParam0->f_21 == 7) || uParam0->f_21 == 8) && Global_262145.f_27032 /* Tunable: VC_CASINO_DISABLE_CHAMPAGNE_MINGAME */)
		{
			__LIB_1__::func_789("NO_STOCK_5" /* GXT: Out of Stock. */, 0, 0);
		}
		else if (uParam0->f_21 == 6 && Global_262145.f_26977 /* Tunable: VC_CASINO_DISABLE_CHAMPAGNE_SILVER */)
		{
			__LIB_1__::func_789("NO_STOCK_5" /* GXT: Out of Stock. */, 0, 0);
		}
		else if (uParam0->f_21 == 7 && Global_262145.f_26978 /* Tunable: VC_CASINO_DISABLE_CHAMPAGNE_GOLD */)
		{
			__LIB_1__::func_789("NO_STOCK_5" /* GXT: Out of Stock. */, 0, 0);
		}
		else if (uParam0->f_21 == 8 && Global_262145.f_26979 /* Tunable: VC_CASINO_DISABLE_CHAMPAGNE_DIAMOND */)
		{
			__LIB_1__::func_789("NO_STOCK_5" /* GXT: Out of Stock. */, 0, 0);
		}
		else if (uParam0->f_21 == 0 && Global_262145.f_26972 /* Tunable: VC_CASINO_DISABLE_BEER */)
		{
			__LIB_1__::func_789("NO_STOCK_5" /* GXT: Out of Stock. */, 0, 0);
		}
		else if (((uParam0->f_21 == 2 || uParam0->f_21 == 3) || uParam0->f_21 == 4) && Global_262145.f_27028 /* Tunable: VC_CASINO_DISABLE_WHISKEY_MINGAME */)
		{
			__LIB_1__::func_789("NO_STOCK_5" /* GXT: Out of Stock. */, 0, 0);
		}
		else if (uParam0->f_21 == 2 && Global_262145.f_26974 /* Tunable: VC_CASINO_DISABLE_MOUNT_WHISKEY */)
		{
			__LIB_1__::func_789("NO_STOCK_5" /* GXT: Out of Stock. */, 0, 0);
		}
		else if (uParam0->f_21 == 3 && Global_262145.f_26975 /* Tunable: VC_CASINO_DISABLE_RICHARDS_WHISKEY */)
		{
			__LIB_1__::func_789("NO_STOCK_5" /* GXT: Out of Stock. */, 0, 0);
		}
		else if (uParam0->f_21 == 4 && Global_262145.f_26976 /* Tunable: VC_CASINO_DISABLE_MACBETH_WHISKEY */)
		{
			__LIB_1__::func_789("NO_STOCK_5" /* GXT: Out of Stock. */, 0, 0);
		}
		else if (uParam0->f_21 == 1 && Global_262145.f_26973 /* Tunable: VC_CASINO_DISABLE_VODKA */)
		{
			__LIB_1__::func_789("NO_STOCK_5" /* GXT: Out of Stock. */, 0, 0);
		}
		else if (!MONEY::NETWORK_CAN_SPEND_MONEY(func_1693(uParam0->f_21, 0), false, true, false, -1, 0))
		{
			__LIB_1__::func_789("BAR_DESC_2" /* GXT: You cannot afford this drink. */, 0, 0);
		}
		else if (__LIB_4__::func_850(PLAYER::PLAYER_PED_ID()) >= 3 && ((uParam0->f_21 == 6 || uParam0->f_21 == 7) || uParam0->f_21 == 8))
		{
			__LIB_1__::func_789("BAR_DESC_3" /* GXT: Unavailable. You are too intoxicated to handle a bottle of champagne. */, 0, 0);
		}
		else if (__LIB_5__::func_826(PLAYER::PLAYER_PED_ID()) >= 3 && ((uParam0->f_21 == 6 || uParam0->f_21 == 7) || uParam0->f_21 == 8))
		{
			__LIB_1__::func_789("BAR_DESC_3" /* GXT: Unavailable. You are too intoxicated to handle a bottle of champagne. */, 0, 0);
		}
		else if (__LIB_1__::func_360(63, -1, 0) >= 10 && uParam0->f_21 == 0)
		{
			__LIB_1__::func_789("BAR_DESC_4" /* GXT: Your inventory is full. */, 0, 0);
		}
		else if (uParam0->f_21 == 0)
		{
			__LIB_1__::func_789("BAR_DESC_5" /* GXT: Purchase a Pisswasser for your inventory. */, 0, 0);
		}
		else
		{
			__LIB_1__::func_789("BAR_DESC_1" /* GXT: Order a drink from the bar. */, 0, 0);
		}
	}
	else if (__LIB_2__::func_885(PLAYER::PLAYER_ID()))
	{
		if (((uParam0->f_21 == 6 || uParam0->f_21 == 7) || uParam0->f_21 == 8) && Global_262145.f_27054 /* Tunable: VC_PENTHOUSE_DISABLE_CHAMPAGNE */)
		{
			__LIB_1__::func_789("NO_STOCK_5" /* GXT: Out of Stock. */, 0, 0);
		}
		else if (uParam0->f_21 == 0 && Global_262145.f_27045 /* Tunable: VC_PENTHOUSE_DISABLE_BEER */)
		{
			__LIB_1__::func_789("NO_STOCK_5" /* GXT: Out of Stock. */, 0, 0);
		}
		else if (((uParam0->f_21 == 2 || uParam0->f_21 == 3) || uParam0->f_21 == 4) && Global_262145.f_27046 /* Tunable: VC_PENTHOUSE_DISABLE_WHISKEY */)
		{
			__LIB_1__::func_789("NO_STOCK_5" /* GXT: Out of Stock. */, 0, 0);
		}
		else if (uParam0->f_21 == 1 && Global_262145.f_27047 /* Tunable: VC_PENTHOUSE_DISABLE_VODKA */)
		{
			__LIB_1__::func_789("NO_STOCK_5" /* GXT: Out of Stock. */, 0, 0);
		}
		else if (!MONEY::NETWORK_CAN_SPEND_MONEY(func_1693(uParam0->f_21, 0), false, true, false, -1, 0))
		{
			__LIB_1__::func_789("BAR_DESC_2" /* GXT: You cannot afford this drink. */, 0, 0);
		}
		else if (__LIB_4__::func_850(PLAYER::PLAYER_PED_ID()) >= 3 && ((uParam0->f_21 == 6 || uParam0->f_21 == 7) || uParam0->f_21 == 8))
		{
			__LIB_1__::func_789("BAR_DESC_3" /* GXT: Unavailable. You are too intoxicated to handle a bottle of champagne. */, 0, 0);
		}
		else if (__LIB_5__::func_826(PLAYER::PLAYER_PED_ID()) >= 3 && ((uParam0->f_21 == 6 || uParam0->f_21 == 7) || uParam0->f_21 == 8))
		{
			__LIB_1__::func_789("BAR_DESC_3" /* GXT: Unavailable. You are too intoxicated to handle a bottle of champagne. */, 0, 0);
		}
		else if (__LIB_1__::func_360(63, -1, 0) >= 10 && uParam0->f_21 == 0)
		{
			__LIB_1__::func_789("BAR_DESC_4" /* GXT: Your inventory is full. */, 0, 0);
		}
		else if (uParam0->f_21 == 0)
		{
			__LIB_1__::func_789("BAR_DESC_5" /* GXT: Purchase a Pisswasser for your inventory. */, 0, 0);
		}
		else
		{
			__LIB_1__::func_789("BAR_DESC_1" /* GXT: Order a drink from the bar. */, 0, 0);
		}
	}
	else if (__LIB_2__::func_573(PLAYER::PLAYER_ID()) || __LIB_1__::func_35())
	{
		if (uParam0->f_21 == 0 && Global_262145.f_26972 /* Tunable: VC_CASINO_DISABLE_BEER */)
		{
			__LIB_1__::func_789("NO_STOCK_5" /* GXT: Out of Stock. */, 0, 0);
		}
		else if (((uParam0->f_21 == 2 || uParam0->f_21 == 3) || uParam0->f_21 == 4) && Global_262145.f_27028 /* Tunable: VC_CASINO_DISABLE_WHISKEY_MINGAME */)
		{
			__LIB_1__::func_789("NO_STOCK_5" /* GXT: Out of Stock. */, 0, 0);
		}
		else if (uParam0->f_21 == 2 && Global_262145.f_26974 /* Tunable: VC_CASINO_DISABLE_MOUNT_WHISKEY */)
		{
			__LIB_1__::func_789("NO_STOCK_5" /* GXT: Out of Stock. */, 0, 0);
		}
		else if (uParam0->f_21 == 3 && Global_262145.f_26975 /* Tunable: VC_CASINO_DISABLE_RICHARDS_WHISKEY */)
		{
			__LIB_1__::func_789("NO_STOCK_5" /* GXT: Out of Stock. */, 0, 0);
		}
		else if (uParam0->f_21 == 4 && Global_262145.f_26976 /* Tunable: VC_CASINO_DISABLE_MACBETH_WHISKEY */)
		{
			__LIB_1__::func_789("NO_STOCK_5" /* GXT: Out of Stock. */, 0, 0);
		}
		else if (uParam0->f_21 == 1 && Global_262145.f_26973 /* Tunable: VC_CASINO_DISABLE_VODKA */)
		{
			__LIB_1__::func_789("NO_STOCK_5" /* GXT: Out of Stock. */, 0, 0);
		}
		else if (!MONEY::NETWORK_CAN_SPEND_MONEY(func_1693(uParam0->f_21, 0), false, true, false, -1, 0))
		{
			__LIB_1__::func_789("BAR_DESC_2" /* GXT: You cannot afford this drink. */, 0, 0);
		}
		else if (__LIB_1__::func_360(63, -1, 0) >= 10 && uParam0->f_21 == 0)
		{
			__LIB_1__::func_789("BAR_DESC_4" /* GXT: Your inventory is full. */, 0, 0);
		}
		else if (uParam0->f_21 == 0)
		{
			__LIB_1__::func_789("BAR_DESC_5" /* GXT: Purchase a Pisswasser for your inventory. */, 0, 0);
		}
		else if (uParam0->f_21 == 6)
		{
			__LIB_1__::func_789("BAR_DESC_7" /* GXT: Purchase snacks from the bar. */, 0, 0);
		}
		else if ((__LIB_1__::func_35() && uParam0->f_21 == 4) && __LIB_11__::func_254(PLAYER::PLAYER_ID()))
		{
			__LIB_1__::func_789("NO_STOCK_5" /* GXT: Out of Stock. */, 0, 0);
		}
		else
		{
			__LIB_1__::func_789("BAR_DESC_1" /* GXT: Order a drink from the bar. */, 0, 0);
		}
	}
}

int func_1693(int iParam0, bool bParam1)//Position - 0xB99D2
{
	int iVar0;
	iVar0 = 0;
	if ((((__LIB_13__::func_373(PLAYER::PLAYER_ID()) || func_1695(PLAYER::PLAYER_ID())) || (__LIB_1__::func_783(PLAYER::PLAYER_ID()) && __LIB_1__::func_124(PLAYER::PLAYER_ID()))) || (__LIB_2__::func_884(PLAYER::PLAYER_ID()) && __LIB_1__::func_124(PLAYER::PLAYER_ID()))) || __LIB_1__::func_35())
	{
		switch (iParam0)
		{
			case 0:
				iVar0 = Global_262145.f_27068 /* Tunable: VC_CASINO_BAR_BEER_VIP */;
				break;
			case 1:
				iVar0 = Global_262145.f_27069 /* Tunable: VC_CASINO_BAR_VODKA_VIP */;
				break;
			case 2:
				iVar0 = Global_262145.f_27070 /* Tunable: VC_CASINO_BAR_MOUNT_VIP */;
				break;
			case 3:
				iVar0 = Global_262145.f_27071 /* Tunable: VC_CASINO_BAR_RICHARDS_VIP */;
				break;
			case 4:
				iVar0 = Global_262145.f_27072 /* Tunable: VC_CASINO_BAR_MACBETH_VIP */;
				break;
			case 5:
				iVar0 = Global_262145.f_30178 /* Tunable: -296944425 */;
				break;
			case 6:
				iVar0 = Global_262145.f_27073 /* Tunable: VC_CASINO_BAR_SILVER_VIP */;
				break;
			case 7:
				iVar0 = Global_262145.f_27074 /* Tunable: VC_CASINO_BAR_GOLD_VIP */;
				break;
			case 8:
				iVar0 = Global_262145.f_27075 /* Tunable: VC_CASINO_BAR_DIAMOND_VIP */;
				break;
		}
	}
	else
	{
		switch (iParam0)
		{
			case 0:
				iVar0 = Global_262145.f_27060 /* Tunable: VC_CASINO_BAR_BEER_VISITOR */;
				break;
			case 1:
				iVar0 = Global_262145.f_27061 /* Tunable: VC_CASINO_BAR_VODKA_VISITOR */;
				break;
			case 2:
				iVar0 = Global_262145.f_27062 /* Tunable: VC_CASINO_BAR_MOUNT_VISITOR */;
				break;
			case 3:
				iVar0 = Global_262145.f_27063 /* Tunable: VC_CASINO_BAR_RICHARDS_VISITOR */;
				break;
			case 4:
				iVar0 = Global_262145.f_27064 /* Tunable: VC_CASINO_BAR_MACBETH_VISITOR */;
				break;
			case 5:
				iVar0 = Global_262145.f_30177 /* Tunable: 1771836115 */;
				break;
			case 6:
				iVar0 = Global_262145.f_27065 /* Tunable: VC_CASINO_BAR_SILVER_VISITOR */;
				break;
			case 7:
				iVar0 = Global_262145.f_27066 /* Tunable: VC_CASINO_BAR_GOLD_VISITOR */;
				break;
			case 8:
				iVar0 = Global_262145.f_27067 /* Tunable: VC_CASINO_BAR_DIAMOND_VISITOR */;
				break;
			}
	}
	if (bParam1)
	{
		if (!MONEY::NETWORK_CAN_SPEND_MONEY(iVar0, false, true, false, -1, 0))
		{
			iVar0 = MONEY::NETWORK_GET_VC_BALANCE();
		}
	}
	return iVar0;
}

int func_1695(int iParam0)//Position - 0xB9BCD
{
	if (iParam0 != __LIB_0__::func_162())
	{
		if (__LIB_2__::func_573(iParam0) && Global_2689235[iParam0 /*453*/].f_318.f_9 == iParam0)
		{
			return 1;
		}
	}
	return 0;
}

void func_1700(var uParam0)//Position - 0xB9F16
{
	char* sVar0;
	bool bVar1;
	int iVar2;
	bool bVar3;
	__LIB_4__::func_851("BAR_MENU_TITLE" /* GXT: BAR MENU */);
	sVar0 = "ShopUI_Title_Casino";
	if (__LIB_2__::func_884(PLAYER::PLAYER_ID()))
	{
		sVar0 = "ShopUI_Title_TheMusicLocker";
	}
	if (__LIB_1__::func_783(PLAYER::PLAYER_ID()) || __LIB_2__::func_885(PLAYER::PLAYER_ID()))
	{
		__LIB_3__::func_566(1, sVar0, sVar0);
	}
	else if (__LIB_2__::func_884(PLAYER::PLAYER_ID()))
	{
		__LIB_3__::func_566(1, "ShopUI_Title_TheMusicLocker", "ShopUI_Title_TheMusicLocker");
	}
	bVar1 = true;
	iVar2 = 0;
	while (iVar2 < func_1706())
	{
		bVar3 = true;
		bVar1 = true;
		if (!MONEY::NETWORK_CAN_SPEND_MONEY(func_1693(iVar2, 0), false, true, false, -1, 0))
		{
			bVar1 = false;
		}
		if ((iVar2 == 6 || iVar2 == 7) || iVar2 == 8)
		{
			if (__LIB_4__::func_850(PLAYER::PLAYER_PED_ID()) >= 3 || __LIB_5__::func_826(PLAYER::PLAYER_PED_ID()) >= 3)
			{
				bVar1 = false;
			}
		}
		if (iVar2 == 0)
		{
			if (__LIB_1__::func_360(63, -1, 0) >= 10)
			{
				bVar1 = false;
			}
		}
		if (__LIB_1__::func_783(PLAYER::PLAYER_ID()))
		{
			if (iVar2 == 0 && Global_262145.f_26972 /* Tunable: VC_CASINO_DISABLE_BEER */)
			{
				bVar1 = false;
			}
			if (((iVar2 == 2 || iVar2 == 3) || iVar2 == 4) && Global_262145.f_27028 /* Tunable: VC_CASINO_DISABLE_WHISKEY_MINGAME */)
			{
				bVar1 = false;
			}
			if (iVar2 == 2 && Global_262145.f_26974 /* Tunable: VC_CASINO_DISABLE_MOUNT_WHISKEY */)
			{
				bVar1 = false;
			}
			if (iVar2 == 3 && Global_262145.f_26975 /* Tunable: VC_CASINO_DISABLE_RICHARDS_WHISKEY */)
			{
				bVar1 = false;
			}
			if (iVar2 == 4 && Global_262145.f_26976 /* Tunable: VC_CASINO_DISABLE_MACBETH_WHISKEY */)
			{
				bVar1 = false;
			}
			if (iVar2 == 1 && Global_262145.f_26973 /* Tunable: VC_CASINO_DISABLE_VODKA */)
			{
				bVar1 = false;
			}
			if (((iVar2 == 6 || iVar2 == 7) || iVar2 == 8) && Global_262145.f_27032 /* Tunable: VC_CASINO_DISABLE_CHAMPAGNE_MINGAME */)
			{
				bVar1 = false;
			}
			if (iVar2 == 6 && Global_262145.f_26977 /* Tunable: VC_CASINO_DISABLE_CHAMPAGNE_SILVER */)
			{
				bVar1 = false;
			}
			if (iVar2 == 7 && Global_262145.f_26978 /* Tunable: VC_CASINO_DISABLE_CHAMPAGNE_GOLD */)
			{
				bVar1 = false;
			}
			if (iVar2 == 8 && Global_262145.f_26979 /* Tunable: VC_CASINO_DISABLE_CHAMPAGNE_DIAMOND */)
			{
				bVar1 = false;
			}
		}
		else if (__LIB_2__::func_885(PLAYER::PLAYER_ID()))
		{
			if (iVar2 == 0 && Global_262145.f_27045 /* Tunable: VC_PENTHOUSE_DISABLE_BEER */)
			{
				bVar1 = false;
			}
			if (((iVar2 == 2 || iVar2 == 3) || iVar2 == 4) && Global_262145.f_27046 /* Tunable: VC_PENTHOUSE_DISABLE_WHISKEY */)
			{
				bVar1 = false;
			}
			if (iVar2 == 1 && Global_262145.f_27047 /* Tunable: VC_PENTHOUSE_DISABLE_VODKA */)
			{
				bVar1 = false;
			}
			if (((iVar2 == 6 || iVar2 == 7) || iVar2 == 8) && Global_262145.f_27054 /* Tunable: VC_PENTHOUSE_DISABLE_CHAMPAGNE */)
			{
				bVar1 = false;
			}
		}
		else if (__LIB_2__::func_573(PLAYER::PLAYER_ID()))
		{
			if (iVar2 == 0 && Global_262145.f_26972 /* Tunable: VC_CASINO_DISABLE_BEER */)
			{
				bVar1 = false;
			}
			if (((iVar2 == 2 || iVar2 == 3) || iVar2 == 4) && Global_262145.f_27028 /* Tunable: VC_CASINO_DISABLE_WHISKEY_MINGAME */)
			{
				bVar1 = false;
			}
			if (iVar2 == 2 && Global_262145.f_26974 /* Tunable: VC_CASINO_DISABLE_MOUNT_WHISKEY */)
			{
				bVar1 = false;
			}
			if (iVar2 == 3 && Global_262145.f_26975 /* Tunable: VC_CASINO_DISABLE_RICHARDS_WHISKEY */)
			{
				bVar1 = false;
			}
			if (iVar2 == 4 && Global_262145.f_26976 /* Tunable: VC_CASINO_DISABLE_MACBETH_WHISKEY */)
			{
				bVar1 = false;
			}
			if (iVar2 == 1 && Global_262145.f_26973 /* Tunable: VC_CASINO_DISABLE_VODKA */)
			{
				bVar1 = false;
			}
			if (((iVar2 == 6 || iVar2 == 7) || iVar2 == 8) && Global_262145.f_27032 /* Tunable: VC_CASINO_DISABLE_CHAMPAGNE_MINGAME */)
			{
				bVar1 = false;
			}
			if (iVar2 == 6 && Global_262145.f_26977 /* Tunable: VC_CASINO_DISABLE_CHAMPAGNE_SILVER */)
			{
				bVar1 = false;
			}
			if (iVar2 == 7 && Global_262145.f_26978 /* Tunable: VC_CASINO_DISABLE_CHAMPAGNE_GOLD */)
			{
				bVar1 = false;
			}
			if (iVar2 == 8 && Global_262145.f_26979 /* Tunable: VC_CASINO_DISABLE_CHAMPAGNE_DIAMOND */)
			{
				bVar1 = false;
			}
		}
		if (iVar2 == 5 && !__LIB_2__::func_884(PLAYER::PLAYER_ID()))
		{
			bVar3 = false;
		}
		if (__LIB_1__::func_35())
		{
			if (iVar2 == 4 && __LIB_11__::func_254(PLAYER::PLAYER_ID()))
			{
				bVar1 = false;
			}
		}
		if (bVar3)
		{
			__LIB_3__::func_572(iVar2, __LIB_9__::func_400(iVar2), 0, bVar1, 0, 0, 0);
			if (func_1693(iVar2, 0) > 0)
			{
				__LIB_3__::func_572(iVar2, "IMPOUND_COST" /* GXT: $~1~ */, 1, bVar1, 0, 0, 0);
				__LIB_13__::func_722(func_1693(iVar2, 0), 0);
			}
			else
			{
				__LIB_3__::func_572(iVar2, "STORE_FREE_PRICE" /* GXT: FREE */, 0, bVar1, 0, 0, 0);
			}
		}
		iVar2++;
	}
	if (__LIB_2__::func_573(PLAYER::PLAYER_ID()) || __LIB_1__::func_35())
	{
		__LIB_3__::func_572(func_1706() + 1, "OF_PA_MENUI_4" /* GXT: Snacks */, 0, 1, 0, 0, 0);
	}
	__LIB_3__::func_110(uParam0->f_21, 1, 1);
	__LIB_1__::func_792(201, "ITEM_SELECT" /* GXT: Select */, -1, 0);
	__LIB_1__::func_792(202, "ITEM_BACK" /* GXT: Back */, -1, 0);
}

int func_1706()//Position - 0xBAB0B
{
	if (__LIB_2__::func_573(PLAYER::PLAYER_ID()) || __LIB_1__::func_35())
	{
		return 5;
	}
	return 9;
}

void func_1714(var uParam0)//Position - 0xBB1B6
{
	bool bVar0;
	bool bVar1;
	int iVar2;
	__LIB_4__::func_851("SNK_MENU_TITLE" /* GXT: SNACK MENU */);
	bVar0 = false;
	bVar1 = true;
	iVar2 = 0;
	while (iVar2 < __LIB_5__::func_844())
	{
		bVar0 = false;
		bVar1 = true;
		if (iVar2 == 0)
		{
			if (uParam0->f_128.f_2 >= 10)
			{
				bVar0 = true;
				bVar1 = false;
			}
		}
		else if (iVar2 == 5)
		{
			if (uParam0->f_128.f_4 >= 10)
			{
				bVar0 = true;
				bVar1 = false;
			}
		}
		else if (iVar2 == 1)
		{
			if (uParam0->f_128.f_5 >= 15)
			{
				bVar0 = true;
				bVar1 = false;
			}
		}
		else if (iVar2 == 2)
		{
			if (uParam0->f_128.f_6 >= 5)
			{
				bVar0 = true;
				bVar1 = false;
			}
		}
		else if (iVar2 == 3)
		{
			if (uParam0->f_128 >= 30)
			{
				bVar0 = true;
				bVar1 = false;
			}
		}
		else if (iVar2 == 4)
		{
			if (uParam0->f_128.f_3 >= 20)
			{
				bVar0 = true;
				bVar1 = false;
			}
		}
		__LIB_3__::func_572(iVar2, __LIB_5__::func_843(iVar2), 0, bVar1, 0, 0, 0);
		if (bVar0)
		{
			__LIB_3__::func_572(iVar2, "SNK_FULL", 0, bVar1, 0, 0, 0);
		}
		else
		{
			__LIB_3__::func_572(iVar2, "STORE_FREE_PRICE" /* GXT: FREE */, 0, bVar1, 0, 0, 0);
		}
		iVar2++;
	}
	__LIB_3__::func_110(uParam0->f_128.f_7, 1, 1);
	__LIB_1__::func_792(201, "ITEM_SELECT" /* GXT: Select */, -1, 0);
	__LIB_1__::func_792(203, "STORE_TAKE_ALL" /* GXT: Take all */, -1, 0);
	__LIB_1__::func_792(202, "ITEM_BACK" /* GXT: Back */, -1, 0);
}

void func_1719(var uParam0, var uParam1)//Position - 0xBB504
{
	bool bVar0;
	bool bVar1;
	int iVar2;
	int iVar3;
	bool bVar4;
	bool bVar5;
	bool bVar6;
	bool bVar7;
	int iVar8;
	int iVar9;
	int iVar10;
	if (BitTest(uParam1->f_11, 2))
	{
		return;
	}
	iVar3 = 150;
	if (PAD::IS_USING_CURSOR(2 /*FRONTEND_CONTROL*/))
	{
		iVar3 = 110;
	}
	__LIB_3__::func_570(1);
	__LIB_0__::func_366(1);
	if (!PLAYER::IS_SYSTEM_UI_BEING_DISPLAYED() && !HUD::IS_PAUSE_MENU_ACTIVE())
	{
		HUD::DISABLE_FRONTEND_THIS_FRAME();
		PAD::DISABLE_ALL_CONTROL_ACTIONS(0 /*PLAYER_CONTROL*/);
		PAD::ENABLE_ALL_CONTROL_ACTIONS(1 /*CAMERA_CONTROL*/);
		PAD::DISABLE_CONTROL_ACTION(2 /*FRONTEND_CONTROL*/, 200 /*INPUT_FRONTEND_PAUSE_ALTERNATE*/, true);
		PAD::DISABLE_CONTROL_ACTION(2 /*FRONTEND_CONTROL*/, 199 /*INPUT_FRONTEND_PAUSE*/, true);
		PAD::SET_INPUT_EXCLUSIVE(0 /*PLAYER_CONTROL*/, 200 /*INPUT_FRONTEND_PAUSE_ALTERNATE*/);
		PAD::SET_INPUT_EXCLUSIVE(2 /*FRONTEND_CONTROL*/, 200 /*INPUT_FRONTEND_PAUSE_ALTERNATE*/);
		PAD::SET_INPUT_EXCLUSIVE(0 /*PLAYER_CONTROL*/, 199 /*INPUT_FRONTEND_PAUSE*/);
		PAD::SET_INPUT_EXCLUSIVE(2 /*FRONTEND_CONTROL*/, 199 /*INPUT_FRONTEND_PAUSE*/);
		PAD::SET_INPUT_EXCLUSIVE(0 /*PLAYER_CONTROL*/, 201 /*INPUT_FRONTEND_ACCEPT*/);
		PAD::SET_INPUT_EXCLUSIVE(0 /*PLAYER_CONTROL*/, 202 /*INPUT_FRONTEND_CANCEL*/);
	}
	PAD::ENABLE_CONTROL_ACTION(2 /*FRONTEND_CONTROL*/, 30 /*INPUT_MOVE_LR*/, true);
	PAD::ENABLE_CONTROL_ACTION(2 /*FRONTEND_CONTROL*/, 31 /*INPUT_MOVE_UD*/, true);
	PAD::ENABLE_CONTROL_ACTION(2 /*FRONTEND_CONTROL*/, 201 /*INPUT_FRONTEND_ACCEPT*/, true);
	PAD::ENABLE_CONTROL_ACTION(2 /*FRONTEND_CONTROL*/, 188 /*INPUT_FRONTEND_UP*/, true);
	PAD::ENABLE_CONTROL_ACTION(2 /*FRONTEND_CONTROL*/, 187 /*INPUT_FRONTEND_DOWN*/, true);
	bVar4 = PAD::IS_CONTROL_JUST_PRESSED(2 /*FRONTEND_CONTROL*/, 201 /*INPUT_FRONTEND_ACCEPT*/);
	bVar5 = (PAD::IS_CONTROL_JUST_RELEASED(2 /*FRONTEND_CONTROL*/, 202 /*INPUT_FRONTEND_CANCEL*/) || PAD::IS_DISABLED_CONTROL_JUST_RELEASED(2 /*FRONTEND_CONTROL*/, 202 /*INPUT_FRONTEND_CANCEL*/));
	iVar2 = PAD::GET_CONTROL_VALUE(2 /*FRONTEND_CONTROL*/, 31 /*INPUT_MOVE_UD*/);
	if (!BitTest(uParam1->f_11, 3))
	{
		if (PAD::IS_USING_CURSOR(2 /*FRONTEND_CONTROL*/))
		{
			func_1722(uParam1, &bVar0, &bVar1, &bVar4, &bVar5);
		}
		else
		{
			bVar0 = (iVar2 < 100 || PAD::IS_CONTROL_PRESSED(2 /*FRONTEND_CONTROL*/, 188 /*INPUT_FRONTEND_UP*/));
			bVar1 = (iVar2 > 150 || PAD::IS_CONTROL_PRESSED(2 /*FRONTEND_CONTROL*/, 187 /*INPUT_FRONTEND_DOWN*/));
		}
		if (bVar0 || bVar1)
		{
			__LIB_0__::func_795(&(uParam1->f_104), 0, 0);
			MISC::SET_BIT(&(uParam1->f_11), 3);
		}
	}
	else if (__LIB_0__::func_937(&(uParam1->f_104), iVar3, 0))
	{
		__LIB_0__::func_794(&(uParam1->f_104));
		MISC::CLEAR_BIT(&(uParam1->f_11), 3);
	}
	if (bVar1)
	{
		uParam1->f_21++;
		if (__LIB_2__::func_573(PLAYER::PLAYER_ID()) || __LIB_1__::func_35())
		{
			if (uParam1->f_21 > func_1706())
			{
				uParam1->f_21 = 0;
			}
		}
		else if (uParam1->f_21 > (func_1706() - 1))
		{
			uParam1->f_21 = 0;
		}
		if (uParam1->f_21 == 5 && !__LIB_2__::func_884(PLAYER::PLAYER_ID()))
		{
			uParam1->f_21++;
		}
		AUDIO::PLAY_SOUND_FRONTEND(-1, "NAV_UP_DOWN", "HUD_FRONTEND_DEFAULT_SOUNDSET", true);
	}
	if (bVar0)
	{
		uParam1->f_21 = (uParam1->f_21 - 1);
		if (__LIB_2__::func_573(PLAYER::PLAYER_ID()) || __LIB_1__::func_35())
		{
			if (uParam1->f_21 < 0)
			{
				uParam1->f_21 = func_1706() + 1;
			}
		}
		else if (uParam1->f_21 < 0)
		{
			uParam1->f_21 = (func_1706() - 1);
		}
		if (uParam1->f_21 == 5 && !__LIB_2__::func_884(PLAYER::PLAYER_ID()))
		{
			uParam1->f_21 = (uParam1->f_21 - 1);
		}
		AUDIO::PLAY_SOUND_FRONTEND(-1, "NAV_UP_DOWN", "HUD_FRONTEND_DEFAULT_SOUNDSET", true);
	}
	if (bVar4)
	{
		bVar6 = false;
		bVar7 = false;
		if ((__LIB_2__::func_573(PLAYER::PLAYER_ID()) && uParam1->f_21 == 6) || (__LIB_1__::func_35() && uParam1->f_21 == 6))
		{
			bVar6 = true;
		}
		if (((uParam1->f_21 == 6 || uParam1->f_21 == 7) || uParam1->f_21 == 8) && !bVar6)
		{
			if (__LIB_4__::func_850(PLAYER::PLAYER_PED_ID()) >= 3 || __LIB_5__::func_826(PLAYER::PLAYER_PED_ID()) >= 3)
			{
				func_1745(uParam0, uParam1, 16);
				bVar7 = true;
			}
		}
		if (uParam1->f_21 == 0)
		{
			if (__LIB_1__::func_360(63, -1, 0) >= 10)
			{
				bVar7 = true;
			}
		}
		if (func_1721(uParam1->f_21))
		{
			bVar7 = true;
		}
		if (!bVar7)
		{
			if (!bVar6 && !MONEY::NETWORK_CAN_SPEND_MONEY(func_1693(uParam1->f_21, 0), false, true, false, -1, 0))
			{
				if (func_1764(uParam1->f_13) || __LIB_2__::func_573(PLAYER::PLAYER_ID()))
				{
					func_1745(uParam0, uParam1, 27);
				}
				bVar7 = true;
			}
			else if ((uParam1->f_21 == 6 || uParam1->f_21 == 7) || uParam1->f_21 == 8)
			{
				if (__LIB_2__::func_573(PLAYER::PLAYER_ID()) || __LIB_1__::func_35())
				{
					uParam1->f_128.f_2 = __LIB_1__::func_360(62, -1, 0);
					uParam1->f_128.f_5 = __LIB_1__::func_360(1277, -1, 0);
					uParam1->f_128.f_6 = __LIB_1__::func_360(1278, -1, 0);
					uParam1->f_128 = __LIB_1__::func_360(1276, -1, 0);
					uParam1->f_128.f_3 = __LIB_1__::func_360(1098, -1, 0);
					uParam1->f_128.f_4 = __LIB_1__::func_360(10404, -1, 0);
					MISC::SET_BIT(&(uParam1->f_11), 0);
					MISC::SET_BIT(&(uParam1->f_11), 10);
				}
				else
				{
					__LIB_1__::func_28(155);
					func_1745(uParam0, uParam1, 9);
					__LIB_9__::func_408(uParam1, 14);
					HUD::DISPLAY_RADAR(false);
					iVar10 = func_1693(uParam1->f_21, 0);
					if (MONEY::NETWORK_GET_VC_BANK_BALANCE() > 0)
					{
						if (MONEY::NETWORK_GET_VC_BANK_BALANCE() >= iVar10)
						{
							iVar9 = iVar10;
						}
						else
						{
							iVar9 = (iVar10 - (iVar10 - MONEY::NETWORK_GET_VC_BANK_BALANCE()));
						}
						iVar10 = (iVar10 - iVar9);
					}
					if (iVar10 > 0)
					{
						if (MONEY::NETWORK_GET_VC_WALLET_BALANCE(-1) > 0)
						{
							if (MONEY::NETWORK_GET_VC_WALLET_BALANCE(-1) >= iVar10)
							{
								iVar8 = iVar10;
							}
							else
							{
								iVar8 = (iVar10 - (iVar10 - MONEY::NETWORK_GET_VC_WALLET_BALANCE(-1)));
							}
							iVar10 = (iVar10 - iVar8);
						}
					}
					if (iVar8 != 0 || iVar9 != 0)
					{
						MISC::SET_BIT(&(uParam1->f_11), 1);
						HUD::USE_FAKE_MP_CASH(true);
						HUD::CHANGE_FAKE_MP_CASH(-iVar8, -iVar9);
					}
				}
			}
			else
			{
				MISC::SET_BIT(&(uParam1->f_11), 2);
			}
		}
		if (bVar7)
		{
			AUDIO::PLAY_SOUND_FRONTEND(-1, "ERROR", "HUD_FRONTEND_DEFAULT_SOUNDSET", true);
		}
		else
		{
			AUDIO::PLAY_SOUND_FRONTEND(-1, "SELECT" /* GXT: Filter List */, "HUD_FRONTEND_DEFAULT_SOUNDSET", true);
		}
	}
	if ((bVar5 || __LIB_3__::func_718()) || __LIB_0__::func_877())
	{
		AUDIO::PLAY_SOUND_FRONTEND(-1, "BACK", "HUD_FRONTEND_DEFAULT_SOUNDSET", true);
		__LIB_9__::func_408(uParam1, 27);
		uParam1->f_21 = 0;
	}
}

int func_1721(int iParam0)//Position - 0xBBA29
{
	if (__LIB_1__::func_783(PLAYER::PLAYER_ID()))
	{
		if (iParam0 == 0 && Global_262145.f_26972 /* Tunable: VC_CASINO_DISABLE_BEER */)
		{
			return 1;
		}
		if (((iParam0 == 2 || iParam0 == 3) || iParam0 == 4) && Global_262145.f_27028 /* Tunable: VC_CASINO_DISABLE_WHISKEY_MINGAME */)
		{
			return 1;
		}
		if (iParam0 == 2 && Global_262145.f_26974 /* Tunable: VC_CASINO_DISABLE_MOUNT_WHISKEY */)
		{
			return 1;
		}
		if (iParam0 == 3 && Global_262145.f_26975 /* Tunable: VC_CASINO_DISABLE_RICHARDS_WHISKEY */)
		{
			return 1;
		}
		if (iParam0 == 4 && Global_262145.f_26976 /* Tunable: VC_CASINO_DISABLE_MACBETH_WHISKEY */)
		{
			return 1;
		}
		if (iParam0 == 1 && Global_262145.f_26973 /* Tunable: VC_CASINO_DISABLE_VODKA */)
		{
			return 1;
		}
		if (((iParam0 == 6 || iParam0 == 7) || iParam0 == 8) && Global_262145.f_27032 /* Tunable: VC_CASINO_DISABLE_CHAMPAGNE_MINGAME */)
		{
			return 1;
		}
		if (iParam0 == 6 && Global_262145.f_26977 /* Tunable: VC_CASINO_DISABLE_CHAMPAGNE_SILVER */)
		{
			return 1;
		}
		if (iParam0 == 7 && Global_262145.f_26978 /* Tunable: VC_CASINO_DISABLE_CHAMPAGNE_GOLD */)
		{
			return 1;
		}
		if (iParam0 == 8 && Global_262145.f_26979 /* Tunable: VC_CASINO_DISABLE_CHAMPAGNE_DIAMOND */)
		{
			return 1;
		}
	}
	else if (__LIB_2__::func_885(PLAYER::PLAYER_ID()))
	{
		if (iParam0 == 0 && Global_262145.f_27045 /* Tunable: VC_PENTHOUSE_DISABLE_BEER */)
		{
			return 1;
		}
		if (((iParam0 == 2 || iParam0 == 3) || iParam0 == 4) && Global_262145.f_27046 /* Tunable: VC_PENTHOUSE_DISABLE_WHISKEY */)
		{
			return 1;
		}
		if (iParam0 == 1 && Global_262145.f_27047 /* Tunable: VC_PENTHOUSE_DISABLE_VODKA */)
		{
			return 1;
		}
		if (((iParam0 == 6 || iParam0 == 7) || iParam0 == 8) && Global_262145.f_27054 /* Tunable: VC_PENTHOUSE_DISABLE_CHAMPAGNE */)
		{
			return 1;
		}
	}
	else if (__LIB_2__::func_573(PLAYER::PLAYER_ID()))
	{
		if (iParam0 == 0 && Global_262145.f_26972 /* Tunable: VC_CASINO_DISABLE_BEER */)
		{
			return 1;
		}
		if (((iParam0 == 2 || iParam0 == 3) || iParam0 == 4) && Global_262145.f_27028 /* Tunable: VC_CASINO_DISABLE_WHISKEY_MINGAME */)
		{
			return 1;
		}
		if (iParam0 == 2 && Global_262145.f_26974 /* Tunable: VC_CASINO_DISABLE_MOUNT_WHISKEY */)
		{
			return 1;
		}
		if (iParam0 == 3 && Global_262145.f_26975 /* Tunable: VC_CASINO_DISABLE_RICHARDS_WHISKEY */)
		{
			return 1;
		}
		if (iParam0 == 4 && Global_262145.f_26976 /* Tunable: VC_CASINO_DISABLE_MACBETH_WHISKEY */)
		{
			return 1;
		}
		if (iParam0 == 1 && Global_262145.f_26973 /* Tunable: VC_CASINO_DISABLE_VODKA */)
		{
			return 1;
		}
		if (((iParam0 == 6 || iParam0 == 7) || iParam0 == 8) && Global_262145.f_27032 /* Tunable: VC_CASINO_DISABLE_CHAMPAGNE_MINGAME */)
		{
			return 1;
		}
		if (iParam0 == 6 && Global_262145.f_26977 /* Tunable: VC_CASINO_DISABLE_CHAMPAGNE_SILVER */)
		{
			return 1;
		}
		if (iParam0 == 7 && Global_262145.f_26978 /* Tunable: VC_CASINO_DISABLE_CHAMPAGNE_GOLD */)
		{
			return 1;
		}
		if (iParam0 == 8 && Global_262145.f_26979 /* Tunable: VC_CASINO_DISABLE_CHAMPAGNE_DIAMOND */)
		{
			return 1;
		}
	}
	if (__LIB_1__::func_35())
	{
		if (iParam0 == 4 && __LIB_11__::func_254(PLAYER::PLAYER_ID()))
		{
			return 1;
		}
	}
	return 0;
}

void func_1722(var uParam0, var uParam1, var uParam2, bool bParam3, bool bParam4)//Position - 0xBBD1D
{
	if (MISC::IS_PC_VERSION() && !NETWORK::NETWORK_TEXT_CHAT_IS_TYPING())
	{
		if (PAD::IS_USING_CURSOR(2 /*FRONTEND_CONTROL*/))
		{
			PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 1 /*INPUT_LOOK_LR*/, true);
			PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 2 /*INPUT_LOOK_UD*/, true);
			PAD::DISABLE_CONTROL_ACTION(2 /*FRONTEND_CONTROL*/, 200 /*INPUT_FRONTEND_PAUSE_ALTERNATE*/, true);
			PAD::ENABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 237 /*INPUT_CURSOR_ACCEPT*/, true);
			PAD::ENABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 238 /*INPUT_CURSOR_CANCEL*/, true);
			PAD::SET_INPUT_EXCLUSIVE(0 /*PLAYER_CONTROL*/, 237 /*INPUT_CURSOR_ACCEPT*/);
			PAD::SET_INPUT_EXCLUSIVE(0 /*PLAYER_CONTROL*/, 238 /*INPUT_CURSOR_CANCEL*/);
			PAD::ENABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 241 /*INPUT_CURSOR_SCROLL_UP*/, true);
			PAD::ENABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 242 /*INPUT_CURSOR_SCROLL_DOWN*/, true);
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
			if (Global_4539961 == uParam0->f_21)
			{
				*bParam3 = 1;
			}
			else
			{
				uParam0->f_21 = Global_4539961;
				__LIB_3__::func_110(uParam0->f_21, 1, 1);
			}
		}
		if (__LIB_3__::func_528())
		{
			*bParam4 = 1;
		}
		if (__LIB_3__::func_557(0, 0, 0) || PAD::IS_CONTROL_PRESSED(2 /*FRONTEND_CONTROL*/, 188 /*INPUT_FRONTEND_UP*/))
		{
			*uParam1 = 1;
		}
		if (__LIB_3__::func_556(0, 0, 0) || PAD::IS_CONTROL_PRESSED(2 /*FRONTEND_CONTROL*/, 187 /*INPUT_FRONTEND_DOWN*/))
		{
			*uParam2 = 1;
		}
	}
}

void func_1731(var uParam0)//Position - 0xBC3AF
{
	bool bVar0;
	bool bVar1;
	int iVar2;
	int iVar3;
	bool bVar4;
	bool bVar5;
	bool bVar6;
	bool bVar7;
	if (BitTest(uParam0->f_11, 11))
	{
		return;
	}
	iVar3 = 150;
	if (PAD::IS_USING_CURSOR(2 /*FRONTEND_CONTROL*/))
	{
		iVar3 = 110;
	}
	__LIB_6__::func_25(1);
	PAD::ENABLE_CONTROL_ACTION(2 /*FRONTEND_CONTROL*/, 30 /*INPUT_MOVE_LR*/, true);
	PAD::ENABLE_CONTROL_ACTION(2 /*FRONTEND_CONTROL*/, 31 /*INPUT_MOVE_UD*/, true);
	PAD::ENABLE_CONTROL_ACTION(2 /*FRONTEND_CONTROL*/, 203 /*INPUT_FRONTEND_X*/, true);
	PAD::ENABLE_CONTROL_ACTION(2 /*FRONTEND_CONTROL*/, 201 /*INPUT_FRONTEND_ACCEPT*/, true);
	PAD::ENABLE_CONTROL_ACTION(2 /*FRONTEND_CONTROL*/, 188 /*INPUT_FRONTEND_UP*/, true);
	PAD::ENABLE_CONTROL_ACTION(2 /*FRONTEND_CONTROL*/, 187 /*INPUT_FRONTEND_DOWN*/, true);
	bVar4 = PAD::IS_CONTROL_JUST_PRESSED(2 /*FRONTEND_CONTROL*/, 201 /*INPUT_FRONTEND_ACCEPT*/);
	bVar5 = (PAD::IS_CONTROL_JUST_RELEASED(2 /*FRONTEND_CONTROL*/, 202 /*INPUT_FRONTEND_CANCEL*/) || PAD::IS_DISABLED_CONTROL_JUST_RELEASED(2 /*FRONTEND_CONTROL*/, 202 /*INPUT_FRONTEND_CANCEL*/));
	bVar6 = PAD::IS_CONTROL_JUST_PRESSED(2 /*FRONTEND_CONTROL*/, 203 /*INPUT_FRONTEND_X*/);
	iVar2 = PAD::GET_CONTROL_VALUE(2 /*FRONTEND_CONTROL*/, 31 /*INPUT_MOVE_UD*/);
	if (!BitTest(uParam0->f_11, 3))
	{
		if (PAD::IS_USING_CURSOR(2 /*FRONTEND_CONTROL*/))
		{
			func_1737(uParam0, &bVar0, &bVar1, &bVar4, &bVar5);
		}
		else
		{
			bVar0 = (iVar2 < 100 || PAD::IS_CONTROL_PRESSED(2 /*FRONTEND_CONTROL*/, 188 /*INPUT_FRONTEND_UP*/));
			bVar1 = (iVar2 > 150 || PAD::IS_CONTROL_PRESSED(2 /*FRONTEND_CONTROL*/, 187 /*INPUT_FRONTEND_DOWN*/));
		}
		if (bVar0 || bVar1)
		{
			__LIB_0__::func_795(&(uParam0->f_104), 0, 0);
			MISC::SET_BIT(&(uParam0->f_11), 3);
		}
	}
	else if (__LIB_0__::func_937(&(uParam0->f_104), iVar3, 0))
	{
		__LIB_0__::func_794(&(uParam0->f_104));
		MISC::CLEAR_BIT(&(uParam0->f_11), 3);
	}
	if (bVar1)
	{
		uParam0->f_128.f_7++;
		if (uParam0->f_128.f_7 > (__LIB_5__::func_844() - 1))
		{
			uParam0->f_128.f_7 = 0;
		}
		AUDIO::PLAY_SOUND_FRONTEND(-1, "NAV_UP_DOWN", "HUD_FRONTEND_DEFAULT_SOUNDSET", true);
	}
	if (bVar0)
	{
		uParam0->f_128.f_7 = (uParam0->f_128.f_7 - 1);
		if (uParam0->f_128.f_7 < 0)
		{
			uParam0->f_128.f_7 = (__LIB_5__::func_844() - 1);
		}
		AUDIO::PLAY_SOUND_FRONTEND(-1, "NAV_UP_DOWN", "HUD_FRONTEND_DEFAULT_SOUNDSET", true);
	}
	if (bVar4)
	{
		bVar7 = false;
		if (uParam0->f_128.f_7 == 0)
		{
			if (uParam0->f_128.f_2 >= 10)
			{
				bVar7 = true;
			}
		}
		else if (uParam0->f_128.f_7 == 5)
		{
			if (uParam0->f_128.f_4 >= 10)
			{
				bVar7 = true;
			}
		}
		else if (uParam0->f_128.f_7 == 1)
		{
			if (uParam0->f_128.f_5 >= 15)
			{
				bVar7 = true;
			}
		}
		else if (uParam0->f_128.f_7 == 2)
		{
			if (uParam0->f_128.f_6 >= 5)
			{
				bVar7 = true;
			}
		}
		else if (uParam0->f_128.f_7 == 3)
		{
			if (uParam0->f_128 >= 30)
			{
				bVar7 = true;
			}
		}
		else if (uParam0->f_128.f_7 == 4)
		{
			if (uParam0->f_128.f_3 >= 20)
			{
				bVar7 = true;
			}
		}
		if (!bVar7)
		{
			MISC::SET_BIT(&(uParam0->f_11), 11);
		}
		if (bVar7)
		{
			AUDIO::PLAY_SOUND_FRONTEND(-1, "ERROR", "HUD_FRONTEND_DEFAULT_SOUNDSET", true);
		}
		else
		{
			AUDIO::PLAY_SOUND_FRONTEND(-1, "SELECT" /* GXT: Filter List */, "HUD_FRONTEND_DEFAULT_SOUNDSET", true);
		}
	}
	if (bVar6)
	{
		func_1732(uParam0);
	}
	if (bVar5)
	{
		AUDIO::PLAY_SOUND_FRONTEND(-1, "BACK", "HUD_FRONTEND_DEFAULT_SOUNDSET", true);
		MISC::CLEAR_BIT(&(uParam0->f_11), 10);
		MISC::SET_BIT(&(uParam0->f_11), 0);
		uParam0->f_128.f_7 = 0;
	}
	else if (__LIB_3__::func_718() || __LIB_0__::func_877())
	{
		AUDIO::PLAY_SOUND_FRONTEND(-1, "BACK", "HUD_FRONTEND_DEFAULT_SOUNDSET", true);
		__LIB_9__::func_408(uParam0, 27);
		uParam0->f_21 = 0;
		uParam0->f_128.f_7 = 0;
	}
}

void func_1732(var uParam0)//Position - 0xBC687
{
	bool bVar0;
	bVar0 = true;
	if (uParam0->f_128.f_7 == 0)
	{
		if (uParam0->f_128.f_2 < 10)
		{
			func_1733(-39155154, 1, (10 - uParam0->f_128.f_2));
			uParam0->f_128.f_2 = 10;
			__LIB_1__::func_354(62, 10, -1, 1, 0);
			bVar0 = false;
		}
	}
	else if (uParam0->f_128.f_7 == 5)
	{
		if (uParam0->f_128.f_4 < 10)
		{
			func_1733(495696637, 1, (10 - uParam0->f_128.f_4));
			uParam0->f_128.f_4 = 10;
			__LIB_1__::func_354(10404, 10, -1, 1, 0);
			bVar0 = false;
		}
	}
	else if (uParam0->f_128.f_7 == 1)
	{
		if (uParam0->f_128.f_5 < 15)
		{
			func_1733(1199442189, 1, (15 - uParam0->f_128.f_5));
			uParam0->f_128.f_5 = 15;
			__LIB_1__::func_354(1277, 15, -1, 1, 0);
			__LIB_0__::func_186(15, 1, -1);
			bVar0 = false;
		}
	}
	else if (uParam0->f_128.f_7 == 2)
	{
		if (uParam0->f_128.f_6 < 5)
		{
			func_1733(1486811039, 1, (5 - uParam0->f_128.f_6));
			uParam0->f_128.f_6 = 5;
			__LIB_1__::func_354(1278, 5, -1, 1, 0);
			__LIB_0__::func_186(14, 1, -1);
			bVar0 = false;
		}
	}
	else if (uParam0->f_128.f_7 == 3)
	{
		if (uParam0->f_128 < 30)
		{
			func_1733(-251807494, 1, (30 - uParam0->f_128));
			uParam0->f_128 = 30;
			__LIB_1__::func_354(1276, 30, -1, 1, 0);
			__LIB_0__::func_186(16, 1, -1);
			bVar0 = false;
		}
	}
	else if (uParam0->f_128.f_7 == 4)
	{
		if (uParam0->f_128.f_3 < 20)
		{
			func_1733(-181862273, 1, (20 - uParam0->f_128.f_3));
			uParam0->f_128.f_3 = 20;
			__LIB_1__::func_354(1098, 20, -1, 1, 0);
			bVar0 = false;
		}
	}
	if (!bVar0)
	{
		uParam0->f_128.f_2 = __LIB_1__::func_360(62, -1, 0);
		uParam0->f_128.f_5 = __LIB_1__::func_360(1277, -1, 0);
		uParam0->f_128.f_6 = __LIB_1__::func_360(1278, -1, 0);
		uParam0->f_128 = __LIB_1__::func_360(1276, -1, 0);
		uParam0->f_128.f_3 = __LIB_1__::func_360(1098, -1, 0);
		uParam0->f_128.f_4 = __LIB_1__::func_360(10404, -1, 0);
		__LIB_0__::func_794(&(uParam0->f_104));
		MISC::SET_BIT(&(uParam0->f_11), 0);
		MISC::CLEAR_BIT(&(uParam0->f_11), 11);
		MISC::CLEAR_BIT(&(uParam0->f_11), 4);
		MISC::CLEAR_BIT(&(uParam0->f_11), 9);
	}
	if (bVar0)
	{
		AUDIO::PLAY_SOUND_FRONTEND(-1, "ERROR", "HUD_FRONTEND_DEFAULT_SOUNDSET", true);
	}
	else
	{
		AUDIO::PLAY_SOUND_FRONTEND(-1, "SELECT" /* GXT: Filter List */, "HUD_FRONTEND_DEFAULT_SOUNDSET", true);
	}
}

void func_1733(int iParam0, int iParam1, int iParam2)//Position - 0xBC8DA
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	iVar0 = joaat("snack");
	iVar1 = joaat("get");
	iVar2 = joaat("bar");
	switch (__LIB_1__::func_307(PLAYER::PLAYER_ID()))
	{
		case 123:
			iVar3 = -84733279;
			break;
		case 124:
			iVar3 = -2078011960;
			break;
		case 146:
			iVar3 = -765042571;
			break;
		case 130:
			iVar3 = 1384669232;
			break;
		case 129:
			iVar3 = -1738076238;
			break;
		case 133:
			iVar3 = 1070552029;
			break;
		case 128:
			iVar3 = -10997558;
			break;
		case 132:
			iVar3 = 1669090008;
			break;
		case 131:
			iVar3 = -272691340;
			break;
	}
	__LIB_5__::func_941(1, iParam0, iVar0, iParam2, iVar3, iVar1, iParam1, iVar2, 0);
}

void func_1737(var uParam0, var uParam1, var uParam2, bool bParam3, bool bParam4)//Position - 0xBCB7D
{
	if (MISC::IS_PC_VERSION() && !NETWORK::NETWORK_TEXT_CHAT_IS_TYPING())
	{
		if (PAD::IS_USING_CURSOR(2 /*FRONTEND_CONTROL*/))
		{
			PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 1 /*INPUT_LOOK_LR*/, true);
			PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 2 /*INPUT_LOOK_UD*/, true);
			PAD::DISABLE_CONTROL_ACTION(2 /*FRONTEND_CONTROL*/, 200 /*INPUT_FRONTEND_PAUSE_ALTERNATE*/, true);
			PAD::ENABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 237 /*INPUT_CURSOR_ACCEPT*/, true);
			PAD::ENABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 238 /*INPUT_CURSOR_CANCEL*/, true);
			PAD::SET_INPUT_EXCLUSIVE(0 /*PLAYER_CONTROL*/, 237 /*INPUT_CURSOR_ACCEPT*/);
			PAD::SET_INPUT_EXCLUSIVE(0 /*PLAYER_CONTROL*/, 238 /*INPUT_CURSOR_CANCEL*/);
			PAD::ENABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 241 /*INPUT_CURSOR_SCROLL_UP*/, true);
			PAD::ENABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 242 /*INPUT_CURSOR_SCROLL_DOWN*/, true);
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
			if (Global_4539961 == uParam0->f_128.f_7)
			{
				*bParam3 = 1;
			}
			else
			{
				uParam0->f_128.f_7 = Global_4539961;
				__LIB_3__::func_110(uParam0->f_128.f_7, 1, 1);
			}
		}
		if (__LIB_3__::func_528())
		{
			*bParam4 = 1;
		}
		if (__LIB_3__::func_557(0, 0, 0) || PAD::IS_CONTROL_PRESSED(2 /*FRONTEND_CONTROL*/, 188 /*INPUT_FRONTEND_UP*/))
		{
			*uParam1 = 1;
		}
		if (__LIB_3__::func_556(0, 0, 0) || PAD::IS_CONTROL_PRESSED(2 /*FRONTEND_CONTROL*/, 187 /*INPUT_FRONTEND_DOWN*/))
		{
			*uParam2 = 1;
		}
	}
}

var func_1739(int iParam0)//Position - 0xBCD19
{
	struct<3> Var0;
	Var0 = { PED::GET_ANIM_INITIAL_OFFSET_ROTATION(func_1198(iParam0, 0), __LIB_9__::func_394(iParam0, 0), func_30(iParam0), func_26(iParam0), 0.01f, 2) };
	return Var0.f_2;
}

Vector3 func_1740(int iParam0)//Position - 0xBCD4D
{
	struct<3> Var0;
	Var0 = { PED::GET_ANIM_INITIAL_OFFSET_POSITION(func_1198(iParam0, 0), __LIB_9__::func_394(iParam0, 0), func_30(iParam0), func_26(iParam0), 0.01f, 2) };
	return Var0;
}

void func_1745(var uParam0, var uParam1, int iParam2)//Position - 0xBCE23
{
	char* sVar0;
	char* sVar1;
	char* sVar2;
	char* sVar3;
	char* sVar4;
	char* sVar5;
	char* sVar6;
	char* sVar7;
	char* sVar8;
	if (__LIB_2__::func_885(PLAYER::PLAYER_ID()))
	{
		if (uParam1->f_13 == 0)
		{
			sVar0 = func_1746(iParam2, 0);
			if ((((!MISC::IS_STRING_NULL_OR_EMPTY(sVar0) && NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(uParam0->f_4[0])) && NETWORK::NETWORK_HAS_CONTROL_OF_NETWORK_ID(uParam0->f_4[0])) && !PED::IS_PED_INJURED(NETWORK::NET_TO_PED(uParam0->f_4[0]))) && !__LIB_0__::func_864(&(uParam1->f_116)))
			{
				__LIB_0__::func_795(&(uParam1->f_116), 0, 0);
				AUDIO::PLAY_PED_AMBIENT_SPEECH_WITH_VOICE_NATIVE(NETWORK::NET_TO_PED(uParam0->f_4[0]), sVar0, "WFSTEWARDESS", "SPEECH_PARAMS_FORCE_NORMAL", false);
			}
		}
		if (uParam1->f_13 == 1)
		{
			sVar1 = func_1746(iParam2, 1);
			if ((((!MISC::IS_STRING_NULL_OR_EMPTY(sVar1) && NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(uParam0->f_4[1])) && NETWORK::NETWORK_HAS_CONTROL_OF_NETWORK_ID(uParam0->f_4[1])) && __LIB_0__::func_121(NETWORK::NET_TO_PED(uParam0->f_4[1]))) && !__LIB_0__::func_864(&(uParam1->f_116)))
			{
				__LIB_0__::func_795(&(uParam1->f_116), 0, 0);
				AUDIO::PLAY_PED_AMBIENT_SPEECH_WITH_VOICE_NATIVE(NETWORK::NET_TO_PED(uParam0->f_4[1]), sVar1, "BTL_CONNIE", "SPEECH_PARAMS_FORCE_NORMAL", false);
			}
		}
	}
	else if (__LIB_1__::func_783(PLAYER::PLAYER_ID()))
	{
		if (uParam1->f_13 == 0)
		{
			sVar2 = func_1746(iParam2, 0);
			if ((((!MISC::IS_STRING_NULL_OR_EMPTY(sVar2) && NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(uParam0->f_4[0])) && NETWORK::NETWORK_HAS_CONTROL_OF_NETWORK_ID(uParam0->f_4[0])) && __LIB_0__::func_121(NETWORK::NET_TO_PED(uParam0->f_4[0]))) && !__LIB_0__::func_864(&(uParam1->f_116)))
			{
				__LIB_0__::func_795(&(uParam1->f_116), 0, 0);
				AUDIO::PLAY_PED_AMBIENT_SPEECH_WITH_VOICE_NATIVE(NETWORK::NET_TO_PED(uParam0->f_4[0]), sVar2, "CAS_JOSEPHINE", "SPEECH_PARAMS_FORCE_SHOUTED_CLEAR", false);
			}
		}
		if (uParam1->f_13 == 1)
		{
			sVar3 = func_1746(iParam2, 1);
			if ((((!MISC::IS_STRING_NULL_OR_EMPTY(sVar3) && NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(uParam0->f_4[1])) && NETWORK::NETWORK_HAS_CONTROL_OF_NETWORK_ID(uParam0->f_4[1])) && !PED::IS_PED_INJURED(NETWORK::NET_TO_PED(uParam0->f_4[1]))) && !__LIB_0__::func_864(&(uParam1->f_116)))
			{
				__LIB_0__::func_795(&(uParam1->f_116), 0, 0);
				AUDIO::PLAY_PED_AMBIENT_SPEECH_WITH_VOICE_NATIVE(NETWORK::NET_TO_PED(uParam0->f_4[1]), sVar3, "WFSTEWARDESS", "SPEECH_PARAMS_FORCE_SHOUTED_CLEAR", false);
			}
		}
	}
	else if (__LIB_2__::func_573(PLAYER::PLAYER_ID()))
	{
		if (uParam1->f_13 == 0)
		{
			sVar4 = func_1746(iParam2, 0);
			if ((((!MISC::IS_STRING_NULL_OR_EMPTY(sVar4) && NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(uParam0->f_4[0])) && NETWORK::NETWORK_HAS_CONTROL_OF_NETWORK_ID(uParam0->f_4[0])) && __LIB_0__::func_121(NETWORK::NET_TO_PED(uParam0->f_4[0]))) && !__LIB_0__::func_864(&(uParam1->f_116)))
			{
				__LIB_0__::func_795(&(uParam1->f_116), 0, 0);
				AUDIO::PLAY_PED_AMBIENT_SPEECH_WITH_VOICE_NATIVE(NETWORK::NET_TO_PED(uParam0->f_4[0]), sVar4, "HS3_WENDY", "SPEECH_PARAMS_FORCE_SHOUTED_CLEAR", false);
			}
		}
	}
	else if (__LIB_2__::func_884(PLAYER::PLAYER_ID()))
	{
		if (uParam1->f_13 == 0)
		{
			sVar5 = func_1746(iParam2, 0);
			if ((((!MISC::IS_STRING_NULL_OR_EMPTY(sVar5) && NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(uParam0->f_4[0])) && NETWORK::NETWORK_HAS_CONTROL_OF_NETWORK_ID(uParam0->f_4[0])) && !PED::IS_PED_INJURED(NETWORK::NET_TO_PED(uParam0->f_4[0]))) && !__LIB_0__::func_864(&(uParam1->f_116)))
			{
				__LIB_0__::func_795(&(uParam1->f_116), 0, 0);
				AUDIO::PLAY_PED_AMBIENT_SPEECH_WITH_VOICE_NATIVE(NETWORK::NET_TO_PED(uParam0->f_4[0]), sVar5, "WFSTEWARDESS", "SPEECH_PARAMS_FORCE_NORMAL", false);
			}
		}
		if (uParam1->f_13 == 1)
		{
			sVar6 = func_1746(iParam2, 1);
			if ((((!MISC::IS_STRING_NULL_OR_EMPTY(sVar6) && NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(uParam0->f_4[1])) && NETWORK::NETWORK_HAS_CONTROL_OF_NETWORK_ID(uParam0->f_4[1])) && __LIB_0__::func_121(NETWORK::NET_TO_PED(uParam0->f_4[1]))) && !__LIB_0__::func_864(&(uParam1->f_116)))
			{
				__LIB_0__::func_795(&(uParam1->f_116), 0, 0);
				AUDIO::PLAY_PED_AMBIENT_SPEECH_WITH_VOICE_NATIVE(NETWORK::NET_TO_PED(uParam0->f_4[1]), sVar6, "BTL_CONNIE", "SPEECH_PARAMS_FORCE_NORMAL", false);
			}
		}
	}
	else if (__LIB_1__::func_35())
	{
		if (uParam1->f_13 == 0)
		{
			sVar7 = func_1746(iParam2, 0);
			if ((((!MISC::IS_STRING_NULL_OR_EMPTY(sVar7) && NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(uParam0->f_4[0])) && NETWORK::NETWORK_HAS_CONTROL_OF_NETWORK_ID(uParam0->f_4[0])) && !PED::IS_PED_INJURED(NETWORK::NET_TO_PED(uParam0->f_4[0]))) && !__LIB_0__::func_864(&(uParam1->f_116)))
			{
				__LIB_0__::func_795(&(uParam1->f_116), 0, 0);
				AUDIO::PLAY_PED_AMBIENT_SPEECH_WITH_VOICE_NATIVE(NETWORK::NET_TO_PED(uParam0->f_4[0]), sVar7, "WFSTEWARDESS", "SPEECH_PARAMS_FORCE_NORMAL", false);
			}
		}
		if (uParam1->f_13 == 1)
		{
			sVar8 = func_1746(iParam2, 1);
			if ((((!MISC::IS_STRING_NULL_OR_EMPTY(sVar8) && NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(uParam0->f_4[1])) && NETWORK::NETWORK_HAS_CONTROL_OF_NETWORK_ID(uParam0->f_4[1])) && __LIB_0__::func_121(NETWORK::NET_TO_PED(uParam0->f_4[1]))) && !__LIB_0__::func_864(&(uParam1->f_116)))
			{
				__LIB_0__::func_795(&(uParam1->f_116), 0, 0);
				AUDIO::PLAY_PED_AMBIENT_SPEECH_WITH_VOICE_NATIVE(NETWORK::NET_TO_PED(uParam0->f_4[1]), sVar8, "BTL_CONNIE", "SPEECH_PARAMS_FORCE_NORMAL", false);
			}
		}
	}
}

char* func_1746(int iParam0, int iParam1)//Position - 0xBD309
{
	int iVar0;
	if (__LIB_2__::func_885(PLAYER::PLAYER_ID()))
	{
		switch (iParam1)
		{
			case 0:
				switch (iParam0)
				{
					case 11:
						return "BARTENDER_SERVE";
					case 12:
						return "BARTENDER_SERVE";
					case 13:
						return "BARTENDER_SERVE";
					case 0:
						return "BARTENDER_GREET";
					case 1:
						return "GENERIC_BYE";
					case 2:
						return "GENERIC_THANKS";
					case 10:
						return "BARTENDER_SERVE";
					case 15:
						return "PLAYER_DRUNK";
					default:
				}
				break;
			case 1:
				switch (iParam0)
				{
					case 4:
						return "CHOOSE_DRINK";
					case 5:
						return "CHOOSE_WHISKY";
					case 6:
						return "CHOOSE_MOUNT_WHISKY";
					case 7:
						return "CHOOSE_WHISKY_RICHARDS";
					case 8:
						return "CHOOSE_MACBETH_WHISKY";
					case 9:
						return "CHOOSE_CHAMP";
					case 11:
						return "SERVE_DRINK_SHOT";
					case 12:
						return "SERVE_DRINK_BEER";
					case 13:
						return "SERVE_DRINK_WHISKY";
					case 14:
						return "SERVE_DRINK_CHAMP";
					case 16:
						return "DRUNK_CHAMPS";
					case 0:
						return "GREET_OTHER_PLAYER";
					case 1:
						return "BYE_OTHER_PLAYER";
					case 2:
						return "THANKS_OTHER_PLAYER";
					case 3:
						return "DRINK_OTHER_PLAYER";
					case 10:
						return "SERVE_DRINK_OTHER_PLAYER";
					case 15:
						return "TOO_DRUNK";
					default:
				}
				break;
		}
	}
	else if (__LIB_1__::func_783(PLAYER::PLAYER_ID()))
	{
		switch (iParam1)
		{
			case 0:
				switch (iParam0)
				{
					case 4:
						return "GENERIC_BUY_RESPONSE";
					case 5:
						return "CONFIRM_WHISKEY";
					case 6:
						return "CONFIRM_WHISKEY";
					case 7:
						return "CONFIRM_WHISKEY";
					case 8:
						return "CONFIRM_WHISKEY";
					case 9:
						return "CONFIRM_CHAMPAGNE";
					case 10:
						return "HAND_OVER_DRINK";
					case 11:
						return "HAND_OVER_SHOT";
					case 12:
						return "HAND_OVER_BEER";
					case 13:
						return "HAND_OVER_WHISKEY";
					case 14:
						return "HAND_OVER_CHAMPAGNE";
					case 0:
						return "CAN_I_HELP_YOU";
					case 1:
						return "GENERIC_GOODBYE";
					case 15:
						return "CUT_OFF_DRUNK_CUSTOMER";
					case 17:
						return "DRINK_ORDER_HESITANT";
					case 18:
						return "WELCOME_MALE";
					case 19:
						return "WELCOME_FEMALE";
					case 20:
						return "FAREWELL";
					case 21:
						return "MENU_BROWSING";
					case 22:
						return "MENU_BROWSING_IDLE";
					case 27:
						return "MENU_NOT_ENOUGH";
					case 23:
						return "TAKE_YOUR_TIME";
					case 24:
						return "ANYTHING_ELSE";
					case 25:
						return "CAN_I_HELP_YOU_LINGERING";
					case 26:
						return "WELCOME_BACK_ALREADY";
					default:
				}
				break;
			case 1:
				switch (iParam0)
				{
					case 11:
						return "BARTENDER_SERVE";
					case 12:
						return "BARTENDER_SERVE";
					case 13:
						return "BARTENDER_SERVE";
					case 0:
						return "BARTENDER_GREET";
					case 1:
						return "GENERIC_BYE";
					case 2:
						return "GENERIC_THANKS";
					case 10:
						return "BARTENDER_SERVE";
					case 15:
						return "PLAYER_DRUNK";
					default:
				}
				break;
		}
	}
	else if (__LIB_2__::func_573(PLAYER::PLAYER_ID()))
	{
		switch (iParam1)
		{
			case 0:
				switch (iParam0)
				{
					case 0:
						return "ARCADE_PLAYER_HI";
					case 1:
						return "ARCADE_PLAYER_BYE";
					case 2:
						return "ARCADE_THANKS";
					case 3:
						return "ARCADE_SERVICE";
					case 4:
						return "ARCADE_CONFIRM_DRINK";
					case 5:
						return "ARCADE_CONFIRM_DRINK";
					case 6:
						return "ARCADE_CONFIRM_DRINK";
					case 7:
						return "ARCADE_CONFIRM_WHISKY";
					case 8:
						return "ARCADE_CONFIRM_WHISKY";
					case 9:
						return "ARCADE_CONFIRM_CHAMP";
					case 10:
						return "ARCADE_SERVE_DRINK";
					case 11:
						return "ARCADE_SERVE_SHOT";
					case 12:
						return "ARCADE_SERVE_BEER";
					case 13:
						return "ARCADE_SERVE_WHISKY";
					case 14:
						return "ARCADE_SERVE_CHAMP";
					case 15:
						return "ARCADE_TOO_DRUNK";
					case 16:
						return "ARCADE_TOO_DRUNK_CHAMP";
					case 17:
						return "ARCADE_SERVE_SHOT";
					case 18:
						return "ARCADE_WELCOME";
					case 19:
						return "ARCADE_WELCOME";
					case 20:
						return "ARCADE_PLAYER_BYE";
					case 21:
						return "ARCADE_IDLE_MENU";
					case 22:
						return "ARCADE_IDLE_MENU";
					case 23:
						return "ARCADE_IDLE_MENU";
					case 24:
						return "ARCADE_LOITER";
					case 26:
						return "ARCADE_WELCOME";
					case 27:
						return "ARCADE_NO_CASH";
					case 25:
						iVar0 = 1;
						if (func_1695(PLAYER::PLAYER_ID()))
						{
							if (((__LIB_9__::func_664(0) != 0 && __LIB_9__::func_663(0) != 0) && __LIB_9__::func_662(0) != 0) || __LIB_9__::func_661())
							{
								iVar0 = 4;
							}
							else
							{
								iVar0 = 3;
							}
						}
						switch (MISC::GET_RANDOM_INT_IN_RANGE(0, iVar0))
						{
							case 0:
								return "ARCADE_LOITER";
							case 1:
								if (func_1747(0) >= 4)
								{
									return "ARCADE_HIGH";
								}
								return "ARCADE_LOW";
								break;
							case 2:
								return "ARCADE_JIMMY";
							case 3:
								switch (MISC::GET_RANDOM_INT_IN_RANGE(0, 2))
								{
									case 0:
										if ((__LIB_9__::func_664(0) != 0 && __LIB_9__::func_663(0) != 0) && __LIB_9__::func_662(0) != 0)
										{
											return "ARCADE_CREW";
										}
										else if (__LIB_9__::func_661())
										{
											return "ARCADE_SAFE_FULL";
										}
										break;
									case 1:
										if (__LIB_9__::func_661())
										{
											return "ARCADE_SAFE_FULL";
										}
										else if ((__LIB_9__::func_664(0) != 0 && __LIB_9__::func_663(0) != 0) && __LIB_9__::func_662(0) != 0)
										{
											return "ARCADE_CREW";
										}
										break;
								}
								break;
						}
						break;
				}
				break;
		}
	}
	else if (__LIB_2__::func_884(PLAYER::PLAYER_ID()))
	{
		switch (iParam1)
		{
			case 0:
				switch (iParam0)
				{
					case 11:
						return "BARTENDER_SERVE";
					case 12:
						return "BARTENDER_SERVE";
					case 13:
						return "BARTENDER_SERVE";
					case 0:
						return "BARTENDER_GREET";
					case 1:
						return "GENERIC_BYE";
					case 2:
						return "GENERIC_THANKS";
					case 10:
						return "BARTENDER_SERVE";
					case 15:
						return "PLAYER_DRUNK";
					default:
				}
				break;
			case 1:
				switch (iParam0)
				{
					case 4:
						return "CHOOSE_DRINK";
					case 5:
						return "CHOOSE_WHISKY";
					case 6:
						return "CHOOSE_MOUNT_WHISKY";
					case 7:
						return "CHOOSE_WHISKY_RICHARDS";
					case 8:
						return "CHOOSE_MACBETH_WHISKY";
					case 9:
						return "CHOOSE_CHAMP";
					case 11:
						return "SERVE_DRINK_SHOT";
					case 12:
						return "SERVE_DRINK_BEER";
					case 13:
						return "SERVE_DRINK_WHISKY";
					case 14:
						return "SERVE_DRINK_CHAMP";
					case 16:
						return "DRUNK_CHAMPS";
					case 0:
						return "GREET_OTHER_PLAYER";
					case 1:
						return "BYE_OTHER_PLAYER";
					case 2:
						return "THANKS_OTHER_PLAYER";
					case 3:
						return "DRINK_OTHER_PLAYER";
					case 10:
						return "SERVE_DRINK_OTHER_PLAYER";
					case 15:
						return "TOO_DRUNK";
					default:
				}
				break;
		}
	}
	else if (__LIB_1__::func_35())
	{
		switch (iParam1)
		{
			case 0:
				switch (iParam0)
				{
					case 11:
						return "BARTENDER_SERVE";
					case 12:
						return "BARTENDER_SERVE";
					case 13:
						return "BARTENDER_SERVE";
					case 0:
						return "BARTENDER_GREET";
					case 1:
						return "GENERIC_BYE";
					case 2:
						return "GENERIC_THANKS";
					case 10:
						return "BARTENDER_SERVE";
					case 15:
						return "PLAYER_DRUNK";
					default:
				}
				break;
			case 1:
				switch (iParam0)
				{
					case 4:
						return "CHOOSE_DRINK";
					case 5:
						return "CHOOSE_WHISKY";
					case 6:
						return "CHOOSE_MOUNT_WHISKY";
					case 7:
						return "CHOOSE_WHISKY_RICHARDS";
					case 8:
						return "CHOOSE_MACBETH_WHISKY";
					case 9:
						return "CHOOSE_CHAMP";
					case 11:
						return "SERVE_DRINK_SHOT";
					case 12:
						return "SERVE_DRINK_BEER";
					case 13:
						return "SERVE_DRINK_WHISKY";
					case 14:
						return "SERVE_DRINK_CHAMP";
					case 16:
						return "DRUNK_CHAMPS";
					case 0:
						return "GREET_OTHER_PLAYER";
					case 1:
						return "BYE_OTHER_PLAYER";
					case 2:
						return "THANKS_OTHER_PLAYER";
					case 3:
						return "DRINK_OTHER_PLAYER";
					case 10:
						return "SERVE_DRINK_OTHER_PLAYER";
					case 15:
						return "TOO_DRUNK";
					default:
				}
				break;
			}
	}
	return "";
}

int func_1747(int iParam0)//Position - 0xBDC9D
{
	int iVar0;
	int iVar1;
	iVar0 = func_1754();
	iVar1 = func_1748(iParam0);
	if (iVar0 >= 13 && iVar1 >= 20)
	{
		return 6;
	}
	else if (iVar0 >= 11 && iVar1 >= 17)
	{
		return 5;
	}
	else if (iVar0 >= 9 && iVar1 >= 14)
	{
		return 4;
	}
	else if (iVar0 >= 7 && iVar1 >= 9)
	{
		return 3;
	}
	else if (iVar0 >= 5 && iVar1 >= 5)
	{
		return 2;
	}
	else if (iVar0 >= 2 && iVar1 >= 2)
	{
		return 1;
	}
	return 0;
}

int func_1748(int iParam0)//Position - 0xBDD42
{
	int iVar0;
	int iVar1;
	int iVar2;
	iVar2 = 0;
	while (iVar2 <= (__LIB_5__::func_132(iParam0) - 1))
	{
		iVar0 = __LIB_5__::func_118(__LIB_1__::func_874(PLAYER::PLAYER_ID()), iVar2, iParam0);
		if (iVar0 != 0 && !__LIB_5__::func_135(iVar0))
		{
			iVar1++;
		}
		iVar2++;
	}
	return iVar1;
}

int func_1754()//Position - 0xBDFB7
{
	int iVar0;
	int iVar1;
	iVar1 = 0;
	while (iVar1 <= 13)
	{
		if (__LIB_4__::func_996(__LIB_1__::func_874(PLAYER::PLAYER_ID()), iVar1, 0))
		{
			iVar0++;
		}
		iVar1++;
	}
	return iVar0;
}

int func_1764(int iParam0)//Position - 0xBE167
{
	if (__LIB_1__::func_783(PLAYER::PLAYER_ID()) && iParam0 == 0)
	{
		return 1;
	}
	return 0;
}

int func_1765(var uParam0)//Position - 0xBE188
{
	int iVar0;
	int iVar1;
	int iVar2;
	iVar0 = 0;
	while (iVar0 < 32)
	{
		iVar1 = PLAYER::INT_TO_PLAYERINDEX(iVar0);
		if (__LIB_0__::func_156(iVar1, 1, 1) && !NETWORK::NETWORK_IS_PLAYER_CONCEALED(iVar1))
		{
			if (iVar1 != PLAYER::PLAYER_ID())
			{
				iVar2 = PLAYER::GET_PLAYER_PED(iVar1);
				if (ENTITY::IS_ENTITY_VISIBLE(iVar2) && func_1768(uParam0, iVar1, uParam0->f_13, 0))
				{
					return 0;
				}
			}
		}
		iVar0++;
	}
	return 1;
}

int func_1768(var uParam0, int iParam1, int iParam2, bool bParam3)//Position - 0xBE23F
{
	int iVar0;
	int iVar1;
	if (__LIB_0__::func_156(iParam1, 1, 1))
	{
		iVar0 = PLAYER::GET_PLAYER_PED(iParam1);
		if (ENTITY::DOES_ENTITY_EXIST(iVar0))
		{
			iVar1 = 0;
			while (iVar1 < 2)
			{
				if ((iParam2 == -1 || iParam2 == iVar1) && ENTITY::IS_ENTITY_IN_ANGLED_AREA(iVar0, func_1769(iVar1, 0), func_1769(iVar1, 1), 1.5f, false, true, 0))
				{
					if (bParam3)
					{
						uParam0->f_13 = iVar1;
					}
					return 1;
				}
				iVar1++;
			}
		}
	}
	return 0;
}

Vector3 func_1769(int iParam0, int iParam1)//Position - 0xBE2B8
{
	struct<3> Var0;
	if (__LIB_1__::func_783(PLAYER::PLAYER_ID()))
	{
		if (iParam1 == 0)
		{
			switch (iParam0)
			{
				case 0:
					Var0 = { 1108.5745f, 209.62971f, -50.440166f };
					break;
				case 1:
					Var0 = { 1115.3352f, 209.27275f, -50.440166f };
					break;
			}
		}
		else if (iParam1 == 1)
		{
			switch (iParam0)
			{
				case 0:
					Var0 = { 1108.1821f, 208.2789f, -48.440166f };
					break;
				case 1:
					Var0 = { 1114.6843f, 210.35358f, -48.440166f };
					break;
				}
		}
	}
	else if (__LIB_2__::func_885(PLAYER::PLAYER_ID()))
	{
		if (iParam1 == 0)
		{
			switch (iParam0)
			{
				case 0:
					Var0 = { 946.03546f, 17.948479f, 115.16417f };
					break;
				case 1:
					Var0 = { 944.4171f, 15.463163f, 115.16417f };
					break;
			}
		}
		else if (iParam1 == 1)
		{
			switch (iParam0)
			{
				case 0:
					Var0 = { 945.17535f, 16.522818f, 117.195526f };
					break;
				case 1:
					Var0 = { 943.5858f, 14.092994f, 117.16417f };
					break;
				}
		}
	}
	else if (__LIB_2__::func_573(PLAYER::PLAYER_ID()))
	{
		if (iParam1 == 0)
		{
			switch (iParam0)
			{
				case 0:
					Var0 = { 2725.4104f, -386.12045f, -49.99991f };
					break;
			}
		}
		else if (iParam1 == 1)
		{
			switch (iParam0)
			{
				case 0:
					Var0 = { 2725.423f, -384.79135f, -47.99991f };
					break;
				}
		}
	}
	else if (__LIB_2__::func_884(PLAYER::PLAYER_ID()))
	{
		if (iParam1 == 0)
		{
			switch (iParam0)
			{
				case 0:
					Var0 = { 1568.024f, 250.61322f, -47.00508f };
					break;
				case 1:
					Var0 = { 1569.7219f, 254.34937f, -47.00512f };
					break;
			}
		}
		else if (iParam1 == 1)
		{
			switch (iParam0)
			{
				case 0:
					Var0 = { 1568.0321f, 249.06134f, -45.00508f };
					break;
				case 1:
					Var0 = { 1568.5894f, 253.49376f, -45.00508f };
					break;
				}
		}
	}
	else if (__LIB_1__::func_35())
	{
		if (iParam1 == 0)
		{
			switch (iParam0)
			{
				case 0:
					Var0 = { 4902.7505f, -4940.674f, 2.362114f };
					break;
				case 1:
					Var0 = { 4905.815f, -4938.9707f, 2.369243f };
					break;
			}
		}
		else if (iParam1 == 1)
		{
			switch (iParam0)
			{
				case 0:
					Var0 = { 4901.5503f, -4941.5386f, 4.362461f };
					break;
				case 1:
					Var0 = { 4904.387f, -4939.556f, 4.361623f };
					break;
				}
			}
	}
	return Var0;
}

void func_1770(var uParam0, var uParam1, var uParam2)//Position - 0xBE58C
{
	int iVar0;
	int iVar1;
	if (NETWORK::NETWORK_IS_HOST_OF_THIS_SCRIPT())
	{
		if (!uParam1->f_3)
		{
			iVar0 = 0;
			while (iVar0 < 2)
			{
				uParam1->f_7[iVar0] = __LIB_0__::func_162();
				iVar0++;
			}
			uParam1->f_3 = 1;
			return;
		}
		iVar0 = 0;
		while (iVar0 < 2)
		{
			if (uParam1->f_7[iVar0] != __LIB_0__::func_162())
			{
				iVar1 = uParam1->f_7[iVar0];
				if (!__LIB_0__::func_156(uParam1->f_7[iVar0], 1, 1) || (uParam2[iVar1 /*2*/])->f_1 == -1)
				{
					uParam1->f_7[iVar0] = __LIB_0__::func_162();
				}
			}
			iVar0++;
		}
		iVar0 = uParam0->f_17;
		if ((uParam2[iVar0 /*2*/])->f_1 > -1 && (uParam2[iVar0 /*2*/])->f_1 < 2)
		{
			if (uParam1->f_7[(uParam2[iVar0 /*2*/])->f_1] == __LIB_0__::func_162())
			{
				if (__LIB_0__::func_156(PLAYER::INT_TO_PLAYERINDEX(iVar0), 1, 1))
				{
					uParam1->f_7[(uParam2[iVar0 /*2*/])->f_1] = PLAYER::INT_TO_PLAYERINDEX(iVar0);
				}
			}
		}
		uParam0->f_17++;
		if (uParam0->f_17 >= 32)
		{
			uParam0->f_17 = 0;
		}
	}
}

void func_1771(var uParam0, var uParam1)//Position - 0xBE694
{
	if (BitTest(uParam1->f_11, 11))
	{
		if (!__LIB_0__::func_112())
		{
			if (__LIB_2__::func_573(PLAYER::PLAYER_ID()))
			{
				MONEY::NETWORK_SPEND_ARCADE(0, 0, 1, 0, (uParam1->f_128.f_7 + func_1706()));
			}
			else if (__LIB_1__::func_35())
			{
				MONEY::NETWORK_SPEND_BEACH_PARTY((uParam1->f_128.f_7 + func_1706()) + 1);
			}
		}
		else if (__LIB_1__::func_35())
		{
			MONEY::NETWORK_SPEND_BEACH_PARTY((uParam1->f_128.f_7 + func_1706()) + 1);
		}
		if (uParam1->f_128.f_7 == 0)
		{
			__LIB_1__::func_746(62, 1, -1);
			func_1733(-39155154, 0, 1);
		}
		else if (uParam1->f_128.f_7 == 5)
		{
			__LIB_1__::func_746(10404, 1, -1);
			func_1733(495696637, 0, 1);
		}
		else if (uParam1->f_128.f_7 == 1)
		{
			__LIB_1__::func_746(1277, 1, -1);
			__LIB_0__::func_186(15, 1, -1);
			func_1733(-201543030, 0, 1);
		}
		else if (uParam1->f_128.f_7 == 2)
		{
			__LIB_0__::func_186(14, 1, -1);
			__LIB_1__::func_746(1278, 1, -1);
			func_1733(1486811039, 0, 1);
		}
		else if (uParam1->f_128.f_7 == 3)
		{
			__LIB_1__::func_746(1276, 1, -1);
			__LIB_0__::func_186(16, 1, -1);
			func_1733(850181419, 0, 1);
		}
		else if (uParam1->f_128.f_7 == 4)
		{
			uParam1->f_128.f_1 = 20;
			if (uParam1->f_128.f_3 + 20 > 20)
			{
				uParam1->f_128.f_1 = (20 - uParam1->f_128.f_3);
			}
			__LIB_1__::func_746(1098, uParam1->f_128.f_1, -1);
			func_1733(-181862273, 0, uParam1->f_128.f_1);
		}
		func_1745(uParam0, uParam1, 4);
		uParam1->f_128.f_2 = __LIB_1__::func_360(62, -1, 0);
		uParam1->f_128.f_5 = __LIB_1__::func_360(1277, -1, 0);
		uParam1->f_128.f_6 = __LIB_1__::func_360(1278, -1, 0);
		uParam1->f_128 = __LIB_1__::func_360(1276, -1, 0);
		uParam1->f_128.f_3 = __LIB_1__::func_360(1098, -1, 0);
		uParam1->f_128.f_4 = __LIB_1__::func_360(10404, -1, 0);
		__LIB_0__::func_794(&(uParam1->f_104));
		MISC::SET_BIT(&(uParam1->f_11), 0);
		MISC::CLEAR_BIT(&(uParam1->f_11), 11);
		MISC::CLEAR_BIT(&(uParam1->f_11), 4);
		MISC::CLEAR_BIT(&(uParam1->f_11), 9);
	}
}

void func_1772(var uParam0, var uParam1)//Position - 0xBE898
{
	int iVar0;
	int iVar1;
	int iVar2;
	struct<3> Var3;
	var uVar4;
	var uVar5;
	if (BitTest(uParam1->f_11, 2))
	{
		if (func_1693(uParam1->f_21, 0) > 0)
		{
			if (!BitTest(uParam1->f_11, 4))
			{
				if (__LIB_0__::func_112())
				{
					if (__LIB_2__::func_885(PLAYER::PLAYER_ID()))
					{
						uParam1->f_18 = func_1787(func_1693(uParam1->f_21, 1), uParam1->f_21, "PRIVATE_BAR");
					}
					else if (__LIB_1__::func_783(PLAYER::PLAYER_ID()) || __LIB_1__::func_35())
					{
						uParam1->f_18 = func_1787(func_1693(uParam1->f_21, 1), uParam1->f_21, "BAR");
					}
					else if (__LIB_2__::func_573(PLAYER::PLAYER_ID()))
					{
						uParam1->f_18 = func_1786(func_1693(uParam1->f_21, 1), uParam1->f_21);
					}
					else if (__LIB_2__::func_884(PLAYER::PLAYER_ID()))
					{
						func_1785(&(uParam1->f_18), func_1693(uParam1->f_21, 1), uParam1->f_21 + 1, func_1693(uParam1->f_21, 1), -1, -1, -1, -1);
					}
					else if (__LIB_1__::func_35())
					{
						uParam1->f_18 = func_1773(uParam1->f_21 + 1);
					}
					if (uParam1->f_18 >= 0)
					{
						Global_4534105[uParam1->f_18 /*85*/] = uParam1->f_21;
					}
					MISC::SET_BIT(&(uParam1->f_11), 4);
					__LIB_0__::func_794(&(uParam1->f_114));
				}
				else
				{
					MISC::CLEAR_BIT(&(uParam1->f_11), 2);
					if (__LIB_2__::func_885(PLAYER::PLAYER_ID()))
					{
						func_1787(func_1693(uParam1->f_21, 1), uParam1->f_21, "PRIVATE_BAR");
					}
					else if (__LIB_1__::func_783(PLAYER::PLAYER_ID()))
					{
						func_1787(func_1693(uParam1->f_21, 1), uParam1->f_21, "BAR");
					}
					else if (__LIB_2__::func_573(PLAYER::PLAYER_ID()))
					{
						func_1786(func_1693(uParam1->f_21, 1), uParam1->f_21);
					}
					else if (__LIB_2__::func_884(PLAYER::PLAYER_ID()))
					{
						func_1785(&uVar4, func_1693(uParam1->f_21, 1), uParam1->f_21 + 1, func_1693(uParam1->f_21, 1), -1, -1, -1, -1);
					}
					else if (__LIB_1__::func_35())
					{
						func_1773(uParam1->f_21 + 1);
					}
					iVar0 = 1;
				}
			}
			else if (__LIB_0__::func_937(&(uParam1->f_114), 15000, 0))
			{
				MISC::SET_BIT(&(uParam1->f_11), 5);
				iVar0 = 1;
			}
			else
			{
				if (uParam1->f_16 == -1 && uParam1->f_18 >= 0)
				{
					if (Global_4534105[uParam1->f_18 /*85*/].f_66 != 2147483647)
					{
						uParam1->f_16 = Global_4534105[uParam1->f_18 /*85*/].f_66;
					}
				}
				iVar1 = 0;
				while (iVar1 < SCRIPT::GET_NUMBER_OF_EVENTS(1))
				{
					if (SCRIPT::GET_EVENT_AT_INDEX(1, iVar1) == 227)
					{
						if (SCRIPT::GET_EVENT_DATA(1, iVar1, &Var3, 7))
						{
							if (Var3.f_0 == uParam1->f_16 && Var3.f_0 != -1)
							{
								if (Var3.f_2 == 0)
								{
								}
								else
								{
									MISC::SET_BIT(&(uParam1->f_11), 5);
								}
								iVar0 = 1;
							}
						}
					}
					iVar1++;
				}
			}
		}
		else if ((!__LIB_0__::func_112() || __LIB_2__::func_884(PLAYER::PLAYER_ID())) || __LIB_1__::func_35())
		{
			if (__LIB_2__::func_885(PLAYER::PLAYER_ID()))
			{
				func_1787(func_1693(uParam1->f_21, 1), uParam1->f_21, "PRIVATE_BAR");
			}
			else if (__LIB_1__::func_783(PLAYER::PLAYER_ID()))
			{
				func_1787(func_1693(uParam1->f_21, 1), uParam1->f_21, "BAR");
			}
			else if (__LIB_2__::func_573(PLAYER::PLAYER_ID()))
			{
				func_1786(func_1693(uParam1->f_21, 1), uParam1->f_21);
			}
			else if (__LIB_2__::func_884(PLAYER::PLAYER_ID()))
			{
				func_1785(&uVar5, func_1693(uParam1->f_21, 1), uParam1->f_21 + 1, func_1693(uParam1->f_21, 1), -1, -1, -1, -1);
			}
			else if (__LIB_1__::func_35())
			{
				func_1773(uParam1->f_21 + 1);
			}
		}
		if (iVar0 || func_1693(uParam1->f_21, 0) <= 0)
		{
			if (BitTest(uParam1->f_11, 5))
			{
			}
			else
			{
				__LIB_1__::func_28(155);
				if (uParam1->f_21 == 0)
				{
					func_1745(uParam0, uParam1, 4);
					__LIB_9__::func_408(uParam1, 8);
					MISC::SET_BIT(&(uParam1->f_11), 1);
				}
				else if (uParam1->f_21 == 5)
				{
					func_1745(uParam0, uParam1, 4);
					func_1619(uParam1);
					__LIB_9__::func_408(uParam1, 23);
					MISC::SET_BIT(&(uParam1->f_11), 1);
				}
				else if ((uParam1->f_21 != 6 && uParam1->f_21 != 7) && uParam1->f_21 != 8)
				{
					if (uParam1->f_21 == 1)
					{
						if (func_1764(uParam1->f_13) || __LIB_2__::func_573(PLAYER::PLAYER_ID()))
						{
							iVar2 = MISC::GET_RANDOM_INT_IN_RANGE(0, 2);
							if (__LIB_9__::func_398(PLAYER::PLAYER_PED_ID()) >= 3 && iVar2 == 0)
							{
								func_1745(uParam0, uParam1, 17);
							}
							else
							{
								func_1745(uParam0, uParam1, 4);
							}
						}
						else
						{
							func_1745(uParam0, uParam1, 5);
						}
						uParam1->f_22 = 0;
					}
					else if (uParam1->f_21 == 2)
					{
						if (func_1764(uParam1->f_13) || __LIB_2__::func_573(PLAYER::PLAYER_ID()))
						{
							iVar2 = MISC::GET_RANDOM_INT_IN_RANGE(0, 2);
							if (__LIB_9__::func_398(PLAYER::PLAYER_PED_ID()) >= 3 && iVar2 == 0)
							{
								func_1745(uParam0, uParam1, 17);
							}
							else
							{
								func_1745(uParam0, uParam1, 6);
							}
						}
						else
						{
							func_1745(uParam0, uParam1, 6);
						}
						uParam1->f_22 = 1;
					}
					else if (uParam1->f_21 == 3)
					{
						if (func_1764(uParam1->f_13) || __LIB_2__::func_573(PLAYER::PLAYER_ID()))
						{
							iVar2 = MISC::GET_RANDOM_INT_IN_RANGE(0, 2);
							if (__LIB_9__::func_398(PLAYER::PLAYER_PED_ID()) >= 3 && iVar2 == 0)
							{
								func_1745(uParam0, uParam1, 17);
							}
							else
							{
								func_1745(uParam0, uParam1, 7);
							}
						}
						else
						{
							func_1745(uParam0, uParam1, 7);
						}
						uParam1->f_22 = 2;
					}
					else if (uParam1->f_21 == 4)
					{
						if (func_1764(uParam1->f_13) || __LIB_2__::func_573(PLAYER::PLAYER_ID()))
						{
							iVar2 = MISC::GET_RANDOM_INT_IN_RANGE(0, 2);
							if (__LIB_9__::func_398(PLAYER::PLAYER_PED_ID()) >= 3 && iVar2 == 0)
							{
								func_1745(uParam0, uParam1, 17);
							}
							else
							{
								func_1745(uParam0, uParam1, 8);
							}
						}
						else
						{
							func_1745(uParam0, uParam1, 8);
						}
						uParam1->f_22 = 3;
					}
					func_1619(uParam1);
					__LIB_9__::func_408(uParam1, 10);
					MISC::SET_BIT(&(uParam1->f_11), 1);
				}
			}
			MISC::SET_BIT(&(uParam1->f_11), 0);
			MISC::SET_BIT(&(uParam1->f_12), 3);
			MISC::CLEAR_BIT(&(uParam1->f_11), 2);
			MISC::CLEAR_BIT(&(uParam1->f_11), 4);
			MISC::CLEAR_BIT(&(uParam1->f_11), 9);
		}
	}
}

int func_1773(int iParam0)//Position - 0xBEE74
{
	int iVar0;
	if (__LIB_0__::func_112())
	{
		__LIB_2__::func_604(joaat("SERVICE_SPEND_BEACH_PARTY_GENERIC"), 0, &iVar0, 0, 1, 0);
		Global_4534105[iVar0 /*85*/] = iParam0;
		return iVar0;
	}
	else
	{
		MONEY::NETWORK_SPEND_BEACH_PARTY(iParam0);
	}
	return -1;
}

int func_1785(var uParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7)//Position - 0xBFC6C
{
	int iVar0;
	if (__LIB_0__::func_112())
	{
		iVar0 = -1;
		__LIB_2__::func_604(joaat("SERVICE_SPEND_CASINO_CLUB_GENERIC"), iParam1, &iVar0, 0, 1, 0);
		if (iVar0 != -1)
		{
			*uParam0 = iVar0;
			Global_4534105[*uParam0 /*85*/] = iParam2;
			Global_4534105[*uParam0 /*85*/].f_10 = iParam3;
			Global_4534105[*uParam0 /*85*/].f_11 = iParam4;
			Global_4534105[*uParam0 /*85*/].f_12 = iParam5;
			Global_4534105[*uParam0 /*85*/].f_6 = iParam6;
			Global_4534105[*uParam0 /*85*/].f_7 = iParam7;
			return 1;
		}
	}
	else
	{
		MONEY::NETWORK_SPEND_CASINO_CLUB(iParam1, 0, true, iParam2, iParam3, iParam4, iParam5, iParam6, iParam7);
		return 1;
	}
	return 0;
}

int func_1786(int iParam0, int iParam1)//Position - 0xBFD08
{
	int iVar0;
	if (__LIB_0__::func_112())
	{
		__LIB_2__::func_604(joaat("SERVICE_SPEND_ARCADE_GENERIC"), iParam0, &iVar0, 0, 1, 0);
		Global_4534105[iVar0 /*85*/] = iParam1;
		return iVar0;
	}
	else
	{
		MONEY::NETWORK_SPEND_ARCADE(iParam0, 0, 1, iParam1, iParam0);
	}
	return -1;
}

int func_1787(int iParam0, int iParam1, char* sParam2)//Position - 0xBFD46
{
	int iVar0;
	if (__LIB_0__::func_112())
	{
		__LIB_2__::func_604(joaat("SERVICE_SPEND_CASINO_GENERIC"), iParam0, &iVar0, 0, 1, 0);
		StringCopy(&(Global_4534105[iVar0 /*85*/].f_14.f_26), sParam2, 32);
		Global_4534105[iVar0 /*85*/] = iParam1;
		return iVar0;
	}
	else
	{
		MONEY::NETWORK_SPEND_CASINO_GENERIC(iParam0, 0, 1, sParam2, iParam1);
	}
	return -1;
}

void func_1803()//Position - 0xC03B8
{
	bool bVar0;
	bVar0 = true;
	if (!func_1805(&(Local_150.f_170)))
	{
		bVar0 = false;
	}
	if (bVar0)
	{
		func_1804(1);
	}
}

void func_1804(int iParam0)//Position - 0xC03DC
{
	Local_150.f_1211 = iParam0;
}

int func_1805(var uParam0)//Position - 0xC03EB
{
	switch (uParam0->f_2)
	{
		case 0:
			return 0;
		case 1:
			func_1586(uParam0);
			return 0;
		case 2:
			__LIB_31__::func_384(uParam0);
			return 0;
		default:
	}
	return 1;
}

bool func_1806(int iParam0)//Position - 0xC0427
{
	return Local_150.f_1211 == iParam0;
}

void func_1807()//Position - 0xC0437
{
	if (((!BitTest(Local_150.f_0, 3) && __LIB_0__::func_938(PLAYER::PLAYER_ID())) && SCRIPT::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(MISC::GET_HASH_KEY("beach_exterior_seating")) == 0) && !NETWORK::NETWORK_IS_SCRIPT_ACTIVE("beach_exterior_seating", -1, true, 0))
	{
		SCRIPT::REQUEST_SCRIPT("beach_exterior_seating");
		if (SCRIPT::HAS_SCRIPT_LOADED("beach_exterior_seating"))
		{
			SYSTEM::START_NEW_SCRIPT("beach_exterior_seating", 5050);
			SCRIPT::SET_SCRIPT_AS_NO_LONGER_NEEDED("beach_exterior_seating");
			MISC::SET_BIT(&Local_150, 3);
		}
	}
	else if (BitTest(Local_150.f_0, 3))
	{
		if (SCRIPT::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(MISC::GET_HASH_KEY("beach_exterior_seating")) == 0 && !NETWORK::NETWORK_IS_SCRIPT_ACTIVE("beach_exterior_seating", -1, true, 0))
		{
			MISC::CLEAR_BIT(&Local_150, 3);
		}
	}
}

void func_1808()//Position - 0xC04E1
{
	if (!Global_1637406)
	{
		MISC::CLEAR_BIT(&Local_150, 1);
		MISC::CLEAR_BIT(&Local_150, 0);
		MISC::CLEAR_BIT(&Local_150, 2);
	}
	if (__LIB_4__::func_850(PLAYER::PLAYER_PED_ID()) < 3 && __LIB_5__::func_826(PLAYER::PLAYER_PED_ID()) < 3)
	{
		if ((ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), 4894.004f, -4890.654f, 2.674105f, 4889.938f, -4949.889f, 9.369576f, 37.75f, false, true, 0) || PAD::GET_CONTROL_NORMAL(2 /*FRONTEND_CONTROL*/, 207 /*INPUT_FRONTEND_LT*/) > 0f) && !func_1581())
		{
			TASK::SET_PED_CAN_PLAY_AMBIENT_IDLES(PLAYER::PLAYER_PED_ID(), true, false);
			if (PAD::GET_CONTROL_NORMAL(2 /*FRONTEND_CONTROL*/, 207 /*INPUT_FRONTEND_LT*/) > 0f)
			{
				if (!BitTest(Local_150.f_0, 2))
				{
					STREAMING::REQUEST_CLIP_SET(__LIB_1__::func_295(__LIB_0__::func_253(386, -1) == 0, "MOVE_M@DANCING@VERY_SLOW", "MOVE_F@DANCING@VERY_SLOW"));
					if (STREAMING::HAS_CLIP_SET_LOADED(__LIB_1__::func_295(__LIB_0__::func_253(386, -1) == 0, "MOVE_M@DANCING@VERY_SLOW", "MOVE_F@DANCING@VERY_SLOW")))
					{
						PED::SET_PED_MOVEMENT_CLIPSET(PLAYER::PLAYER_PED_ID(), __LIB_1__::func_295(__LIB_0__::func_253(386, -1) == 0, "MOVE_M@DANCING@VERY_SLOW", "MOVE_F@DANCING@VERY_SLOW"), 0.5f);
						Global_1637406 = 1;
						MISC::SET_BIT(&Local_150, 2);
						MISC::CLEAR_BIT(&Local_150, 1);
						MISC::CLEAR_BIT(&Local_150, 0);
					}
				}
			}
			else if (!ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), 4893.6914f, -4899.992f, 2.378432f, 4894.235f, -4917.5356f, 5.367703f, 15f, false, true, 0))
			{
				if (!BitTest(Local_150.f_0, 1))
				{
					STREAMING::REQUEST_CLIP_SET(__LIB_1__::func_295(__LIB_0__::func_253(386, -1) == 0, "MOVE_M@DANCING", "MOVE_F@DANCING"));
					if (STREAMING::HAS_CLIP_SET_LOADED(__LIB_1__::func_295(__LIB_0__::func_253(386, -1) == 0, "MOVE_M@DANCING", "MOVE_F@DANCING")))
					{
						PED::SET_PED_MOVEMENT_CLIPSET(PLAYER::PLAYER_PED_ID(), __LIB_1__::func_295(__LIB_0__::func_253(386, -1) == 0, "MOVE_M@DANCING", "MOVE_F@DANCING"), 0.25f);
						Global_1637406 = 1;
						MISC::SET_BIT(&Local_150, 1);
						MISC::CLEAR_BIT(&Local_150, 0);
						MISC::CLEAR_BIT(&Local_150, 2);
					}
				}
			}
			else if (!BitTest(Local_150.f_0, 0))
			{
				STREAMING::REQUEST_CLIP_SET(__LIB_1__::func_295(__LIB_0__::func_253(386, -1) == 0, "MOVE_M@DANCING@SLOW", "MOVE_F@DANCING@SLOW"));
				if (STREAMING::HAS_CLIP_SET_LOADED(__LIB_1__::func_295(__LIB_0__::func_253(386, -1) == 0, "MOVE_M@DANCING@SLOW", "MOVE_F@DANCING@SLOW")))
				{
					PED::SET_PED_MOVEMENT_CLIPSET(PLAYER::PLAYER_PED_ID(), __LIB_1__::func_295(__LIB_0__::func_253(386, -1) == 0, "MOVE_M@DANCING@SLOW", "MOVE_F@DANCING@SLOW"), 0.25f);
					Global_1637406 = 1;
					MISC::SET_BIT(&Local_150, 0);
					MISC::CLEAR_BIT(&Local_150, 1);
					MISC::CLEAR_BIT(&Local_150, 2);
				}
			}
		}
		else
		{
			func_1809();
		}
	}
	else
	{
		func_1809();
	}
}

void func_1809()//Position - 0xC074E
{
	if (Global_1637406)
	{
		STREAMING::REMOVE_CLIP_SET(__LIB_1__::func_295(__LIB_0__::func_253(386, -1) == 0, "MOVE_M@DANCING", "MOVE_F@DANCING"));
		STREAMING::REMOVE_CLIP_SET(__LIB_1__::func_295(__LIB_0__::func_253(386, -1) == 0, "MOVE_M@DANCING@SLOW", "MOVE_F@DANCING@SLOW"));
		STREAMING::REMOVE_CLIP_SET(__LIB_1__::func_295(__LIB_0__::func_253(386, -1) == 0, "MOVE_M@DANCING@VERY_SLOW", "MOVE_F@DANCING@VERY_SLOW"));
		if (__LIB_4__::func_850(PLAYER::PLAYER_PED_ID()) < 3 && __LIB_5__::func_826(PLAYER::PLAYER_PED_ID()) < 3)
		{
			Global_2815059.f_4607 = 1;
		}
		Global_1637406 = 0;
		MISC::CLEAR_BIT(&Local_150, 1);
		MISC::CLEAR_BIT(&Local_150, 0);
		MISC::CLEAR_BIT(&Local_150, 2);
	}
}

void func_1810(int iParam0, var uParam1, int iParam2, int iParam3, int iParam4)//Position - 0xC07EF
{
	bool bVar0;
	struct<3> Var1;
	if (iParam4 && !func_1811(iParam0))
	{
		*uParam1 = 0;
		return;
	}
	if (Global_1579011)
	{
		if (!SCRIPT::IS_THREAD_ACTIVE(Global_1579008))
		{
			*uParam1 = 0;
		}
	}
	if (!*uParam1)
	{
		bVar0 = false;
		if (((!SCRIPT::IS_THREAD_ACTIVE(Global_1579008) && !NETWORK::NETWORK_IS_SCRIPT_ACTIVE("AM_MP_PEDS", iParam2, true, 0)) && SCRIPT::GET_NUMBER_OF_THREADS_RUNNING_THE_SCRIPT_WITH_THIS_HASH(MISC::GET_HASH_KEY("AM_MP_PEDS")) < 1) && !NETWORK::NETWORK_IS_ACTIVITY_SESSION())
		{
			bVar0 = true;
			if (iParam3 && Global_1946244 == 0)
			{
				bVar0 = false;
			}
			if (bVar0)
			{
				SCRIPT::REQUEST_SCRIPT("AM_MP_PEDS");
				if (SCRIPT::HAS_SCRIPT_LOADED("AM_MP_PEDS"))
				{
					Var1.f_0 = iParam0;
					Var1.f_1 = SCRIPT::GET_HASH_OF_THIS_SCRIPT_NAME();
					Var1.f_2 = iParam2;
					Global_1579009 = 0;
					Global_1579008 = SYSTEM::START_NEW_SCRIPT_WITH_ARGS("AM_MP_PEDS", &Var1, 3, 15900);
					SCRIPT::SET_SCRIPT_AS_NO_LONGER_NEEDED("AM_MP_PEDS");
					*uParam1 = 1;
				}
			}
		}
	}
}

int func_1811(int iParam0)//Position - 0xC08D4
{
	int iVar0;
	func_1812(iParam0, &iVar0, 0);
	if (iVar0 != 0)
	{
		Call_Loc(iVar0);
		return StackVal;
	}
	return 0;
}

void func_1812(int iParam0, var uParam1, int iParam2)//Position - 0xC08F2
{
	switch (iParam0)
	{
		case 0:
			func_2623(uParam1, iParam2);
			break;
		case 1:
			func_2572(uParam1, iParam2);
			break;
		case 2:
			func_2282(uParam1, iParam2);
			break;
		case 3:
			func_2214(uParam1, iParam2);
			break;
		case 4:
			func_2162(uParam1, iParam2);
			break;
		case 5:
			func_2101(uParam1, iParam2);
			break;
		case 6:
			func_2031(uParam1, iParam2);
			break;
		case 7:
		case 8:
		case 9:
		case 10:
			func_1954(uParam1, iParam2);
			break;
		case 11:
			func_1920(uParam1, iParam2);
			break;
		case 12:
			func_1890(uParam1, iParam2);
			break;
		case 13:
			func_1813(uParam1, iParam2);
			break;
	}
}

void func_1813(var uParam0, int iParam1)//Position - 0xC09CE
{
	switch (iParam1)
	{
		case 0:
			*uParam0 = 798944/*__LIB_11__::func_597*/;
			break;
		case 1:
			uParam0->f_1 = 798935/*__LIB_0__::func_109*/;
			break;
		case 2:
			uParam0->f_2 = 798764/*func_1886*/;
			break;
		case 3:
			uParam0->f_3 = 798755/*__LIB_0__::func_114*/;
			break;
		case 4:
			uParam0->f_4 = 798746/*__LIB_1__::func_804*/;
			break;
		case 5:
			uParam0->f_5 = 798626/*func_1882*/;
			break;
		case 6:
			uParam0->f_6 = 798617/*__LIB_1__::func_806*/;
			break;
		case 9:
			uParam0->f_9 = 795689/*func_1862*/;
			break;
		case 10:
			uParam0->f_10 = 795518/*func_1861*/;
			break;
		case 11:
			uParam0->f_11 = 794597/*__LIB_10__::func_700*/;
			break;
		case 14:
			uParam0->f_14 = 794583/*__LIB_11__::func_596*/;
			break;
		case 7:
			uParam0->f_7 = 794572/*__LIB_3__::func_554*/;
			break;
		case 8:
			uParam0->f_8 = 794563/*__LIB_7__::func_239*/;
			break;
		case 16:
			uParam0->f_16 = 794505/*__LIB_8__::func_398*/;
			break;
		case 17:
			uParam0->f_17 = 794343/*__LIB_8__::func_410*/;
			break;
		case 18:
			uParam0->f_18 = 794284/*__LIB_9__::func_859*/;
			break;
		case 19:
			uParam0->f_19 = 794149/*__LIB_40__::func_888*/;
			break;
		case 21:
			uParam0->f_21 = 794003/*__LIB_9__::func_858*/;
			break;
		case 29:
			uParam0->f_29 = 793909/*__LIB_9__::func_138*/;
			break;
		case 34:
			uParam0->f_30 = 793792/*__LIB_11__::func_580*/;
			break;
		case 23:
			uParam0->f_22 = 793728/*__LIB_8__::func_408*/;
			break;
		case 22:
			uParam0->f_23 = 793443/*__LIB_11__::func_590*/;
			break;
		case 24:
			uParam0->f_24 = 793215/*__LIB_40__::func_887*/;
			break;
		case 25:
			uParam0->f_25 = 792887/*func_1833*/;
			break;
		case 26:
			uParam0->f_26 = 792197/*func_1831*/;
			break;
		case 35:
			uParam0->f_35 = 789398/*__LIB_42__::func_903*/;
			break;
	}
}

void func_1831(var uParam0, int iParam1, var uParam2, int iParam3)//Position - 0xC1685
{
	int iVar0;
	int iVar1;
	__LIB_8__::func_405(uParam0);
	iVar1 = __LIB_11__::func_610(PLAYER::PLAYER_ID());
	switch (__LIB_8__::func_401(iVar1, __LIB_31__::func_478(iVar1)))
	{
		case 0:
			uParam0->f_5 = "SM2_WBOSS1";
			switch (iParam3)
			{
				case 1:
					iVar0 = MISC::GET_RANDOM_INT_IN_RANGE(0, 3);
					uParam0->f_4 = "GENERIC_HI";
					if (iVar0 == 1)
					{
						uParam0->f_4 = "GENERIC_HOWSITGOING";
					}
					else if (iVar0 == 2)
					{
						if (__LIB_1__::func_394())
						{
							uParam0->f_4 = "GREET_OWNER_FEMALE";
						}
						uParam0->f_4 = "GREET_OWNER_MALE";
					}
					break;
				case 2:
					uParam0->f_4 = "GENERIC_BYE";
					break;
				case 3:
					uParam0->f_4 = "BUMP";
					break;
				case 4:
					uParam0->f_4 = "IDLE";
					break;
				case 10:
					uParam0->f_4 = "SOURCE_CARGO_POSITIVE";
					break;
				case 11:
					uParam0->f_4 = "SOURCE_CARGO_NEGATIVE";
					break;
			}
			break;
		case 1:
			uParam0->f_5 = "A_M_Y_Ktown_01_Korean_FULL_01";
			switch (iParam3)
			{
				case 1:
					iVar0 = MISC::GET_RANDOM_INT_IN_RANGE(0, 2);
					uParam0->f_4 = "GENERIC_HI";
					if (iVar0 == 1)
					{
						uParam0->f_4 = "GENERIC_HOWS_IT_GOING";
					}
					break;
				case 2:
					uParam0->f_4 = "GENERIC_BYE";
					break;
				case 10:
					uParam0->f_4 = "GENERIC_YES";
					break;
			}
			break;
		case 2:
			uParam0->f_5 = "A_F_M_Bodybuild_01_Black_FULL_01";
			switch (iParam3)
			{
				case 1:
					iVar0 = MISC::GET_RANDOM_INT_IN_RANGE(0, 2);
					uParam0->f_4 = "GENERIC_HI";
					if (iVar0 == 1)
					{
						uParam0->f_4 = "GENERIC_HOWS_IT_GOING";
					}
					break;
				case 2:
					uParam0->f_4 = "GENERIC_BYE";
					break;
				case 10:
					uParam0->f_4 = "GENERIC_YES";
					break;
			}
			break;
		case 3:
			uParam0->f_5 = "A_M_Y_GenStreet_02_Latino_FULL_01";
			switch (iParam3)
			{
				case 1:
					iVar0 = MISC::GET_RANDOM_INT_IN_RANGE(0, 2);
					uParam0->f_4 = "GENERIC_HI";
					if (iVar0 == 1)
					{
						uParam0->f_4 = "GENERIC_HOWS_IT_GOING";
					}
					break;
				case 2:
					uParam0->f_4 = "GENERIC_BYE";
					break;
				case 10:
					uParam0->f_4 = "GENERIC_YES";
					break;
			}
			break;
		case 4:
			uParam0->f_5 = "A_F_Y_SouCent_03_Latino_FULL_01";
			switch (iParam3)
			{
				case 1:
					iVar0 = MISC::GET_RANDOM_INT_IN_RANGE(0, 2);
					uParam0->f_4 = "GENERIC_HI";
					if (iVar0 == 1)
					{
						uParam0->f_4 = "GENERIC_HOWS_IT_GOING";
					}
					break;
				case 2:
					uParam0->f_4 = "GENERIC_BYE";
					break;
				case 10:
					uParam0->f_4 = "GENERIC_YES";
					break;
			}
			break;
	}
}

int func_1833(var uParam0, int iParam1, var uParam2)//Position - 0xC1937
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6[137];
	struct<7> Var7;
	iVar1 = 0;
	iVar5 = 0;
	switch (iParam1)
	{
		case 0:
			Var7 = -1;
			iVar0 = 0;
			while (iVar0 < 137)
			{
				iVar4 = __LIB_40__::func_887(iParam1, uParam2, iVar0);
				if (iVar4 > 12 && iVar4 < 136)
				{
					__LIB_8__::func_405(&Var7);
					func_1831(&Var7, iParam1, uParam2, iVar4);
					if (__LIB_8__::func_406(Var7))
					{
						iVar6[iVar5] = iVar0;
						iVar5++;
					}
				}
				iVar0++;
			}
			if (iVar5 > 1)
			{
				iVar3 = MISC::GET_RANDOM_INT_IN_RANGE(0, iVar5);
				iVar4 = __LIB_40__::func_887(iParam1, uParam2, iVar6[iVar3]);
				while (iVar4 == *uParam0 && iVar1 < 10)
				{
					iVar3 = MISC::GET_RANDOM_INT_IN_RANGE(0, iVar5);
					iVar4 = __LIB_40__::func_887(iParam1, uParam2, iVar6[iVar3]);
					iVar1++;
				}
				if (iVar1 >= 10)
				{
					iVar0 = 0;
					while (iVar0 < iVar2)
					{
						iVar4 = __LIB_40__::func_887(iParam1, uParam2, iVar6[iVar0]);
						if (iVar4 != *uParam0)
						{
						}
						else
						{
							iVar0++;
						}
					}
				}
			}
			else
			{
				iVar4 = __LIB_40__::func_887(iParam1, uParam2, iVar6[0]);
			}
			break;
	}
	*uParam0 = iVar4;
	return iVar4;
}

void func_1861(var uParam0, var uParam1)//Position - 0xC237E
{
	int iVar0;
	if (NETWORK::NETWORK_IS_HOST_OF_THIS_SCRIPT())
	{
		uParam1->f_1 = func_1882();
		*uParam1 = __LIB_1__::func_806();
		uParam1->f_3 = func_1886(uParam1, -1);
		uParam1->f_4 = __LIB_0__::func_114(uParam1, -1);
	}
	if (uParam1->f_1 != -1)
	{
		iVar0 = __LIB_5__::func_388(__LIB_11__::func_610(PLAYER::PLAYER_ID()));
		if (uParam1->f_1 == 3)
		{
			Global_1977032 = -1;
		}
		else
		{
			switch (iVar0)
			{
				case 0:
					Global_1977032 = uParam1->f_1;
					break;
				case 1:
					Global_1977032 = uParam1->f_1 + 3;
					break;
				case 2:
					Global_1977032 = uParam1->f_1 + 6;
					break;
				default:
					Global_1977032 = uParam1->f_1;
					break;
				}
		}
	}
	else
	{
		Global_1977032 = -1;
	}
}

void func_1862(var uParam0, var uParam1, var uParam2, int iParam3, int iParam4, bool bParam5)//Position - 0xC2429
{
	int iVar0;
	iVar0 = __LIB_5__::func_388(__LIB_11__::func_610(PLAYER::PLAYER_ID()));
	switch (iVar0)
	{
		case 0:
			switch (iParam4)
			{
				case 0:
					__LIB_42__::func_912(uParam2, iParam3, bParam5);
					break;
				case 1:
					__LIB_42__::func_911(uParam2, iParam3, bParam5);
					break;
				case 2:
					__LIB_42__::func_910(uParam2, iParam3, bParam5);
					break;
			}
			break;
		case 1:
			switch (iParam4)
			{
				case 0:
					__LIB_42__::func_909(uParam2, iParam3, bParam5);
					break;
				case 1:
					__LIB_42__::func_908(uParam2, iParam3, bParam5);
					break;
				case 2:
					__LIB_42__::func_907(uParam2, iParam3, bParam5);
					break;
			}
			break;
		case 2:
			switch (iParam4)
			{
				case 0:
					__LIB_42__::func_906(uParam2, iParam3, bParam5);
					break;
				case 1:
					__LIB_42__::func_905(uParam2, iParam3, bParam5);
					break;
				case 2:
					__LIB_42__::func_904(uParam2, iParam3, bParam5);
					break;
			}
			break;
		default:
			switch (iParam4)
			{
				case 4:
				case default:
			}
			__LIB_42__::func_909(uParam2, iParam3, bParam5);
			break;
	}
	__LIB_9__::func_137(&(uParam2->f_11), 47);
	if (Global_1977032 == -1 || func_1863(__LIB_11__::func_610(PLAYER::PLAYER_ID())))
	{
		__LIB_9__::func_137(&(uParam2->f_11), 0);
	}
}

int func_1863(int iParam0)//Position - 0xC256C
{
	bool bVar0;
	int iVar1;
	bool bVar2;
	if (iParam0 != 0 && __LIB_8__::func_418(iParam0) != -1)
	{
		if (__LIB_31__::func_478(iParam0) == PLAYER::PLAYER_ID())
		{
			bVar0 = __LIB_8__::func_418(iParam0);
			if (__LIB_1__::func_360(__LIB_8__::func_417(bVar0), -1, 0) > NETWORK::GET_CLOUD_TIME_AS_INT())
			{
				if (!BitTest(Global_2689235[PLAYER::PLAYER_ID() /*453*/].f_199, bVar0))
				{
					MISC::SET_BIT(&(Global_2689235[PLAYER::PLAYER_ID() /*453*/].f_199), bVar0);
				}
				return 1;
			}
			else if (BitTest(Global_2689235[PLAYER::PLAYER_ID() /*453*/].f_199, bVar0) || __LIB_8__::func_416(bVar0))
			{
				__LIB_9__::func_140(iParam0);
				MISC::CLEAR_BIT(&(Global_2689235[PLAYER::PLAYER_ID() /*453*/].f_199), bVar0);
			}
		}
		else
		{
			iVar1 = __LIB_31__::func_478(iParam0);
			if (iVar1 != __LIB_0__::func_162())
			{
				bVar2 = __LIB_8__::func_414(iParam0, iVar1);
				if (BitTest(Global_2689235[__LIB_31__::func_478(iParam0) /*453*/].f_199, bVar2))
				{
					return 1;
				}
			}
		}
	}
	return 0;
}

int func_1882()//Position - 0xC2FA2
{
	if (func_1863(__LIB_11__::func_610(PLAYER::PLAYER_ID())))
	{
		return 3;
	}
	if (__LIB_1__::func_520(1))
	{
		if (!__LIB_11__::func_581(__LIB_0__::func_797()))
		{
			return 0;
		}
	}
	else if (!__LIB_11__::func_581(PLAYER::PLAYER_ID()))
	{
		return 0;
	}
	return MISC::GET_RANDOM_INT_IN_RANGE(0, (__LIB_1__::func_804() - 1));
}

int func_1886(var uParam0, int iParam1)//Position - 0xC302C
{
	int iVar0;
	int iVar1;
	struct<47> Var2;
	iVar1 = 0;
	Var2.f_1 = 8;
	Var2.f_11 = 2;
	Var2.f_14 = 2;
	Var2.f_17 = 3;
	Var2.f_21 = 3;
	Var2.f_35 = -1;
	Var2.f_35.f_4 = -1;
	Var2.f_35.f_5 = -1;
	Var2.f_46 = -1;
	Var2.f_46.f_2 = -1;
	Var2.f_46.f_3 = -1;
	iVar0 = 0;
	while (iVar0 < 125)
	{
		Var2.f_28 = { __LIB_0__::func_613() };
		func_1862(iParam1, uParam0, &Var2, iVar0, uParam0->f_1, 1);
		if (!__LIB_0__::func_86(Var2.f_28))
		{
			iVar1++;
		}
	else
	{
		}
		else
		{
			iVar0++;
		}
	}
	return iVar1;
}

void func_1890(var uParam0, int iParam1)//Position - 0xC30F0
{
	switch (iParam1)
	{
		case 0:
			*uParam0 = 804905/*__LIB_8__::func_425*/;
			break;
		case 1:
			uParam0->f_1 = 804896/*__LIB_0__::func_114*/;
			break;
		case 2:
			uParam0->f_2 = 804870/*__LIB_8__::func_902*/;
			break;
		case 3:
			uParam0->f_3 = 804861/*__LIB_0__::func_114*/;
			break;
		case 4:
			uParam0->f_4 = 804852/*__LIB_3__::func_603*/;
			break;
		case 5:
			uParam0->f_5 = 804835/*__LIB_8__::func_901*/;
			break;
		case 6:
			uParam0->f_6 = 804826/*__LIB_1__::func_806*/;
			break;
		case 9:
			uParam0->f_9 = 801385/*__LIB_10__::func_662*/;
			break;
		case 10:
			uParam0->f_10 = 801309/*__LIB_9__::func_289*/;
			break;
		case 11:
			uParam0->f_11 = 799707/*__LIB_10__::func_661*/;
			break;
		case 14:
			uParam0->f_14 = 799680/*__LIB_8__::func_420*/;
			break;
		case 7:
			uParam0->f_7 = 799669/*__LIB_3__::func_554*/;
			break;
		case 8:
			uParam0->f_8 = 799660/*__LIB_7__::func_239*/;
			break;
		case 16:
			uParam0->f_16 = 799602/*__LIB_8__::func_398*/;
			break;
		case 17:
			uParam0->f_17 = 799468/*__LIB_7__::func_240*/;
			break;
		case 18:
			uParam0->f_18 = 799409/*__LIB_9__::func_859*/;
			break;
		case 21:
			uParam0->f_21 = 799263/*__LIB_9__::func_858*/;
			break;
	}
}

void func_1920(var uParam0, int iParam1)//Position - 0xC485C
{
	switch (iParam1)
	{
		case 0:
			*uParam0 = 809722/*__LIB_8__::func_436*/;
			break;
		case 1:
			uParam0->f_1 = 809713/*__LIB_0__::func_109*/;
			break;
		case 2:
			uParam0->f_2 = 809554/*__LIB_11__::func_335*/;
			break;
		case 3:
			uParam0->f_3 = 809545/*__LIB_0__::func_114*/;
			break;
		case 4:
			uParam0->f_4 = 809536/*__LIB_0__::func_109*/;
			break;
		case 5:
			uParam0->f_5 = 809512/*__LIB_8__::func_435*/;
			break;
		case 6:
			uParam0->f_6 = 809503/*__LIB_1__::func_806*/;
			break;
		case 9:
			uParam0->f_9 = 807486/*__LIB_11__::func_267*/;
			break;
		case 10:
			uParam0->f_10 = 807434/*__LIB_11__::func_567*/;
			break;
		case 11:
			uParam0->f_11 = 806805/*__LIB_10__::func_663*/;
			break;
		case 14:
			uParam0->f_14 = 806791/*__LIB_11__::func_598*/;
			break;
		case 7:
			uParam0->f_7 = 806780/*__LIB_3__::func_554*/;
			break;
		case 8:
			uParam0->f_8 = 806771/*__LIB_7__::func_239*/;
			break;
		case 16:
			uParam0->f_16 = 806713/*__LIB_8__::func_398*/;
			break;
		case 17:
			uParam0->f_17 = 806536/*__LIB_8__::func_429*/;
			break;
		case 18:
			uParam0->f_18 = 806477/*__LIB_9__::func_859*/;
			break;
		case 21:
			uParam0->f_21 = 806331/*__LIB_9__::func_858*/;
			break;
		case 23:
			uParam0->f_22 = 806267/*__LIB_8__::func_428*/;
			break;
		case 22:
			uParam0->f_23 = 806090/*__LIB_11__::func_582*/;
			break;
		case 24:
			uParam0->f_24 = 806040/*__LIB_8__::func_427*/;
			break;
		case 25:
			uParam0->f_25 = 805743/*__LIB_9__::func_882*/;
			break;
		case 26:
			uParam0->f_26 = 805637/*__LIB_9__::func_57*/;
			break;
		case 35:
			uParam0->f_35 = 805361/*__LIB_11__::func_345*/;
			break;
	}
}

void func_1954(var uParam0, int iParam1)//Position - 0xC5B08
{
	switch (iParam1)
	{
		case 0:
			*uParam0 = 827960/*__LIB_11__::func_586*/;
			break;
		case 1:
			uParam0->f_1 = 827951/*__LIB_0__::func_109*/;
			break;
		case 2:
			uParam0->f_2 = 827792/*__LIB_43__::func_642*/;
			break;
		case 3:
			uParam0->f_3 = 827783/*__LIB_0__::func_114*/;
			break;
		case 4:
			uParam0->f_4 = 827773/*__LIB_8__::func_467*/;
			break;
		case 5:
			uParam0->f_5 = 827758/*__LIB_8__::func_466*/;
			break;
		case 6:
			uParam0->f_6 = 827749/*__LIB_1__::func_806*/;
			break;
		case 9:
			uParam0->f_9 = 822482/*__LIB_42__::func_913*/;
			break;
		case 10:
			uParam0->f_10 = 821091/*func_1997*/;
			break;
		case 11:
			uParam0->f_11 = 818147/*__LIB_10__::func_665*/;
			break;
		case 14:
			uParam0->f_14 = 818133/*__LIB_11__::func_585*/;
			break;
		case 7:
			uParam0->f_7 = 817995/*__LIB_8__::func_444*/;
			break;
		case 8:
			uParam0->f_8 = 817911/*__LIB_8__::func_443*/;
			break;
		case 16:
			uParam0->f_16 = 817853/*__LIB_8__::func_398*/;
			break;
		case 17:
			uParam0->f_17 = 817704/*__LIB_8__::func_442*/;
			break;
		case 18:
			uParam0->f_18 = 817645/*__LIB_9__::func_859*/;
			break;
		case 19:
			uParam0->f_19 = 817610/*__LIB_8__::func_441*/;
			break;
		case 21:
			uParam0->f_21 = 817464/*__LIB_9__::func_858*/;
			break;
		case 29:
			uParam0->f_29 = 817165/*__LIB_9__::func_145*/;
			break;
		case 34:
			uParam0->f_30 = 817025/*__LIB_11__::func_584*/;
			break;
		case 23:
			uParam0->f_22 = 816172/*__LIB_11__::func_611*/;
			break;
		case 22:
			uParam0->f_23 = 815995/*__LIB_11__::func_583*/;
			break;
		case 24:
			uParam0->f_24 = 815719/*__LIB_8__::func_439*/;
			break;
		case 25:
			uParam0->f_25 = 815419/*func_1971*/;
			break;
		case 26:
			uParam0->f_26 = 812791/*func_1958*/;
			break;
		case 12:
			uParam0->f_12 = 810192/*__LIB_9__::func_143*/;
			break;
	}
}

void func_1958(var uParam0, int iParam1, var uParam2, int iParam3)//Position - 0xC66F7
{
	__LIB_8__::func_405(uParam0);
	switch (iParam1)
	{
		case 1:
			uParam0->f_5 = "FIX_IMANI";
			switch (iParam3)
			{
				case 1:
					if (__LIB_11__::func_601(PLAYER::PLAYER_ID()))
					{
						if (__LIB_0__::func_680())
						{
							uParam0->f_4 = "GREET_OWNER";
						}
						else
						{
							uParam0->f_4 = "HOWSITGOING_OWNER";
						}
					}
					else if (__LIB_0__::func_680())
					{
						uParam0->f_4 = "GREET_OTHER_PLAYER";
					}
					else
					{
						uParam0->f_4 = "HOWSITGOING_OTHER_PLAYER";
					}
					break;
				case 2:
					if (__LIB_11__::func_601(PLAYER::PLAYER_ID()))
					{
						uParam0->f_4 = "BYE_OWNER";
					}
					else
					{
						uParam0->f_4 = "BYE_OTHER_PLAYER";
					}
					break;
				case 3:
					if (__LIB_11__::func_601(PLAYER::PLAYER_ID()))
					{
						uParam0->f_4 = "BUMP_OWNER";
					}
					else
					{
						uParam0->f_4 = "BUMP_OTHER_PLAYER";
					}
					break;
				case 4:
					switch (MISC::GET_RANDOM_INT_IN_RANGE(0, 4))
					{
						case 0:
							if (__LIB_11__::func_601(PLAYER::PLAYER_ID()))
							{
								uParam0->f_4 = "IDLE_OWNER";
							}
							else
							{
								uParam0->f_4 = "IDLE_OTHER_PLAYER";
							}
							break;
						case 1:
							uParam0->f_4 = "COMMENT_FRANKLIN";
							break;
						case 2:
							if (BitTest(Global_1946250.f_10, 8))
							{
								uParam0->f_4 = "COMMENT_LAMAR";
							}
							else if (__LIB_11__::func_601(PLAYER::PLAYER_ID()))
							{
								uParam0->f_4 = "IDLE_OWNER";
							}
							else
							{
								uParam0->f_4 = "IDLE_OTHER_PLAYER";
							}
							break;
						case 3:
							uParam0->f_4 = "COMMENT_CHOP";
							break;
					}
					break;
			}
			break;
		case 6:
			uParam0->f_5 = "FIX_FRANKLIN";
			switch (iParam3)
			{
				case 1:
					if (__LIB_11__::func_601(PLAYER::PLAYER_ID()))
					{
						if (__LIB_0__::func_680())
						{
							uParam0->f_4 = "GREET_OWNER_OFFICE";
						}
						else
						{
							uParam0->f_4 = "HOWSITGOING_OWNER";
						}
					}
					else if (__LIB_0__::func_680())
					{
						uParam0->f_4 = "GREET_OTHER_PLAYER";
					}
					else
					{
						uParam0->f_4 = "HOWSITGOING_OTHER_PLAYER";
					}
					break;
				case 2:
					if (__LIB_11__::func_601(PLAYER::PLAYER_ID()))
					{
						uParam0->f_4 = "BYE_OWNER";
					}
					else
					{
						uParam0->f_4 = "BYE_OTHER_PLAYER";
					}
					break;
				case 3:
					uParam0->f_4 = "BUMP";
					break;
				case 4:
					if (MISC::GET_RANDOM_INT_IN_RANGE(0, 100) < 50 && __LIB_11__::func_601(PLAYER::PLAYER_ID()))
					{
						switch (MISC::GET_RANDOM_INT_IN_RANGE(0, 9))
						{
							case 0:
								if (__LIB_11__::func_600(PLAYER::PLAYER_ID()))
								{
									uParam0->f_4 = "IDLE_OWNER_BUNKER_OWNED";
									return;
								}
								break;
							case 1:
								if (__LIB_1__::func_595(PLAYER::PLAYER_ID()))
								{
									uParam0->f_4 = "IDLE_OWNER_NIGHTCLUB_OWNED";
									return;
								}
								break;
							case 2:
								if (__LIB_1__::func_655(PLAYER::PLAYER_ID()))
								{
									uParam0->f_4 = "IDLE_OWNER_HANGAR_OWNED";
									return;
								}
								break;
							case 3:
								if (__LIB_1__::func_797(PLAYER::PLAYER_ID()))
								{
									uParam0->f_4 = "IDLE_OWNER_AUTOSHOP_OWNED";
									return;
								}
								break;
							case 4:
								if (__LIB_8__::func_151(PLAYER::PLAYER_ID()))
								{
									uParam0->f_4 = "IDLE_OWNER_VEHICLE_WAREHOUSE_OWNED";
									return;
								}
								break;
							case 5:
								if (__LIB_11__::func_600(PLAYER::PLAYER_ID()))
								{
									uParam0->f_4 = "IDLE_OWNER_ISLAND_HEIST_COMPLETED";
									return;
								}
								break;
							case 6:
								if (__LIB_4__::func_895(PLAYER::PLAYER_ID(), 0))
								{
									uParam0->f_4 = "IDLE_OWNER_CASINO_HEIST_COMPLETED";
									return;
								}
								break;
							case 7:
								if (__LIB_7__::func_355(__LIB_7__::func_241(), 1) > 0)
								{
									uParam0->f_4 = "IDLE_OWNER_SERIES_A_COMPLETED";
									return;
								}
								break;
							case 8:
								if (__LIB_1__::func_689(0))
								{
									if (__LIB_0__::func_680())
									{
										uParam0->f_4 = "IDLE_OWNER_STORY_COMPLETE";
									}
									else
									{
										uParam0->f_4 = "OFFICE_COLLECT_GIFT";
									}
									return;
								}
								break;
							}
					}
					switch (MISC::GET_RANDOM_INT_IN_RANGE(0, 6))
					{
						case 0:
							if (__LIB_11__::func_601(PLAYER::PLAYER_ID()))
							{
								uParam0->f_4 = "IDLE_OWNER";
							}
							else
							{
								uParam0->f_4 = "IDLE_OTHER_PLAYER";
							}
							break;
						case 1:
							uParam0->f_4 = "OFFICE_BANTER";
							break;
						case 2:
							uParam0->f_4 = "COMMENT_CHOP";
							break;
						case 3:
							uParam0->f_4 = "COMMENT_IMANI";
							break;
						case 4:
							uParam0->f_4 = "COMMENT_LAMAR";
							break;
						case 5:
							uParam0->f_4 = "COMMENT_REQUISITIONS_OFFICER";
							break;
					}
					break;
			}
			break;
		case 7:
			uParam0->f_5 = "FIX_LAMAR";
			switch (iParam3)
			{
				case 1:
					if (__LIB_11__::func_601(PLAYER::PLAYER_ID()))
					{
						if (__LIB_0__::func_680())
						{
							uParam0->f_4 = "GREET_OWNER_OFFICE";
						}
						else
						{
							uParam0->f_4 = "HOWSITGOING_OWNER";
						}
					}
					else if (__LIB_0__::func_680())
					{
						uParam0->f_4 = "GREET_OTHER_PLAYER";
					}
					else
					{
						uParam0->f_4 = "HOWSITGOING_OTHER_PLAYER";
					}
					break;
				case 2:
					if (__LIB_11__::func_601(PLAYER::PLAYER_ID()))
					{
						uParam0->f_4 = "BYE_OWNER";
					}
					else
					{
						uParam0->f_4 = "BYE_OTHER_PLAYER";
					}
					break;
				case 3:
					uParam0->f_4 = "BUMP";
					break;
				case 4:
					if (MISC::GET_RANDOM_INT_IN_RANGE(0, 100) < 10)
					{
						if (__LIB_8__::func_903())
						{
							uParam0->f_4 = "IDLE_OTHER_PLAYER_LOWRIDER_COMPLETE";
							return;
						}
					}
					switch (MISC::GET_RANDOM_INT_IN_RANGE(0, 2))
					{
						case 0:
							if (__LIB_11__::func_601(PLAYER::PLAYER_ID()))
							{
								uParam0->f_4 = "IDLE_OWNER";
							}
							else
							{
								uParam0->f_4 = "IDLE_OTHER_PLAYER";
							}
							break;
						case 1:
							uParam0->f_4 = "OFFICE_BANTER";
							break;
					}
					break;
			}
			break;
		case 8:
			uParam0->f_5 = "FIX_SECURE1";
			switch (iParam3)
			{
				case 1:
					if (__LIB_11__::func_601(PLAYER::PLAYER_ID()))
					{
						if (__LIB_0__::func_680())
						{
							uParam0->f_4 = "GREET_OWNER";
						}
						else
						{
							uParam0->f_4 = "HOWSITGOING_OWNER";
						}
					}
					else if (__LIB_0__::func_680())
					{
						uParam0->f_4 = "GREET_OTHER_PLAYER";
					}
					else
					{
						uParam0->f_4 = "HOWSITGOING_OTHER_PLAYER";
					}
					break;
				case 2:
					if (__LIB_11__::func_601(PLAYER::PLAYER_ID()))
					{
						uParam0->f_4 = "BYE_OWNER";
					}
					else
					{
						uParam0->f_4 = "BYE_OTHER_PLAYER";
					}
					break;
				case 3:
					if (__LIB_11__::func_601(PLAYER::PLAYER_ID()))
					{
						uParam0->f_4 = "BUMP_OWNER";
					}
					else
					{
						uParam0->f_4 = "BUMP_OTHER_PLAYER";
					}
					break;
				case 4:
					switch (MISC::GET_RANDOM_INT_IN_RANGE(0, 5))
					{
						case 0:
							if (__LIB_11__::func_601(PLAYER::PLAYER_ID()))
							{
								uParam0->f_4 = "IDLE_OWNER";
							}
							else
							{
								uParam0->f_4 = "IDLE_OTHER_PLAYER";
							}
							break;
						case 1:
							uParam0->f_4 = "COMMENT_FRANKLIN";
							break;
						case 2:
							if (BitTest(Global_1946250.f_10, 8))
							{
								uParam0->f_4 = "COMMENT_LAMAR";
							}
							else if (__LIB_11__::func_601(PLAYER::PLAYER_ID()))
							{
								uParam0->f_4 = "IDLE_OWNER";
							}
							else
							{
								uParam0->f_4 = "IDLE_OTHER_PLAYER";
							}
							break;
						case 3:
							uParam0->f_4 = "COMMENT_CHOP";
							break;
						case 4:
							uParam0->f_4 = "COMMENT_IMANI";
							break;
					}
					break;
			}
			break;
	}
}

int func_1971(var uParam0, int iParam1, var uParam2)//Position - 0xC713B
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6[137];
	struct<7> Var7;
	iVar1 = 0;
	iVar5 = 0;
	switch (iParam1)
	{
		case -1:
			break;
		default:
			Var7 = -1;
			iVar0 = 0;
			while (iVar0 < 137)
			{
				iVar4 = __LIB_8__::func_439(iParam1, uParam2, iVar0);
				if (iVar4 > 12 && iVar4 < 136)
				{
					__LIB_8__::func_405(&Var7);
					func_1958(&Var7, iParam1, uParam2, iVar4);
					if (__LIB_8__::func_406(Var7))
					{
						iVar6[iVar5] = iVar0;
						iVar5++;
					}
				}
				iVar0++;
			}
			if (iVar5 > 1)
			{
				iVar3 = MISC::GET_RANDOM_INT_IN_RANGE(0, iVar5);
				iVar4 = __LIB_8__::func_439(iParam1, uParam2, iVar6[iVar3]);
				while (iVar4 == *uParam0 && iVar1 < 10)
				{
					iVar3 = MISC::GET_RANDOM_INT_IN_RANGE(0, iVar5);
					iVar4 = __LIB_8__::func_439(iParam1, uParam2, iVar6[iVar3]);
					iVar1++;
				}
				if (iVar1 >= 10)
				{
					iVar0 = 0;
					while (iVar0 < iVar2)
					{
						iVar4 = __LIB_8__::func_439(iParam1, uParam2, iVar6[iVar0]);
						if (iVar4 != *uParam0)
						{
						}
						else
						{
							iVar0++;
						}
					}
				}
			}
			else
			{
				iVar4 = __LIB_8__::func_439(iParam1, uParam2, iVar6[0]);
			}
			break;
	}
	*uParam0 = iVar4;
	return iVar4;
}

void func_1997(var uParam0, var uParam1)//Position - 0xC8763
{
	int iVar0;
	if (NETWORK::NETWORK_IS_HOST_OF_THIS_SCRIPT())
	{
		uParam1->f_1 = __LIB_8__::func_466();
		*uParam1 = __LIB_1__::func_806();
		uParam1->f_3 = __LIB_43__::func_642(uParam1, -1);
		uParam1->f_4 = __LIB_0__::func_114(uParam1, -1);
		iVar0 = 100;
		if (__LIB_1__::func_163(__LIB_11__::func_612()) > 0)
		{
			iVar0 = Global_262145.f_31702 /* Tunable: -1911815023 */;
		}
		if ((__LIB_8__::func_455(__LIB_11__::func_612()) == 1 && __LIB_3__::func_618(__LIB_11__::func_612(), 6)) && !__LIB_3__::func_618(__LIB_11__::func_612(), 7))
		{
			iVar0 = 0;
		}
		if (MISC::GET_RANDOM_INT_IN_RANGE(0, 100) < iVar0)
		{
			MISC::SET_BIT(&(uParam1->f_2), 0);
			if (MISC::GET_RANDOM_INT_IN_RANGE(0, 100) < Global_262145.f_31701 /* Tunable: 801201447 */ && __LIB_8__::func_454(__LIB_11__::func_612()))
			{
				MISC::SET_BIT(&(uParam1->f_2), 1);
			}
		}
		if (BitTest(Global_1946250.f_10, 26))
		{
			MISC::CLEAR_BIT(&(Global_1946250.f_10), 26);
			MISC::SET_BIT(&(uParam1->f_2), 0);
		}
		if (BitTest(Global_1946250.f_10, 27))
		{
			MISC::CLEAR_BIT(&(Global_1946250.f_10), 27);
			MISC::SET_BIT(&(uParam1->f_2), 1);
		}
	}
	if (BitTest(uParam1->f_2, 0))
	{
		if (__LIB_1__::func_163(__LIB_11__::func_612()) == 0)
		{
			Global_1977038 = 402;
		}
		else
		{
			__LIB_8__::func_453(uParam1->f_1, &Global_1977038);
		}
		MISC::SET_BIT(&(Global_1946250.f_10), 7);
	}
	else
	{
		MISC::CLEAR_BIT(&(Global_1946250.f_10), 7);
		Global_1977038 = -1;
	}
	if (BitTest(uParam1->f_2, 1))
	{
		switch (__LIB_8__::func_437(uParam1->f_1))
		{
			case 0:
				Global_1977040 = 1;
				break;
			case 1:
				Global_1977040 = 2;
				break;
		}
		MISC::SET_BIT(&(Global_1946250.f_10), 8);
	}
	else
	{
		MISC::CLEAR_BIT(&(Global_1946250.f_10), 8);
		Global_1977040 = 0;
	}
	Global_1977036 = uParam1->f_1;
	if (BitTest(uParam1->f_2, 1))
	{
		if (__LIB_2__::func_932(__LIB_11__::func_612()))
		{
			Global_1977037 = __LIB_8__::func_452(uParam1);
		}
		else
		{
			Global_1977037 = __LIB_8__::func_451(uParam1);
		}
	}
	else if (BitTest(uParam1->f_2, 0))
	{
		if (__LIB_2__::func_932(__LIB_11__::func_612()))
		{
			Global_1977037 = __LIB_8__::func_450(uParam1);
		}
		else
		{
			Global_1977037 = __LIB_8__::func_449(uParam1);
		}
	}
	else
	{
		Global_1977037 = 1;
	}
}

void func_2031(var uParam0, int iParam1)//Position - 0xCA248
{
	switch (iParam1)
	{
		case 0:
			*uParam0 = 852348/*__LIB_11__::func_587*/;
			break;
		case 1:
			uParam0->f_1 = 852339/*__LIB_0__::func_109*/;
			break;
		case 2:
			uParam0->f_2 = 852180/*__LIB_11__::func_336*/;
			break;
		case 3:
			uParam0->f_3 = 852171/*__LIB_3__::func_939*/;
			break;
		case 4:
			uParam0->f_4 = 852162/*__LIB_3__::func_603*/;
			break;
		case 5:
			uParam0->f_5 = 852148/*__LIB_7__::func_243*/;
			break;
		case 6:
			uParam0->f_6 = 852139/*__LIB_0__::func_114*/;
			break;
		case 9:
			uParam0->f_9 = 846818/*__LIB_11__::func_269*/;
			break;
		case 10:
			uParam0->f_10 = 846758/*__LIB_11__::func_568*/;
			break;
		case 11:
			uParam0->f_11 = 838446/*__LIB_10__::func_666*/;
			break;
		case 14:
			uParam0->f_14 = 838361/*__LIB_11__::func_603*/;
			break;
		case 7:
			uParam0->f_7 = 838338/*__LIB_3__::func_869*/;
			break;
		case 8:
			uParam0->f_8 = 838329/*__LIB_7__::func_239*/;
			break;
		case 16:
			uParam0->f_16 = 838271/*__LIB_8__::func_398*/;
			break;
		case 17:
			uParam0->f_17 = 838137/*__LIB_8__::func_477*/;
			break;
		case 18:
			uParam0->f_18 = 838078/*__LIB_9__::func_859*/;
			break;
		case 19:
			uParam0->f_19 = 837901/*__LIB_8__::func_476*/;
			break;
		case 21:
			uParam0->f_21 = 837763/*__LIB_9__::func_860*/;
			break;
		case 15:
			uParam0->f_15 = 837754/*__LIB_0__::func_109*/;
			break;
		case 29:
			uParam0->f_29 = 837609/*__LIB_9__::func_150*/;
			break;
		case 23:
			uParam0->f_22 = 837219/*__LIB_9__::func_887*/;
			break;
		case 22:
			uParam0->f_23 = 836575/*__LIB_11__::func_602*/;
			break;
		case 24:
			uParam0->f_24 = 836027/*__LIB_8__::func_474*/;
			break;
		case 25:
			uParam0->f_25 = 835706/*__LIB_11__::func_268*/;
			break;
		case 26:
			uParam0->f_26 = 833223/*__LIB_9__::func_149*/;
			break;
		case 12:
			uParam0->f_12 = 829031/*__LIB_9__::func_967*/;
			break;
		case 32:
			uParam0->f_33 = 828942/*__LIB_9__::func_147*/;
			break;
		case 28:
			uParam0->f_28 = 828466/*__LIB_8__::func_468*/;
			break;
	}
}

void func_2101(var uParam0, int iParam1)//Position - 0xD018C
{
	switch (iParam1)
	{
		case 0:
			*uParam0 = 881674/*__LIB_13__::func_721*/;
			break;
		case 1:
			uParam0->f_1 = 881665/*__LIB_0__::func_109*/;
			break;
		case 2:
			uParam0->f_2 = 881506/*__LIB_11__::func_257*/;
			break;
		case 3:
			uParam0->f_3 = 881497/*__LIB_0__::func_114*/;
			break;
		case 4:
			uParam0->f_4 = 881488/*__LIB_0__::func_109*/;
			break;
		case 5:
			uParam0->f_5 = 881479/*__LIB_0__::func_114*/;
			break;
		case 6:
			uParam0->f_6 = 881470/*__LIB_0__::func_114*/;
			break;
		case 9:
			uParam0->f_9 = 874317/*__LIB_10__::func_669*/;
			break;
		case 10:
			uParam0->f_10 = 874265/*__LIB_11__::func_337*/;
			break;
		case 11:
			uParam0->f_11 = 858235/*__LIB_10__::func_668*/;
			break;
		case 12:
			uParam0->f_12 = 856546/*__LIB_9__::func_72*/;
			break;
		case 14:
			uParam0->f_14 = 856537/*__LIB_0__::func_109*/;
			break;
		case 7:
			uParam0->f_7 = 856514/*__LIB_8__::func_509*/;
			break;
		case 8:
			uParam0->f_8 = 856501/*__LIB_8__::func_508*/;
			break;
		case 17:
			uParam0->f_17 = 856367/*__LIB_7__::func_240*/;
			break;
		case 18:
			uParam0->f_18 = 856339/*__LIB_9__::func_861*/;
			break;
		case 19:
			uParam0->f_19 = 856213/*__LIB_8__::func_507*/;
			break;
		case 21:
			uParam0->f_21 = 856067/*__LIB_9__::func_858*/;
			break;
		case 23:
			uParam0->f_22 = 855582/*__LIB_9__::func_151*/;
			break;
		case 22:
			uParam0->f_23 = 855209/*__LIB_11__::func_604*/;
			break;
		case 24:
			uParam0->f_24 = 854488/*__LIB_8__::func_501*/;
			break;
		case 25:
			uParam0->f_25 = 854191/*__LIB_9__::func_889*/;
			break;
		case 26:
			uParam0->f_26 = 852821/*__LIB_9__::func_70*/;
			break;
		case 31:
			uParam0->f_32 = 852812/*__LIB_0__::func_114*/;
			break;
		case 33:
			uParam0->f_34 = 852803/*__LIB_0__::func_109*/;
			break;
	}
}

void func_2162(var uParam0, int iParam1)//Position - 0xD74B0
{
	switch (iParam1)
	{
		case 0:
			*uParam0 = 891320/*__LIB_0__::func_109*/;
			break;
		case 1:
			uParam0->f_1 = 891311/*__LIB_0__::func_109*/;
			break;
		case 2:
			uParam0->f_2 = 891152/*__LIB_31__::func_173*/;
			break;
		case 3:
			uParam0->f_3 = 891143/*__LIB_0__::func_114*/;
			break;
		case 4:
			uParam0->f_4 = 891133/*__LIB_8__::func_545*/;
			break;
		case 5:
			uParam0->f_5 = 891118/*__LIB_8__::func_544*/;
			break;
		case 6:
			uParam0->f_6 = 891109/*__LIB_0__::func_114*/;
			break;
		case 9:
			uParam0->f_9 = 888037/*__LIB_31__::func_90*/;
			break;
		case 10:
			uParam0->f_10 = 887985/*__LIB_31__::func_386*/;
			break;
		case 11:
			uParam0->f_11 = 887568/*__LIB_10__::func_670*/;
			break;
		case 12:
			uParam0->f_12 = 887089/*__LIB_9__::func_75*/;
			break;
		case 14:
			uParam0->f_14 = 887075/*__LIB_11__::func_589*/;
			break;
		case 7:
			uParam0->f_7 = 887052/*__LIB_3__::func_844*/;
			break;
		case 8:
			uParam0->f_8 = 887043/*__LIB_7__::func_239*/;
			break;
		case 17:
			uParam0->f_17 = 886894/*__LIB_8__::func_537*/;
			break;
		case 18:
			uParam0->f_18 = 886854/*__LIB_9__::func_863*/;
			break;
		case 19:
			uParam0->f_19 = 886777/*__LIB_8__::func_536*/;
			break;
		case 21:
			uParam0->f_21 = 886651/*__LIB_9__::func_862*/;
			break;
		case 29:
			uParam0->f_29 = 886455/*__LIB_9__::func_153*/;
			break;
		case 23:
			uParam0->f_22 = 886255/*__LIB_9__::func_896*/;
			break;
		case 22:
			uParam0->f_23 = 886025/*__LIB_11__::func_588*/;
			break;
		case 24:
			uParam0->f_24 = 885743/*__LIB_9__::func_73*/;
			break;
		case 25:
			uParam0->f_25 = 885443/*func_2177*/;
			break;
		case 26:
			uParam0->f_26 = 882515/*func_2167*/;
			break;
		case 31:
			uParam0->f_32 = 882506/*__LIB_0__::func_114*/;
			break;
		case 32:
			uParam0->f_33 = 882419/*__LIB_9__::func_152*/;
			break;
		case 33:
			uParam0->f_34 = 882313/*__LIB_8__::func_528*/;
			break;
	}
}

void func_2167(var uParam0, int iParam1, int iParam2, int iParam3)//Position - 0xD7753
{
	int iVar0;
	int iVar1;
	__LIB_8__::func_405(uParam0);
	iVar0 = Global_2689235[PLAYER::PLAYER_ID() /*453*/].f_318.f_9;
	switch (iParam1)
	{
		case 0:
			uParam0->f_5 = "TUN_SESSANTA";
			switch (iParam3)
			{
				case 1:
					if (__LIB_1__::func_543(PLAYER::PLAYER_ID()))
					{
						if (!__LIB_9__::func_291(uParam0, iParam2))
						{
							if (__LIB_0__::func_680())
							{
								uParam0->f_4 = "GENERIC_HOWSITGOING";
							}
							else
							{
								uParam0->f_4 = "GENERIC_HI";
							}
						}
					}
					else if (__LIB_0__::func_680())
					{
						uParam0->f_4 = "GENERIC_HOWSITGOING";
					}
					else
					{
						uParam0->f_4 = "GENERIC_HI";
					}
					break;
				case 2:
					uParam0->f_4 = "GENERIC_BYE";
					break;
				case 3:
					uParam0->f_4 = "BUMP";
					break;
				case 4:
					uParam0->f_4 = "IDLE";
					break;
			}
			break;
		case 1:
			if (__LIB_8__::func_531(iVar0))
			{
				uParam0->f_5 = "S_M_M_GENERICMECHANIC_01_BLACK_MINI_01";
				switch (iParam3)
				{
					case 1:
						uParam0->f_4 = "GENERIC_HI";
						break;
					case 2:
						uParam0->f_4 = "GENERIC_BYE";
						break;
					case 3:
						uParam0->f_4 = "BUMP";
						break;
					case 4:
						iVar1 = MISC::GET_RANDOM_INT_IN_RANGE(0, 2);
						if (iVar1 == 0)
						{
							uParam0->f_4 = "GENERIC_HOWS_IT_GOING";
						}
						else if (iVar1 == 1)
						{
							uParam0->f_4 = "CHAT_STATE";
						}
						break;
				}
			}
			else if (__LIB_8__::func_530(iVar0))
			{
				uParam0->f_5 = "A_F_Y_Vinewood_03_Chinese_MINI_01";
				switch (iParam3)
				{
					case 1:
						uParam0->f_4 = "GENERIC_HI";
						break;
					case 2:
						uParam0->f_4 = "GENERIC_BYE";
						break;
					case 3:
						uParam0->f_4 = "BUMP";
						break;
					}
			}
			break;
		case 2:
			uParam0->f_5 = "A_F_Y_Vinewood_03_Chinese_MINI_01";
			switch (iParam3)
			{
				case 1:
					uParam0->f_4 = "GENERIC_HI";
					break;
				case 2:
					uParam0->f_4 = "GENERIC_BYE";
					break;
				case 3:
					uParam0->f_4 = "BUMP";
					break;
			}
			break;
		case 3:
			if (!BitTest(Global_1579049, 2))
			{
				uParam0->f_5 = "TUN_KDJ";
				*uParam0 = 3;
				uParam0->f_6 = "TUMSAUD";
				switch (Global_1579049.f_1)
				{
					case 0:
						uParam0->f_1 = 1;
						uParam0->f_4 = "TUMS_GMGC1";
						break;
					case 1:
						uParam0->f_1 = 1;
						uParam0->f_4 = "TUMS_GMGC2";
						break;
					case 2:
						uParam0->f_1 = 1;
						uParam0->f_4 = "TUMS_GMGC3";
						break;
					case 3:
						uParam0->f_1 = 1;
						uParam0->f_4 = "TUMS_GMGC4";
						break;
					case 4:
						uParam0->f_1 = 1;
						uParam0->f_4 = "TUMS_GMGC5";
						break;
					case 5:
						uParam0->f_1 = 1;
						uParam0->f_4 = "TUMS_GMGC6";
						break;
					case 6:
						uParam0->f_1 = 1;
						uParam0->f_4 = "TUMS_GMGC7";
						break;
					case 7:
						uParam0->f_1 = 1;
						uParam0->f_4 = "TUMS_GMGC8";
						break;
					case 8:
						uParam0->f_1 = 1;
						uParam0->f_4 = "TUMS_GMGC9";
						break;
					case 9:
						uParam0->f_1 = 1;
						uParam0->f_4 = "TUMS_GMGC10";
						break;
					case 10:
						uParam0->f_1 = 1;
						uParam0->f_4 = "TUMS_GMGC11";
						break;
				}
				MISC::SET_BIT(&Global_1579049, 2);
			}
			break;
	}
}

int func_2177(var uParam0, int iParam1, int iParam2)//Position - 0xD82C3
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	int iVar5;
	int iVar6[137];
	struct<7> Var7;
	iVar1 = 0;
	iVar5 = 0;
	switch (iParam1)
	{
		case -1:
			break;
		default:
			Var7 = -1;
			iVar0 = 0;
			while (iVar0 < 137)
			{
				iVar4 = __LIB_9__::func_73(iParam1, iParam2, iVar0);
				if (iVar4 > 12 && iVar4 < 136)
				{
					__LIB_8__::func_405(&Var7);
					func_2167(&Var7, iParam1, iParam2, iVar4);
					if (__LIB_8__::func_406(Var7))
					{
						iVar6[iVar5] = iVar0;
						iVar5++;
					}
				}
				iVar0++;
			}
			if (iVar5 > 1)
			{
				iVar3 = MISC::GET_RANDOM_INT_IN_RANGE(0, iVar5);
				iVar4 = __LIB_9__::func_73(iParam1, iParam2, iVar6[iVar3]);
				while (iVar4 == *uParam0 && iVar1 < 10)
				{
					iVar3 = MISC::GET_RANDOM_INT_IN_RANGE(0, iVar5);
					iVar4 = __LIB_9__::func_73(iParam1, iParam2, iVar6[iVar3]);
					iVar1++;
				}
				if (iVar1 >= 10)
				{
					iVar0 = 0;
					while (iVar0 < iVar2)
					{
						iVar4 = __LIB_9__::func_73(iParam1, iParam2, iVar6[iVar0]);
						if (iVar4 != *uParam0)
						{
						}
						else
						{
							iVar0++;
						}
					}
				}
			}
			else
			{
				iVar4 = __LIB_9__::func_73(iParam1, iParam2, iVar6[0]);
			}
			break;
	}
	*uParam0 = iVar4;
	return iVar4;
}

void func_2214(var uParam0, int iParam1)//Position - 0xD99C1
{
	switch (iParam1)
	{
		case 0:
			*uParam0 = 961420/*__LIB_31__::func_480*/;
			break;
		case 1:
			uParam0->f_1 = 961411/*__LIB_0__::func_109*/;
			break;
		case 2:
			uParam0->f_2 = 961252/*__LIB_11__::func_270*/;
			break;
		case 3:
			uParam0->f_3 = 961243/*__LIB_1__::func_806*/;
			break;
		case 4:
			uParam0->f_4 = 961233/*__LIB_8__::func_571*/;
			break;
		case 5:
			uParam0->f_5 = 961200/*__LIB_8__::func_570*/;
			break;
		case 6:
			uParam0->f_6 = 961191/*__LIB_1__::func_806*/;
			break;
		case 9:
			uParam0->f_9 = 923916/*__LIB_10__::func_701*/;
			break;
		case 10:
			uParam0->f_10 = 923864/*__LIB_11__::func_346*/;
			break;
		case 11:
			uParam0->f_11 = 901269/*__LIB_10__::func_671*/;
			break;
		case 12:
			uParam0->f_12 = 899579/*__LIB_9__::func_72*/;
			break;
		case 14:
			uParam0->f_14 = 899565/*__LIB_11__::func_591*/;
			break;
		case 7:
			uParam0->f_7 = 899542/*__LIB_8__::func_554*/;
			break;
		case 8:
			uParam0->f_8 = 899529/*__LIB_8__::func_508*/;
			break;
		case 16:
			uParam0->f_16 = 899471/*__LIB_8__::func_398*/;
			break;
		case 17:
			uParam0->f_17 = 899337/*__LIB_7__::func_240*/;
			break;
		case 18:
			uParam0->f_18 = 899278/*__LIB_9__::func_859*/;
			break;
		case 19:
			uParam0->f_19 = 898397/*__LIB_9__::func_158*/;
			break;
		case 21:
			uParam0->f_21 = 898251/*__LIB_9__::func_858*/;
			break;
		case 30:
			uParam0->f_31 = 898003/*__LIB_9__::func_157*/;
			break;
		case 23:
			uParam0->f_22 = 897894/*__LIB_8__::func_550*/;
			break;
		case 22:
			uParam0->f_23 = 897729/*__LIB_11__::func_590*/;
			break;
		case 24:
			uParam0->f_24 = 896999/*__LIB_8__::func_549*/;
			break;
		case 25:
			uParam0->f_25 = 896702/*__LIB_11__::func_258*/;
			break;
		case 26:
			uParam0->f_26 = 894926/*__LIB_9__::func_947*/;
			break;
		case 31:
			uParam0->f_32 = 894917/*__LIB_0__::func_114*/;
			break;
		case 33:
			uParam0->f_34 = 894839/*__LIB_8__::func_548*/;
			break;
		case 28:
			uParam0->f_28 = 891819/*__LIB_9__::func_155*/;
			break;
	}
}

void func_2282(var uParam0, int iParam1)//Position - 0xEABAA
{
	switch (iParam1)
	{
		case 0:
			*uParam0 = 1109372/*__LIB_0__::func_109*/;
			break;
		case 1:
			uParam0->f_1 = 1109363/*__LIB_0__::func_109*/;
			break;
		case 2:
			uParam0->f_2 = 1109204/*__LIB_11__::func_260*/;
			break;
		case 3:
			uParam0->f_3 = 1109043/*__LIB_11__::func_259*/;
			break;
		case 4:
			uParam0->f_4 = 1109034/*__LIB_1__::func_806*/;
			break;
		case 5:
			uParam0->f_5 = 1109020/*__LIB_8__::func_747*/;
			break;
		case 6:
			uParam0->f_6 = 1109011/*__LIB_3__::func_603*/;
			break;
		case 7:
			uParam0->f_7 = 1108988/*__LIB_8__::func_746*/;
			break;
		case 8:
			uParam0->f_8 = 1108975/*__LIB_8__::func_745*/;
			break;
		case 9:
			uParam0->f_9 = 1058479/*__LIB_10__::func_674*/;
			break;
		case 10:
			uParam0->f_10 = 1058427/*__LIB_11__::func_338*/;
			break;
		case 11:
			uParam0->f_11 = 969626/*__LIB_10__::func_673*/;
			break;
		case 12:
			uParam0->f_12 = 966354/*__LIB_9__::func_949*/;
			break;
		case 14:
			uParam0->f_14 = 966340/*__LIB_11__::func_606*/;
			break;
		case 15:
			uParam0->f_15 = 966331/*__LIB_0__::func_109*/;
			break;
		case 16:
			uParam0->f_16 = 966272/*__LIB_8__::func_581*/;
			break;
		case 17:
			uParam0->f_17 = 966130/*__LIB_8__::func_580*/;
			break;
		case 18:
			uParam0->f_18 = 966090/*__LIB_9__::func_863*/;
			break;
		case 19:
			uParam0->f_19 = 965762/*__LIB_8__::func_579*/;
			break;
		case 20:
			uParam0->f_20 = 965738/*__LIB_8__::func_578*/;
			break;
		case 21:
			uParam0->f_21 = 965612/*__LIB_9__::func_862*/;
			break;
		case 23:
			uParam0->f_22 = 965245/*__LIB_9__::func_164*/;
			break;
		case 22:
			uParam0->f_23 = 964969/*__LIB_11__::func_592*/;
			break;
		case 24:
			uParam0->f_24 = 964793/*__LIB_8__::func_576*/;
			break;
		case 25:
			uParam0->f_25 = 964493/*__LIB_9__::func_906*/;
			break;
		case 26:
			uParam0->f_26 = 964121/*__LIB_9__::func_78*/;
			break;
		case 27:
			uParam0->f_27 = 963988/*__LIB_8__::func_575*/;
			break;
		case 29:
			uParam0->f_29 = 963471/*__LIB_9__::func_163*/;
			break;
		case 31:
			uParam0->f_32 = 963462/*__LIB_0__::func_109*/;
			break;
		case 32:
			uParam0->f_33 = 962199/*__LIB_9__::func_162*/;
			break;
		case 33:
			uParam0->f_34 = 961991/*__LIB_9__::func_864*/;
			break;
	}
}

void func_2572(var uParam0, int iParam1)//Position - 0x10ED85
{
	switch (iParam1)
	{
		case 0:
			*uParam0 = 1120321/*__LIB_0__::func_109*/;
			break;
		case 1:
			uParam0->f_1 = 1120312/*__LIB_0__::func_109*/;
			break;
		case 2:
			uParam0->f_2 = 1120303/*__LIB_0__::func_109*/;
			break;
		case 3:
			uParam0->f_3 = 1120294/*__LIB_0__::func_114*/;
			break;
		case 4:
			uParam0->f_4 = 1120285/*__LIB_3__::func_939*/;
			break;
		case 5:
			uParam0->f_5 = 1120192/*__LIB_9__::func_915*/;
			break;
		case 6:
			uParam0->f_6 = 1120183/*__LIB_0__::func_114*/;
			break;
		case 9:
			uParam0->f_9 = 1119128/*__LIB_10__::func_678*/;
			break;
		case 10:
			uParam0->f_10 = 1119050/*__LIB_10__::func_677*/;
			break;
		case 11:
			uParam0->f_11 = 1117123/*__LIB_10__::func_676*/;
			break;
		case 12:
			uParam0->f_12 = 1115434/*__LIB_9__::func_72*/;
			break;
		case 14:
			uParam0->f_14 = 1115324/*__LIB_11__::func_607*/;
			break;
		case 17:
			uParam0->f_17 = 1115190/*__LIB_7__::func_240*/;
			break;
		case 18:
			uParam0->f_18 = 1115150/*__LIB_9__::func_863*/;
			break;
		case 19:
			uParam0->f_19 = 1115115/*__LIB_8__::func_752*/;
			break;
		case 21:
			uParam0->f_21 = 1114989/*__LIB_9__::func_862*/;
			break;
		case 30:
			uParam0->f_31 = 1114909/*__LIB_9__::func_235*/;
			break;
		case 23:
			uParam0->f_22 = 1114457/*__LIB_9__::func_234*/;
			break;
		case 22:
			uParam0->f_23 = 1114107/*__LIB_11__::func_593*/;
			break;
		case 24:
			uParam0->f_24 = 1113386/*__LIB_8__::func_501*/;
			break;
		case 25:
			uParam0->f_25 = 1113089/*__LIB_11__::func_572*/;
			break;
		case 26:
			uParam0->f_26 = 1109795/*__LIB_11__::func_349*/;
			break;
		case 31:
			uParam0->f_32 = 1109786/*__LIB_0__::func_114*/;
			break;
	}
}

void func_2623(var uParam0, int iParam1)//Position - 0x11184A
{
	switch (iParam1)
	{
		case 0:
			*uParam0 = 1247683/*__LIB_8__::func_839*/;
			break;
		case 1:
			uParam0->f_1 = 1247674/*__LIB_0__::func_114*/;
			break;
		case 2:
			uParam0->f_2 = 1247515/*func_2952*/;
			break;
		case 3:
			uParam0->f_3 = 1247354/*func_2951*/;
			break;
		case 4:
			uParam0->f_4 = 1247345/*__LIB_0__::func_109*/;
			break;
		case 5:
			uParam0->f_5 = 1247336/*__LIB_0__::func_114*/;
			break;
		case 6:
			uParam0->f_6 = 1247327/*__LIB_3__::func_603*/;
			break;
		case 7:
			uParam0->f_7 = 1247304/*__LIB_8__::func_838*/;
			break;
		case 8:
			uParam0->f_8 = 1247291/*__LIB_8__::func_837*/;
			break;
		case 9:
			uParam0->f_9 = 1221277/*func_2944*/;
			break;
		case 10:
			uParam0->f_10 = 1221201/*func_2943*/;
			break;
		case 11:
			uParam0->f_11 = 1132270/*__LIB_10__::func_679*/;
			break;
		case 12:
			uParam0->f_12 = 1128593/*__LIB_9__::func_952*/;
			break;
		case 13:
			uParam0->f_13 = 1128534/*__LIB_8__::func_763*/;
			break;
		case 14:
			uParam0->f_14 = 1128494/*__LIB_8__::func_907*/;
			break;
		case 15:
			uParam0->f_15 = 1128485/*__LIB_0__::func_109*/;
			break;
		case 16:
			uParam0->f_16 = 1128426/*__LIB_8__::func_581*/;
			break;
		case 17:
			uParam0->f_17 = 1128284/*__LIB_8__::func_580*/;
			break;
		case 18:
			uParam0->f_18 = 1128244/*__LIB_9__::func_863*/;
			break;
		case 19:
			uParam0->f_19 = 1128016/*__LIB_8__::func_762*/;
			break;
		case 20:
			uParam0->f_20 = 1127992/*__LIB_8__::func_578*/;
			break;
		case 21:
			uParam0->f_21 = 1127838/*__LIB_9__::func_867*/;
			break;
		case 23:
			uParam0->f_22 = 1127365/*__LIB_9__::func_239*/;
			break;
		case 22:
			uParam0->f_23 = 1127214/*__LIB_11__::func_594*/;
			break;
		case 24:
			uParam0->f_24 = 1125561/*__LIB_8__::func_760*/;
			break;
		case 25:
			uParam0->f_25 = 1125261/*__LIB_9__::func_916*/;
			break;
		case 26:
			uParam0->f_26 = 1121899/*__LIB_9__::func_81*/;
			break;
		case 27:
			uParam0->f_27 = 1121766/*__LIB_8__::func_575*/;
			break;
		case 29:
			uParam0->f_29 = 1121499/*__LIB_9__::func_238*/;
			break;
		case 31:
			uParam0->f_32 = 1121490/*__LIB_0__::func_109*/;
			break;
		case 32:
			uParam0->f_33 = 1120871/*__LIB_40__::func_891*/;
			break;
	}
}

void func_2943(var uParam0, var uParam1)//Position - 0x12A251
{
	if (NETWORK::NETWORK_IS_HOST_OF_THIS_SCRIPT())
	{
		uParam1->f_1 = __LIB_0__::func_114();
		*uParam1 = __LIB_3__::func_603();
		uParam1->f_3 = func_2952(uParam1, -1);
		uParam1->f_4 = func_2951(uParam1, -1);
		uParam1->f_798 = MISC::GET_RANDOM_INT_IN_RANGE(0, 2);
		uParam1->f_798.f_1 = MISC::GET_RANDOM_INT_IN_RANGE(0, 3);
	}
}

void func_2944(var uParam0, var uParam1, var uParam2, int iParam3, int iParam4, bool bParam5)//Position - 0x12A29D
{
	switch (iParam4)
	{
		case 0:
			func_2945(uParam1, uParam2, iParam3, bParam5);
			break;
	}
}

void func_2945(var uParam0, var uParam1, int iParam2, bool bParam3)//Position - 0x12A2C1
{
	switch (iParam2)
	{
		case 0:
			if (bParam3)
			{
				uParam1->f_44 = 1;
			}
			switch (uParam1->f_44)
			{
				case 1:
				case 2:
				case 3:
					uParam1->f_25 = 20;
					uParam1->f_26 = 134;
					uParam1->f_27 = 0;
					uParam1->f_17[0] = 16777216;
					uParam1->f_17[1] = 16777473;
					uParam1->f_17[2] = 2;
					uParam1->f_21[0] = 0;
					uParam1->f_21[1] = 0;
					uParam1->f_21[2] = 0;
					uParam1->f_28 = { 2.1325f, 0.016f, 1.9063f };
					uParam1->f_31 = { 0f, 0f, 270.7f };
					__LIB_8__::func_413(&(uParam1->f_11));
					if (__LIB_11__::func_254(PLAYER::PLAYER_ID()))
					{
						__LIB_9__::func_137(&(uParam1->f_11), 7);
					}
					__LIB_9__::func_137(&(uParam1->f_11), 22);
					__LIB_9__::func_137(&(uParam1->f_11), 21);
					__LIB_9__::func_137(&(uParam1->f_11), 23);
					__LIB_9__::func_137(&(uParam1->f_11), 24);
					__LIB_9__::func_137(&(uParam1->f_11), 12);
					__LIB_9__::func_137(&(uParam1->f_11), 29);
					break;
			}
			break;
		case 1:
			if (bParam3)
			{
				uParam1->f_44 = 1;
			}
			switch (uParam1->f_44)
			{
				case 1:
				case 2:
				case 3:
					uParam1->f_25 = 21;
					uParam1->f_26 = 135;
					uParam1->f_27 = 0;
					uParam1->f_17[0] = 16777216;
					uParam1->f_17[1] = 256;
					uParam1->f_17[2] = 16842752;
					uParam1->f_21[0] = 0;
					uParam1->f_21[1] = 0;
					uParam1->f_21[2] = 0;
					uParam1->f_28 = { 2.1325f, 0.016f, 1.9063f };
					uParam1->f_31 = { 0f, 0f, 270.7f };
					__LIB_8__::func_413(&(uParam1->f_11));
					if (__LIB_11__::func_254(PLAYER::PLAYER_ID()))
					{
						__LIB_9__::func_137(&(uParam1->f_11), 7);
					}
					__LIB_9__::func_137(&(uParam1->f_11), 22);
					__LIB_9__::func_137(&(uParam1->f_11), 21);
					__LIB_9__::func_137(&(uParam1->f_11), 23);
					__LIB_9__::func_137(&(uParam1->f_11), 24);
					break;
			}
			break;
		case 2:
			if (bParam3)
			{
				uParam1->f_44 = 1;
			}
			switch (uParam1->f_44)
			{
				case 1:
				case 2:
				case 3:
					uParam1->f_25 = 22;
					uParam1->f_26 = 136;
					uParam1->f_27 = 0;
					uParam1->f_17[0] = 16777216;
					uParam1->f_17[1] = 65792;
					uParam1->f_17[2] = 16777217;
					uParam1->f_21[0] = 0;
					uParam1->f_21[1] = 0;
					uParam1->f_21[2] = 0;
					uParam1->f_28 = { 2.1325f, 0.016f, 1.9063f };
					uParam1->f_31 = { 0f, 0f, 270.7f };
					__LIB_8__::func_413(&(uParam1->f_11));
					if (__LIB_11__::func_254(PLAYER::PLAYER_ID()))
					{
						__LIB_9__::func_137(&(uParam1->f_11), 7);
					}
					__LIB_9__::func_137(&(uParam1->f_11), 22);
					__LIB_9__::func_137(&(uParam1->f_11), 21);
					__LIB_9__::func_137(&(uParam1->f_11), 23);
					__LIB_9__::func_137(&(uParam1->f_11), 24);
					__LIB_9__::func_137(&(uParam1->f_11), 12);
					__LIB_9__::func_137(&(uParam1->f_11), 29);
					break;
			}
			break;
		case 3:
			if (bParam3)
			{
				uParam1->f_44 = 1;
			}
			switch (uParam1->f_44)
			{
				case 1:
				case 2:
				case 3:
					uParam1->f_25 = 10;
					uParam1->f_26 = 142;
					uParam1->f_27 = 0;
					uParam1->f_17[0] = 0;
					uParam1->f_17[1] = 16974081;
					uParam1->f_17[2] = 16777216;
					uParam1->f_21[0] = 65537;
					uParam1->f_21[1] = 66052;
					uParam1->f_21[2] = 33554432;
					uParam1->f_28 = { -0.4083f, -0.4944f, 1.0263f };
					uParam1->f_31 = { 0f, 0f, 292.75f };
					__LIB_8__::func_413(&(uParam1->f_11));
					if (__LIB_11__::func_254(PLAYER::PLAYER_ID()))
					{
						__LIB_9__::func_137(&(uParam1->f_11), 7);
					}
					if (__LIB_8__::func_584(uParam1->f_26))
					{
						__LIB_9__::func_137(&(uParam1->f_11), 27);
					}
					__LIB_9__::func_137(&(uParam1->f_11), 30);
					break;
			}
			break;
		case 4:
			if (bParam3)
			{
				uParam1->f_44 = 1;
			}
			switch (uParam1->f_44)
			{
				case 1:
				case 2:
				case 3:
					uParam1->f_25 = 8;
					uParam1->f_26 = 143;
					uParam1->f_27 = 0;
					uParam1->f_17[0] = 0;
					uParam1->f_17[1] = 65537;
					uParam1->f_17[2] = 0;
					uParam1->f_21[0] = 0;
					uParam1->f_21[1] = 131086;
					uParam1->f_21[2] = 67108864;
					uParam1->f_28 = { -0.1019f, 0.441f, 1.0263f };
					uParam1->f_31 = { 0f, 0f, 273.209f };
					__LIB_8__::func_413(&(uParam1->f_11));
					if (__LIB_11__::func_254(PLAYER::PLAYER_ID()))
					{
						__LIB_9__::func_137(&(uParam1->f_11), 7);
					}
					if (__LIB_8__::func_584(uParam1->f_26))
					{
						__LIB_9__::func_137(&(uParam1->f_11), 27);
					}
					__LIB_9__::func_137(&(uParam1->f_11), 30);
					break;
			}
			break;
		case 5:
			if (bParam3)
			{
				uParam1->f_44 = 1;
			}
			switch (uParam1->f_44)
			{
				case 1:
				case 2:
				case 3:
					uParam1->f_25 = 10;
					uParam1->f_26 = 126;
					uParam1->f_27 = 0;
					uParam1->f_17[0] = 131074;
					uParam1->f_17[1] = 16974081;
					uParam1->f_17[2] = 17367040;
					uParam1->f_21[0] = 131072;
					uParam1->f_21[1] = 524551;
					uParam1->f_21[2] = 16777216;
					uParam1->f_28 = { -2.4094f, 0.1249f, 2.0213f };
					uParam1->f_31 = { 0f, 0f, 287.82f };
					__LIB_8__::func_413(&(uParam1->f_11));
					if (__LIB_8__::func_584(uParam1->f_26))
					{
						__LIB_9__::func_137(&(uParam1->f_11), 27);
					}
					break;
			}
			break;
		case 6:
			if (bParam3)
			{
				uParam1->f_44 = 1;
			}
			switch (uParam1->f_44)
			{
				case 1:
				case 2:
				case 3:
					uParam1->f_25 = 10;
					uParam1->f_26 = 125;
					uParam1->f_27 = 0;
					uParam1->f_17[0] = 0;
					uParam1->f_17[1] = 16974081;
					uParam1->f_17[2] = 16842752;
					uParam1->f_21[0] = 0;
					uParam1->f_21[1] = 131589;
					uParam1->f_21[2] = 0;
					uParam1->f_28 = { -2.3436f, 0.9981f, 2.0213f };
					uParam1->f_31 = { 0f, 0f, 243.199f };
					__LIB_8__::func_413(&(uParam1->f_11));
					if (__LIB_11__::func_254(PLAYER::PLAYER_ID()))
					{
						if (!__LIB_9__::func_233(__LIB_11__::func_608(), 0))
						{
							uParam1->f_28 = { -3.0173f, 0.8461f, 1.8913f };
							uParam1->f_31 = { 0f, 0f, 258.1f };
							__LIB_9__::func_137(&(uParam1->f_11), 0);
						}
					}
					if (__LIB_11__::func_254(PLAYER::PLAYER_ID()))
					{
						__LIB_9__::func_137(&(uParam1->f_11), 7);
					}
					if (__LIB_8__::func_584(uParam1->f_26))
					{
						__LIB_9__::func_137(&(uParam1->f_11), 27);
					}
					break;
			}
			break;
		case 7:
			if (bParam3)
			{
				uParam1->f_44 = 1;
			}
			switch (uParam1->f_44)
			{
				case 1:
				case 2:
				case 3:
					uParam1->f_25 = 10;
					uParam1->f_26 = 130;
					uParam1->f_27 = 0;
					uParam1->f_17[0] = 65537;
					uParam1->f_17[1] = 196608;
					uParam1->f_17[2] = 50724864;
					uParam1->f_21[0] = 65538;
					uParam1->f_21[1] = 262405;
					uParam1->f_21[2] = 33554432;
					uParam1->f_28 = { -2.1304f, 2.1887f, 2.0213f };
					uParam1->f_31 = { 0f, 0f, 253.98f };
					__LIB_8__::func_413(&(uParam1->f_11));
					if (__LIB_11__::func_254(PLAYER::PLAYER_ID()))
					{
						__LIB_9__::func_137(&(uParam1->f_11), 7);
					}
					if (__LIB_8__::func_584(uParam1->f_26))
					{
						__LIB_9__::func_137(&(uParam1->f_11), 27);
					}
					break;
			}
			break;
		case 8:
			if (bParam3)
			{
				uParam1->f_44 = 1;
			}
			switch (uParam1->f_44)
			{
				case 1:
				case 2:
				case 3:
					uParam1->f_25 = 10;
					uParam1->f_26 = 53;
					uParam1->f_27 = 0;
					uParam1->f_17[0] = 0;
					uParam1->f_17[1] = 16777473;
					uParam1->f_17[2] = 16842752;
					uParam1->f_21[0] = 131074;
					uParam1->f_21[1] = 515;
					uParam1->f_21[2] = 33554432;
					uParam1->f_28 = { -3.1423f, -1.0017f, 1.9013f };
					uParam1->f_31 = { 0f, 0f, 298.62f };
					__LIB_8__::func_413(&(uParam1->f_11));
					if (__LIB_8__::func_584(uParam1->f_26))
					{
						__LIB_9__::func_137(&(uParam1->f_11), 27);
					}
					break;
			}
			break;
		case 9:
			if (bParam3)
			{
				uParam1->f_44 = 1;
			}
			switch (uParam1->f_44)
			{
				case 1:
				case 2:
				case 3:
					uParam1->f_25 = 8;
					uParam1->f_26 = 122;
					uParam1->f_27 = 0;
					uParam1->f_17[0] = 131074;
					uParam1->f_17[1] = 65792;
					uParam1->f_17[2] = 16777216;
					uParam1->f_21[0] = 65538;
					uParam1->f_21[1] = 918023;
					uParam1->f_21[2] = 50331648;
					uParam1->f_28 = { -1.909f, -1.6132f, 2.0213f };
					uParam1->f_31 = { 0f, 0f, 298.62f };
					__LIB_8__::func_413(&(uParam1->f_11));
					__LIB_9__::func_137(&(uParam1->f_11), 7);
					if (__LIB_8__::func_584(uParam1->f_26))
					{
						__LIB_9__::func_137(&(uParam1->f_11), 27);
					}
					break;
			}
			break;
		case 10:
			if (bParam3)
			{
				uParam1->f_44 = 1;
			}
			switch (uParam1->f_44)
			{
				case 1:
				case 2:
				case 3:
					uParam1->f_25 = 8;
					uParam1->f_26 = 115;
					uParam1->f_27 = 0;
					uParam1->f_17[0] = 0;
					uParam1->f_17[1] = 131584;
					uParam1->f_17[2] = 33554432;
					uParam1->f_21[0] = 65537;
					uParam1->f_21[1] = 131595;
					uParam1->f_21[2] = 16777216;
					uParam1->f_28 = { 5.3546f, -2.6012f, 1.9013f };
					uParam1->f_31 = { 0f, 0f, 51.697f };
					__LIB_8__::func_413(&(uParam1->f_11));
					if (__LIB_8__::func_584(uParam1->f_26))
					{
						__LIB_9__::func_137(&(uParam1->f_11), 27);
					}
					break;
			}
			break;
		case 11:
			if (bParam3)
			{
				uParam1->f_44 = 1;
			}
			switch (uParam1->f_44)
			{
				case 1:
				case 2:
				case 3:
					uParam1->f_25 = 10;
					uParam1->f_26 = 84;
					uParam1->f_27 = 0;
					uParam1->f_17[0] = 131074;
					uParam1->f_17[1] = 131072;
					uParam1->f_17[2] = 196608;
					uParam1->f_21[0] = 1;
					uParam1->f_21[1] = 66055;
					uParam1->f_21[2] = 0;
					uParam1->f_28 = { 5.2355f, 0.0059f, 1.9013f };
					uParam1->f_31 = { 0f, 0f, 89.1f };
					__LIB_8__::func_413(&(uParam1->f_11));
					if (__LIB_8__::func_584(uParam1->f_26))
					{
						__LIB_9__::func_137(&(uParam1->f_11), 27);
					}
					break;
			}
			break;
		case 12:
			if (bParam3)
			{
				uParam1->f_44 = 1;
			}
			switch (uParam1->f_44)
			{
				case 1:
				case 2:
				case 3:
					uParam1->f_25 = 10;
					uParam1->f_26 = 119;
					uParam1->f_27 = 0;
					uParam1->f_17[0] = 65537;
					uParam1->f_17[1] = 33619968;
					uParam1->f_17[2] = 50987008;
					uParam1->f_21[0] = 65538;
					uParam1->f_21[1] = 65795;
					uParam1->f_21[2] = 0;
					uParam1->f_28 = { 5.2997f, 0.9763f, 1.9013f };
					uParam1->f_31 = { 0f, 0f, 85.5f };
					__LIB_8__::func_413(&(uParam1->f_11));
					if (__LIB_8__::func_584(uParam1->f_26))
					{
						__LIB_9__::func_137(&(uParam1->f_11), 27);
					}
					break;
			}
			break;
		case 13:
			if (bParam3)
			{
				uParam1->f_44 = 1;
			}
			switch (uParam1->f_44)
			{
				case 1:
				case 2:
				case 3:
					uParam1->f_25 = 8;
					uParam1->f_26 = 116;
					uParam1->f_27 = 0;
					uParam1->f_17[0] = 0;
					uParam1->f_17[1] = 256;
					uParam1->f_17[2] = 16777216;
					uParam1->f_21[0] = 131074;
					uParam1->f_21[1] = 266;
					uParam1->f_21[2] = 16777216;
					uParam1->f_28 = { 5.1746f, 2.0864f, 1.9013f };
					uParam1->f_31 = { 0f, 0f, 110.498f };
					__LIB_8__::func_413(&(uParam1->f_11));
					if (__LIB_8__::func_584(uParam1->f_26))
					{
						__LIB_9__::func_137(&(uParam1->f_11), 27);
					}
					break;
			}
			break;
		case 14:
			if (bParam3)
			{
				uParam1->f_44 = 1;
			}
			switch (uParam1->f_44)
			{
				case 1:
				case 2:
				case 3:
					uParam1->f_25 = 9;
					uParam1->f_26 = 44;
					uParam1->f_27 = 1;
					uParam1->f_17[0] = 65537;
					uParam1->f_17[1] = 33620992;
					uParam1->f_17[2] = 50921472;
					uParam1->f_21[0] = 65538;
					uParam1->f_21[1] = 259;
					uParam1->f_21[2] = 33554432;
					uParam1->f_28 = { 44.6551f, -14.0048f, 2.1013f };
					uParam1->f_31 = { 0f, 0f, 189.9f };
					__LIB_8__::func_413(&(uParam1->f_11));
					if (__LIB_8__::func_584(uParam1->f_26))
					{
						__LIB_9__::func_137(&(uParam1->f_11), 27);
					}
					break;
			}
			break;
		case 15:
			if (bParam3)
			{
				uParam1->f_44 = 1;
			}
			switch (uParam1->f_44)
			{
				case 1:
				case 2:
				case 3:
					uParam1->f_25 = 10;
					uParam1->f_26 = 105;
					uParam1->f_27 = 0;
					uParam1->f_17[0] = 0;
					uParam1->f_17[1] = 33620482;
					uParam1->f_17[2] = 33816576;
					uParam1->f_21[0] = 131074;
					uParam1->f_21[1] = 262401;
					uParam1->f_21[2] = 33554432;
					uParam1->f_28 = { 5.7606f, 5.9845f, 0.8913f };
					uParam1->f_31 = { 0f, 0f, 148.14f };
					__LIB_8__::func_413(&(uParam1->f_11));
					__LIB_9__::func_137(&(uParam1->f_11), 13);
					if (__LIB_8__::func_584(uParam1->f_26))
					{
						__LIB_9__::func_137(&(uParam1->f_11), 27);
					}
					break;
			}
			break;
		case 16:
			if (bParam3)
			{
				uParam1->f_44 = 1;
			}
			switch (uParam1->f_44)
			{
				case 1:
				case 2:
				case 3:
					uParam1->f_25 = 10;
					uParam1->f_26 = 104;
					uParam1->f_27 = 0;
					uParam1->f_17[0] = 131074;
					uParam1->f_17[1] = 16908288;
					uParam1->f_17[2] = 17235968;
					uParam1->f_21[0] = 65538;
					uParam1->f_21[1] = 131590;
					uParam1->f_21[2] = 0;
					uParam1->f_28 = { 5.7606f, 5.9845f, 0.8913f };
					uParam1->f_31 = { 0f, 0f, 148.14f };
					__LIB_8__::func_413(&(uParam1->f_11));
					__LIB_9__::func_137(&(uParam1->f_11), 12);
					if (__LIB_8__::func_584(uParam1->f_26))
					{
						__LIB_9__::func_137(&(uParam1->f_11), 27);
					}
					break;
			}
			break;
		case 17:
			if (bParam3)
			{
				uParam1->f_44 = 1;
			}
			switch (uParam1->f_44)
			{
				case 1:
				case 2:
				case 3:
					uParam1->f_25 = 8;
					uParam1->f_26 = 129;
					uParam1->f_27 = 0;
					uParam1->f_17[0] = 65537;
					uParam1->f_17[1] = 65537;
					uParam1->f_17[2] = 0;
					uParam1->f_21[0] = 1;
					uParam1->f_21[1] = 459016;
					uParam1->f_21[2] = 16777216;
					uParam1->f_28 = { 5.9394f, 4.0387f, 1.9013f };
					uParam1->f_31 = { 0f, 0f, 122.897f };
					__LIB_8__::func_413(&(uParam1->f_11));
					if (__LIB_8__::func_584(uParam1->f_26))
					{
						__LIB_9__::func_137(&(uParam1->f_11), 27);
					}
					break;
			}
			break;
		case 18:
			if (bParam3)
			{
				uParam1->f_44 = 1;
			}
			switch (uParam1->f_44)
			{
				case 1:
				case 2:
				case 3:
					uParam1->f_25 = 9;
					uParam1->f_26 = 118;
					uParam1->f_27 = 0;
					uParam1->f_17[0] = 65537;
					uParam1->f_17[1] = 16843521;
					uParam1->f_17[2] = 67305472;
					uParam1->f_21[0] = 65538;
					uParam1->f_21[1] = 262145;
					uParam1->f_21[2] = 16777216;
					uParam1->f_28 = { 8.3415f, 1.6022f, 1.9013f };
					uParam1->f_31 = { 0f, 0f, 90.54f };
					__LIB_8__::func_413(&(uParam1->f_11));
					if (__LIB_8__::func_584(uParam1->f_26))
					{
						__LIB_9__::func_137(&(uParam1->f_11), 27);
					}
					break;
			}
			break;
		case 19:
			if (bParam3)
			{
				uParam1->f_44 = 1;
			}
			switch (uParam1->f_44)
			{
				case 1:
				case 2:
				case 3:
					uParam1->f_25 = 10;
					uParam1->f_26 = 130;
					uParam1->f_27 = 0;
					uParam1->f_17[0] = 65537;
					uParam1->f_17[1] = 66050;
					uParam1->f_17[2] = 33685504;
					uParam1->f_21[0] = 131073;
					uParam1->f_21[1] = 131586;
					uParam1->f_21[2] = 16777216;
					uParam1->f_28 = { 6.7657f, 1.8173f, 1.9013f };
					uParam1->f_31 = { 0f, 0f, 91.697f };
					__LIB_8__::func_413(&(uParam1->f_11));
					if (__LIB_8__::func_584(uParam1->f_26))
					{
						__LIB_9__::func_137(&(uParam1->f_11), 27);
					}
					break;
			}
			break;
		case 20:
			if (bParam3)
			{
				uParam1->f_44 = 1;
			}
			switch (uParam1->f_44)
			{
				case 1:
				case 2:
				case 3:
					uParam1->f_25 = 9;
					uParam1->f_26 = 123;
					uParam1->f_27 = 0;
					uParam1->f_17[0] = 0;
					uParam1->f_17[1] = 50397442;
					uParam1->f_17[2] = 65536;
					uParam1->f_21[0] = 65537;
					uParam1->f_21[1] = 393478;
					uParam1->f_21[2] = 33554432;
					uParam1->f_28 = { 6.8847f, 0.7436f, 1.9013f };
					uParam1->f_31 = { 0f, 0f, 91.697f };
					__LIB_8__::func_413(&(uParam1->f_11));
					if (__LIB_11__::func_254(PLAYER::PLAYER_ID()))
					{
						__LIB_9__::func_137(&(uParam1->f_11), 7);
					}
					if (__LIB_8__::func_584(uParam1->f_26))
					{
						__LIB_9__::func_137(&(uParam1->f_11), 27);
					}
					break;
			}
			break;
		case 21:
			if (bParam3)
			{
				uParam1->f_44 = 1;
			}
			switch (uParam1->f_44)
			{
				case 1:
				case 2:
				case 3:
					uParam1->f_25 = 10;
					uParam1->f_26 = 131;
					uParam1->f_27 = 0;
					uParam1->f_17[0] = 0;
					uParam1->f_17[1] = 33619968;
					uParam1->f_17[2] = 51052544;
					uParam1->f_21[0] = 0;
					uParam1->f_21[1] = 196609;
					uParam1->f_21[2] = 16777216;
					uParam1->f_28 = { 6.3256f, -1.2909f, 1.9013f };
					uParam1->f_31 = { 0f, 0f, 71.1f };
					__LIB_8__::func_413(&(uParam1->f_11));
					if (__LIB_8__::func_584(uParam1->f_26))
					{
						__LIB_9__::func_137(&(uParam1->f_11), 27);
					}
					break;
			}
			break;
		case 22:
			if (bParam3)
			{
				uParam1->f_44 = 1;
			}
			switch (uParam1->f_44)
			{
				case 1:
				case 2:
				case 3:
					uParam1->f_25 = 8;
					uParam1->f_26 = 124;
					uParam1->f_27 = 0;
					uParam1->f_17[0] = 65537;
					uParam1->f_17[1] = 131329;
					uParam1->f_17[2] = 16777216;
					uParam1->f_21[0] = 0;
					uParam1->f_21[1] = 327697;
					uParam1->f_21[2] = 83886080;
					uParam1->f_28 = { 6.5407f, -4.9181f, 1.9013f };
					uParam1->f_31 = { 0f, 0f, 52.38f };
					__LIB_8__::func_413(&(uParam1->f_11));
					if (__LIB_8__::func_584(uParam1->f_26))
					{
						__LIB_9__::func_137(&(uParam1->f_11), 27);
					}
					break;
			}
			break;
		case 23:
			if (bParam3)
			{
				uParam1->f_44 = 1;
			}
			switch (uParam1->f_44)
			{
				case 1:
				case 2:
				case 3:
					uParam1->f_25 = 8;
					uParam1->f_26 = 123;
					uParam1->f_27 = 0;
					uParam1->f_17[0] = 65537;
					uParam1->f_17[1] = 65537;
					uParam1->f_17[2] = 0;
					uParam1->f_21[0] = 1;
					uParam1->f_21[1] = 590087;
					uParam1->f_21[2] = 0;
					uParam1->f_28 = { 5.6716f, -5.6967f, 1.9013f };
					uParam1->f_31 = { 0f, 0f, 41.58f };
					__LIB_8__::func_413(&(uParam1->f_11));
					if (__LIB_8__::func_584(uParam1->f_26))
					{
						__LIB_9__::func_137(&(uParam1->f_11), 27);
					}
					break;
			}
			break;
		case 24:
			if (bParam3)
			{
				uParam1->f_44 = 1;
			}
			switch (uParam1->f_44)
			{
				case 1:
				case 2:
				case 3:
					uParam1->f_25 = 8;
					uParam1->f_26 = 121;
					uParam1->f_27 = Global_262145.f_24758 /* Tunable: 2089855578 */;
					uParam1->f_17[0] = 131074;
					uParam1->f_17[1] = 131329;
					uParam1->f_17[2] = 16777216;
					uParam1->f_21[0] = 65538;
					uParam1->f_21[1] = 852480;
					uParam1->f_21[2] = 83886080;
					uParam1->f_28 = { 3.7171f, 8.0825f, 1.9013f };
					uParam1->f_31 = { 0f, 0f, 306.54f };
					__LIB_8__::func_413(&(uParam1->f_11));
					if (__LIB_8__::func_584(uParam1->f_26))
					{
						__LIB_9__::func_137(&(uParam1->f_11), 27);
					}
					if (Global_262145.f_24766 /* Tunable: -993451048 */)
					{
						__LIB_9__::func_137(&(uParam1->f_11), 0);
					}
					break;
			}
			break;
		case 25:
			if (bParam3)
			{
				uParam1->f_44 = 1;
			}
			switch (uParam1->f_44)
			{
				case 1:
				case 2:
				case 3:
					uParam1->f_25 = 8;
					uParam1->f_26 = 52;
					uParam1->f_27 = 0;
					uParam1->f_17[0] = 131074;
					uParam1->f_17[1] = 66049;
					uParam1->f_17[2] = 33554432;
					uParam1->f_21[0] = 1;
					uParam1->f_21[1] = 655369;
					uParam1->f_21[2] = 33554432;
					uParam1->f_28 = { -0.4864f, 1.7842f, 2.0213f };
					uParam1->f_31 = { 0f, 0f, 223.74f };
					__LIB_8__::func_413(&(uParam1->f_11));
					if (__LIB_11__::func_254(PLAYER::PLAYER_ID()))
					{
						__LIB_9__::func_137(&(uParam1->f_11), 7);
					}
					if (__LIB_8__::func_584(uParam1->f_26))
					{
						__LIB_9__::func_137(&(uParam1->f_11), 27);
					}
					break;
			}
			break;
		case 26:
			if (bParam3)
			{
				uParam1->f_44 = 1;
			}
			switch (uParam1->f_44)
			{
				case 1:
				case 2:
				case 3:
					uParam1->f_25 = 10;
					uParam1->f_26 = 96;
					uParam1->f_27 = Global_262145.f_24758 /* Tunable: 2089855578 */;
					uParam1->f_17[0] = 131074;
					uParam1->f_17[1] = 16843009;
					uParam1->f_17[2] = 17563648;
					uParam1->f_21[0] = 1;
					uParam1->f_21[1] = 524550;
					uParam1->f_21[2] = 33554432;
					uParam1->f_28 = { 4.5838f, 9.0893f, 1.9013f };
					uParam1->f_31 = { 0f, 0f, 156.78f };
					__LIB_8__::func_413(&(uParam1->f_11));
					if (__LIB_8__::func_584(uParam1->f_26))
					{
						__LIB_9__::func_137(&(uParam1->f_11), 27);
					}
					if (Global_262145.f_24766 /* Tunable: -993451048 */)
					{
						__LIB_9__::func_137(&(uParam1->f_11), 0);
					}
					break;
			}
			break;
		case 27:
			if (bParam3)
			{
				uParam1->f_44 = 1;
			}
			switch (uParam1->f_44)
			{
				case 1:
				case 2:
				case 3:
					uParam1->f_25 = 10;
					uParam1->f_26 = 102;
					uParam1->f_27 = 0;
					uParam1->f_17[0] = 131074;
					uParam1->f_17[1] = 33751040;
					uParam1->f_17[2] = 50528256;
					uParam1->f_21[0] = 65538;
					uParam1->f_21[1] = 393736;
					uParam1->f_21[2] = 0;
					uParam1->f_28 = { -1.6892f, -3.6945f, 0.8913f };
					uParam1->f_31 = { 0f, 0f, 336.78f };
					__LIB_8__::func_413(&(uParam1->f_11));
					__LIB_9__::func_137(&(uParam1->f_11), 12);
					if (__LIB_8__::func_584(uParam1->f_26))
					{
						__LIB_9__::func_137(&(uParam1->f_11), 27);
					}
					break;
			}
			break;
		case 28:
			if (bParam3)
			{
				uParam1->f_44 = 1;
			}
			switch (uParam1->f_44)
			{
				case 1:
				case 2:
				case 3:
					uParam1->f_25 = 10;
					uParam1->f_26 = 131;
					uParam1->f_27 = 0;
					uParam1->f_17[0] = 131074;
					uParam1->f_17[1] = 66050;
					uParam1->f_17[2] = 34209792;
					uParam1->f_21[0] = 131072;
					uParam1->f_21[1] = 458752;
					uParam1->f_21[2] = 0;
					uParam1->f_28 = { 10.1815f, 5.2188f, 1.9013f };
					uParam1->f_31 = { 0f, 0f, 110.897f };
					__LIB_8__::func_413(&(uParam1->f_11));
					if (__LIB_8__::func_584(uParam1->f_26))
					{
						__LIB_9__::func_137(&(uParam1->f_11), 27);
					}
					break;
			}
			break;
		case 29:
			if (bParam3)
			{
				uParam1->f_44 = 1;
			}
			switch (uParam1->f_44)
			{
				case 1:
				case 2:
				case 3:
					uParam1->f_25 = 9;
					uParam1->f_26 = 54;
					uParam1->f_27 = 3;
					uParam1->f_17[0] = 131074;
					uParam1->f_17[1] = 50331649;
					uParam1->f_17[2] = 34144256;
					uParam1->f_21[0] = 1;
					uParam1->f_21[1] = 131592;
					uParam1->f_21[2] = 0;
					uParam1->f_28 = { 15.5795f, 12.1336f, 1.8913f };
					uParam1->f_31 = { 0f, 0f, 175.5f };
					__LIB_8__::func_413(&(uParam1->f_11));
					if (__LIB_8__::func_584(uParam1->f_26))
					{
						__LIB_9__::func_137(&(uParam1->f_11), 27);
					}
					break;
			}
			break;
		case 30:
			if (bParam3)
			{
				uParam1->f_44 = 1;
			}
			switch (uParam1->f_44)
			{
				case 1:
				case 2:
				case 3:
					uParam1->f_25 = 8;
					uParam1->f_26 = 110;
					uParam1->f_27 = 0;
					uParam1->f_17[0] = 0;
					uParam1->f_17[1] = 131329;
					uParam1->f_17[2] = 16777216;
					uParam1->f_21[0] = 131074;
					uParam1->f_21[1] = 65797;
					uParam1->f_21[2] = 67108864;
					uParam1->f_28 = { 8.3284f, 7.6122f, 0.8913f };
					uParam1->f_31 = { 0f, 0f, 138.06f };
					__LIB_8__::func_413(&(uParam1->f_11));
					__LIB_9__::func_137(&(uParam1->f_11), 13);
					if (__LIB_8__::func_584(uParam1->f_26))
					{
						__LIB_9__::func_137(&(uParam1->f_11), 27);
					}
					break;
			}
			break;
		case 31:
			if (bParam3)
			{
				uParam1->f_44 = 1;
			}
			switch (uParam1->f_44)
			{
				case 1:
				case 2:
				case 3:
					uParam1->f_25 = 9;
					uParam1->f_26 = 121;
					uParam1->f_27 = 0;
					uParam1->f_17[0] = 0;
					uParam1->f_17[1] = 16777216;
					uParam1->f_17[2] = 33685504;
					uParam1->f_21[0] = 0;
					uParam1->f_21[1] = 65537;
					uParam1->f_21[2] = 0;
					uParam1->f_28 = { 5.86f, 7.3076f, 1.9013f };
					uParam1->f_31 = { 0f, 0f, 145.98f };
					__LIB_8__::func_413(&(uParam1->f_11));
					if (__LIB_8__::func_584(uParam1->f_26))
					{
						__LIB_9__::func_137(&(uParam1->f_11), 27);
					}
					break;
			}
			break;
		case 32:
			if (bParam3)
			{
				uParam1->f_44 = 1;
			}
			switch (uParam1->f_44)
			{
				case 1:
				case 2:
				case 3:
					uParam1->f_25 = 10;
					uParam1->f_26 = 125;
					uParam1->f_27 = 0;
					uParam1->f_17[0] = 131074;
					uParam1->f_17[1] = 196608;
					uParam1->f_17[2] = 50855936;
					uParam1->f_21[0] = 1;
					uParam1->f_21[1] = 459272;
					uParam1->f_21[2] = 33554432;
					uParam1->f_28 = { 7.4985f, 5.2986f, 1.9013f };
					uParam1->f_31 = { 0f, 0f, 142.38f };
					__LIB_8__::func_413(&(uParam1->f_11));
					if (__LIB_8__::func_584(uParam1->f_26))
					{
						__LIB_9__::func_137(&(uParam1->f_11), 27);
					}
					break;
			}
			break;
		case 33:
			if (bParam3)
			{
				uParam1->f_44 = 1;
			}
			switch (uParam1->f_44)
			{
				case 1:
				case 2:
				case 3:
					uParam1->f_25 = 8;
					uParam1->f_26 = 117;
					uParam1->f_27 = 0;
					uParam1->f_17[0] = 131074;
					uParam1->f_17[1] = 131585;
					uParam1->f_17[2] = 33554432;
					uParam1->f_21[0] = 1;
					uParam1->f_21[1] = 786434;
					uParam1->f_21[2] = 0;
					uParam1->f_28 = { 8.2972f, -0.4441f, 1.9013f };
					uParam1->f_31 = { 0f, 0f, 81.9f };
					__LIB_8__::func_413(&(uParam1->f_11));
					if (__LIB_8__::func_584(uParam1->f_26))
					{
						__LIB_9__::func_137(&(uParam1->f_11), 27);
					}
					break;
			}
			break;
		case 34:
			if (bParam3)
			{
				uParam1->f_44 = 1;
			}
			switch (uParam1->f_44)
			{
				case 1:
				case 2:
				case 3:
					uParam1->f_25 = 9;
					uParam1->f_26 = 79;
					uParam1->f_27 = 0;
					uParam1->f_17[0] = 65537;
					uParam1->f_17[1] = 66050;
					uParam1->f_17[2] = 17039360;
					uParam1->f_21[0] = 0;
					uParam1->f_21[1] = 66051;
					uParam1->f_21[2] = 16777216;
					uParam1->f_28 = { 8.1842f, -1.4897f, 1.9013f };
					uParam1->f_31 = { 0f, 0f, 95.297f };
					__LIB_8__::func_413(&(uParam1->f_11));
					if (__LIB_8__::func_584(uParam1->f_26))
					{
						__LIB_9__::func_137(&(uParam1->f_11), 27);
					}
					break;
			}
			break;
		case 35:
			if (bParam3)
			{
				uParam1->f_44 = 1;
			}
			switch (uParam1->f_44)
			{
				case 1:
				case 2:
				case 3:
					uParam1->f_25 = 8;
					uParam1->f_26 = 122;
					uParam1->f_27 = 0;
					uParam1->f_17[0] = 131074;
					uParam1->f_17[1] = 65793;
					uParam1->f_17[2] = 16777216;
					uParam1->f_21[0] = 65538;
					uParam1->f_21[1] = 786955;
					uParam1->f_21[2] = 0;
					uParam1->f_28 = { 9.6987f, 0.5718f, 1.9013f };
					uParam1->f_31 = { 0f, 0f, 86.297f };
					__LIB_8__::func_413(&(uParam1->f_11));
					if (__LIB_8__::func_584(uParam1->f_26))
					{
						__LIB_9__::func_137(&(uParam1->f_11), 27);
					}
					break;
			}
			break;
		case 36:
			if (bParam3)
			{
				uParam1->f_44 = 1;
			}
			switch (uParam1->f_44)
			{
				case 1:
				case 2:
				case 3:
					uParam1->f_25 = 8;
					uParam1->f_26 = 127;
					uParam1->f_27 = 0;
					uParam1->f_17[0] = 0;
					uParam1->f_17[1] = 66049;
					uParam1->f_17[2] = 33554432;
					uParam1->f_21[0] = 65537;
					uParam1->f_21[1] = 66051;
					uParam1->f_21[2] = 16777216;
					uParam1->f_28 = { 8.1421f, 2.6487f, 1.9013f };
					uParam1->f_31 = { 0f, 0f, 86.297f };
					__LIB_8__::func_413(&(uParam1->f_11));
					if (__LIB_8__::func_584(uParam1->f_26))
					{
						__LIB_9__::func_137(&(uParam1->f_11), 27);
					}
					break;
			}
			break;
		case 37:
			if (bParam3)
			{
				uParam1->f_44 = 1;
			}
			switch (uParam1->f_44)
			{
				case 1:
				case 2:
				case 3:
					uParam1->f_25 = 8;
					uParam1->f_26 = 124;
					uParam1->f_27 = 0;
					uParam1->f_17[0] = 65537;
					uParam1->f_17[1] = 131072;
					uParam1->f_17[2] = 0;
					uParam1->f_21[0] = 2;
					uParam1->f_21[1] = 393486;
					uParam1->f_21[2] = 50331648;
					uParam1->f_28 = { 7.9957f, 4.4778f, 1.9013f };
					uParam1->f_31 = { 0f, 0f, 126.54f };
					__LIB_8__::func_413(&(uParam1->f_11));
					if (__LIB_8__::func_584(uParam1->f_26))
					{
						__LIB_9__::func_137(&(uParam1->f_11), 27);
					}
					break;
			}
			break;
		case 38:
			if (bParam3)
			{
				uParam1->f_44 = 1;
			}
			switch (uParam1->f_44)
			{
				case 1:
				case 2:
				case 3:
					uParam1->f_25 = 10;
					uParam1->f_26 = 120;
					uParam1->f_27 = 0;
					uParam1->f_17[0] = 65537;
					uParam1->f_17[1] = 16843009;
					uParam1->f_17[2] = 17104896;
					uParam1->f_21[0] = 0;
					uParam1->f_21[1] = 0;
					uParam1->f_21[2] = 16777216;
					uParam1->f_28 = { 9.801f, -0.4685f, 1.9013f };
					uParam1->f_31 = { 0f, 0f, 89.1f };
					__LIB_8__::func_413(&(uParam1->f_11));
					if (__LIB_8__::func_584(uParam1->f_26))
					{
						__LIB_9__::func_137(&(uParam1->f_11), 27);
					}
					break;
			}
			break;
		case 39:
			if (bParam3)
			{
				uParam1->f_44 = 1;
			}
			switch (uParam1->f_44)
			{
				case 1:
				case 2:
				case 3:
					uParam1->f_25 = 8;
					uParam1->f_26 = 121;
					uParam1->f_27 = 0;
					uParam1->f_17[0] = 131074;
					uParam1->f_17[1] = 0;
					uParam1->f_17[2] = 0;
					uParam1->f_21[0] = 131072;
					uParam1->f_21[1] = 131592;
					uParam1->f_21[2] = 83886080;
					uParam1->f_28 = { 7.3536f, -2.6473f, 1.9013f };
					uParam1->f_31 = { 0f, 0f, 53.296f };
					__LIB_8__::func_413(&(uParam1->f_11));
					if (__LIB_8__::func_584(uParam1->f_26))
					{
						__LIB_9__::func_137(&(uParam1->f_11), 27);
					}
					break;
			}
			break;
		case 40:
			if (bParam3)
			{
				uParam1->f_44 = 1;
			}
			switch (uParam1->f_44)
			{
				case 1:
				case 2:
				case 3:
					uParam1->f_25 = 10;
					uParam1->f_26 = 126;
					uParam1->f_27 = 0;
					uParam1->f_17[0] = 0;
					uParam1->f_17[1] = 66050;
					uParam1->f_17[2] = 34209792;
					uParam1->f_21[0] = 131074;
					uParam1->f_21[1] = 327937;
					uParam1->f_21[2] = 33554432;
					uParam1->f_28 = { 8.4007f, -3.9964f, 1.9013f };
					uParam1->f_31 = { 0f, 0f, 53.296f };
					__LIB_8__::func_413(&(uParam1->f_11));
					if (__LIB_8__::func_584(uParam1->f_26))
					{
						__LIB_9__::func_137(&(uParam1->f_11), 27);
					}
					break;
			}
			break;
		case 41:
			if (bParam3)
			{
				uParam1->f_44 = 1;
			}
			switch (uParam1->f_44)
			{
				case 1:
				case 2:
				case 3:
					uParam1->f_25 = 10;
					uParam1->f_26 = 119;
					uParam1->f_27 = Global_262145.f_24757 /* Tunable: -1891938385 */;
					uParam1->f_17[0] = 131074;
					uParam1->f_17[1] = 33619968;
					uParam1->f_17[2] = 524288;
					uParam1->f_21[0] = 131072;
					uParam1->f_21[1] = 524806;
					uParam1->f_21[2] = 16777216;
					uParam1->f_28 = { 7.2113f, -6.2757f, 1.9013f };
					uParam1->f_31 = { 0f, 0f, 43.02f };
					__LIB_8__::func_413(&(uParam1->f_11));
					if (__LIB_8__::func_584(uParam1->f_26))
					{
						__LIB_9__::func_137(&(uParam1->f_11), 27);
					}
					if (Global_262145.f_24765 /* Tunable: 262060418 */)
					{
						__LIB_9__::func_137(&(uParam1->f_11), 0);
					}
					break;
			}
			break;
		case 42:
			if (bParam3)
			{
				uParam1->f_44 = 1;
			}
			switch (uParam1->f_44)
			{
				case 1:
				case 2:
				case 3:
					uParam1->f_25 = 10;
					uParam1->f_26 = 45;
					uParam1->f_27 = 1;
					uParam1->f_17[0] = 65537;
					uParam1->f_17[1] = 131072;
					uParam1->f_17[2] = 50462720;
					uParam1->f_21[0] = 0;
					uParam1->f_21[1] = 459012;
					uParam1->f_21[2] = 0;
					uParam1->f_28 = { 45.7001f, -14.1686f, 2.1113f };
					uParam1->f_31 = { 0f, 0f, 133.74f };
					__LIB_8__::func_413(&(uParam1->f_11));
					if (__LIB_8__::func_584(uParam1->f_26))
					{
						__LIB_9__::func_137(&(uParam1->f_11), 27);
					}
					break;
			}
			break;
		case 43:
			if (bParam3)
			{
				uParam1->f_44 = 1;
			}
			switch (uParam1->f_44)
			{
				case 1:
				case 2:
				case 3:
					uParam1->f_25 = 8;
					uParam1->f_26 = 123;
					uParam1->f_27 = Global_262145.f_24756 /* Tunable: 1509025053 */;
					uParam1->f_17[0] = 131074;
					uParam1->f_17[1] = 65536;
					uParam1->f_17[2] = 0;
					uParam1->f_21[0] = 131072;
					uParam1->f_21[1] = 852496;
					uParam1->f_21[2] = 0;
					uParam1->f_28 = { 10.5164f, 8.6686f, 1.9013f };
					uParam1->f_31 = { 0f, 0f, 111.696f };
					__LIB_8__::func_413(&(uParam1->f_11));
					if (__LIB_8__::func_584(uParam1->f_26))
					{
						__LIB_9__::func_137(&(uParam1->f_11), 27);
					}
					if (Global_262145.f_24764 /* Tunable: 626451698 */)
					{
						__LIB_9__::func_137(&(uParam1->f_11), 0);
					}
					break;
			}
			break;
		case 44:
			if (bParam3)
			{
				uParam1->f_44 = 1;
			}
			switch (uParam1->f_44)
			{
				case 1:
				case 2:
				case 3:
					uParam1->f_25 = 10;
					uParam1->f_26 = 131;
					uParam1->f_27 = 0;
					uParam1->f_17[0] = 65537;
					uParam1->f_17[1] = 16974081;
					uParam1->f_17[2] = 17104896;
					uParam1->f_21[0] = 0;
					uParam1->f_21[1] = 196610;
					uParam1->f_21[2] = 33554432;
					uParam1->f_28 = { -1.1879f, 5.4843f, 1.9013f };
					uParam1->f_31 = { 0f, 0f, 208.62f };
					__LIB_8__::func_413(&(uParam1->f_11));
					if (__LIB_8__::func_584(uParam1->f_26))
					{
						__LIB_9__::func_137(&(uParam1->f_11), 27);
					}
					break;
			}
			break;
		case 45:
			if (bParam3)
			{
				uParam1->f_44 = 1;
			}
			switch (uParam1->f_44)
			{
				case 1:
				case 2:
				case 3:
					uParam1->f_25 = 10;
					uParam1->f_26 = 108;
					uParam1->f_27 = 0;
					uParam1->f_17[0] = 65537;
					uParam1->f_17[1] = 16777473;
					uParam1->f_17[2] = 17170432;
					uParam1->f_21[0] = 65538;
					uParam1->f_21[1] = 65537;
					uParam1->f_21[2] = 16777216;
					uParam1->f_28 = { 8.3284f, 7.6122f, 0.8913f };
					uParam1->f_31 = { 0f, 0f, 138.06f };
					__LIB_8__::func_413(&(uParam1->f_11));
					if (__LIB_11__::func_254(PLAYER::PLAYER_ID()))
					{
						__LIB_9__::func_137(&(uParam1->f_11), 7);
					}
					__LIB_9__::func_137(&(uParam1->f_11), 12);
					if (__LIB_8__::func_584(uParam1->f_26))
					{
						__LIB_9__::func_137(&(uParam1->f_11), 27);
					}
					break;
			}
			break;
		case 46:
			if (bParam3)
			{
				uParam1->f_44 = 1;
			}
			switch (uParam1->f_44)
			{
				case 1:
				case 2:
				case 3:
					uParam1->f_25 = 9;
					uParam1->f_26 = 109;
					uParam1->f_27 = 0;
					uParam1->f_17[0] = 65537;
					uParam1->f_17[1] = 33619969;
					uParam1->f_17[2] = 34013184;
					uParam1->f_21[0] = 131073;
					uParam1->f_21[1] = 196866;
					uParam1->f_21[2] = 0;
					uParam1->f_28 = { 8.3284f, 7.6122f, 0.8913f };
					uParam1->f_31 = { 0f, 0f, 138.06f };
					__LIB_8__::func_413(&(uParam1->f_11));
					__LIB_9__::func_137(&(uParam1->f_11), 13);
					if (__LIB_8__::func_584(uParam1->f_26))
					{
						__LIB_9__::func_137(&(uParam1->f_11), 27);
					}
					break;
			}
			break;
		case 47:
			if (bParam3)
			{
				uParam1->f_44 = 1;
			}
			switch (uParam1->f_44)
			{
				case 1:
				case 2:
				case 3:
					uParam1->f_25 = 10;
					uParam1->f_26 = 61;
					uParam1->f_27 = Global_262145.f_24755 /* Tunable: 1788315240 */;
					uParam1->f_17[0] = 65537;
					uParam1->f_17[1] = 33685504;
					uParam1->f_17[2] = 720896;
					uParam1->f_21[0] = 0;
					uParam1->f_21[1] = 393476;
					uParam1->f_21[2] = 0;
					uParam1->f_28 = { 9.5244f, 9.4924f, 1.9013f };
					uParam1->f_31 = { 0f, 0f, 145.98f };
					__LIB_8__::func_413(&(uParam1->f_11));
					if (__LIB_11__::func_254(PLAYER::PLAYER_ID()))
					{
						__LIB_9__::func_137(&(uParam1->f_11), 7);
					}
					if (__LIB_8__::func_584(uParam1->f_26))
					{
						__LIB_9__::func_137(&(uParam1->f_11), 27);
					}
					if (Global_262145.f_24763 /* Tunable: -600583507 */)
					{
						__LIB_9__::func_137(&(uParam1->f_11), 0);
					}
					break;
			}
			break;
		case 48:
			if (bParam3)
			{
				uParam1->f_44 = 1;
			}
			switch (uParam1->f_44)
			{
				case 1:
				case 2:
				case 3:
					uParam1->f_25 = 10;
					uParam1->f_26 = 98;
					uParam1->f_27 = 0;
					uParam1->f_17[0] = 0;
					uParam1->f_17[1] = 196608;
					uParam1->f_17[2] = 0;
					uParam1->f_21[0] = 0;
					uParam1->f_21[1] = 0;
					uParam1->f_21[2] = 33554432;
					uParam1->f_28 = { 10.2357f, 3.9861f, 1.9013f };
					uParam1->f_31 = { 0f, 0f, 98.6901f };
					__LIB_8__::func_413(&(uParam1->f_11));
					if (__LIB_8__::func_584(uParam1->f_26))
					{
						__LIB_9__::func_137(&(uParam1->f_11), 27);
					}
					break;
			}
			break;
		case 49:
			if (bParam3)
			{
				uParam1->f_44 = 1;
			}
			switch (uParam1->f_44)
			{
				case 1:
				case 2:
				case 3:
					uParam1->f_25 = 9;
					uParam1->f_26 = 117;
					uParam1->f_27 = 0;
					uParam1->f_17[0] = 131074;
					uParam1->f_17[1] = 33686018;
					uParam1->f_17[2] = 17104896;
					uParam1->f_21[0] = 65538;
					uParam1->f_21[1] = 131074;
					uParam1->f_21[2] = 33554432;
					uParam1->f_28 = { 10.2427f, 2.9452f, 1.9013f };
					uParam1->f_31 = { 0f, 0f, 98.696f };
					__LIB_8__::func_413(&(uParam1->f_11));
					if (__LIB_8__::func_584(uParam1->f_26))
					{
						__LIB_9__::func_137(&(uParam1->f_11), 27);
					}
					break;
			}
			break;
		case 50:
			if (bParam3)
			{
				uParam1->f_44 = 1;
			}
			switch (uParam1->f_44)
			{
				case 1:
				case 2:
				case 3:
					uParam1->f_25 = 10;
					uParam1->f_26 = 102;
					uParam1->f_27 = 0;
					uParam1->f_17[0] = 0;
					uParam1->f_17[1] = 33685504;
					uParam1->f_17[2] = 262144;
					uParam1->f_21[0] = 65537;
					uParam1->f_21[1] = 196610;
					uParam1->f_21[2] = 16777216;
					uParam1->f_28 = { 13.1252f, 3.1452f, 0.8913f };
					uParam1->f_31 = { 0f, 0f, 98.696f };
					__LIB_8__::func_413(&(uParam1->f_11));
					__LIB_9__::func_137(&(uParam1->f_11), 12);
					if (__LIB_8__::func_584(uParam1->f_26))
					{
						__LIB_9__::func_137(&(uParam1->f_11), 27);
					}
					break;
			}
			break;
		case 51:
			if (bParam3)
			{
				uParam1->f_44 = 1;
			}
			switch (uParam1->f_44)
			{
				case 1:
				case 2:
				case 3:
					uParam1->f_25 = 10;
					uParam1->f_26 = 85;
					uParam1->f_27 = 0;
					uParam1->f_17[0] = 65537;
					uParam1->f_17[1] = 16777473;
					uParam1->f_17[2] = 17170432;
					uParam1->f_21[0] = 65538;
					uParam1->f_21[1] = 65537;
					uParam1->f_21[2] = 33554432;
					uParam1->f_28 = { 12.1152f, -0.0548f, 1.9013f };
					uParam1->f_31 = { 0f, 0f, 159.66f };
					__LIB_8__::func_413(&(uParam1->f_11));
					if (__LIB_8__::func_584(uParam1->f_26))
					{
						__LIB_9__::func_137(&(uParam1->f_11), 27);
					}
					break;
			}
			break;
		case 52:
			if (bParam3)
			{
				uParam1->f_44 = 1;
			}
			switch (uParam1->f_44)
			{
				case 1:
				case 2:
				case 3:
					uParam1->f_25 = 9;
					uParam1->f_26 = 93;
					uParam1->f_27 = 0;
					uParam1->f_17[0] = 131074;
					uParam1->f_17[1] = 50398208;
					uParam1->f_17[2] = 50331648;
					uParam1->f_21[0] = 1;
					uParam1->f_21[1] = 918023;
					uParam1->f_21[2] = 0;
					uParam1->f_28 = { 12.0627f, -1.492f, 1.9013f };
					uParam1->f_31 = { 0f, 0f, 9.9f };
					__LIB_8__::func_413(&(uParam1->f_11));
					if (__LIB_8__::func_584(uParam1->f_26))
					{
						__LIB_9__::func_137(&(uParam1->f_11), 27);
					}
					break;
			}
			break;
		case 53:
			if (bParam3)
			{
				uParam1->f_44 = 1;
			}
			switch (uParam1->f_44)
			{
				case 1:
				case 2:
				case 3:
					uParam1->f_25 = 8;
					uParam1->f_26 = 128;
					uParam1->f_27 = 0;
					uParam1->f_17[0] = 0;
					uParam1->f_17[1] = 65537;
					uParam1->f_17[2] = 0;
					uParam1->f_21[0] = 0;
					uParam1->f_21[1] = 262156;
					uParam1->f_21[2] = 33554432;
					uParam1->f_28 = { 9.8208f, -2.9513f, 1.9013f };
					uParam1->f_31 = { 0f, 0f, 60.696f };
					__LIB_8__::func_413(&(uParam1->f_11));
					if (__LIB_8__::func_584(uParam1->f_26))
					{
						__LIB_9__::func_137(&(uParam1->f_11), 27);
					}
					break;
			}
			break;
		case 54:
			if (bParam3)
			{
				uParam1->f_44 = 1;
			}
			switch (uParam1->f_44)
			{
				case 1:
				case 2:
				case 3:
					uParam1->f_25 = 8;
					uParam1->f_26 = 52;
					uParam1->f_27 = Global_262145.f_24757 /* Tunable: -1891938385 */;
					uParam1->f_17[0] = 65537;
					uParam1->f_17[1] = 131585;
					uParam1->f_17[2] = 33554432;
					uParam1->f_21[0] = 2;
					uParam1->f_21[1] = 590096;
					uParam1->f_21[2] = 33554432;
					uParam1->f_28 = { 9.2688f, -5.6634f, 1.9013f };
					uParam1->f_31 = { 0f, 0f, 43.74f };
					__LIB_8__::func_413(&(uParam1->f_11));
					if (__LIB_8__::func_584(uParam1->f_26))
					{
						__LIB_9__::func_137(&(uParam1->f_11), 27);
					}
					if (Global_262145.f_24765 /* Tunable: 262060418 */)
					{
						__LIB_9__::func_137(&(uParam1->f_11), 0);
					}
					break;
			}
			break;
		case 55:
			if (bParam3)
			{
				uParam1->f_44 = 1;
			}
			switch (uParam1->f_44)
			{
				case 1:
				case 2:
				case 3:
					uParam1->f_25 = 10;
					uParam1->f_26 = 86;
					uParam1->f_27 = Global_262145.f_24756 /* Tunable: 1509025053 */;
					uParam1->f_17[0] = 65537;
					uParam1->f_17[1] = 33751040;
					uParam1->f_17[2] = 50462720;
					uParam1->f_21[0] = 131073;
					uParam1->f_21[1] = 327941;
					uParam1->f_21[2] = 16777216;
					uParam1->f_28 = { 12.9949f, -0.7774f, 1.9013f };
					uParam1->f_31 = { 0f, 0f, 90.54f };
					__LIB_8__::func_413(&(uParam1->f_11));
					if (__LIB_8__::func_584(uParam1->f_26))
					{
						__LIB_9__::func_137(&(uParam1->f_11), 27);
					}
					if (Global_262145.f_24764 /* Tunable: 626451698 */)
					{
						__LIB_9__::func_137(&(uParam1->f_11), 0);
					}
					break;
			}
			break;
		case 56:
			if (bParam3)
			{
				uParam1->f_44 = 1;
			}
			switch (uParam1->f_44)
			{
				case 1:
				case 2:
				case 3:
					uParam1->f_25 = 8;
					uParam1->f_26 = 103;
					uParam1->f_27 = 0;
					uParam1->f_17[0] = 65537;
					uParam1->f_17[1] = 66049;
					uParam1->f_17[2] = 33554432;
					uParam1->f_21[0] = 0;
					uParam1->f_21[1] = 524559;
					uParam1->f_21[2] = 16777216;
					uParam1->f_28 = { 13.1252f, 3.1452f, 0.8913f };
					uParam1->f_31 = { 0f, 0f, 98.696f };
					__LIB_8__::func_413(&(uParam1->f_11));
					if (__LIB_11__::func_254(PLAYER::PLAYER_ID()))
					{
						__LIB_9__::func_137(&(uParam1->f_11), 7);
					}
					__LIB_9__::func_137(&(uParam1->f_11), 13);
					if (__LIB_8__::func_584(uParam1->f_26))
					{
						__LIB_9__::func_137(&(uParam1->f_11), 27);
					}
					break;
			}
			break;
		case 57:
			if (bParam3)
			{
				uParam1->f_44 = 1;
			}
			switch (uParam1->f_44)
			{
				case 1:
				case 2:
				case 3:
					uParam1->f_25 = 9;
					uParam1->f_26 = 107;
					uParam1->f_27 = 0;
					uParam1->f_17[0] = 0;
					uParam1->f_17[1] = 16843778;
					uParam1->f_17[2] = 50397184;
					uParam1->f_21[0] = 131074;
					uParam1->f_21[1] = 524296;
					uParam1->f_21[2] = 16777216;
					uParam1->f_28 = { 12.1997f, 7.5122f, 0.8913f };
					uParam1->f_31 = { 0f, 0f, 116.46f };
					__LIB_8__::func_413(&(uParam1->f_11));
					__LIB_9__::func_137(&(uParam1->f_11), 13);
					if (__LIB_8__::func_584(uParam1->f_26))
					{
						__LIB_9__::func_137(&(uParam1->f_11), 27);
					}
					break;
			}
			break;
		case 58:
			if (bParam3)
			{
				uParam1->f_44 = 1;
			}
			switch (uParam1->f_44)
			{
				case 1:
				case 2:
				case 3:
					uParam1->f_25 = 8;
					uParam1->f_26 = 106;
					uParam1->f_27 = 0;
					uParam1->f_17[0] = 131074;
					uParam1->f_17[1] = 131584;
					uParam1->f_17[2] = 33554432;
					uParam1->f_21[0] = 1;
					uParam1->f_21[1] = 720911;
					uParam1->f_21[2] = 33554432;
					uParam1->f_28 = { 12.1997f, 7.5122f, 0.8913f };
					uParam1->f_31 = { 0f, 0f, 116.46f };
					__LIB_8__::func_413(&(uParam1->f_11));
					__LIB_9__::func_137(&(uParam1->f_11), 12);
					if (__LIB_8__::func_584(uParam1->f_26))
					{
						__LIB_9__::func_137(&(uParam1->f_11), 27);
					}
					break;
			}
			break;
		case 59:
			if (bParam3)
			{
				uParam1->f_44 = 1;
			}
			switch (uParam1->f_44)
			{
				case 1:
				case 2:
				case 3:
					uParam1->f_25 = 9;
					uParam1->f_26 = 54;
					uParam1->f_27 = Global_262145.f_24757 /* Tunable: -1891938385 */;
					uParam1->f_17[0] = 131074;
					uParam1->f_17[1] = 33620226;
					uParam1->f_17[2] = 524288;
					uParam1->f_21[0] = 131072;
					uParam1->f_21[1] = 852481;
					uParam1->f_21[2] = 0;
					uParam1->f_28 = { -0.1739f, 5.5121f, 1.9013f };
					uParam1->f_31 = { 0f, 0f, 141.66f };
					__LIB_8__::func_413(&(uParam1->f_11));
					if (__LIB_8__::func_584(uParam1->f_26))
					{
						__LIB_9__::func_137(&(uParam1->f_11), 27);
					}
					if (Global_262145.f_24765 /* Tunable: 262060418 */)
					{
						__LIB_9__::func_137(&(uParam1->f_11), 0);
					}
					break;
			}
			break;
		case 60:
			if (bParam3)
			{
				uParam1->f_44 = 1;
			}
			switch (uParam1->f_44)
			{
				case 1:
				case 2:
				case 3:
					uParam1->f_25 = 8;
					uParam1->f_26 = 44;
					uParam1->f_27 = Global_262145.f_24757 /* Tunable: -1891938385 */;
					uParam1->f_17[0] = 65537;
					uParam1->f_17[1] = 131584;
					uParam1->f_17[2] = 33554432;
					uParam1->f_21[0] = 0;
					uParam1->f_21[1] = 459013;
					uParam1->f_21[2] = 0;
					uParam1->f_28 = { -2.2643f, 4.1782f, 1.9013f };
					uParam1->f_31 = { 0f, 0f, 212.94f };
					__LIB_8__::func_413(&(uParam1->f_11));
					if (__LIB_11__::func_254(PLAYER::PLAYER_ID()))
					{
						__LIB_9__::func_137(&(uParam1->f_11), 7);
					}
					if (__LIB_8__::func_584(uParam1->f_26))
					{
						__LIB_9__::func_137(&(uParam1->f_11), 27);
					}
					if (Global_262145.f_24765 /* Tunable: 262060418 */)
					{
						__LIB_9__::func_137(&(uParam1->f_11), 0);
					}
					break;
			}
			break;
		case 61:
			if (bParam3)
			{
				uParam1->f_44 = 1;
			}
			switch (uParam1->f_44)
			{
				case 1:
				case 2:
				case 3:
					uParam1->f_25 = 8;
					uParam1->f_26 = 59;
					uParam1->f_27 = 0;
					uParam1->f_17[0] = 0;
					uParam1->f_17[1] = 131328;
					uParam1->f_17[2] = 16777216;
					uParam1->f_21[0] = 131074;
					uParam1->f_21[1] = 196866;
					uParam1->f_21[2] = 33554432;
					uParam1->f_28 = { -3.1965f, 2.179f, 1.9013f };
					uParam1->f_31 = { 0f, 0f, 246.78f };
					__LIB_8__::func_413(&(uParam1->f_11));
					__LIB_9__::func_137(&(uParam1->f_11), 7);
					if (__LIB_8__::func_584(uParam1->f_26))
					{
						__LIB_9__::func_137(&(uParam1->f_11), 27);
					}
					break;
			}
			break;
		case 62:
			if (bParam3)
			{
				uParam1->f_44 = 1;
			}
			switch (uParam1->f_44)
			{
				case 1:
				case 2:
				case 3:
					uParam1->f_25 = 9;
					uParam1->f_26 = 124;
					uParam1->f_27 = 0;
					uParam1->f_17[0] = 65537;
					uParam1->f_17[1] = 66561;
					uParam1->f_17[2] = 50790400;
					uParam1->f_21[0] = 131073;
					uParam1->f_21[1] = 131328;
					uParam1->f_21[2] = 33554432;
					uParam1->f_28 = { -1.2309f, -2.2172f, 2.0213f };
					uParam1->f_31 = { 0f, 0f, 318.06f };
					__LIB_8__::func_413(&(uParam1->f_11));
					__LIB_9__::func_137(&(uParam1->f_11), 7);
					if (__LIB_8__::func_584(uParam1->f_26))
					{
						__LIB_9__::func_137(&(uParam1->f_11), 27);
					}
					break;
			}
			break;
		case 63:
			if (bParam3)
			{
				uParam1->f_44 = 1;
			}
			switch (uParam1->f_44)
			{
				case 1:
				case 2:
				case 3:
					uParam1->f_25 = 8;
					uParam1->f_26 = 162;
					uParam1->f_27 = 0;
					uParam1->f_17[0] = 65537;
					uParam1->f_17[1] = 65792;
					uParam1->f_17[2] = 16777216;
					uParam1->f_21[0] = 1;
					uParam1->f_21[1] = 393220;
					uParam1->f_21[2] = 67108864;
					uParam1->f_28 = { 17.5452f, 1.2258f, 0.994f };
					uParam1->f_31 = { 0f, 0f, 92.7f };
					__LIB_8__::func_413(&(uParam1->f_11));
					__LIB_9__::func_137(&(uParam1->f_11), 22);
					__LIB_9__::func_137(&(uParam1->f_11), 4);
					if (__LIB_8__::func_584(uParam1->f_26))
					{
						__LIB_9__::func_137(&(uParam1->f_11), 27);
					}
					break;
			}
			break;
		case 64:
			if (bParam3)
			{
				uParam1->f_44 = 1;
			}
			switch (uParam1->f_44)
			{
				case 1:
				case 2:
				case 3:
					uParam1->f_25 = 9;
					uParam1->f_26 = 25;
					uParam1->f_27 = 1;
					uParam1->f_17[0] = 0;
					uParam1->f_17[1] = 66561;
					uParam1->f_17[2] = 50331648;
					uParam1->f_21[0] = 0;
					uParam1->f_21[1] = 327683;
					uParam1->f_21[2] = 16777216;
					uParam1->f_28 = { 14.2312f, -19.9445f, 1.4493f };
					uParam1->f_31 = { 1.8f, 0f, 15.66f };
					__LIB_8__::func_413(&(uParam1->f_11));
					if (__LIB_8__::func_584(uParam1->f_26))
					{
						__LIB_9__::func_137(&(uParam1->f_11), 27);
					}
					break;
			}
			break;
		case 65:
			if (bParam3)
			{
				uParam1->f_44 = 1;
			}
			switch (uParam1->f_44)
			{
				case 1:
				case 2:
				case 3:
					uParam1->f_25 = 10;
					uParam1->f_26 = 26;
					uParam1->f_27 = 1;
					uParam1->f_17[0] = 65537;
					uParam1->f_17[1] = 131586;
					uParam1->f_17[2] = 33947648;
					uParam1->f_21[0] = 131073;
					uParam1->f_21[1] = 459266;
					uParam1->f_21[2] = 0;
					uParam1->f_28 = { 8.418f, -20.3775f, 1.5363f };
					uParam1->f_31 = { 0.5f, 0f, 34.38f };
					__LIB_8__::func_413(&(uParam1->f_11));
					if (__LIB_8__::func_584(uParam1->f_26))
					{
						__LIB_9__::func_137(&(uParam1->f_11), 27);
					}
					break;
			}
			break;
		case 66:
			if (bParam3)
			{
				uParam1->f_44 = 1;
			}
			switch (uParam1->f_44)
			{
				case 1:
				case 2:
				case 3:
					uParam1->f_25 = 9;
					uParam1->f_26 = 36;
					uParam1->f_27 = Global_262145.f_24755 /* Tunable: 1788315240 */;
					uParam1->f_17[0] = 131074;
					uParam1->f_17[1] = 50397954;
					uParam1->f_17[2] = 67633152;
					uParam1->f_21[0] = 131072;
					uParam1->f_21[1] = 655872;
					uParam1->f_21[2] = 33554432;
					uParam1->f_28 = { 24.3166f, -18.743f, 1.6493f };
					uParam1->f_31 = { 0f, 0f, 220.14f };
					__LIB_8__::func_413(&(uParam1->f_11));
					if (__LIB_8__::func_584(uParam1->f_26))
					{
						__LIB_9__::func_137(&(uParam1->f_11), 27);
					}
					if (Global_262145.f_24763 /* Tunable: -600583507 */)
					{
						__LIB_9__::func_137(&(uParam1->f_11), 0);
					}
					break;
			}
			break;
		case 67:
			if (bParam3)
			{
				uParam1->f_44 = 1;
			}
			switch (uParam1->f_44)
			{
				case 1:
				case 2:
				case 3:
					uParam1->f_25 = 10;
					uParam1->f_26 = 53;
					uParam1->f_27 = Global_262145.f_24755 /* Tunable: 1788315240 */;
					uParam1->f_17[0] = 131074;
					uParam1->f_17[1] = 66050;
					uParam1->f_17[2] = 34209792;
					uParam1->f_21[0] = 1;
					uParam1->f_21[1] = 458752;
					uParam1->f_21[2] = 16777216;
					uParam1->f_28 = { 25.4935f, -18.5614f, 1.6263f };
					uParam1->f_31 = { 0f, 0f, 163.26f };
					__LIB_8__::func_413(&(uParam1->f_11));
					if (__LIB_8__::func_584(uParam1->f_26))
					{
						__LIB_9__::func_137(&(uParam1->f_11), 27);
					}
					if (Global_262145.f_24763 /* Tunable: -600583507 */)
					{
						__LIB_9__::func_137(&(uParam1->f_11), 0);
					}
					break;
			}
			break;
		case 68:
			if (bParam3)
			{
				uParam1->f_44 = 1;
			}
			switch (uParam1->f_44)
			{
				case 1:
				case 2:
				case 3:
					uParam1->f_25 = 10;
					uParam1->f_26 = 163;
					uParam1->f_27 = 0;
					uParam1->f_17[0] = 0;
					uParam1->f_17[1] = 33554432;
					uParam1->f_17[2] = 0;
					uParam1->f_21[0] = 0;
					uParam1->f_21[1] = 1;
					uParam1->f_21[2] = 0;
					uParam1->f_28 = { 17.5452f, 1.2258f, 0.994f };
					uParam1->f_31 = { 0f, 0f, 92.7f };
					__LIB_8__::func_413(&(uParam1->f_11));
					__LIB_9__::func_137(&(uParam1->f_11), 22);
					__LIB_9__::func_137(&(uParam1->f_11), 4);
					if (__LIB_8__::func_584(uParam1->f_26))
					{
						__LIB_9__::func_137(&(uParam1->f_11), 27);
					}
					break;
			}
			break;
		case 69:
			if (bParam3)
			{
				uParam1->f_44 = 1;
			}
			switch (uParam1->f_44)
			{
				case 1:
				case 2:
				case 3:
					uParam1->f_25 = 10;
					uParam1->f_26 = 26;
					uParam1->f_27 = 3;
					uParam1->f_17[0] = 65537;
					uParam1->f_17[1] = 196608;
					uParam1->f_17[2] = 50790400;
					uParam1->f_21[0] = 131073;
					uParam1->f_21[1] = 196867;
					uParam1->f_21[2] = 33554432;
					uParam1->f_28 = { 45.0042f, -25.2215f, 1.2073f };
					uParam1->f_31 = { 9f, 0f, 330.3f };
					__LIB_8__::func_413(&(uParam1->f_11));
					if (__LIB_8__::func_584(uParam1->f_26))
					{
						__LIB_9__::func_137(&(uParam1->f_11), 27);
					}
					break;
			}
			break;
		case 70:
			if (bParam3)
			{
				uParam1->f_44 = 1;
			}
			switch (uParam1->f_44)
			{
				case 1:
				case 2:
				case 3:
					uParam1->f_25 = 8;
					uParam1->f_26 = 164;
					uParam1->f_27 = 0;
					uParam1->f_17[0] = 0;
					uParam1->f_17[1] = 131328;
					uParam1->f_17[2] = 16777216;
					uParam1->f_21[0] = 131074;
					uParam1->f_21[1] = 262401;
					uParam1->f_21[2] = 50331648;
					uParam1->f_28 = { 17.5452f, 1.2258f, 0.994f };
					uParam1->f_31 = { 0f, 0f, 92.7f };
					__LIB_8__::func_413(&(uParam1->f_11));
					__LIB_9__::func_137(&(uParam1->f_11), 12);
					__LIB_9__::func_137(&(uParam1->f_11), 22);
					__LIB_9__::func_137(&(uParam1->f_11), 4);
					if (__LIB_8__::func_584(uParam1->f_26))
					{
						__LIB_9__::func_137(&(uParam1->f_11), 27);
					}
					break;
			}
			break;
		case 71:
			if (bParam3)
			{
				uParam1->f_44 = 1;
			}
			switch (uParam1->f_44)
			{
				case 1:
				case 2:
				case 3:
					uParam1->f_25 = 10;
					uParam1->f_26 = 28;
					uParam1->f_27 = 1;
					uParam1->f_17[0] = 131074;
					uParam1->f_17[1] = 16777473;
					uParam1->f_17[2] = 17367040;
					uParam1->f_21[0] = 65538;
					uParam1->f_21[1] = 131334;
					uParam1->f_21[2] = 0;
					uParam1->f_28 = { 33.5988f, -20.7518f, 1.2993f };
					uParam1->f_31 = { 7f, 0f, 341.1f };
					__LIB_8__::func_413(&(uParam1->f_11));
					if (__LIB_8__::func_584(uParam1->f_26))
					{
						__LIB_9__::func_137(&(uParam1->f_11), 27);
					}
					break;
			}
			break;
		case 72:
			if (bParam3)
			{
				uParam1->f_44 = 1;
			}
			switch (uParam1->f_44)
			{
				case 1:
				case 2:
				case 3:
					uParam1->f_25 = 10;
					uParam1->f_26 = 165;
					uParam1->f_27 = 0;
					uParam1->f_17[0] = 0;
					uParam1->f_17[1] = 16908545;
					uParam1->f_17[2] = 16842752;
					uParam1->f_21[0] = 131074;
					uParam1->f_21[1] = 328197;
					uParam1->f_21[2] = 16777216;
					uParam1->f_28 = { 17.5452f, 1.2258f, 0.994f };
					uParam1->f_31 = { 0f, 0f, 92.7f };
					__LIB_8__::func_413(&(uParam1->f_11));
					__LIB_9__::func_137(&(uParam1->f_11), 13);
					__LIB_9__::func_137(&(uParam1->f_11), 22);
					if (__LIB_8__::func_584(uParam1->f_26))
					{
						__LIB_9__::func_137(&(uParam1->f_11), 27);
					}
					break;
			}
			break;
		case 73:
			if (bParam3)
			{
				uParam1->f_44 = 1;
			}
			switch (uParam1->f_44)
			{
				case 1:
				case 2:
				case 3:
					uParam1->f_25 = 33;
					__LIB_8__::func_413(&(uParam1->f_11));
					if (__LIB_11__::func_254(PLAYER::PLAYER_ID()))
					{
						if (__LIB_9__::func_233(__LIB_11__::func_608(), 0))
						{
							uParam1->f_26 = 157;
							uParam1->f_28 = { 20.6096f, 11.509f, 0.994f };
							uParam1->f_31 = { 0f, 0f, 92.7f };
							__LIB_9__::func_137(&(uParam1->f_11), 12);
						}
						else
						{
							uParam1->f_26 = 156;
							uParam1->f_28 = { 20.6096f, 11.509f, 0.994f };
							uParam1->f_31 = { 0f, 0f, 92.7f };
						}
					}
					else
					{
						uParam1->f_26 = 157;
						uParam1->f_28 = { 20.6096f, 11.509f, 0.994f };
						uParam1->f_31 = { 0f, 0f, 92.7f };
						__LIB_9__::func_137(&(uParam1->f_11), 12);
					}
					uParam1->f_27 = 0;
					uParam1->f_17[0] = 0;
					uParam1->f_17[1] = 0;
					uParam1->f_17[2] = 0;
					uParam1->f_21[0] = 0;
					uParam1->f_21[1] = 0;
					uParam1->f_21[2] = 0;
					if (__LIB_11__::func_254(PLAYER::PLAYER_ID()))
					{
						__LIB_9__::func_137(&(uParam1->f_11), 7);
					}
					__LIB_9__::func_137(&(uParam1->f_11), 22);
					__LIB_9__::func_137(&(uParam1->f_11), 4);
					if (__LIB_8__::func_584(uParam1->f_26))
					{
						__LIB_9__::func_137(&(uParam1->f_11), 27);
					}
					break;
			}
			break;
		case 74:
			if (bParam3)
			{
				uParam1->f_44 = 1;
			}
			switch (uParam1->f_44)
			{
				case 1:
				case 2:
				case 3:
					uParam1->f_25 = 8;
					uParam1->f_26 = 52;
					uParam1->f_27 = 0;
					uParam1->f_17[0] = 0;
					uParam1->f_17[1] = 66048;
					uParam1->f_17[2] = 33554432;
					uParam1->f_21[0] = 65537;
					uParam1->f_21[1] = 197129;
					uParam1->f_21[2] = 16777216;
					uParam1->f_28 = { 25.2425f, -21.076f, 1.4493f };
					uParam1->f_31 = { 0f, 0f, 17.82f };
					__LIB_8__::func_413(&(uParam1->f_11));
					if (__LIB_8__::func_584(uParam1->f_26))
					{
						__LIB_9__::func_137(&(uParam1->f_11), 27);
					}
					break;
			}
			break;
		case 75:
			if (bParam3)
			{
				uParam1->f_44 = 1;
			}
			switch (uParam1->f_44)
			{
				case 1:
				case 2:
				case 3:
					uParam1->f_25 = 10;
					uParam1->f_26 = 61;
					uParam1->f_27 = 3;
					uParam1->f_17[0] = 131074;
					uParam1->f_17[1] = 197122;
					uParam1->f_17[2] = 34275328;
					uParam1->f_21[0] = 65538;
					uParam1->f_21[1] = 524288;
					uParam1->f_21[2] = 33554432;
					uParam1->f_28 = { 30.3331f, 14.9337f, 1.9013f };
					uParam1->f_31 = { 0f, 0f, 138.06f };
					__LIB_8__::func_413(&(uParam1->f_11));
					if (__LIB_8__::func_584(uParam1->f_26))
					{
						__LIB_9__::func_137(&(uParam1->f_11), 27);
					}
					break;
			}
			break;
		case 76:
			if (bParam3)
			{
				uParam1->f_44 = 1;
			}
			switch (uParam1->f_44)
			{
				case 1:
				case 2:
				case 3:
					uParam1->f_25 = 8;
					uParam1->f_26 = 4;
					uParam1->f_27 = 1;
					uParam1->f_17[0] = 131074;
					uParam1->f_17[1] = 65793;
					uParam1->f_17[2] = 16777216;
					uParam1->f_21[0] = 65538;
					uParam1->f_21[1] = 721418;
					uParam1->f_21[2] = 33554432;
					uParam1->f_28 = { 29.5626f, 14.2209f, 1.9013f };
					uParam1->f_31 = { 0f, 0f, 259.02f };
					__LIB_8__::func_413(&(uParam1->f_11));
					if (__LIB_8__::func_584(uParam1->f_26))
					{
						__LIB_9__::func_137(&(uParam1->f_11), 27);
					}
					break;
			}
			break;
		case 77:
			if (bParam3)
			{
				uParam1->f_44 = 1;
			}
			switch (uParam1->f_44)
			{
				case 1:
				case 2:
				case 3:
					uParam1->f_25 = 10;
					uParam1->f_26 = 45;
					uParam1->f_27 = 1;
					uParam1->f_17[0] = 0;
					uParam1->f_17[1] = 33751040;
					uParam1->f_17[2] = 65536;
					uParam1->f_21[0] = 0;
					uParam1->f_21[1] = 0;
					uParam1->f_21[2] = 16777216;
					uParam1->f_28 = { 30.3712f, 13.494f, 1.9013f };
					uParam1->f_31 = { 0f, 0f, 19.26f };
					__LIB_8__::func_413(&(uParam1->f_11));
					if (__LIB_8__::func_584(uParam1->f_26))
					{
						__LIB_9__::func_137(&(uParam1->f_11), 27);
					}
					break;
			}
			break;
		case 78:
			if (bParam3)
			{
				uParam1->f_44 = 1;
			}
			switch (uParam1->f_44)
			{
				case 1:
				case 2:
				case 3:
					uParam1->f_25 = 10;
					uParam1->f_26 = 63;
					uParam1->f_27 = 1;
					uParam1->f_17[0] = 65537;
					uParam1->f_17[1] = 66050;
					uParam1->f_17[2] = 33882112;
					uParam1->f_21[0] = 0;
					uParam1->f_21[1] = 514;
					uParam1->f_21[2] = 0;
					uParam1->f_28 = { 39.3015f, 8.5083f, 1.9013f };
					uParam1->f_31 = { 0f, 0f, 151.14f };
					__LIB_8__::func_413(&(uParam1->f_11));
					if (__LIB_8__::func_584(uParam1->f_26))
					{
						__LIB_9__::func_137(&(uParam1->f_11), 27);
					}
					break;
			}
			break;
		case 79:
			if (bParam3)
			{
				uParam1->f_44 = 1;
			}
			switch (uParam1->f_44)
			{
				case 1:
				case 2:
				case 3:
					uParam1->f_25 = 8;
					uParam1->f_26 = 0;
					uParam1->f_27 = 3;
					uParam1->f_17[0] = 0;
					uParam1->f_17[1] = 65537;
					uParam1->f_17[2] = 0;
					uParam1->f_21[0] = 0;
					uParam1->f_21[1] = 13;
					uParam1->f_21[2] = 33554432;
					uParam1->f_28 = { 34.4884f, 15.0417f, 1.9013f };
					uParam1->f_31 = { 0f, 0f, 279.9f };
					__LIB_8__::func_413(&(uParam1->f_11));
					if (__LIB_8__::func_584(uParam1->f_26))
					{
						__LIB_9__::func_137(&(uParam1->f_11), 27);
					}
					break;
			}
			break;
		case 80:
			if (bParam3)
			{
				uParam1->f_44 = 1;
			}
			switch (uParam1->f_44)
			{
				case 1:
				case 2:
				case 3:
					uParam1->f_25 = 10;
					uParam1->f_26 = 50;
					uParam1->f_27 = 0;
					uParam1->f_17[0] = 0;
					uParam1->f_17[1] = 33619968;
					uParam1->f_17[2] = 196608;
					uParam1->f_21[0] = 65537;
					uParam1->f_21[1] = 196610;
					uParam1->f_21[2] = 33554432;
					uParam1->f_28 = { 33.8119f, 7.3802f, 1.4743f };
					uParam1->f_31 = { 0f, 0f, 237.42f };
					__LIB_8__::func_413(&(uParam1->f_11));
					if (__LIB_8__::func_584(uParam1->f_26))
					{
						__LIB_9__::func_137(&(uParam1->f_11), 27);
					}
					break;
			}
			break;
		case 81:
			if (bParam3)
			{
				uParam1->f_44 = 1;
			}
			switch (uParam1->f_44)
			{
				case 1:
				case 2:
				case 3:
					uParam1->f_25 = 9;
					uParam1->f_26 = 64;
					uParam1->f_27 = 0;
					uParam1->f_17[0] = 0;
					uParam1->f_17[1] = 33620482;
					uParam1->f_17[2] = 17170432;
					uParam1->f_21[0] = 131074;
					uParam1->f_21[1] = 590087;
					uParam1->f_21[2] = 0;
					uParam1->f_28 = { 36.627f, 5.785f, 1.4343f };
					uParam1->f_31 = { 0f, 0f, 73.98f };
					__LIB_8__::func_413(&(uParam1->f_11));
					if (__LIB_8__::func_584(uParam1->f_26))
					{
						__LIB_9__::func_137(&(uParam1->f_11), 27);
					}
					break;
			}
			break;
		case 82:
			if (bParam3)
			{
				uParam1->f_44 = 1;
			}
			switch (uParam1->f_44)
			{
				case 1:
				case 2:
				case 3:
					uParam1->f_25 = 10;
					uParam1->f_26 = 65;
					uParam1->f_27 = 3;
					uParam1->f_17[0] = 131074;
					uParam1->f_17[1] = 65536;
					uParam1->f_17[2] = 655360;
					uParam1->f_21[0] = 131072;
					uParam1->f_21[1] = 393735;
					uParam1->f_21[2] = 16777216;
					uParam1->f_28 = { 33.881f, 6.0612f, 1.4143f };
					uParam1->f_31 = { 0f, 0f, 284.22f };
					__LIB_8__::func_413(&(uParam1->f_11));
					if (__LIB_8__::func_584(uParam1->f_26))
					{
						__LIB_9__::func_137(&(uParam1->f_11), 27);
					}
					break;
			}
			break;
		case 83:
			if (bParam3)
			{
				uParam1->f_44 = 1;
			}
			switch (uParam1->f_44)
			{
				case 1:
				case 2:
				case 3:
					uParam1->f_25 = 8;
					uParam1->f_26 = 49;
					uParam1->f_27 = 1;
					uParam1->f_17[0] = 65537;
					uParam1->f_17[1] = 256;
					uParam1->f_17[2] = 16777216;
					uParam1->f_21[0] = 1;
					uParam1->f_21[1] = 65539;
					uParam1->f_21[2] = 16777216;
					uParam1->f_28 = { 20.267f, 9.2594f, 1.4763f };
					uParam1->f_31 = { 0f, 0f, 73.98f };
					__LIB_8__::func_413(&(uParam1->f_11));
					if (__LIB_8__::func_584(uParam1->f_26))
					{
						__LIB_9__::func_137(&(uParam1->f_11), 27);
					}
					break;
			}
			break;
		case 84:
			if (bParam3)
			{
				uParam1->f_44 = 1;
			}
			switch (uParam1->f_44)
			{
				case 1:
				case 2:
				case 3:
					uParam1->f_25 = 10;
					uParam1->f_26 = 58;
					uParam1->f_27 = 1;
					uParam1->f_17[0] = 65537;
					uParam1->f_17[1] = 16908545;
					uParam1->f_17[2] = 17563648;
					uParam1->f_21[0] = 65538;
					uParam1->f_21[1] = 524290;
					uParam1->f_21[2] = 33554432;
					uParam1->f_28 = { 19.1807f, 10.133f, 1.4013f };
					uParam1->f_31 = { 0f, 0f, 228.06f };
					__LIB_8__::func_413(&(uParam1->f_11));
					if (__LIB_8__::func_584(uParam1->f_26))
					{
						__LIB_9__::func_137(&(uParam1->f_11), 27);
					}
					break;
			}
			break;
		case 85:
			if (bParam3)
			{
				uParam1->f_44 = 1;
			}
			switch (uParam1->f_44)
			{
				case 1:
				case 2:
				case 3:
					uParam1->f_25 = 8;
					uParam1->f_26 = 52;
					uParam1->f_27 = Global_262145.f_24758 /* Tunable: 2089855578 */;
					uParam1->f_17[0] = 65537;
					uParam1->f_17[1] = 131073;
					uParam1->f_17[2] = 0;
					uParam1->f_21[0] = 2;
					uParam1->f_21[1] = 524550;
					uParam1->f_21[2] = 67108864;
					uParam1->f_28 = { 27.2242f, -3.2876f, 1.9013f };
					uParam1->f_31 = { 0f, 0f, 47.34f };
					__LIB_8__::func_413(&(uParam1->f_11));
					if (__LIB_8__::func_584(uParam1->f_26))
					{
						__LIB_9__::func_137(&(uParam1->f_11), 27);
					}
					if (Global_262145.f_24766 /* Tunable: -993451048 */)
					{
						__LIB_9__::func_137(&(uParam1->f_11), 0);
					}
					break;
			}
			break;
		case 86:
			if (bParam3)
			{
				uParam1->f_44 = 1;
			}
			switch (uParam1->f_44)
			{
				case 1:
				case 2:
				case 3:
					uParam1->f_25 = 10;
					uParam1->f_26 = 53;
					uParam1->f_27 = Global_262145.f_24756 /* Tunable: 1509025053 */;
					uParam1->f_17[0] = 65537;
					uParam1->f_17[1] = 16974081;
					uParam1->f_17[2] = 17563648;
					uParam1->f_21[0] = 65538;
					uParam1->f_21[1] = 262144;
					uParam1->f_21[2] = 16777216;
					uParam1->f_28 = { 26.1092f, -3.6628f, 1.9013f };
					uParam1->f_31 = { 0f, 0f, 350.46f };
					__LIB_8__::func_413(&(uParam1->f_11));
					if (__LIB_8__::func_584(uParam1->f_26))
					{
						__LIB_9__::func_137(&(uParam1->f_11), 27);
					}
					if (Global_262145.f_24764 /* Tunable: 626451698 */)
					{
						__LIB_9__::func_137(&(uParam1->f_11), 0);
					}
					break;
			}
			break;
		case 87:
			if (bParam3)
			{
				uParam1->f_44 = 1;
			}
			switch (uParam1->f_44)
			{
				case 1:
				case 2:
				case 3:
					uParam1->f_25 = 10;
					uParam1->f_26 = 96;
					uParam1->f_27 = Global_262145.f_24758 /* Tunable: 2089855578 */;
					uParam1->f_17[0] = 65537;
					uParam1->f_17[1] = 16908545;
					uParam1->f_17[2] = 17170432;
					uParam1->f_21[0] = 131073;
					uParam1->f_21[1] = 393217;
					uParam1->f_21[2] = 0;
					uParam1->f_28 = { 26.3888f, -2.4501f, 1.9013f };
					uParam1->f_31 = { 0f, 0f, 193.5f };
					__LIB_8__::func_413(&(uParam1->f_11));
					if (__LIB_8__::func_584(uParam1->f_26))
					{
						__LIB_9__::func_137(&(uParam1->f_11), 27);
					}
					if (Global_262145.f_24766 /* Tunable: -993451048 */)
					{
						__LIB_9__::func_137(&(uParam1->f_11), 0);
					}
					break;
			}
			break;
		case 88:
			if (bParam3)
			{
				uParam1->f_44 = 1;
			}
			switch (uParam1->f_44)
			{
				case 1:
				case 2:
				case 3:
					uParam1->f_25 = 10;
					uParam1->f_26 = 96;
					uParam1->f_27 = 0;
					uParam1->f_17[0] = 0;
					uParam1->f_17[1] = 33685504;
					uParam1->f_17[2] = 196608;
					uParam1->f_21[0] = 65537;
					uParam1->f_21[1] = 327680;
					uParam1->f_21[2] = 33554432;
					uParam1->f_28 = { 22.0111f, -7.357f, 1.9013f };
					uParam1->f_31 = { 0f, 0f, 317.6989f };
					__LIB_8__::func_413(&(uParam1->f_11));
					if (__LIB_8__::func_584(uParam1->f_26))
					{
						__LIB_9__::func_137(&(uParam1->f_11), 27);
					}
					break;
			}
			break;
		case 89:
			if (bParam3)
			{
				uParam1->f_44 = 1;
			}
			switch (uParam1->f_44)
			{
				case 1:
				case 2:
				case 3:
					uParam1->f_25 = 8;
					uParam1->f_26 = 127;
					uParam1->f_27 = 0;
					uParam1->f_17[0] = 131074;
					uParam1->f_17[1] = 131584;
					uParam1->f_17[2] = 33554432;
					uParam1->f_21[0] = 1;
					uParam1->f_21[1] = 655366;
					uParam1->f_21[2] = 0;
					uParam1->f_28 = { 23.2273f, -6.9512f, 1.9013f };
					uParam1->f_31 = { 0f, 0f, 95.697f };
					__LIB_8__::func_413(&(uParam1->f_11));
					if (__LIB_8__::func_584(uParam1->f_26))
					{
						__LIB_9__::func_137(&(uParam1->f_11), 27);
					}
					break;
			}
			break;
		case 90:
			if (bParam3)
			{
				uParam1->f_44 = 1;
			}
			switch (uParam1->f_44)
			{
				case 1:
				case 2:
				case 3:
					uParam1->f_25 = 9;
					uParam1->f_26 = 79;
					uParam1->f_27 = Global_262145.f_24756 /* Tunable: 1509025053 */;
					uParam1->f_17[0] = 0;
					uParam1->f_17[1] = 131842;
					uParam1->f_17[2] = 67305472;
					uParam1->f_21[0] = 65537;
					uParam1->f_21[1] = 65799;
					uParam1->f_21[2] = 33554432;
					uParam1->f_28 = { 18f, 3.7505f, 1.9013f };
					uParam1->f_31 = { 0f, 0f, 280.62f };
					__LIB_8__::func_413(&(uParam1->f_11));
					if (__LIB_8__::func_584(uParam1->f_26))
					{
						__LIB_9__::func_137(&(uParam1->f_11), 27);
					}
					if (Global_262145.f_24764 /* Tunable: 626451698 */)
					{
						__LIB_9__::func_137(&(uParam1->f_11), 0);
					}
					break;
			}
			break;
		case 91:
			if (bParam3)
			{
				uParam1->f_44 = 1;
			}
			switch (uParam1->f_44)
			{
				case 1:
				case 2:
				case 3:
					uParam1->f_25 = 10;
					uParam1->f_26 = 104;
					uParam1->f_27 = 0;
					uParam1->f_17[0] = 65537;
					uParam1->f_17[1] = 196608;
					uParam1->f_17[2] = 50462720;
					uParam1->f_21[0] = 131073;
					uParam1->f_21[1] = 327939;
					uParam1->f_21[2] = 0;
					uParam1->f_28 = { 15.1932f, 5.7196f, 0.8913f };
					uParam1->f_31 = { 0f, 0f, 92.7f };
					__LIB_8__::func_413(&(uParam1->f_11));
					__LIB_9__::func_137(&(uParam1->f_11), 12);
					if (__LIB_8__::func_584(uParam1->f_26))
					{
						__LIB_9__::func_137(&(uParam1->f_11), 27);
					}
					break;
			}
			break;
		case 92:
			if (bParam3)
			{
				uParam1->f_44 = 1;
			}
			switch (uParam1->f_44)
			{
				case 1:
				case 2:
				case 3:
					uParam1->f_25 = 10;
					uParam1->f_26 = 105;
					uParam1->f_27 = 0;
					uParam1->f_17[0] = 65537;
					uParam1->f_17[1] = 33619968;
					uParam1->f_17[2] = 50659328;
					uParam1->f_21[0] = 0;
					uParam1->f_21[1] = 65797;
					uParam1->f_21[2] = 16777216;
					uParam1->f_28 = { 15.1932f, 5.7196f, 0.8913f };
					uParam1->f_31 = { 0f, 0f, 92.7f };
					__LIB_8__::func_413(&(uParam1->f_11));
					__LIB_9__::func_137(&(uParam1->f_11), 13);
					if (__LIB_8__::func_584(uParam1->f_26))
					{
						__LIB_9__::func_137(&(uParam1->f_11), 27);
					}
					break;
			}
			break;
		case 93:
			if (bParam3)
			{
				uParam1->f_44 = 1;
			}
			switch (uParam1->f_44)
			{
				case 1:
				case 2:
				case 3:
					uParam1->f_25 = 10;
					uParam1->f_26 = 126;
					uParam1->f_27 = Global_262145.f_24756 /* Tunable: 1509025053 */;
					uParam1->f_17[0] = 131074;
					uParam1->f_17[1] = 16908545;
					uParam1->f_17[2] = 17301504;
					uParam1->f_21[0] = 65538;
					uParam1->f_21[1] = 65799;
					uParam1->f_21[2] = 33554432;
					uParam1->f_28 = { 18.0366f, -5.2548f, 1.9013f };
					uParam1->f_31 = { 0f, 0f, 179.1f };
					__LIB_8__::func_413(&(uParam1->f_11));
					if (__LIB_8__::func_584(uParam1->f_26))
					{
						__LIB_9__::func_137(&(uParam1->f_11), 27);
					}
					if (Global_262145.f_24764 /* Tunable: 626451698 */)
					{
						__LIB_9__::func_137(&(uParam1->f_11), 0);
					}
					break;
			}
			break;
		case 94:
			if (bParam3)
			{
				uParam1->f_44 = 1;
			}
			switch (uParam1->f_44)
			{
				case 1:
				case 2:
				case 3:
					uParam1->f_25 = 10;
					uParam1->f_26 = 87;
					uParam1->f_27 = 0;
					uParam1->f_17[0] = 131074;
					uParam1->f_17[1] = 196608;
					uParam1->f_17[2] = 589824;
					uParam1->f_21[0] = 131072;
					uParam1->f_21[1] = 459271;
					uParam1->f_21[2] = 0;
					uParam1->f_28 = { 17.247f, -6.1939f, 1.9013f };
					uParam1->f_31 = { 0f, 0f, 261.9f };
					__LIB_8__::func_413(&(uParam1->f_11));
					if (__LIB_8__::func_584(uParam1->f_26))
					{
						__LIB_9__::func_137(&(uParam1->f_11), 27);
					}
					break;
			}
			break;
		case 95:
			if (bParam3)
			{
				uParam1->f_44 = 1;
			}
			switch (uParam1->f_44)
			{
				case 1:
				case 2:
				case 3:
					uParam1->f_25 = 10;
					__LIB_8__::func_413(&(uParam1->f_11));
					if (__LIB_11__::func_254(PLAYER::PLAYER_ID()))
					{
						if (__LIB_9__::func_233(__LIB_11__::func_608(), 0))
						{
							uParam1->f_26 = 158;
							uParam1->f_28 = { 20.6096f, 11.509f, 0.994f };
							uParam1->f_31 = { 0f, 0f, 92.7f };
							__LIB_9__::func_137(&(uParam1->f_11), 13);
						}
						else
						{
							uParam1->f_28 = { 20.6096f, 11.509f, 0.994f };
							uParam1->f_31 = { 0f, 0f, 92.7f };
							__LIB_9__::func_137(&(uParam1->f_11), 0);
						}
					}
					else
					{
						uParam1->f_26 = 158;
						uParam1->f_28 = { 20.6096f, 11.509f, 0.994f };
						uParam1->f_31 = { 0f, 0f, 92.7f };
						__LIB_9__::func_137(&(uParam1->f_11), 13);
					}
					uParam1->f_27 = 0;
					uParam1->f_17[0] = 131074;
					uParam1->f_17[1] = 33554432;
					uParam1->f_17[2] = 50790400;
					uParam1->f_21[0] = 1;
					uParam1->f_21[1] = 131592;
					uParam1->f_21[2] = 33554432;
					if (__LIB_11__::func_254(PLAYER::PLAYER_ID()))
					{
						__LIB_9__::func_137(&(uParam1->f_11), 7);
					}
					__LIB_9__::func_137(&(uParam1->f_11), 22);
					if (__LIB_8__::func_584(uParam1->f_26))
					{
						__LIB_9__::func_137(&(uParam1->f_11), 27);
					}
					break;
			}
			break;
		case 96:
			if (bParam3)
			{
				uParam1->f_44 = 1;
			}
			switch (uParam1->f_44)
			{
				case 1:
				case 2:
				case 3:
					uParam1->f_25 = 10;
					uParam1->f_26 = 125;
					uParam1->f_27 = 0;
					uParam1->f_17[0] = 131074;
					uParam1->f_17[1] = 33685504;
					uParam1->f_17[2] = 196608;
					uParam1->f_21[0] = 131072;
					uParam1->f_21[1] = 131592;
					uParam1->f_21[2] = 33554432;
					uParam1->f_28 = { 13.3563f, -4.0257f, 1.9013f };
					uParam1->f_31 = { 0f, 0f, 66.695f };
					__LIB_8__::func_413(&(uParam1->f_11));
					if (__LIB_8__::func_584(uParam1->f_26))
					{
						__LIB_9__::func_137(&(uParam1->f_11), 27);
					}
					break;
			}
			break;
		case 97:
			if (bParam3)
			{
				uParam1->f_44 = 1;
			}
			switch (uParam1->f_44)
			{
				case 1:
				case 2:
				case 3:
					uParam1->f_25 = 10;
					uParam1->f_26 = 96;
					uParam1->f_27 = 0;
					uParam1->f_17[0] = 0;
					uParam1->f_17[1] = 16908545;
					uParam1->f_17[2] = 17039360;
					uParam1->f_21[0] = 65537;
					uParam1->f_21[1] = 262660;
					uParam1->f_21[2] = 0;
					uParam1->f_28 = { 12.9856f, -5.0585f, 1.9013f };
					uParam1->f_31 = { 0f, 0f, 61.74f };
					__LIB_8__::func_413(&(uParam1->f_11));
					if (__LIB_8__::func_584(uParam1->f_26))
					{
						__LIB_9__::func_137(&(uParam1->f_11), 27);
					}
					break;
			}
			break;
		case 98:
			if (bParam3)
			{
				uParam1->f_44 = 1;
			}
			switch (uParam1->f_44)
			{
				case 1:
				case 2:
				case 3:
					uParam1->f_25 = 8;
					uParam1->f_26 = 81;
					uParam1->f_27 = 0;
					uParam1->f_17[0] = 0;
					uParam1->f_17[1] = 131073;
					uParam1->f_17[2] = 0;
					uParam1->f_21[0] = 0;
					uParam1->f_21[1] = 4;
					uParam1->f_21[2] = 83886080;
					uParam1->f_28 = { 18.3397f, 4.7676f, 1.9013f };
					uParam1->f_31 = { 0f, 0f, 189.9f };
					__LIB_8__::func_413(&(uParam1->f_11));
					if (__LIB_8__::func_584(uParam1->f_26))
					{
						__LIB_9__::func_137(&(uParam1->f_11), 27);
					}
					break;
			}
			break;
		case 99:
			if (bParam3)
			{
				uParam1->f_44 = 1;
			}
			switch (uParam1->f_44)
			{
				case 1:
				case 2:
				case 3:
					uParam1->f_25 = 10;
					uParam1->f_26 = 97;
					uParam1->f_27 = 0;
					uParam1->f_17[0] = 0;
					uParam1->f_17[1] = 16908545;
					uParam1->f_17[2] = 17563648;
					uParam1->f_21[0] = 131074;
					uParam1->f_21[1] = 197123;
					uParam1->f_21[2] = 0;
					uParam1->f_28 = { 19.7324f, 1.3456f, 1.9013f };
					uParam1->f_31 = { 0f, 0f, 211.5f };
					__LIB_8__::func_413(&(uParam1->f_11));
					if (__LIB_8__::func_584(uParam1->f_26))
					{
						__LIB_9__::func_137(&(uParam1->f_11), 27);
					}
					break;
			}
			break;
		case 100:
			if (bParam3)
			{
				uParam1->f_44 = 1;
			}
			switch (uParam1->f_44)
			{
				case 1:
				case 2:
				case 3:
					uParam1->f_25 = 8;
					uParam1->f_26 = 129;
					uParam1->f_27 = 0;
					uParam1->f_17[0] = 131074;
					uParam1->f_17[1] = 131073;
					uParam1->f_17[2] = 0;
					uParam1->f_21[0] = 131072;
					uParam1->f_21[1] = 918017;
					uParam1->f_21[2] = 16777216;
					uParam1->f_28 = { 20.326f, 0.285f, 1.9013f };
					uParam1->f_31 = { 0f, 0f, 47.34f };
					__LIB_8__::func_413(&(uParam1->f_11));
					if (__LIB_8__::func_584(uParam1->f_26))
					{
						__LIB_9__::func_137(&(uParam1->f_11), 27);
					}
					break;
			}
			break;
		case 101:
			if (bParam3)
			{
				uParam1->f_44 = 1;
			}
			switch (uParam1->f_44)
			{
				case 1:
				case 2:
				case 3:
					uParam1->f_25 = 10;
					uParam1->f_26 = 130;
					uParam1->f_27 = 0;
					uParam1->f_17[0] = 131074;
					uParam1->f_17[1] = 16908545;
					uParam1->f_17[2] = 17301504;
					uParam1->f_21[0] = 1;
					uParam1->f_21[1] = 264;
					uParam1->f_21[2] = 0;
					uParam1->f_28 = { 15.4206f, 0.5556f, 1.9013f };
					uParam1->f_31 = { 0f, 0f, 229.5f };
					__LIB_8__::func_413(&(uParam1->f_11));
					if (__LIB_8__::func_584(uParam1->f_26))
					{
						__LIB_9__::func_137(&(uParam1->f_11), 27);
					}
					break;
			}
			break;
		case 102:
			if (bParam3)
			{
				uParam1->f_44 = 1;
			}
			switch (uParam1->f_44)
			{
				case 1:
				case 2:
				case 3:
					uParam1->f_25 = 10;
					uParam1->f_26 = 81;
					uParam1->f_27 = Global_262145.f_24758 /* Tunable: 2089855578 */;
					uParam1->f_17[0] = 0;
					uParam1->f_17[1] = 33685504;
					uParam1->f_17[2] = 51052544;
					uParam1->f_21[0] = 0;
					uParam1->f_21[1] = 262145;
					uParam1->f_21[2] = 16777216;
					uParam1->f_28 = { 24.4953f, 3.8183f, 1.9013f };
					uParam1->f_31 = { 0f, 0f, 189.9f };
					__LIB_8__::func_413(&(uParam1->f_11));
					if (__LIB_8__::func_584(uParam1->f_26))
					{
						__LIB_9__::func_137(&(uParam1->f_11), 27);
					}
					if (Global_262145.f_24766 /* Tunable: -993451048 */)
					{
						__LIB_9__::func_137(&(uParam1->f_11), 0);
					}
					break;
			}
			break;
		case 103:
			if (bParam3)
			{
				uParam1->f_44 = 1;
			}
			switch (uParam1->f_44)
			{
				case 1:
				case 2:
				case 3:
					uParam1->f_25 = 34;
					__LIB_8__::func_413(&(uParam1->f_11));
					if (__LIB_11__::func_254(PLAYER::PLAYER_ID()))
					{
						if (__LIB_9__::func_233(__LIB_11__::func_608(), 0))
						{
							switch (uParam0->f_798)
							{
								case 0:
									uParam1->f_26 = 160;
									uParam1->f_28 = { 17.5452f, 1.2258f, 0.994f };
									uParam1->f_31 = { 0f, 0f, 92.7f };
									break;
								case 1:
									uParam1->f_26 = 161;
									uParam1->f_28 = { 6.7193f, -36.6094f, -0.8453f };
									uParam1->f_31 = { 0f, 0f, 92.7f };
									break;
							}
						}
						else
						{
							uParam1->f_26 = 159;
							uParam1->f_28 = { 17.5452f, 1.2258f, 0.994f };
							uParam1->f_31 = { 0f, 0f, 92.7f };
						}
					}
					else
					{
						switch (uParam0->f_798.f_1)
						{
							case 0:
								uParam1->f_26 = 159;
								uParam1->f_28 = { 17.5452f, 1.2258f, 0.994f };
								uParam1->f_31 = { 0f, 0f, 92.7f };
								break;
							case 1:
								uParam1->f_26 = 160;
								uParam1->f_28 = { 17.5452f, 1.2258f, 0.994f };
								uParam1->f_31 = { 0f, 0f, 92.7f };
								break;
							case 2:
								uParam1->f_26 = 161;
								uParam1->f_28 = { 6.7193f, -36.6094f, -0.8453f };
								uParam1->f_31 = { 0f, 0f, 92.7f };
								break;
							}
					}
					uParam1->f_27 = 0;
					uParam1->f_17[0] = 0;
					uParam1->f_17[1] = 16842753;
					uParam1->f_17[2] = 65536;
					uParam1->f_21[0] = 0;
					uParam1->f_21[1] = 0;
					uParam1->f_21[2] = 0;
					if (__LIB_11__::func_254(PLAYER::PLAYER_ID()))
					{
						__LIB_9__::func_137(&(uParam1->f_11), 7);
					}
					__LIB_9__::func_137(&(uParam1->f_11), 22);
					__LIB_9__::func_137(&(uParam1->f_11), 4);
					if (__LIB_8__::func_584(uParam1->f_26))
					{
						__LIB_9__::func_137(&(uParam1->f_11), 27);
					}
					break;
			}
			break;
		case 104:
			if (bParam3)
			{
				uParam1->f_44 = 2;
			}
			switch (uParam1->f_44)
			{
				case 1:
				case 2:
				case 3:
					uParam1->f_25 = 10;
					uParam1->f_26 = 58;
					uParam1->f_27 = Global_262145.f_24755 /* Tunable: 1788315240 */;
					uParam1->f_17[0] = 0;
					uParam1->f_17[1] = 16843009;
					uParam1->f_17[2] = 16842752;
					uParam1->f_21[0] = 131074;
					uParam1->f_21[1] = 328195;
					uParam1->f_21[2] = 16777216;
					uParam1->f_28 = { 32.0365f, -4.1869f, 1.4303f };
					uParam1->f_31 = { 0f, 0f, 28.62f };
					__LIB_8__::func_413(&(uParam1->f_11));
					if (__LIB_8__::func_584(uParam1->f_26))
					{
						__LIB_9__::func_137(&(uParam1->f_11), 27);
					}
					if (Global_262145.f_24763 /* Tunable: -600583507 */)
					{
						__LIB_9__::func_137(&(uParam1->f_11), 0);
					}
					break;
			}
			break;
		case 105:
			if (bParam3)
			{
				uParam1->f_44 = 1;
			}
			switch (uParam1->f_44)
			{
				case 1:
				case 2:
				case 3:
					uParam1->f_25 = 9;
					uParam1->f_26 = 57;
					uParam1->f_27 = Global_262145.f_24755 /* Tunable: 1788315240 */;
					uParam1->f_17[0] = 65537;
					uParam1->f_17[1] = 16908546;
					uParam1->f_17[2] = 262144;
					uParam1->f_21[0] = 0;
					uParam1->f_21[1] = 5;
					uParam1->f_21[2] = 16777216;
					uParam1->f_28 = { 31.8846f, -2.8518f, 1.4913f };
					uParam1->f_31 = { 0f, 0f, 148.86f };
					__LIB_8__::func_413(&(uParam1->f_11));
					if (__LIB_8__::func_584(uParam1->f_26))
					{
						__LIB_9__::func_137(&(uParam1->f_11), 27);
					}
					if (Global_262145.f_24763 /* Tunable: -600583507 */)
					{
						__LIB_9__::func_137(&(uParam1->f_11), 0);
					}
					break;
			}
			break;
		case 106:
			if (bParam3)
			{
				uParam1->f_44 = 1;
			}
			switch (uParam1->f_44)
			{
				case 1:
				case 2:
				case 3:
					uParam1->f_25 = 10;
					uParam1->f_26 = 96;
					uParam1->f_27 = 0;
					uParam1->f_17[0] = 0;
					uParam1->f_17[1] = 16974081;
					uParam1->f_17[2] = 16777216;
					uParam1->f_21[0] = 0;
					uParam1->f_21[1] = 66053;
					uParam1->f_21[2] = 16777216;
					uParam1->f_28 = { 18.9538f, -6.0675f, 1.9013f };
					uParam1->f_31 = { 0f, 0f, 92.7f };
					__LIB_8__::func_413(&(uParam1->f_11));
					if (__LIB_8__::func_584(uParam1->f_26))
					{
						__LIB_9__::func_137(&(uParam1->f_11), 27);
					}
					break;
			}
			break;
		case 107:
			if (bParam3)
			{
				uParam1->f_44 = 1;
			}
			switch (uParam1->f_44)
			{
				case 1:
				case 2:
				case 3:
					uParam1->f_25 = 10;
					uParam1->f_26 = 61;
					uParam1->f_27 = 0;
					uParam1->f_17[0] = 65537;
					uParam1->f_17[1] = 33685504;
					uParam1->f_17[2] = 458752;
					uParam1->f_21[0] = 0;
					uParam1->f_21[1] = 524548;
					uParam1->f_21[2] = 0;
					uParam1->f_28 = { 17.9235f, -6.9099f, 1.9013f };
					uParam1->f_31 = { 0f, 0f, 352.62f };
					__LIB_8__::func_413(&(uParam1->f_11));
					if (__LIB_8__::func_584(uParam1->f_26))
					{
						__LIB_9__::func_137(&(uParam1->f_11), 27);
					}
					break;
			}
			break;
		case 108:
			if (bParam3)
			{
				uParam1->f_44 = 1;
			}
			switch (uParam1->f_44)
			{
				case 1:
				case 2:
				case 3:
					uParam1->f_25 = 10;
					uParam1->f_26 = 88;
					uParam1->f_27 = 0;
					uParam1->f_17[0] = 131074;
					uParam1->f_17[1] = 16974081;
					uParam1->f_17[2] = 17367040;
					uParam1->f_21[0] = 65538;
					uParam1->f_21[1] = 393478;
					uParam1->f_21[2] = 33554432;
					uParam1->f_28 = { 19.1885f, 3.8818f, 1.9013f };
					uParam1->f_31 = { 0f, 0f, 79.74f };
					__LIB_8__::func_413(&(uParam1->f_11));
					if (__LIB_8__::func_584(uParam1->f_26))
					{
						__LIB_9__::func_137(&(uParam1->f_11), 27);
					}
					break;
			}
			break;
		case 109:
			if (bParam3)
			{
				uParam1->f_44 = 1;
			}
			switch (uParam1->f_44)
			{
				case 1:
				case 2:
				case 3:
					uParam1->f_25 = 10;
					uParam1->f_26 = 119;
					uParam1->f_27 = 0;
					uParam1->f_17[0] = 65537;
					uParam1->f_17[1] = 16843009;
					uParam1->f_17[2] = 17104896;
					uParam1->f_21[0] = 65538;
					uParam1->f_21[1] = 131074;
					uParam1->f_21[2] = 16777216;
					uParam1->f_28 = { 16.1938f, -0.4261f, 1.9013f };
					uParam1->f_31 = { 0f, 0f, 41.58f };
					__LIB_8__::func_413(&(uParam1->f_11));
					if (__LIB_8__::func_584(uParam1->f_26))
					{
						__LIB_9__::func_137(&(uParam1->f_11), 27);
					}
					break;
			}
			break;
		case 110:
			if (bParam3)
			{
				uParam1->f_44 = 1;
			}
			switch (uParam1->f_44)
			{
				case 1:
				case 2:
				case 3:
					uParam1->f_25 = 32;
					__LIB_8__::func_413(&(uParam1->f_11));
					if (__LIB_11__::func_254(PLAYER::PLAYER_ID()))
					{
						if (__LIB_9__::func_233(__LIB_11__::func_608(), 0))
						{
							uParam1->f_26 = 155;
							uParam1->f_28 = { 30.0454f, -6.3603f, 1.5133f };
							uParam1->f_31 = { 0f, 0f, 182.7f };
							__LIB_9__::func_137(&(uParam1->f_11), 22);
						}
						else
						{
							uParam1->f_26 = 154;
							uParam1->f_28 = { 17.5452f, 1.2258f, 0.994f };
							uParam1->f_31 = { 0f, 0f, 92.7f };
							__LIB_9__::func_137(&(uParam1->f_11), 22);
						}
					}
					else
					{
						uParam1->f_28 = { -1.7641f, 1.0255f, 2.0213f };
						uParam1->f_31 = { 0f, 0f, 243.199f };
						__LIB_9__::func_137(&(uParam1->f_11), 0);
					}
					uParam1->f_27 = 0;
					uParam1->f_17[0] = 65536;
					uParam1->f_17[1] = 0;
					uParam1->f_17[2] = 65536;
					uParam1->f_21[0] = 0;
					uParam1->f_21[1] = 0;
					uParam1->f_21[2] = 0;
					__LIB_9__::func_137(&(uParam1->f_11), 4);
					if (__LIB_11__::func_254(PLAYER::PLAYER_ID()))
					{
						__LIB_9__::func_137(&(uParam1->f_11), 7);
					}
					if (__LIB_8__::func_584(uParam1->f_26))
					{
						__LIB_9__::func_137(&(uParam1->f_11), 27);
					}
					break;
			}
			break;
		case 111:
			if (bParam3)
			{
				uParam1->f_44 = 1;
			}
			switch (uParam1->f_44)
			{
				case 1:
				case 2:
				case 3:
					uParam1->f_25 = 10;
					uParam1->f_26 = 61;
					uParam1->f_27 = 0;
					uParam1->f_17[0] = -1;
					uParam1->f_17[1] = -1;
					uParam1->f_17[2] = -1;
					uParam1->f_21[0] = -1;
					uParam1->f_21[1] = -1;
					uParam1->f_21[2] = -1;
					uParam1->f_28 = { 35.7145f, -2.7381f, 1.9013f };
					uParam1->f_31 = { 0f, 0f, 122.94f };
					__LIB_8__::func_413(&(uParam1->f_11));
					if (__LIB_8__::func_584(uParam1->f_26))
					{
						__LIB_9__::func_137(&(uParam1->f_11), 27);
					}
					__LIB_9__::func_137(&(uParam1->f_11), 0);
					break;
			}
			break;
		case 112:
			if (bParam3)
			{
				uParam1->f_44 = 1;
			}
			switch (uParam1->f_44)
			{
				case 1:
				case 2:
				case 3:
					uParam1->f_25 = 8;
					uParam1->f_26 = 41;
					uParam1->f_27 = 3;
					uParam1->f_17[0] = -1;
					uParam1->f_17[1] = -1;
					uParam1->f_17[2] = -1;
					uParam1->f_21[0] = -1;
					uParam1->f_21[1] = -1;
					uParam1->f_21[2] = -1;
					uParam1->f_28 = { 29.7028f, -8.1763f, 1.4033f };
					uParam1->f_31 = { 0f, 0f, 102.06f };
					__LIB_8__::func_413(&(uParam1->f_11));
					if (__LIB_8__::func_584(uParam1->f_26))
					{
						__LIB_9__::func_137(&(uParam1->f_11), 27);
					}
					__LIB_9__::func_137(&(uParam1->f_11), 0);
					break;
			}
			break;
		case 113:
			if (bParam3)
			{
				uParam1->f_44 = 1;
			}
			switch (uParam1->f_44)
			{
				case 1:
				case 2:
				case 3:
					uParam1->f_25 = 10;
					uParam1->f_26 = 126;
					uParam1->f_27 = 3;
					uParam1->f_17[0] = 0;
					uParam1->f_17[1] = 16777473;
					uParam1->f_17[2] = 16777216;
					uParam1->f_21[0] = 131074;
					uParam1->f_21[1] = 516;
					uParam1->f_21[2] = 0;
					uParam1->f_28 = { 23.1285f, 12.7848f, 1.9013f };
					uParam1->f_31 = { 0f, 0f, 89.1f };
					__LIB_8__::func_413(&(uParam1->f_11));
					if (__LIB_8__::func_584(uParam1->f_26))
					{
						__LIB_9__::func_137(&(uParam1->f_11), 27);
					}
					break;
			}
			break;
		case 114:
			if (bParam3)
			{
				uParam1->f_44 = 1;
			}
			switch (uParam1->f_44)
			{
				case 1:
				case 2:
				case 3:
					uParam1->f_25 = 10;
					uParam1->f_26 = 40;
					uParam1->f_27 = 3;
					uParam1->f_17[0] = 0;
					uParam1->f_17[1] = 16974081;
					uParam1->f_17[2] = 17039360;
					uParam1->f_21[0] = 65537;
					uParam1->f_21[1] = 131587;
					uParam1->f_21[2] = 16777216;
					uParam1->f_28 = { 21.6278f, 13.375f, 1.9013f };
					uParam1->f_31 = { 0f, 0f, 208.62f };
					__LIB_8__::func_413(&(uParam1->f_11));
					if (__LIB_8__::func_584(uParam1->f_26))
					{
						__LIB_9__::func_137(&(uParam1->f_11), 27);
					}
					break;
			}
			break;
		case 115:
			if (bParam3)
			{
				uParam1->f_44 = 1;
			}
			switch (uParam1->f_44)
			{
				case 1:
				case 2:
				case 3:
					uParam1->f_25 = 10;
					uParam1->f_26 = 120;
					uParam1->f_27 = 0;
					uParam1->f_17[0] = 131074;
					uParam1->f_17[1] = 16843009;
					uParam1->f_17[2] = 17563648;
					uParam1->f_21[0] = 1;
					uParam1->f_21[1] = 393480;
					uParam1->f_21[2] = 0;
					uParam1->f_28 = { 5.2482f, -4.1089f, 1.9013f };
					uParam1->f_31 = { 0f, 0f, 27.18f };
					__LIB_8__::func_413(&(uParam1->f_11));
					if (__LIB_8__::func_584(uParam1->f_26))
					{
						__LIB_9__::func_137(&(uParam1->f_11), 27);
					}
					break;
			}
			break;
		case 116:
			if (bParam3)
			{
				uParam1->f_44 = 1;
			}
			switch (uParam1->f_44)
			{
				case 1:
				case 2:
				case 3:
					uParam1->f_25 = 9;
					uParam1->f_26 = 103;
					uParam1->f_27 = 0;
					uParam1->f_17[0] = 0;
					uParam1->f_17[1] = 66304;
					uParam1->f_17[2] = 67502080;
					uParam1->f_21[0] = 131074;
					uParam1->f_21[1] = 459010;
					uParam1->f_21[2] = 0;
					uParam1->f_28 = { -1.6892f, -3.6945f, 0.8913f };
					uParam1->f_31 = { 0f, 0f, 336.78f };
					__LIB_8__::func_413(&(uParam1->f_11));
					__LIB_9__::func_137(&(uParam1->f_11), 13);
					if (__LIB_8__::func_584(uParam1->f_26))
					{
						__LIB_9__::func_137(&(uParam1->f_11), 27);
					}
					break;
			}
			break;
		case 117:
			if (bParam3)
			{
				uParam1->f_44 = 1;
			}
			switch (uParam1->f_44)
			{
				case 1:
				case 2:
				case 3:
					uParam1->f_25 = 8;
					uParam1->f_26 = 51;
					uParam1->f_27 = 3;
					uParam1->f_17[0] = 65537;
					uParam1->f_17[1] = 66048;
					uParam1->f_17[2] = 33554432;
					uParam1->f_21[0] = 0;
					uParam1->f_21[1] = 327948;
					uParam1->f_21[2] = 0;
					uParam1->f_28 = { 36.4559f, 6.8235f, 1.9013f };
					uParam1->f_31 = { 0f, 0f, 96.3f };
					__LIB_8__::func_413(&(uParam1->f_11));
					if (__LIB_8__::func_584(uParam1->f_26))
					{
						__LIB_9__::func_137(&(uParam1->f_11), 27);
					}
					break;
			}
			break;
		case 118:
			if (bParam3)
			{
				uParam1->f_44 = 1;
			}
			switch (uParam1->f_44)
			{
				case 1:
				case 2:
				case 3:
					uParam1->f_25 = 10;
					uParam1->f_26 = 96;
					uParam1->f_27 = Global_262145.f_24757 /* Tunable: -1891938385 */;
					uParam1->f_17[0] = 0;
					uParam1->f_17[1] = 66050;
					uParam1->f_17[2] = 33816576;
					uParam1->f_21[0] = 65537;
					uParam1->f_21[1] = 262401;
					uParam1->f_21[2] = 16777216;
					uParam1->f_28 = { 25.0473f, 2.4678f, 1.9013f };
					uParam1->f_31 = { 0f, 0f, 39.42f };
					__LIB_8__::func_413(&(uParam1->f_11));
					if (__LIB_8__::func_584(uParam1->f_26))
					{
						__LIB_9__::func_137(&(uParam1->f_11), 27);
					}
					if (Global_262145.f_24765 /* Tunable: 262060418 */)
					{
						__LIB_9__::func_137(&(uParam1->f_11), 0);
					}
					break;
			}
			break;
		case 119:
			if (bParam3)
			{
				uParam1->f_44 = 1;
			}
			switch (uParam1->f_44)
			{
				case 1:
				case 2:
				case 3:
					uParam1->f_25 = 31;
					uParam1->f_26 = 166;
					uParam1->f_27 = 0;
					uParam1->f_17[0] = 65536;
					uParam1->f_17[1] = 33554432;
					uParam1->f_17[2] = 50462720;
					uParam1->f_21[0] = 131073;
					uParam1->f_21[1] = 131073;
					uParam1->f_21[2] = 16777216;
					uParam1->f_28 = { 2.5565f, 23.7581f, 1.9113f };
					uParam1->f_31 = { 0f, 0f, 39.64f };
					__LIB_8__::func_413(&(uParam1->f_11));
					if (__LIB_11__::func_254(PLAYER::PLAYER_ID()))
					{
						__LIB_9__::func_137(&(uParam1->f_11), 0);
					}
					__LIB_9__::func_137(&(uParam1->f_11), 4);
					__LIB_9__::func_137(&(uParam1->f_11), 1);
					if (__LIB_8__::func_584(uParam1->f_26))
					{
						__LIB_9__::func_137(&(uParam1->f_11), 27);
					}
					break;
			}
			break;
		case 120:
			if (bParam3)
			{
				uParam1->f_44 = 1;
			}
			switch (uParam1->f_44)
			{
				case 1:
				case 2:
				case 3:
					uParam1->f_25 = 31;
					uParam1->f_26 = 0;
					uParam1->f_27 = 0;
					uParam1->f_17[0] = 0;
					uParam1->f_17[1] = 16842753;
					uParam1->f_17[2] = 33685504;
					uParam1->f_21[0] = 131073;
					uParam1->f_21[1] = 2;
					uParam1->f_21[2] = 33554432;
					uParam1->f_28 = { -32.1073f, 52.717f, 2.4098f };
					uParam1->f_31 = { 0f, 0f, 263.65f };
					__LIB_8__::func_413(&(uParam1->f_11));
					if (__LIB_11__::func_254(PLAYER::PLAYER_ID()))
					{
						__LIB_9__::func_137(&(uParam1->f_11), 0);
					}
					__LIB_9__::func_137(&(uParam1->f_11), 1);
					__LIB_9__::func_137(&(uParam1->f_11), 4);
					__LIB_9__::func_137(&(uParam1->f_11), 15);
					if (__LIB_8__::func_584(uParam1->f_26))
					{
						__LIB_9__::func_137(&(uParam1->f_11), 27);
					}
					break;
			}
			break;
		case 121:
			if (bParam3)
			{
				uParam1->f_44 = 1;
			}
			switch (uParam1->f_44)
			{
				case 1:
				case 2:
				case 3:
					uParam1->f_25 = 31;
					uParam1->f_26 = 0;
					uParam1->f_27 = 0;
					uParam1->f_17[0] = 65537;
					uParam1->f_17[1] = 0;
					uParam1->f_17[2] = 0;
					uParam1->f_21[0] = 131074;
					uParam1->f_21[1] = 131073;
					uParam1->f_21[2] = 33554432;
					uParam1->f_28 = { 10.4971f, 63.9014f, 3.4438f };
					uParam1->f_31 = { 0f, 0f, 150.735f };
					__LIB_8__::func_413(&(uParam1->f_11));
					if (__LIB_11__::func_254(PLAYER::PLAYER_ID()))
					{
						__LIB_9__::func_137(&(uParam1->f_11), 0);
					}
					__LIB_9__::func_137(&(uParam1->f_11), 1);
					__LIB_9__::func_137(&(uParam1->f_11), 4);
					__LIB_9__::func_137(&(uParam1->f_11), 15);
					if (__LIB_8__::func_584(uParam1->f_26))
					{
						__LIB_9__::func_137(&(uParam1->f_11), 27);
					}
					break;
			}
			break;
		case 122:
			if (bParam3)
			{
				uParam1->f_44 = 1;
			}
			switch (uParam1->f_44)
			{
				case 1:
				case 2:
				case 3:
					uParam1->f_25 = 31;
					uParam1->f_26 = 0;
					uParam1->f_27 = 0;
					uParam1->f_17[0] = 65539;
					uParam1->f_17[1] = 33619968;
					uParam1->f_17[2] = 67239936;
					uParam1->f_21[0] = 65537;
					uParam1->f_21[1] = 65794;
					uParam1->f_21[2] = 16777216;
					uParam1->f_28 = { 51.7089f, -18.2157f, 1.9913f };
					uParam1->f_31 = { 0f, 0f, 119.335f };
					__LIB_8__::func_413(&(uParam1->f_11));
					if (__LIB_11__::func_254(PLAYER::PLAYER_ID()))
					{
						__LIB_9__::func_137(&(uParam1->f_11), 0);
					}
					__LIB_9__::func_137(&(uParam1->f_11), 1);
					__LIB_9__::func_137(&(uParam1->f_11), 4);
					__LIB_9__::func_137(&(uParam1->f_11), 15);
					if (__LIB_8__::func_584(uParam1->f_26))
					{
						__LIB_9__::func_137(&(uParam1->f_11), 27);
					}
					break;
			}
			break;
	}
	if (!__LIB_0__::func_86(uParam1->f_28))
	{
		uParam1->f_28 = { __LIB_8__::func_457(__LIB_8__::func_838(-1), __LIB_8__::func_837(-1), uParam1->f_28) };
	}
	if (uParam1->f_31.f_2 != -1f)
	{
		uParam1->f_31.f_2 = __LIB_8__::func_456(__LIB_8__::func_837(-1), uParam1->f_31.f_2);
	}
}

int func_2951(var uParam0, int iParam1)//Position - 0x13087A
{
	int iVar0;
	int iVar1;
	struct<47> Var2;
	iVar1 = 0;
	Var2.f_1 = 8;
	Var2.f_11 = 2;
	Var2.f_14 = 2;
	Var2.f_17 = 3;
	Var2.f_21 = 3;
	Var2.f_35 = -1;
	Var2.f_35.f_4 = -1;
	Var2.f_35.f_5 = -1;
	Var2.f_46 = -1;
	Var2.f_46.f_2 = -1;
	Var2.f_46.f_3 = -1;
	iVar0 = 0;
	while (iVar0 < 10)
	{
		Var2.f_28 = { __LIB_0__::func_613() };
		func_2944(iParam1, uParam0, &Var2, iVar0 + 125, uParam0->f_1, 1);
		if (!__LIB_0__::func_86(Var2.f_28))
		{
			iVar1++;
		}
	else
	{
		}
		else
		{
			iVar0++;
		}
	}
	return iVar1;
}

int func_2952(var uParam0, int iParam1)//Position - 0x13091B
{
	int iVar0;
	int iVar1;
	struct<47> Var2;
	iVar1 = 0;
	Var2.f_1 = 8;
	Var2.f_11 = 2;
	Var2.f_14 = 2;
	Var2.f_17 = 3;
	Var2.f_21 = 3;
	Var2.f_35 = -1;
	Var2.f_35.f_4 = -1;
	Var2.f_35.f_5 = -1;
	Var2.f_46 = -1;
	Var2.f_46.f_2 = -1;
	Var2.f_46.f_3 = -1;
	iVar0 = 0;
	while (iVar0 < 125)
	{
		Var2.f_28 = { __LIB_0__::func_613() };
		func_2944(iParam1, uParam0, &Var2, iVar0, uParam0->f_1, 1);
		if (!__LIB_0__::func_86(Var2.f_28))
		{
			iVar1++;
		}
	else
	{
		}
		else
		{
			iVar0++;
		}
	}
	return iVar1;
}

void func_2955(int iParam0, var uParam1, var uParam2)//Position - 0x1309CF
{
	switch (uParam2->f_6)
	{
		case 0:
			func_2999(iParam0, uParam1, uParam2);
			break;
		case 1:
			func_2992(iParam0, uParam1, uParam2);
			break;
		case 2:
			func_2975(iParam0, uParam1, uParam2);
			break;
		case 3:
			func_2973(iParam0, uParam1, uParam2);
			break;
		case 4:
			func_2956(iParam0, uParam1, uParam2);
			break;
	}
}

void func_2956(int iParam0, var uParam1, var uParam2)//Position - 0x130A3F
{
	func_2966(iParam0, uParam1, uParam2);
	if (func_2963(iParam0, uParam2, uParam1))
	{
		return;
	}
	if (NETWORK::NETWORK_IS_HOST_OF_THIS_SCRIPT())
	{
		uParam1->f_3 = func_2960(iParam0, uParam1, 0);
		uParam1->f_2 = 0;
		__LIB_0__::func_627(&(uParam1->f_13), 0, 0);
		uParam1->f_13 = NETWORK::GET_TIME_OFFSET(uParam1->f_13, -uParam1->f_2);
		uParam1->f_1 = MISC::GET_HASH_KEY(func_2959(iParam0, uParam1->f_10, *uParam1));
		uParam1->f_7 = 1;
		func_2958(0, -1);
	}
	if (uParam1->f_7)
	{
		uParam2->f_1 = 0;
		func_124(iParam0, 1);
		func_126(iParam0, 1);
		__LIB_11__::func_214(uParam2, 2);
	}
}

void func_2958(int iParam0, int iParam1)//Position - 0x130AED
{
	int iVar0;
	struct<4> Var1;
	iVar0 = __LIB_1__::func_26(1);
	if (iVar0 == 0)
	{
		return;
	}
	Var1.f_0 = -1482751552;
	Var1.f_1 = PLAYER::PLAYER_ID();
	Var1.f_2 = iParam0;
	Var1.f_3 = iParam1;
	SCRIPT::SEND_TU_SCRIPT_EVENT(1, &Var1, 4, iVar0);
}

char* func_2959(int iParam0, var uParam1, int iParam2)//Position - 0x130B2A
{
	struct<6> Var0;
	func_59(iParam0, &Var0, 5);
	if (Var0.f_5 != 0)
	{
		Stack.Push(uParam1);
		Stack.Push(iParam2);
		Call_Loc(Var0.f_5);
		return StackVal;
	}
	return "";
}

int func_2960(int iParam0, var uParam1, bool bParam2)//Position - 0x130B53
{
	int iVar0;
	int iVar1;
	iVar1 = 0;
	iVar0 = 1;
	while (iVar0 <= func_2962(iParam0, uParam1->f_10))
	{
		iVar1 = (iVar1 + func_2961(iParam0, uParam1->f_10, iVar0));
		if (!bParam2)
		{
			if (*uParam1 == iVar0)
			{
			}
			else
			{
				iVar0++;
			}
			return iVar1;
		}
int func_2961(int iParam0, int iParam1, int iParam2)//Position - 0x130B9D
{
	struct<7> Var0;
	func_59(iParam0, &Var0, 6);
	if (Var0.f_6 != 0)
	{
		Stack.Push(iParam1);
		Stack.Push(iParam2);
		Call_Loc(Var0.f_6);
		return StackVal;
	}
	return 0;
}

int func_2962(int iParam0, int iParam1)//Position - 0x130BC3
{
	struct<5> Var0;
	func_59(iParam0, &Var0, 4);
	if (Var0.f_4 != 0)
	{
		Stack.Push(iParam1);
		Call_Loc(Var0.f_4);
		return StackVal;
	}
	return 0;
}

int func_2963(int iParam0, var uParam1, var uParam2)//Position - 0x130BE7
{
	if (iParam0 == 0)
	{
		if (__LIB_2__::func_813(PLAYER::PLAYER_ID()) == 0 && CUTSCENE::IS_CUTSCENE_PLAYING())
		{
			if (uParam1->f_1)
			{
				__LIB_11__::func_216(uParam2, 2);
				return 1;
			}
		}
	}
	if (iParam0 == 2)
	{
		if (CUTSCENE::IS_CUTSCENE_PLAYING())
		{
			return 1;
		}
		if (!Global_262145.f_31894 /* Tunable: 809031172 */)
		{
			return 1;
		}
	}
	if (!NETWORK::NETWORK_IS_HOST_OF_THIS_SCRIPT() && __LIB_11__::func_215(uParam2, 2))
	{
		return 1;
	}
	return 0;
}

void func_2966(int iParam0, var uParam1, var uParam2)//Position - 0x130C8D
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
					case 855138755:
						if (Global_1663509.f_840)
						{
							return;
						}
						func_2967(iParam0, uParam1, uParam2, iVar2, iVar0);
						break;
					case -1258722818:
						if (Global_1663509.f_841)
						{
							return;
						}
						func_2967(iParam0, uParam1, uParam2, iVar2, iVar0);
						break;
					case 653957003:
						if (Global_1663509.f_842)
						{
							return;
						}
						func_2967(iParam0, uParam1, uParam2, iVar2, iVar0);
						break;
					case -1482751552:
						if (!Global_1663509.f_844)
						{
							func_2967(iParam0, uParam1, uParam2, iVar2, iVar0);
						}
						break;
					case 133098291:
						if (Global_1663509.f_861)
						{
							return;
						}
						func_2967(iParam0, uParam1, uParam2, iVar2, iVar0);
						break;
				}
				break;
		}
		iVar0++;
	}
}

void func_2967(int iParam0, var uParam1, var uParam2, int iParam3, int iParam4)//Position - 0x130D88
{
	struct<3> Var0;
	struct<3> Var1;
	struct<2> Var2;
	struct<4> Var3;
	switch (iParam3)
	{
		case 855138755:
			if (SCRIPT::GET_EVENT_DATA(1, iParam4, &Var0, 3))
			{
				if (!NETWORK::NETWORK_IS_HOST_OF_THIS_SCRIPT() && NETWORK::NETWORK_IS_PLAYER_A_PARTICIPANT(Var0.f_1))
				{
					if (uParam2->f_4 != Var0.f_2)
					{
						uParam2->f_4 = Var0.f_2;
					}
				}
			}
			break;
		case -1258722818:
			if (SCRIPT::GET_EVENT_DATA(1, iParam4, &Var1, 3))
			{
				if (!NETWORK::NETWORK_IS_HOST_OF_THIS_SCRIPT() && NETWORK::NETWORK_IS_PLAYER_A_PARTICIPANT(Var1.f_1))
				{
					if (uParam2->f_5 != Var1.f_2)
					{
						uParam2->f_5 = Var1.f_2;
					}
				}
			}
			break;
		case 653957003:
			if (SCRIPT::GET_EVENT_DATA(1, iParam4, &Var2, 2))
			{
				if (NETWORK::NETWORK_IS_HOST_OF_THIS_SCRIPT() && NETWORK::NETWORK_IS_PLAYER_A_PARTICIPANT(Var2.f_1))
				{
					func_2972(uParam1->f_11, Var2.f_1);
				}
			}
			break;
		case -1482751552:
			if (SCRIPT::GET_EVENT_DATA(1, iParam4, &Var3, 4))
			{
				func_2968(iParam0, Var3, uParam1, uParam2);
			}
			break;
	}
}

void func_2968(int iParam0, struct<4> Param1, var uParam2, var uParam3)//Position - 0x130E6D
{
	if (Param1.f_2)
	{
		if (func_2971())
		{
			func_126(iParam0, 0);
			Global_1578997.f_3 = Param1.f_3;
			STATS::PLAYSTATS_DJ_USAGE(Global_1578997.f_3, iParam0 + 1);
			Global_1578997.f_9 = 0;
			Global_1578997.f_10 = 0;
			__LIB_11__::func_214(uParam3, 3);
			__LIB_11__::func_216(uParam2, 2);
		}
	}
	else if (!NETWORK::NETWORK_IS_HOST_OF_THIS_SCRIPT())
	{
		uParam3->f_2 = func_2970(iParam0, uParam2->f_10);
		Global_1578997.f_9 = 0;
		Global_1578997.f_10 = 0;
		uParam3->f_1 = 0;
		func_2969(1);
	}
}

void func_2969(int iParam0)//Position - 0x130EF2
{
	int iVar0;
	struct<3> Var1;
	iVar0 = __LIB_0__::func_950(PLAYER::PLAYER_ID());
	if (iVar0 == 0)
	{
		return;
	}
	Var1.f_0 = -1821019699;
	Var1.f_1 = PLAYER::PLAYER_ID();
	Var1.f_2 = iParam0;
	SCRIPT::SEND_TU_SCRIPT_EVENT(1, &Var1, 3, iVar0);
}

char* func_2970(int iParam0, var uParam1)//Position - 0x130F2C
{
	struct<4> Var0;
	func_59(iParam0, &Var0, 3);
	if (Var0.f_3 != 0)
	{
		Stack.Push(uParam1);
		Call_Loc(Var0.f_3);
		return StackVal;
	}
	return "";
}

int func_2971()//Position - 0x130F53
{
	if (!Global_1579009)
	{
		return 0;
	}
	if (Global_1976921.f_3 == 3)
	{
		return 0;
	}
	if (__LIB_1__::func_520(0))
	{
		if (__LIB_0__::func_797() != __LIB_0__::func_162())
		{
			if (BitTest(Global_1853348[__LIB_0__::func_797() /*834*/].f_267.f_458, 10))
			{
				return 0;
			}
		}
	}
	if (CUTSCENE::IS_CUTSCENE_PLAYING())
	{
		return 0;
	}
	return 1;
}

void func_2972(var uParam0, int iParam1)//Position - 0x130FAF
{
	struct<3> Var0;
	if (iParam1 == __LIB_0__::func_162())
	{
		return;
	}
	Var0.f_0 = -558327261;
	Var0.f_1 = PLAYER::PLAYER_ID();
	Var0.f_2 = uParam0;
	SCRIPT::SEND_TU_SCRIPT_EVENT(1, &Var0, 3, __LIB_0__::func_950(iParam1));
}

void func_2973(int iParam0, var uParam1, var uParam2)//Position - 0x130FE6
{
	var uVar0;
	if (Global_1578997.f_5)
	{
		if (!Global_1578997.f_7)
		{
			if (func_120(iParam0, uParam1->f_8, &uVar0))
			{
				if (!MISC::IS_STRING_NULL_OR_EMPTY(&uVar0))
				{
					if (func_2974(iParam0, uParam1->f_8))
					{
						Global_1578997.f_7 = 1;
					}
				}
			}
			else
			{
				Global_1578997.f_7 = 1;
			}
		}
	}
	if (Global_1578997.f_3 == -1 && Global_1578997.f_7)
	{
		if (NETWORK::NETWORK_IS_HOST_OF_THIS_SCRIPT())
		{
			uParam1->f_3 = func_2960(iParam0, uParam1, 0);
			uParam1->f_2 = 0;
			__LIB_0__::func_627(&(uParam1->f_13), 0, 0);
			uParam1->f_13 = NETWORK::GET_TIME_OFFSET(uParam1->f_13, -uParam1->f_2);
			uParam1->f_1 = MISC::GET_HASH_KEY(func_2959(iParam0, uParam1->f_10, *uParam1));
			func_2958(0, -1);
		}
		uParam2->f_2 = func_2970(iParam0, uParam1->f_10);
		Global_1578997.f_9 = 0;
		Global_1578997.f_10 = 0;
		uParam2->f_1 = 0;
		Global_1578997.f_5 = 0;
		if (iParam0 != 2)
		{
			Global_1578997.f_7 = 0;
		}
		__LIB_11__::func_214(uParam2, 2);
	}
}

int func_2974(int iParam0, var uParam1)//Position - 0x1310D9
{
	var uVar0;
	if (func_120(iParam0, uParam1, &uVar0))
	{
		__LIB_11__::func_78();
		return DATAFILE::DATAFILE_LOAD_OFFLINE_UGC_FOR_ADDITIONAL_DATA_FILE(0, &uVar0);
	}
	return 1;
}

void func_2975(int iParam0, var uParam1, var uParam2)//Position - 0x1310FD
{
	func_2966(iParam0, uParam1, uParam2);
	func_2989(iParam0, uParam1, uParam2);
	func_2978(iParam0, uParam1, uParam2);
	if (func_2963(iParam0, uParam2, uParam1))
	{
		func_124(iParam0, 0);
		func_126(iParam0, 0);
		Global_1579020 = 60;
		Global_1578997 = 0;
		__LIB_11__::func_214(uParam2, 4);
		return;
	}
	if (!uParam1->f_7 || uParam2->f_1)
	{
		return;
	}
	func_2976(iParam0, uParam1, uParam2, 0);
}

void func_2976(int iParam0, var uParam1, var uParam2, bool bParam3)//Position - 0x131173
{
	char* sVar0;
	int iVar1;
	uParam2->f_2 = func_2970(iParam0, uParam1->f_10);
	sVar0 = func_2959(iParam0, uParam1->f_10, 1);
	iVar1 = __LIB_1__::func_724(&(uParam1->f_13), 0, 1);
	AUDIO::FREEZE_RADIO_STATION(uParam2->f_2);
	func_126(iParam0, !bParam3);
	AUDIO::SET_RADIO_TRACK_WITH_START_OFFSET(uParam2->f_2, sVar0, iVar1);
	AUDIO::UNFREEZE_RADIO_STATION(uParam2->f_2);
	func_126(iParam0, 1);
	func_2977(iParam0, uParam2->f_2);
	func_124(iParam0, !bParam3);
	func_57(iParam0, !bParam3);
	uParam2->f_4 = uParam1->f_11;
	uParam2->f_5 = uParam1->f_12;
	Global_1578997 = uParam1->f_11;
	Global_1578997.f_1 = uParam1->f_12;
	uParam2->f_3 = uParam1->f_8;
	Global_1578997.f_2 = uParam2->f_3;
	Global_1977018.f_2 = 1;
	uParam2->f_1 = 1;
	__LIB_11__::func_80(uParam1, 2);
}

void func_2977(int iParam0, char* sParam1)//Position - 0x131231
{
	int iVar0;
	char* sVar1;
	sVar1 = "";
	iVar0 = 0;
	while (iVar0 < func_128(iParam0))
	{
		sVar1 = func_127(iParam0, iVar0);
		if (!MISC::IS_STRING_NULL_OR_EMPTY(sVar1))
		{
			AUDIO::SET_EMITTER_RADIO_STATION(sVar1, sParam1);
		}
	else
	{
		}
		else
		{
			iVar0++;
		}
	}
}

void func_2978(int iParam0, var uParam1, var uParam2)//Position - 0x131278
{
	bool bVar0;
	if (((!NETWORK::NETWORK_IS_HOST_OF_THIS_SCRIPT() || !uParam1->f_7) || !uParam2->f_1) || !__LIB_11__::func_218(uParam1->f_8))
	{
		return;
	}
	bVar0 = false;
	if (Global_1578997.f_9 >= uParam1->f_5 && func_2987(iParam0))
	{
		uParam1->f_4++;
		uParam1->f_5 = func_2986(iParam0, *uParam1, uParam1->f_4 + 1);
		uParam1->f_11 = func_2984(iParam0, *uParam1, uParam1->f_4);
		uParam1->f_12 = func_2984(iParam0, *uParam1, uParam1->f_4 + 1);
	}
	if ((iParam0 != 2 && uParam1->f_1 != AUDIO::GET_CURRENT_TRACK_SOUND_NAME(uParam2->f_2)) || (iParam0 == 2 && __LIB_31__::func_401()))
	{
		*uParam1++;
		if (*uParam1 > func_2962(iParam0, uParam1->f_10) || iParam0 == 2)
		{
			if (iParam0 == 2)
			{
				Global_1977018.f_9 = 1;
				if (uParam1->f_8 == 13)
				{
					if (__LIB_11__::func_217())
					{
						__LIB_11__::func_216(uParam1, 3);
					}
					else
					{
						__LIB_11__::func_80(uParam1, 3);
					}
				}
			}
			uParam1->f_8 = func_2980(uParam1, iParam0, uParam1->f_8, 1, __LIB_11__::func_215(uParam1, 3));
			uParam1->f_10 = func_2979(iParam0, uParam1->f_8, 0);
			*uParam1 = 1;
			uParam1->f_2 = 0;
			__LIB_0__::func_627(&(uParam1->f_13), 0, 0);
			uParam1->f_13 = NETWORK::GET_TIME_OFFSET(uParam1->f_13, -uParam1->f_2);
			bVar0 = true;
		}
		uParam1->f_3 = func_2960(iParam0, uParam1, 0);
		if (func_2987(iParam0))
		{
			uParam1->f_4 = 0;
			uParam1->f_5 = func_2986(iParam0, *uParam1, uParam1->f_4 + 1);
			uParam1->f_11 = func_2984(iParam0, *uParam1, uParam1->f_4);
			uParam1->f_12 = func_2984(iParam0, *uParam1, uParam1->f_4 + 1);
		}
		uParam1->f_1 = MISC::GET_HASH_KEY(func_2959(iParam0, uParam1->f_10, *uParam1));
		if (bVar0)
		{
			__LIB_11__::func_80(uParam1, 0);
			__LIB_11__::func_80(uParam1, 1);
			if (func_133(iParam0))
			{
				func_130(iParam0, uParam1);
			}
			if (uParam1->f_8 != uParam2->f_3 || iParam0 == 0)
			{
				func_2958(1, uParam1->f_8);
			}
		}
	}
}

int func_2979(int iParam0, var uParam1, int iParam2)//Position - 0x13148E
{
	struct<3> Var0;
	func_59(iParam0, &Var0, 2);
	if (Var0.f_2 != 0)
	{
		Stack.Push(uParam1);
		Stack.Push(iParam2);
		Call_Loc(Var0.f_2);
		return StackVal;
	}
	return -1;
}

int func_2980(var uParam0, int iParam1, int iParam2, int iParam3, bool bParam4)//Position - 0x1314B4
{
	int iVar0;
	func_59(iParam1, &iVar0, 0);
	if (iVar0 != 0)
	{
		Stack.Push(uParam0);
		Stack.Push(iParam2);
		Stack.Push(iParam3);
		Stack.Push(bParam4);
		Call_Loc(iVar0);
		return StackVal;
	}
	return -1;
}

int func_2984(int iParam0, struct<11> Param1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, int iParam7)//Position - 0x131632
{
	int iVar0;
	int iVar1;
	iVar0 = -1;
	iVar1 = -1;
	func_2985(iParam0, Param1.f_10, Param1.f_0, iParam7, &iVar0, &iVar1);
	return iVar1;
}

void func_2985(int iParam0, var uParam1, var uParam2, int iParam3, int iParam4, int iParam5)//Position - 0x131654
{
	struct<8> Var0;
	func_59(iParam0, &Var0, 7);
	if (Var0.f_7 != 0)
	{
		Stack.Push(uParam1);
		Stack.Push(uParam2);
		Stack.Push(iParam3);
		Stack.Push(iParam4);
		Stack.Push(iParam5);
		Call_Loc(Var0.f_7);
	}
}

int func_2986(int iParam0, struct<11> Param1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, int iParam7)//Position - 0x13167C
{
	int iVar0;
	int iVar1;
	iVar0 = -1;
	iVar1 = -1;
	func_2985(iParam0, Param1.f_10, Param1.f_0, iParam7, &iVar0, &iVar1);
	return iVar0;
}

int func_2987(int iParam0)//Position - 0x13169E
{
	struct<9> Var0;
	func_59(iParam0, &Var0, 8);
	if (Var0.f_8 != 0)
	{
		Call_Loc(Var0.f_8);
		return StackVal;
	}
	return 1;
}

void func_2989(int iParam0, var uParam1, var uParam2)//Position - 0x1316D7
{
	int iVar0;
	int iVar1;
	if (!MISC::IS_STRING_NULL_OR_EMPTY(uParam2->f_2))
	{
		Global_1578997.f_9 = AUDIO::GET_CURRENT_TRACK_PLAY_TIME(uParam2->f_2);
		if (Global_1578997.f_9 < 0)
		{
			Global_1578997.f_9 = 0;
		}
	}
	else
	{
		iVar0 = __LIB_1__::func_724(&(uParam1->f_13), 0, 1);
		Global_1578997.f_9 = func_2991(iParam0, uParam1, iVar0);
	}
	if (*uParam1 > 1)
	{
		Global_1578997.f_10 = (func_2990(iParam0, uParam1, (*uParam1 - 1)) + Global_1578997.f_9);
	}
	else
	{
		Global_1578997.f_10 = Global_1578997.f_9;
	}
	if (func_2987(iParam0))
	{
		iVar1 = (uParam1->f_5 - Global_1578997.f_9);
		Global_1579020 = (iVar1 / 1000);
		if (Global_1579020 < 0)
		{
			Global_1579020 = 27;
		}
		if (uParam2->f_4 != uParam1->f_11)
		{
			uParam2->f_4 = uParam1->f_11;
		}
		if (uParam2->f_5 != uParam1->f_12)
		{
			uParam2->f_5 = uParam1->f_12;
		}
		if (Global_1579020 <= 0)
		{
			if (Global_1578997 != uParam2->f_5 && uParam2->f_5 != -1)
			{
				Global_1578997 = uParam2->f_5;
			}
		}
		if (Global_1578997.f_1 != uParam2->f_5 && uParam2->f_5 != -1)
		{
			Global_1578997.f_1 = uParam2->f_5;
		}
	}
}

int func_2990(int iParam0, var uParam1, int iParam2)//Position - 0x1317F7
{
	int iVar0;
	int iVar1;
	iVar0 = 1;
	while (iVar0 <= iParam2)
	{
		iVar1 = (iVar1 + func_2961(iParam0, uParam1->f_10, iVar0));
		iVar0++;
	}
	return iVar1;
}

int func_2991(int iParam0, var uParam1, int iParam2)//Position - 0x131825
{
	int iVar0;
	iVar0 = (uParam1->f_3 - iParam2);
	return (func_2961(iParam0, uParam1->f_10, *uParam1) - iVar0);
}

void func_2992(int iParam0, var uParam1, var uParam2)//Position - 0x131846
{
	func_2993(iParam0, uParam1);
	__LIB_11__::func_214(uParam2, 2);
}

void func_2993(int iParam0, var uParam1)//Position - 0x13185D
{
	func_2994(iParam0, uParam1);
}

void func_2994(int iParam0, var uParam1)//Position - 0x13186D
{
	if (NETWORK::NETWORK_IS_HOST_OF_THIS_SCRIPT())
	{
		if (!uParam1->f_7 || __LIB_11__::func_215(uParam1, 0))
		{
			func_2995(iParam0, uParam1);
		}
	}
	func_126(iParam0, 1);
	func_124(iParam0, 1);
	func_57(iParam0, 1);
}

void func_2995(int iParam0, var uParam1)//Position - 0x1318B1
{
	bool bVar0;
	int iVar1;
	uParam1->f_10 = func_2979(iParam0, uParam1->f_8, 0);
	bVar0 = false;
	if (func_2998(iParam0))
	{
		bVar0 = true;
	}
	if (!bVar0)
	{
		if (iParam0 == 0)
		{
			*uParam1 = MISC::GET_RANDOM_INT_IN_RANGE(1, (func_2962(iParam0, uParam1->f_10) / 2));
		}
		else
		{
			*uParam1 = MISC::GET_RANDOM_INT_IN_RANGE(1, func_2962(iParam0, uParam1->f_10));
		}
		uParam1->f_3 = func_2960(iParam0, uParam1, 0);
		iVar1 = (func_2961(iParam0, uParam1->f_10, *uParam1) / 4);
		uParam1->f_2 = func_2997(iParam0, uParam1, MISC::GET_RANDOM_INT_IN_RANGE(iVar1, iVar1 * 3));
	}
	else
	{
		*uParam1 = 1;
		uParam1->f_3 = func_2960(iParam0, uParam1, 0);
		uParam1->f_2 = 0;
	}
	__LIB_0__::func_627(&(uParam1->f_13), 0, 0);
	uParam1->f_13 = NETWORK::GET_TIME_OFFSET(uParam1->f_13, -uParam1->f_2);
	if (func_2987(iParam0))
	{
		uParam1->f_4 = func_2996(iParam0, uParam1);
		uParam1->f_5 = func_2986(iParam0, *uParam1, uParam1->f_4 + 1);
		uParam1->f_11 = func_2984(iParam0, *uParam1, uParam1->f_4);
		uParam1->f_12 = func_2984(iParam0, *uParam1, uParam1->f_4 + 1);
	}
	uParam1->f_1 = MISC::GET_HASH_KEY(func_2959(iParam0, uParam1->f_10, *uParam1));
	uParam1->f_7 = 1;
	if (func_133(iParam0))
	{
		func_130(iParam0, uParam1);
	}
}

int func_2996(int iParam0, var uParam1)//Position - 0x1319F1
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	iVar0 = __LIB_1__::func_724(&(uParam1->f_13), 0, 1);
	iVar1 = func_2991(iParam0, uParam1, iVar0);
	iVar2 = 0;
	iVar3 = 0;
	iVar4 = -1;
	func_2985(iParam0, uParam1->f_10, *uParam1, iVar2, &iVar3, &iVar4);
	while (iVar3 <= iVar1)
	{
		iVar2++;
		func_2985(iParam0, uParam1->f_10, *uParam1, iVar2, &iVar3, &iVar4);
	}
	iVar2 = (iVar2 - 1);
	if (iVar2 < 0)
	{
		iVar2 = 0;
	}
	return iVar2;
}

int func_2997(int iParam0, var uParam1, int iParam2)//Position - 0x131A61
{
	int iVar0;
	if (*uParam1 > 1)
	{
		iVar0 = 2;
		while (iVar0 <= func_2962(iParam0, uParam1->f_10))
		{
			iParam2 = (iParam2 + func_2961(iParam0, uParam1->f_10, (iVar0 - 1)));
			if (*uParam1 == iVar0)
			{
			}
			else
			{
				iVar0++;
			}
		}
	}
	return iParam2;
}

int func_2998(int iParam0)//Position - 0x131AAB
{
	if (__LIB_11__::func_215(&(Global_2681762.f_1912[iParam0 /*16*/]), 0) && __LIB_11__::func_215(&(Global_2681762.f_1912[iParam0 /*16*/]), 1))
	{
		return 1;
	}
	if (iParam0 == 0)
	{
		if (__LIB_2__::func_813(PLAYER::PLAYER_ID()) == 0)
		{
			return 1;
		}
	}
	return 0;
}

void func_2999(int iParam0, var uParam1, var uParam2)//Position - 0x131AF6
{
	var uVar0;
	int iVar1;
	if (NETWORK::NETWORK_IS_HOST_OF_THIS_SCRIPT())
	{
		iVar1 = NETWORK::NETWORK_GET_HOST_OF_SCRIPT(__LIB_1__::func_834(), -1, 0);
		if (iVar1 != __LIB_0__::func_162())
		{
			if (func_3004(iParam0))
			{
				if (!__LIB_11__::func_215(&(Global_2681762.f_1912[iParam0 /*16*/]), 0) || iParam0 == 2)
				{
					func_3002(iParam0, uParam1);
				}
				else
				{
					uParam1->f_8 = Global_2681762.f_1912[iParam0 /*16*/].f_8;
				}
			}
			else if (!uParam1->f_7)
			{
				func_3000(iParam0, uParam1);
			}
		}
	}
	if (uParam1->f_8 == -1)
	{
		return;
	}
	uParam2->f_3 = uParam1->f_8;
	Global_1578997.f_2 = uParam2->f_3;
	Global_1977018.f_2 = 1;
	AUDIO::REQUEST_SCRIPT_AUDIO_BANK("DLC_BATTLE/BTL_CLUB_OPEN_TRANSITION_CROWD", false, -1);
	if (func_120(iParam0, uParam2->f_3, &uVar0))
	{
		if (!MISC::IS_STRING_NULL_OR_EMPTY(&uVar0))
		{
			if (func_2974(iParam0, uParam2->f_3))
			{
				__LIB_11__::func_214(uParam2, 1);
			}
		}
	}
	else
	{
		__LIB_11__::func_214(uParam2, 1);
	}
}

void func_3000(int iParam0, var uParam1)//Position - 0x131BE0
{
	int iVar0;
	int iVar1;
	iVar0 = 0;
	iVar1 = func_3001(iParam0);
	if (!__LIB_11__::func_81(iParam0))
	{
		if (iVar1 > 1)
		{
			iVar0 = MISC::GET_RANDOM_INT_IN_RANGE(0, iVar1);
		}
	}
	if (iParam0 == 2)
	{
		if (__LIB_11__::func_217())
		{
			__LIB_11__::func_216(uParam1, 3);
		}
		else
		{
			__LIB_11__::func_80(uParam1, 3);
		}
		__LIB_11__::func_216(uParam1, 4);
	}
	uParam1->f_8 = func_2980(uParam1, iParam0, iVar0, 0, 0);
}

int func_3001(int iParam0)//Position - 0x131C41
{
	struct<2> Var0;
	func_59(iParam0, &Var0, 1);
	if (Var0.f_1 != 0)
	{
		Call_Loc(Var0.f_1);
		return StackVal;
	}
	return 0;
}

void func_3002(int iParam0, var uParam1)//Position - 0x131C63
{
	bool bVar0;
	var uVar1;
	int iVar2;
	int iVar3;
	bool bVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	int iVar8;
	int iVar9;
	bVar0 = false;
	if (func_120(iParam0, Global_2681762.f_1912[iParam0 /*16*/].f_8, &uVar1))
	{
		if (!MISC::IS_STRING_NULL_OR_EMPTY(&uVar1))
		{
			if (func_2974(iParam0, Global_2681762.f_1912[iParam0 /*16*/].f_8))
			{
				bVar0 = true;
			}
		}
	}
	else
	{
		bVar0 = true;
	}
	if (!bVar0)
	{
		return;
	}
	*uParam1 = { Global_2681762.f_1912[iParam0 /*16*/] };
	iVar2 = __LIB_1__::func_724(&(uParam1->f_13), 0, 1);
	iVar3 = __LIB_11__::func_311(uParam1->f_10);
	bVar4 = true;
	iVar5 = 1;
	while (iVar5 <= iVar3)
	{
		if (iVar2 < func_2990(iParam0, uParam1, iVar5))
		{
			*uParam1 = iVar5;
			if (iVar5 == 1)
			{
				uParam1->f_2 = func_2997(iParam0, uParam1, iVar2);
			}
			else
			{
				uParam1->f_2 = func_2997(iParam0, uParam1, (iVar2 - func_2990(iParam0, uParam1, (iVar5 - 1))));
			}
			bVar4 = false;
			Jump @227; //curOff = 212
		}
		iVar5++;
	}
	if (!bVar4)
	{
		if (*uParam1 == __LIB_11__::func_311(uParam1->f_10))
		{
			iVar6 = func_2991(iParam0, uParam1, iVar2);
			iVar7 = func_2961(iParam0, uParam1->f_10, *uParam1);
			if ((iVar7 - iVar6) <= 30000)
			{
				bVar4 = true;
			}
		}
	}
	if (iParam0 == 2)
	{
		if (!__LIB_11__::func_215(uParam1, 4))
		{
			if (__LIB_11__::func_217())
			{
				__LIB_11__::func_216(uParam1, 3);
			}
			else
			{
				__LIB_11__::func_80(uParam1, 3);
			}
			__LIB_11__::func_216(uParam1, 4);
		}
		uParam1->f_8 = __LIB_40__::func_853(uParam1);
		uParam1->f_2 = (func_2961(iParam0, uParam1->f_10, *uParam1) - __LIB_40__::func_850(*uParam1));
		uParam1->f_10 = func_2979(iParam0, uParam1->f_8, 0);
		*uParam1 = 1;
		bVar4 = false;
	}
	if (bVar4)
	{
		uParam1->f_8 = func_2980(uParam1, iParam0, uParam1->f_8, 1, 0);
		uParam1->f_10 = func_2979(iParam0, uParam1->f_8, 0);
		if (iParam0 == 0)
		{
			*uParam1 = MISC::GET_RANDOM_INT_IN_RANGE(1, (func_2962(iParam0, uParam1->f_10) / 2));
		}
		else
		{
			*uParam1 = 1;
		}
	}
	uParam1->f_3 = func_2960(iParam0, uParam1, 0);
	if (bVar4)
	{
		if (iParam0 == 0)
		{
			uParam1->f_3 = func_2960(iParam0, uParam1, 0);
			iVar8 = (func_2961(iParam0, uParam1->f_10, *uParam1) / 4);
			uParam1->f_2 = func_2997(iParam0, uParam1, MISC::GET_RANDOM_INT_IN_RANGE(iVar8, iVar8 * 3));
		}
		else
		{
			uParam1->f_2 = 0;
		}
	}
	else if (iParam0 == 0)
	{
		if (*uParam1 > (func_2962(iParam0, uParam1->f_10) / 2))
		{
			*uParam1 = MISC::GET_RANDOM_INT_IN_RANGE(1, (func_2962(iParam0, uParam1->f_10) / 2));
			uParam1->f_3 = func_2960(iParam0, uParam1, 0);
			iVar9 = (func_2961(iParam0, uParam1->f_10, *uParam1) / 4);
			uParam1->f_2 = func_2997(iParam0, uParam1, MISC::GET_RANDOM_INT_IN_RANGE(iVar9, iVar9 * 3));
		}
	}
	__LIB_0__::func_627(&(uParam1->f_13), 0, 0);
	uParam1->f_13 = NETWORK::GET_TIME_OFFSET(uParam1->f_13, -uParam1->f_2);
	if (func_2987(iParam0))
	{
		uParam1->f_4 = func_2996(iParam0, uParam1);
		uParam1->f_5 = func_2986(iParam0, *uParam1, uParam1->f_4 + 1);
		uParam1->f_11 = func_2984(iParam0, *uParam1, uParam1->f_4);
		uParam1->f_12 = func_2984(iParam0, *uParam1, uParam1->f_4 + 1);
	}
	uParam1->f_1 = MISC::GET_HASH_KEY(func_2959(iParam0, uParam1->f_10, *uParam1));
}

int func_3004(int iParam0)//Position - 0x131F9C
{
	if (iParam0 == 0)
	{
		if (__LIB_2__::func_813(PLAYER::PLAYER_ID()) == 0)
		{
			return 0;
		}
	}
	if (Global_2681762.f_1912[iParam0 /*16*/].f_8 != -1)
	{
		return 1;
	}
	return 0;
}

int func_3005()//Position - 0x131FD0
{
	if (NETWORK::NETWORK_IS_HOST_OF_THIS_SCRIPT())
	{
		if ((Local_116.f_12.f_8 == -1 || Local_150.f_1198.f_6 == 0) || Local_150.f_1198.f_6 == 1)
		{
			return 1;
		}
	}
	return func_49();
}

void func_3006()//Position - 0x132010
{
	if (!Global_1973200 && !NETWORK::NETWORK_IS_ACTIVITY_SESSION())
	{
		if (!BitTest(Local_217.f_4, 0))
		{
			if (__LIB_11__::func_254(PLAYER::PLAYER_ID()))
			{
				if (__LIB_1__::func_167(__LIB_0__::func_797()))
				{
					MISC::SET_BIT(&(Local_217.f_4), 3);
				}
				else
				{
					MISC::SET_BIT(&(Local_217.f_4), 1);
				}
				MISC::SET_BIT(&(Local_217.f_4), 0);
			}
		}
		if (BitTest(Local_217.f_4, 1))
		{
			if (func_3012())
			{
				func_3011();
			}
			else if (BitTest(Local_217.f_4, 2))
			{
				NETWORK::NETWORK_OVERRIDE_CLOCK_TIME(__LIB_11__::func_219(), 0, 0);
			}
			else
			{
				NETWORK::NETWORK_OVERRIDE_CLOCK_TIME(16, 0, 0);
			}
			func_3009();
		}
		else if (BitTest(Local_217.f_4, 3))
		{
			if (Local_116.f_28 != -1)
			{
				NETWORK::NETWORK_OVERRIDE_CLOCK_TIME(Local_116.f_28, 0, 0);
			}
		}
		else if (!Local_150.f_1214 || Global_1578997.f_4)
		{
			NETWORK::NETWORK_OVERRIDE_CLOCK_TIME(7, 0, 0);
			if (!__LIB_11__::func_233())
			{
				func_3007();
			}
		}
	}
}

void func_3007()//Position - 0x1320F4
{
	int iVar0;
	int iVar1;
	float fVar2;
	float fVar3;
	int iVar4;
	int iVar5;
	int iVar6;
	int iVar7;
	NETWORK::NETWORK_OVERRIDE_CLOCK_TIME(7, 0, 0);
	Local_150.f_1215 = 0;
	iVar0 = 0;
	while (iVar0 < func_2962(0, 9))
	{
		Local_150.f_1215 = (Local_150.f_1215 + func_2961(0, 9, iVar0 + 1));
		iVar0++;
	}
	if (Local_150.f_1215 > 0)
	{
		iVar1 = func_3008(0, &(Local_116.f_12), &(Local_150.f_1198));
		if (iVar1 > 0)
		{
			fVar2 = ((SYSTEM::TO_FLOAT(iVar1) / SYSTEM::TO_FLOAT(Local_150.f_1215)) * 12f);
			fVar3 = (7f + fVar2);
			iVar4 = SYSTEM::FLOOR(((fVar3 * 60f) * 60f));
			iVar5 = SYSTEM::FLOOR(fVar3);
			iVar6 = SYSTEM::FLOOR((SYSTEM::TO_FLOAT((iVar4 - iVar5 * 60 * 60)) / 60f));
			iVar7 = ((iVar4 - iVar6 * 60) - iVar5 * 60 * 60);
			if (iVar5 < 0)
			{
				iVar5 = 7;
			}
			if (iVar6 < 0)
			{
				iVar6 = 0;
			}
			if (iVar7 < 0)
			{
				iVar7 = 0;
			}
			NETWORK::NETWORK_OVERRIDE_CLOCK_TIME(iVar5, iVar6, iVar7);
			Local_150.f_1214 = 1;
			Global_1578997.f_4 = 0;
			NETWORK::NETWORK_OVERRIDE_CLOCK_RATE((Local_150.f_1215 / 720));
		}
	}
}

int func_3008(int iParam0, var uParam1, var uParam2)//Position - 0x1321FB
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
	if (uParam2->f_6 == 0)
	{
		return -1;
	}
	iVar0 = __LIB_1__::func_724(&(uParam1->f_13), 0, 1);
	iVar1 = func_2961(iParam0, uParam1->f_10, *uParam1);
	iVar2 = (func_2960(iParam0, uParam1, 0) - iVar0);
	iVar3 = (iVar1 - iVar2);
	iVar4 = iVar3;
	if (*uParam1 > 1)
	{
		iVar4 = (func_2990(iParam0, uParam1, (*uParam1 - 1)) + iVar3);
	}
	return iVar4;
}

void func_3009()//Position - 0x13225E
{
	if (!BitTest(Local_217.f_4, 4))
	{
		if (BitTest(Local_217.f_4, 1))
		{
			if (__LIB_2__::func_813(PLAYER::PLAYER_ID()) == 4)
			{
				GRAPHICS::CLEAR_TIMECYCLE_MODIFIER();
			}
			else
			{
				GRAPHICS::SET_TIMECYCLE_MODIFIER("h4_beachparty_day");
			}
		}
		MISC::SET_BIT(&(Local_217.f_4), 4);
	}
}

void func_3011()//Position - 0x1322AB
{
	int iVar0;
	if (!BitTest(Local_217.f_4, 5))
	{
		Local_217.f_0 = 16;
		Local_217.f_3 = NETWORK::GET_NETWORK_TIME();
		MISC::CLEAR_BIT(&(Local_217.f_4), 4);
		MISC::SET_BIT(&(Local_217.f_4), 5);
	}
	iVar0 = MISC::ABSI(NETWORK::GET_TIME_DIFFERENCE(Local_217.f_3, NETWORK::GET_NETWORK_TIME()));
	if (iVar0 >= 20)
	{
		iVar0 = (iVar0 / 20);
		if (iVar0 < 1)
		{
			iVar0 = 1;
		}
		Local_217.f_2 = (Local_217.f_2 + iVar0);
		Local_217.f_3 = NETWORK::GET_NETWORK_TIME();
	}
	if (Local_217.f_2 >= 60)
	{
		Local_217.f_2 = 0;
		Local_217.f_1++;
	}
	if (Local_217.f_1 >= 60)
	{
		Local_217.f_1 = 0;
		Local_217.f_0++;
	}
	if (Local_217.f_0 >= __LIB_11__::func_219())
	{
		Local_217.f_1 = 0;
		Local_217.f_0 = 0;
		MISC::SET_BIT(&(Local_217.f_4), 2);
	}
	NETWORK::NETWORK_OVERRIDE_CLOCK_TIME(Local_217.f_0, Local_217.f_1, Local_217.f_2);
}

int func_3012()//Position - 0x132383
{
	if (!BitTest(Local_217.f_4, 2) && __LIB_2__::func_813(PLAYER::PLAYER_ID()) == 4)
	{
		return 1;
	}
	return 0;
}

void func_3013()//Position - 0x1323AA
{
	if ((!NETWORK::NETWORK_IS_ACTIVITY_SESSION() && __LIB_20__::func_842()) && __LIB_2__::func_896())
	{
		PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 37 /*INPUT_SELECT_WEAPON*/, true);
		PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 157 /*INPUT_SELECT_WEAPON_UNARMED*/, true);
		PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 159 /*INPUT_SELECT_WEAPON_HANDGUN*/, true);
		PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 160 /*INPUT_SELECT_WEAPON_SHOTGUN*/, true);
		PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 161 /*INPUT_SELECT_WEAPON_SMG*/, true);
		PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 162 /*INPUT_SELECT_WEAPON_AUTO_RIFLE*/, true);
		PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 163 /*INPUT_SELECT_WEAPON_SNIPER*/, true);
		PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 164 /*INPUT_SELECT_WEAPON_HEAVY*/, true);
		PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 165 /*INPUT_SELECT_WEAPON_SPECIAL*/, true);
		PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 158 /*INPUT_SELECT_WEAPON_MELEE*/, true);
		PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 25 /*INPUT_AIM*/, true);
		PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 36 /*INPUT_DUCK*/, true);
		PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 53 /*INPUT_WEAPON_SPECIAL*/, true);
		PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 54 /*INPUT_WEAPON_SPECIAL_TWO*/, true);
		PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 47 /*INPUT_DETONATE*/, true);
		PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 140 /*INPUT_MELEE_ATTACK_LIGHT*/, true);
		PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 141 /*INPUT_MELEE_ATTACK_HEAVY*/, true);
		PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 263 /*INPUT_MELEE_ATTACK1*/, true);
		PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 264 /*INPUT_MELEE_ATTACK2*/, true);
		PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 142 /*INPUT_MELEE_ATTACK_ALTERNATE*/, true);
		PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 143 /*INPUT_MELEE_BLOCK*/, true);
		PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 24 /*INPUT_ATTACK*/, true);
		PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 257 /*INPUT_ATTACK2*/, true);
		PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 44 /*INPUT_COVER*/, true);
		__LIB_3__::func_636();
		if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
		{
			if (!__LIB_11__::func_254(PLAYER::PLAYER_ID()))
			{
				PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 337 /*INPUT_VEH_HYDRAULICS_CONTROL_TOGGLE*/, true);
				PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 74 /*INPUT_VEH_HEADLIGHT*/, true);
			}
			PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 282 /*INPUT_VEH_GUN_LEFT*/, true);
			PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 283 /*INPUT_VEH_GUN_RIGHT*/, true);
			PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 284 /*INPUT_VEH_GUN_UP*/, true);
			PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 285 /*INPUT_VEH_GUN_DOWN*/, true);
			PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 69 /*INPUT_VEH_ATTACK*/, true);
			PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 70 /*INPUT_VEH_ATTACK2*/, true);
			PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 114 /*INPUT_VEH_FLY_ATTACK*/, true);
			PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 99 /*INPUT_VEH_SELECT_NEXT_WEAPON*/, true);
			PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 100 /*INPUT_VEH_SELECT_PREV_WEAPON*/, true);
			PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 102 /*INPUT_VEH_JUMP*/, true);
			PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 351 /*INPUT_VEH_ROCKET_BOOST*/, true);
			PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 354 /*INPUT_VEH_BIKE_WINGS*/, true);
			PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 68 /*INPUT_VEH_AIM*/, true);
			PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 345 /*INPUT_VEH_MELEE_HOLD*/, true);
			PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 346 /*INPUT_VEH_MELEE_LEFT*/, true);
			PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 347 /*INPUT_VEH_MELEE_RIGHT*/, true);
			PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 91 /*INPUT_VEH_PASSENGER_AIM*/, true);
			PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 92 /*INPUT_VEH_PASSENGER_ATTACK*/, true);
			PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 101 /*INPUT_VEH_ROOF*/, true);
		}
		else
		{
			PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 22 /*INPUT_JUMP*/, true);
		}
		PED::SET_PED_RESET_FLAG(PLAYER::PLAYER_PED_ID(), 102, true);
	}
	if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
	{
		PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 81 /*INPUT_VEH_NEXT_RADIO*/, true);
		PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 82 /*INPUT_VEH_PREV_RADIO*/, true);
		PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 83 /*INPUT_VEH_NEXT_RADIO_TRACK*/, true);
		PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 84 /*INPUT_VEH_PREV_RADIO_TRACK*/, true);
		PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 85 /*INPUT_VEH_RADIO_WHEEL*/, true);
	}
}

void func_3014()//Position - 0x1325A7
{
	if (!Global_2653189)
	{
		__LIB_2__::func_135(1);
	}
}

int func_3017()//Position - 0x132637
{
	if (NETWORK::NETWORK_IS_IN_TUTORIAL_SESSION())
	{
		if (NETWORK::NETWORK_GET_PLAYER_TUTORIAL_SESSION_INSTANCE(PLAYER::PLAYER_ID()) == 63)
		{
			if (!__LIB_2__::func_896())
			{
				__LIB_20__::func_843(1);
			}
			if (func_1225((120f + 10f)))
			{
				if (!__LIB_20__::func_842())
				{
					__LIB_27__::func_803(1);
				}
				if (!__LIB_41__::func_117())
				{
					__LIB_34__::func_163(1);
				}
			}
			return 1;
		}
	}
	if (!__LIB_2__::func_896())
	{
		if (__LIB_20__::func_842())
		{
			__LIB_27__::func_803(0);
		}
		return 0;
	}
	if (NETWORK::NETWORK_IS_ACTIVITY_SESSION())
	{
		return __LIB_20__::func_842();
	}
	if (func_1225((120f + 10f)))
	{
		if (!__LIB_20__::func_842())
		{
			__LIB_27__::func_803(1);
		}
	}
	else if (__LIB_20__::func_842())
	{
		__LIB_27__::func_803(0);
	}
	return __LIB_20__::func_842();
}

bool func_3026(int iParam0)//Position - 0x1327D9
{
	return Local_116.f_29 == iParam0;
}

void func_3033()//Position - 0x1328BA
{
	__LIB_42__::func_511();
	AUDIO::SET_AUDIO_FLAG("UseQuietSceneSoftVersion", false);
	func_1190(&Local_116, &uLocal_152, &(Local_150.f_1), 0, 1, 0);
	__LIB_43__::func_632(&(Local_150.f_170), !PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false));
	__LIB_40__::func_851(&(Local_150.f_1123));
	func_56(0, &(Local_150.f_1198), &(Local_116.f_12));
	func_3036(&(Local_150.f_1207));
	func_1809();
	if (BitTest(Local_217.f_4, 4))
	{
		GRAPHICS::CLEAR_TIMECYCLE_MODIFIER();
	}
	Global_1578997.f_6 = 0;
	Global_1973199 = 0;
	__LIB_2__::func_135(0);
	func_3035();
	__LIB_0__::func_202();
}

void func_3035()//Position - 0x132949
{
	if ((Local_150.f_1214 || BitTest(Local_217.f_4, 1)) || BitTest(Local_217.f_4, 3))
	{
		NETWORK::NETWORK_CLEAR_CLOCK_TIME_OVERRIDE();
		MISC::CLEAR_OVERRIDE_WEATHER();
	}
}

void func_3036(var uParam0)//Position - 0x13297B
{
	if (*uParam0)
	{
		__LIB_1__::func_376(PLAYER::PLAYER_ID(), 1, 0, 0);
		if (__LIB_0__::func_121(PLAYER::PLAYER_PED_ID()))
		{
			TASK::CLEAR_PED_TASKS(PLAYER::PLAYER_PED_ID());
		}
	}
	__LIB_9__::func_50(&Global_1579024, 9);
	*uParam0 = 0;
	uParam0->f_1 = 0;
	__LIB_0__::func_794(&(uParam0->f_2));
	PLAYER::SET_MAX_WANTED_LEVEL(5);
	PLAYER::SET_WANTED_LEVEL_MULTIPLIER(1f);
	PLAYER::SET_DISPATCH_COPS_FOR_PLAYER(PLAYER::PLAYER_ID(), true);
}

void func_3068()//Position - 0x133054
{
	Global_1973199 = 0;
	NETWORK::NETWORK_SET_THIS_SCRIPT_IS_NETWORK_SCRIPT(32, false, func_3107());
	__LIB_0__::func_895(0, -1, 0);
	NETWORK::NETWORK_REGISTER_HOST_BROADCAST_VARIABLES(&Local_116, 30, 0);
	NETWORK::NETWORK_REGISTER_PLAYER_BROADCAST_VARIABLES(&uLocal_117, 33, 0);
	NETWORK::NETWORK_REGISTER_PLAYER_BROADCAST_VARIABLES(&uLocal_152, 65, 0);
	__LIB_11__::func_232(&(Local_150.f_170));
	NETWORK::RESERVE_LOCAL_NETWORK_MISSION_PEDS(2);
	if (!__LIB_0__::func_934())
	{
		func_3033();
	}
	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
	}
	else
	{
		func_3033();
	}
	func_3069();
}

void func_3069()//Position - 0x1330BB
{
	func_3103();
	__LIB_9__::func_409(&(Local_150.f_1));
	func_3091(&(Local_150.f_170));
	func_3070(&(Local_150.f_1123));
	AUDIO::SET_AUDIO_FLAG("UseQuietSceneSoftVersion", true);
	if (__LIB_0__::func_121(PLAYER::PLAYER_PED_ID()))
	{
		PED::SET_PED_USING_ACTION_MODE(PLAYER::PLAYER_PED_ID(), false, -1, 0);
	}
}

void func_3070(var uParam0)//Position - 0x133100
{
	__LIB_43__::func_639(uParam0, 21, 1258118/*func_3078*/, 1258053/*func_3077*/);
}

void func_3077(var uParam0)//Position - 0x133245
{
	CAM::SET_CAM_COORD(*uParam0, 4893.244f, -4907.3403f, 4.6251f);
	CAM::SET_CAM_ROT(*uParam0, -27.0617f, -1.5099f, -4.7248f, 2);
	CAM::SET_CAM_FOV(*uParam0, 54.2877f);
}

struct<60> func_3078(int iParam0)//Position - 0x133286
{
	struct<60> Var0;
	int iVar1;
	Var0.f_7 = 1115815936;
	Var0.f_8 = 1120403456;
	Var0.f_16 = -1;
	Var0.f_20 = 1115815936;
	Var0.f_22 = -1;
	iVar1 = PLAYER::PLAYER_PED_ID();
	switch (iParam0)
	{
		case 0:
			__LIB_11__::func_229(&Var0, 4892.712f, -4927.092f, 3.3621f, 0f, 0f, 0f, 38f, 5000);
			__LIB_11__::func_228(&Var0, &iVar1, 0f, 0.5f, 0.5f);
			__LIB_31__::func_373(&Var0, 4890.936f, -4921.756f, 5.7178f, 5f, 5f, 5000, 1, 0f);
			__LIB_11__::func_226(&Var0, 1f, "HAND_SHAKE");
			break;
		case 1:
			__LIB_11__::func_229(&Var0, 4894.838f, -4935.705f, 4.8209f, -5.3739f, -3.6228f, 6.8674f, 22f, 4000);
			__LIB_11__::func_225(&Var0, 4894.838f, -4935.705f, 4.8209f, -5.3739f, -3.6228f, 6.8674f, 4897.2686f, -4935.403f, 4.9754f, -5.3739f, 3f, 6.8674f, 4000, 0, -1);
			__LIB_11__::func_226(&Var0, 0.2f, "HAND_SHAKE");
			break;
		case 2:
			__LIB_11__::func_229(&Var0, 4892.712f, -4927.092f, 3.3621f, 0f, 0f, 0f, 27f, 5000);
			__LIB_11__::func_228(&Var0, &iVar1, -0.5f, 0f, 0.4f);
			__LIB_31__::func_373(&Var0, 4891.001f, -4925.459f, 5.9175f, 2.375f, 10f, 5000, 1, 20f);
			__LIB_11__::func_226(&Var0, 1f, "HAND_SHAKE");
			break;
		case 3:
			__LIB_11__::func_229(&Var0, 4895.684f, -4905.546f, 5.7263f, -19.2724f, 5f, 163.8496f, 38f, 4000);
			__LIB_11__::func_225(&Var0, 4895.684f, -4905.546f, 5.7263f, -19.2724f, 5f, 163.8496f, 4892.088f, -4905.079f, 5.7395f, -19.4164f, -5f, -156.668f, 4000, 0, -1);
			break;
		case 4:
			__LIB_11__::func_229(&Var0, 4892.712f, -4927.092f, 3.3621f, 0f, 0f, 0f, 27f, 8000);
			__LIB_11__::func_228(&Var0, &iVar1, -0.5f, 0f, 0.2f);
			__LIB_31__::func_373(&Var0, 4893.326f, -4908.434f, 5.4675f, 2.55f, 15f, 8000, 1, 35.5f);
			__LIB_11__::func_226(&Var0, 1f, "HAND_SHAKE");
			break;
		case 5:
			__LIB_11__::func_229(&Var0, 4892.712f, -4927.092f, 3.3621f, 0f, 0f, 0f, 38f, 8000);
			__LIB_11__::func_228(&Var0, &iVar1, 0.6f, 0f, 0.5f);
			__LIB_31__::func_373(&Var0, 4894.868f, -4913.002f, 6.416f, 6.575f, 15f, 8000, 1, 187.75f);
			__LIB_11__::func_226(&Var0, 1f, "HAND_SHAKE");
			break;
		case 6:
			__LIB_11__::func_229(&Var0, 4891.046f, -4916.6206f, 3.3667f, 0f, 0f, 0f, 40f, 6000);
			__LIB_11__::func_224(&Var0, 4891.221f, -4924.746f, 6.6417f);
			__LIB_31__::func_373(&Var0, 4891.046f, -4924.871f, 4.6667f, 3.725f, 5f, 6000, 1, 0f);
			break;
		case 7:
			__LIB_11__::func_229(&Var0, 4888.4907f, -4905.5356f, 8.857f, -24.3931f, 0f, -155.9553f, 38f, 4000);
			__LIB_11__::func_225(&Var0, 4888.4907f, -4905.5356f, 8.857f, -24.3931f, 0f, -155.9553f, 4889.183f, -4905.0874f, 8.9366f, -32.1697f, 0f, -149.0301f, 4000, 0, -1);
			break;
		case 8:
			__LIB_11__::func_229(&Var0, 4891.8647f, -4902.6387f, 4.9566f, -12.4271f, 0f, -164.8519f, 38f, 4000);
			__LIB_11__::func_225(&Var0, 4891.8647f, -4902.6387f, 4.9566f, -12.4271f, 0f, -164.8519f, 4894.878f, -4902.744f, 4.9566f, -12.4271f, 0f, 165.6289f, 4000, 0, -1);
			break;
		case 9:
			__LIB_11__::func_229(&Var0, 4893.703f, -4931.5327f, 6.4433f, -6.3814f, 0f, 0.6821f, 28f, 4000);
			__LIB_11__::func_225(&Var0, 4893.703f, -4931.5327f, 6.4433f, -6.3814f, 0f, 0.6821f, 4893.768f, -4934.323f, 6.7553f, -13.8907f, 0f, 0.6821f, 4000, 0, -1);
			break;
		case 10:
			__LIB_11__::func_229(&Var0, 4892.712f, -4927.092f, 3.3621f, 0f, 0f, 0f, 27f, 12000);
			__LIB_11__::func_228(&Var0, &iVar1, 0f, 0f, 0f);
			__LIB_31__::func_373(&Var0, 4891.512f, -4922.792f, 6.9621f, 5f, 25f, 12000, 1, 270f);
			__LIB_11__::func_226(&Var0, 1f, "HAND_SHAKE");
			break;
		case 11:
			__LIB_11__::func_229(&Var0, 4894.6694f, -4932.5312f, 5.7403f, -3.9044f, -15f, 2.7178f, 27f, 4000);
			__LIB_11__::func_225(&Var0, 4894.6694f, -4932.5312f, 5.7403f, -3.9044f, -15f, 2.7178f, 4893.9644f, -4917.506f, 4.7126f, -3.9044f, 15f, 2.7178f, 4000, 0, -1);
			break;
		case 12:
			__LIB_11__::func_229(&Var0, 4895.1216f, -4906.559f, 3.1672f, 8.6527f, -0.033f, -179.073f, 32f, 4000);
			__LIB_11__::func_225(&Var0, 4895.1216f, -4906.559f, 3.1672f, 8.6527f, -0.033f, -179.073f, 4891.547f, -4906.397f, 3.1692f, 5.753f, -0.033f, -179.073f, 4000, 0, -1);
			break;
		case 13:
			__LIB_11__::func_229(&Var0, 4892.712f, -4927.092f, 3.3621f, 0f, 0f, 0f, 18f, 6000);
			__LIB_11__::func_228(&Var0, &iVar1, 0f, 0f, 0.3f);
			__LIB_31__::func_373(&Var0, 4892.912f, -4910.092f, 4.9621f, 5f, 15f, 6000, 1, 30f);
			__LIB_11__::func_226(&Var0, 1f, "HAND_SHAKE");
			break;
		case 14:
			__LIB_11__::func_229(&Var0, 4892.712f, -4927.092f, 3.3621f, 0f, 0f, 0f, 38f, 8000);
			__LIB_11__::func_228(&Var0, &iVar1, 0.6f, 0f, 0.5f);
			__LIB_31__::func_373(&Var0, 4894.868f, -4913.002f, 6.416f, 6.575f, 15f, 8000, 1, 187.75f);
			__LIB_11__::func_226(&Var0, 1f, "HAND_SHAKE");
			break;
		case 15:
			__LIB_11__::func_229(&Var0, 4908.319f, -4913.263f, 5.5272f, -11.8698f, 0.0192f, 101.9075f, 22f, 4000);
			__LIB_11__::func_225(&Var0, 4908.319f, -4913.263f, 5.5272f, -11.8698f, 0.0192f, 101.9075f, 4907.947f, -4912.6743f, 5.5644f, -9.2573f, -0.2876f, 71.3706f, 4000, 0, -1);
			break;
		case 16:
			__LIB_11__::func_229(&Var0, 4891.078f, -4916.3076f, 3.3669f, 0f, 0f, 0f, 28f, 8000);
			__LIB_11__::func_224(&Var0, 4893.353f, -4905.108f, 3.55f);
			__LIB_31__::func_373(&Var0, 4893.328f, -4905.583f, 4.4419f, 3.5f, 10f, 8000, -1, 319f);
			break;
		case 17:
			__LIB_11__::func_229(&Var0, 4895.175f, -4906.7334f, 4.068f, -31.2324f, 0f, 49.4556f, 27f, 4000);
			__LIB_11__::func_225(&Var0, 4895.175f, -4906.7334f, 4.068f, -31.2324f, 0f, 49.4556f, 4893.9165f, -4906.657f, 4.0392f, -24.9267f, 0f, 59.6199f, 4000, 0, -1);
			break;
		case 18:
			__LIB_11__::func_229(&Var0, 4892.674f, -4902.7056f, 5.3624f, -28.7746f, 0.1144f, -166.4138f, 38f, 4000);
			__LIB_11__::func_225(&Var0, 4892.674f, -4902.7056f, 5.3624f, -28.7746f, 0.1144f, -166.4138f, 4892.459f, -4903.2056f, 5.5034f, -18.4104f, 0.1144f, -173.3162f, 4000, 0, -1);
			break;
		case 19:
			__LIB_11__::func_229(&Var0, 4891.078f, -4916.3076f, 3.3669f, 0f, 0f, 0f, 38f, 8000);
			__LIB_11__::func_224(&Var0, 4893.328f, -4909.508f, 3.3669f);
			__LIB_31__::func_373(&Var0, 4895.203f, -4913.683f, 4.8419f, 7f, 15f, 8000, 1, 200f);
			break;
		case 20:
			__LIB_11__::func_229(&Var0, 4896.3f, -4906.8115f, 5.2439f, -19.9218f, -5f, 164.6957f, 42f, 4000);
			__LIB_11__::func_225(&Var0, 4896.3f, -4906.8115f, 5.2439f, -19.9218f, -5f, 164.6957f, 4892.6875f, -4905.8394f, 5.2439f, -19.6277f, 5f, 163.1004f, 4000, 0, -1);
			__LIB_11__::func_226(&Var0, 0.6f, "HAND_SHAKE");
			break;
	}
	func_3079(&Var0);
	return Var0;
}

void func_3079(int* iParam0)//Position - 0x133C1D
{
	int iVar0;
	int iVar1;
	iVar0 = Global_1578997;
	if (__LIB_11__::func_223(iParam0, 2))
	{
		iParam0->f_22 = __LIB_1__::func_723(SYSTEM::ROUND((IntToFloat(iParam0->f_22) * __LIB_11__::func_222(iVar0))), 3000);
	}
	else if (__LIB_11__::func_223(iParam0, 0))
	{
		iVar1 = SYSTEM::ROUND((IntToFloat(iParam0->f_22) * __LIB_11__::func_222(iVar0)));
		iParam0->f_22 = __LIB_1__::func_723(iVar1, 3000);
	}
}

void func_3091(var uParam0)//Position - 0x133E70
{
	var uVar0;
	func_3093(&uVar0);
	__LIB_11__::func_428(uParam0, &uVar0);
}

void func_3093(var uParam0)//Position - 0x133EAB
{
	uParam0->f_1 = 1262501/*func_3101*/;
	*uParam0 = 1262421/*func_3100*/;
	uParam0->f_2 = 1262051/*__LIB_11__::func_231*/;
	uParam0->f_3 = 1261997/*func_3098*/;
	uParam0->f_4 = 1261933/*func_3096*/;
	uParam0->f_5 = 1261925/*__LIB_0__::func_467*/;
	uParam0->f_8 = 1;
	uParam0->f_7 = 30502;
	uParam0->f_6 = 7249;
	uParam0->f_9 = 1;
	uParam0->f_10 = 600858684;
	uParam0->f_11 = 3;
	uParam0->f_13 = 1261333/*__LIB_11__::func_230*/;
	uParam0->f_12 = 1;
}

void func_3096()//Position - 0x13416D
{
	int iVar0;
	iVar0 = __LIB_1__::func_677(99, -1);
	__LIB_1__::func_875(99, iVar0 + 1, -1);
}

bool func_3098(var uParam0)//Position - 0x1341AD
{
	return ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), 4894.948f, -4900.7305f, 5.211586f, 4893.2f, -4938.884f, 2.375023f, 25.25f, false, true, 0);
}

int func_3100(int iParam0, int iParam1, var uParam2)//Position - 0x134355
{
	*uParam2 = 0;
	switch (iParam0)
	{
		case 0:
			*uParam2 = ENTITY::IS_ENTITY_IN_ANGLED_AREA(iParam1, 4894.948f, -4900.7305f, 5.211586f, 4893.2f, -4938.884f, 2.375023f, 25.25f, false, true, 0);
			break;
		default:
			return 0;
	}
	return 1;
}

int func_3101(int iParam0, int iParam1, var uParam2)//Position - 0x1343A5
{
	*uParam2 = 0;
	if (iParam0 < 0 || iParam0 > 1)
	{
		return 0;
	}
	*uParam2 = func_3102(iParam1);
	return 1;
}

bool func_3102(int iParam0)//Position - 0x1343D0
{
	return (((ENTITY::IS_ENTITY_IN_ANGLED_AREA(iParam0, 4914.123f, -4938.5303f, 3.739296f, 4897.2676f, -4949.203f, 9.616795f, 10.25f, false, true, 0) || ENTITY::IS_ENTITY_IN_ANGLED_AREA(iParam0, 4955.2324f, -4921.639f, 3.946564f, 4961.621f, -4915.046f, 7.725353f, 4f, false, true, 0)) || ENTITY::IS_ENTITY_IN_ANGLED_AREA(iParam0, 4945.0435f, -4868.8047f, 2.703918f, 4953.5366f, -4871.6113f, 7.49075f, 4f, false, true, 0)) || ENTITY::IS_ENTITY_IN_ANGLED_AREA(iParam0, 4899.554f, -4903.5693f, 4.622703f, 4887.454f, -4903.728f, 6.889682f, 8.5f, false, true, 0));
}

void func_3103()//Position - 0x134492
{
	if (!NETWORK::NETWORK_IS_ACTIVITY_SESSION() && !__LIB_11__::func_254(PLAYER::PLAYER_ID()))
	{
		NETWORK::NETWORK_OVERRIDE_CLOCK_TIME(7, 0, 0);
		MISC::SET_OVERRIDE_WEATHEREX("EXTRASUNNY", true);
	}
}

int func_3107()//Position - 0x134644
{
	int iVar0;
	if (__LIB_2__::func_813(PLAYER::PLAYER_ID()) == 0)
	{
		if (__LIB_1__::func_520(1))
		{
			iVar0 = __LIB_0__::func_797();
			if (iVar0 != __LIB_0__::func_162())
			{
				return iVar0;
			}
		}
	}
	return -1;
}

