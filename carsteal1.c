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
	float fLocal_28 = 0f;
	int iLocal_29 = 0;
	int iLocal_30 = 0;
	bool bLocal_31 = 0;
	bool bLocal_32 = 0;
	bool bLocal_33 = 0;
	bool bLocal_34 = 0;
	bool bLocal_35 = 0;
	int iLocal_36 = 0;
	int iLocal_37 = 0;
	bool bLocal_38 = 0;
	int iLocal_39 = 0;
	int iLocal_40 = 0;
	bool bLocal_41 = 0;
	bool bLocal_42 = 0;
	int iLocal_43 = 0;
	int iLocal_44 = 0;
	int iLocal_45 = 0;
	var uLocal_46 = 0;
	bool bLocal_47 = 0;
	int iLocal_48 = 0;
	bool bLocal_49 = 0;
	int iLocal_50 = 0;
	bool bLocal_51 = 0;
	var uLocal_52 = 0;
	bool bLocal_53 = 0;
	bool bLocal_54 = 0;
	bool bLocal_55 = 0;
	bool bLocal_56 = 0;
	bool bLocal_57 = 0;
	bool bLocal_58 = 0;
	bool bLocal_59 = 0;
	bool bLocal_60 = 0;
	bool bLocal_61 = 0;
	bool bLocal_62 = 0;
	float fLocal_63[340] = { 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f };
	float fLocal_64[340] = { 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f };
	float fLocal_65[340] = { 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f };
	float fLocal_66[340] = { 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f };
	float fLocal_67[340] = { 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f };
	float fLocal_68 = 0f;
	float fLocal_69 = 0f;
	float fLocal_70 = 0f;
	float fLocal_71 = 0f;
	float fLocal_72[60] = { 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f };
	float fLocal_73[60] = { 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f };
	float fLocal_74[60] = { 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f };
	float fLocal_75[60] = { 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f };
	float fLocal_76[60] = { 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f };
	float fLocal_77[60] = { 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f };
	float fLocal_78[25] = { 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f };
	float fLocal_79[25] = { 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f };
	float fLocal_80[25] = { 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f };
	float fLocal_81[25] = { 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f };
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
	float fLocal_102 = 0f;
	int iLocal_103[340] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
	int iLocal_104[340] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
	int iLocal_105[340] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
	int iLocal_106[60] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
	int iLocal_107[60] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
	int iLocal_108[60] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
	int iLocal_109[25] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
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
	int iLocal_126 = 0;
	struct<3> Local_127[340];
	struct<3> Local_128[25];
	struct<3> Local_129[60];
	struct<3> Local_130 = { 0, 0, 0 } ;
	struct<3> Local_131 = { 0, 0, 0 } ;
	struct<3> Local_132 = { 0, 0, 0 } ;
	var uLocal_133 = 0;
	var uLocal_134 = 0;
	var uLocal_135 = 0;
	var uLocal_136 = 0;
	var uLocal_137 = 0;
	var uLocal_138 = 0;
	struct<3> Local_139 = { 0, 0, 0 } ;
	struct<3> Local_140 = { 0, 0, 0 } ;
	struct<3> Local_141 = { 0, 0, 0 } ;
	struct<3> Local_142 = { 0, 0, 0 } ;
	char cLocal_143[64] = "";
	var uLocal_144 = 0;
	var uLocal_145 = 0;
	var uLocal_146 = 0;
	var uLocal_147 = 0;
	var uLocal_148 = 0;
	var uLocal_149 = 0;
	var uLocal_150 = 0;
	var uLocal_151 = 0;
	int iLocal_152 = 0;
	int iLocal_153[340] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
	int iLocal_154[25] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
	int iLocal_155[60] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
	int iLocal_156 = 0;
	int iLocal_157 = 0;
	int iLocal_158 = 0;
	int iLocal_159[340] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
	int iLocal_160[12] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
	int iLocal_161[25] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
	int iLocal_162[60] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
	int iLocal_163[10] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
	int iLocal_164 = 0;
	int iLocal_165 = 0;
	int iLocal_166 = 0;
	var uLocal_167 = 12;
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
	int iLocal_181 = 0;
	int iLocal_182[5] = { 0, 0, 0, 0, 0 };
	int iLocal_183[3] = { 0, 0, 0 };
	int iLocal_184 = 0;
	int iLocal_185 = 0;
	int iLocal_186[3] = { 0, 0, 0 };
	struct<3> Local_187[3];
	struct<3> Local_188[3];
	float fLocal_189[3] = { 0f, 0f, 0f };
	var uLocal_190[3] = { 0, 0, 0 };
	int iLocal_191 = 0;
	int iLocal_192[3] = { 0, 0, 0 };
	float fLocal_193[3] = { 0f, 0f, 0f };
	float fLocal_194[3] = { 0f, 0f, 0f };
	int iLocal_195 = 0;
	int iLocal_196 = 0;
	int iLocal_197 = 0;
	int iLocal_198 = 0;
	int iLocal_199 = 0;
	int iLocal_200 = 0;
	bool bLocal_201 = 0;
	int iLocal_202 = 0;
	int iLocal_203 = 0;
	int iLocal_204 = 0;
	int iLocal_205 = 0;
	int iLocal_206 = 0;
	int iLocal_207 = 0;
	bool bLocal_208 = 0;
	bool bLocal_209 = 0;
	struct<3> Local_210 = { 0, 0, 0 } ;
	float fLocal_211 = 0f;
	struct<3> Local_212 = { 0, 0, 0 } ;
	struct<3> Local_213 = { 0, 0, 0 } ;
	struct<3> Local_214 = { 0, 0, 0 } ;
	struct<3> Local_215 = { 0, 0, 0 } ;
	struct<3> Local_216 = { 0, 0, 0 } ;
	struct<3> Local_217 = { 0, 0, 0 } ;
	struct<3> Local_218 = { 0, 0, 0 } ;
	char* sLocal_219 = NULL;
	char* sLocal_220 = NULL;
	char* sLocal_221 = NULL;
	char* sLocal_222 = NULL;
	float fLocal_223 = 0f;
	char* sLocal_224 = NULL;
	char* sLocal_225 = NULL;
	int* iLocal_226 = NULL;
	int* iLocal_227 = NULL;
	int* iLocal_228 = NULL;
	int* iLocal_229 = NULL;
	int* iLocal_230 = NULL;
	int* iLocal_231 = NULL;
	int* iLocal_232 = NULL;
	int* iLocal_233 = NULL;
	int* iLocal_234 = NULL;
	int iLocal_235 = 0;
	int iLocal_236 = 0;
	int* iLocal_237 = NULL;
	int* iLocal_238 = NULL;
	var uLocal_239[5] = { 0, 0, 0, 0, 0 };
	int* iLocal_240 = NULL;
	int iLocal_241 = 0;
	int* iLocal_242 = NULL;
	int* iLocal_243 = NULL;
	int* iLocal_244 = NULL;
	int* iLocal_245 = NULL;
	int* iLocal_246 = NULL;
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
	int* iLocal_257 = NULL;
	var uLocal_258 = 3;
	var uLocal_259 = 0;
	var uLocal_260 = 0;
	var uLocal_261 = 0;
	var uLocal_262 = 0;
	var uLocal_263 = 0;
	var uLocal_264 = 1092616192;
	var uLocal_265 = 1101004800;
	var uLocal_266 = 0;
	var uLocal_267 = 0;
	var uLocal_268 = 0;
	var uLocal_269 = 0;
	var uLocal_270 = 0;
	var uLocal_271 = 0;
	var uLocal_272 = 0;
	var uLocal_273 = 0;
	var uLocal_274 = 3;
	var uLocal_275 = 0;
	var uLocal_276 = 0;
	var uLocal_277 = 0;
	var uLocal_278 = 0;
	var uLocal_279 = 0;
	var uLocal_280 = 0;
	var uLocal_281 = 0;
	var uLocal_282 = 0;
	var uLocal_283 = 0;
	var uLocal_284 = -1;
	var uLocal_285 = 0;
	var uLocal_286 = 0;
	var uLocal_287 = 0;
	var uLocal_288 = 0;
	var uLocal_289 = 0;
	var uLocal_290 = 0;
	var uLocal_291 = 1000;
	var uLocal_292 = 1000;
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
	var uLocal_312 = 16;
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
	int iLocal_477 = 0;
	int iLocal_478 = 0;
	int iLocal_479 = 0;
	int iLocal_480 = 0;
	char* sLocal_481 = NULL;
	int iLocal_482[100] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
	int iLocal_483 = 0;
	int iLocal_484[25] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
	int iLocal_485[30] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
	int iLocal_486[20] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
	int iLocal_487 = 0;
	int iLocal_488 = 0;
	var uLocal_489 = 4;
	var uLocal_490 = 0;
	var uLocal_491 = 0;
	var uLocal_492 = 0;
	var uLocal_493 = 0;
	var uLocal_494 = 0;
	var uLocal_495 = 0;
	var uLocal_496 = 0;
	var uLocal_497 = 4;
	var uLocal_498 = 0;
	var uLocal_499 = 0;
	var uLocal_500 = 0;
	var uLocal_501 = 0;
	var uLocal_502 = 4;
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
	var uLocal_513 = 4;
	var uLocal_514 = 0;
	var uLocal_515 = 0;
	var uLocal_516 = 0;
	var uLocal_517 = 0;
	var uLocal_518 = 4;
	var uLocal_519 = 0;
	var uLocal_520 = 0;
	var uLocal_521 = 0;
	var uLocal_522 = 0;
	var uLocal_523 = 4;
	var uLocal_524 = 0;
	var uLocal_525 = 0;
	var uLocal_526 = 0;
	var uLocal_527 = 0;
	var uLocal_528 = 0;
	var uLocal_529 = 0;
	var uLocal_530 = 0;
	var uLocal_531 = 0;
	var uLocal_532 = 0;
	struct<21> Local_533 = { 8, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 } ;
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
	bool bLocal_547 = 0;
	int iLocal_548 = 0;
	var uLocal_549 = 0;
	var uLocal_550 = 0;
	var uLocal_551 = 0;
	var uLocal_552 = 0;
	var uLocal_553 = 2;
	var uLocal_554 = 0;
	var uLocal_555 = 0;
	var uLocal_556 = 2;
	var uLocal_557 = 0;
	var uLocal_558 = 0;
	var uLocal_559 = 20;
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
	var uLocal_593 = 1065353216;
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
	var uLocal_620 = -1;
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
	var uLocal_650 = 1065353216;
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
	var uLocal_677 = -1;
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
	var uLocal_707 = 1065353216;
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
	var uLocal_734 = -1;
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
	var uLocal_764 = 1065353216;
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
	var uLocal_791 = -1;
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
	var uLocal_821 = 1065353216;
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
	var uLocal_848 = -1;
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
	var uLocal_878 = 1065353216;
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
	var uLocal_900 = 0;
	var uLocal_901 = 0;
	var uLocal_902 = 0;
	var uLocal_903 = 0;
	var uLocal_904 = 0;
	var uLocal_905 = -1;
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
	var uLocal_935 = 1065353216;
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
	var uLocal_962 = -1;
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
	var uLocal_992 = 1065353216;
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
	var uLocal_1019 = -1;
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
	var uLocal_1049 = 1065353216;
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
	var uLocal_1076 = -1;
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
	var uLocal_1106 = 1065353216;
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
	var uLocal_1133 = -1;
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
	var uLocal_1163 = 1065353216;
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
	var uLocal_1190 = -1;
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
	var uLocal_1220 = 1065353216;
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
	var uLocal_1247 = -1;
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
	var uLocal_1277 = 1065353216;
	var uLocal_1278 = 0;
	var uLocal_1279 = 0;
	var uLocal_1280 = 0;
	var uLocal_1281 = 0;
	var uLocal_1282 = 0;
	var uLocal_1283 = 0;
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
	var uLocal_1304 = -1;
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
	var uLocal_1334 = 1065353216;
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
	var uLocal_1361 = -1;
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
	var uLocal_1391 = 1065353216;
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
	var uLocal_1412 = 0;
	var uLocal_1413 = 0;
	var uLocal_1414 = 0;
	var uLocal_1415 = 0;
	var uLocal_1416 = 0;
	var uLocal_1417 = 0;
	var uLocal_1418 = -1;
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
	var uLocal_1448 = 1065353216;
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
	var uLocal_1475 = -1;
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
	var uLocal_1505 = 1065353216;
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
	var uLocal_1531 = 0;
	var uLocal_1532 = -1;
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
	var uLocal_1562 = 1065353216;
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
	var uLocal_1582 = 0;
	var uLocal_1583 = 0;
	var uLocal_1584 = 0;
	var uLocal_1585 = 0;
	var uLocal_1586 = 0;
	var uLocal_1587 = 0;
	var uLocal_1588 = 0;
	var uLocal_1589 = -1;
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
	var uLocal_1618 = 0;
	var uLocal_1619 = 1065353216;
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
	var uLocal_1637 = 0;
	var uLocal_1638 = 0;
	var uLocal_1639 = 0;
	var uLocal_1640 = 0;
	var uLocal_1641 = 0;
	var uLocal_1642 = 0;
	var uLocal_1643 = 0;
	var uLocal_1644 = 0;
	var uLocal_1645 = 0;
	var uLocal_1646 = -1;
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
	var uLocal_1668 = 0;
	var uLocal_1669 = 0;
	var uLocal_1670 = 0;
	var uLocal_1671 = 0;
	var uLocal_1672 = 0;
	var uLocal_1673 = 0;
	var uLocal_1674 = 0;
	var uLocal_1675 = 0;
	var uLocal_1676 = 1065353216;
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
	var uLocal_1700 = 16;
	var uLocal_1701 = 0;
	var uLocal_1702 = -1082130432;
	var uLocal_1703 = 0;
	var uLocal_1704 = -1082130432;
	var uLocal_1705 = 0;
	var uLocal_1706 = -1082130432;
	var uLocal_1707 = 0;
	var uLocal_1708 = -1082130432;
	var uLocal_1709 = 0;
	var uLocal_1710 = -1082130432;
	var uLocal_1711 = 0;
	var uLocal_1712 = -1082130432;
	var uLocal_1713 = 0;
	var uLocal_1714 = -1082130432;
	var uLocal_1715 = 0;
	var uLocal_1716 = -1082130432;
	var uLocal_1717 = 0;
	var uLocal_1718 = -1082130432;
	var uLocal_1719 = 0;
	var uLocal_1720 = -1082130432;
	var uLocal_1721 = 0;
	var uLocal_1722 = -1082130432;
	var uLocal_1723 = 0;
	var uLocal_1724 = -1082130432;
	var uLocal_1725 = 0;
	var uLocal_1726 = -1082130432;
	var uLocal_1727 = 0;
	var uLocal_1728 = -1082130432;
	var uLocal_1729 = 0;
	var uLocal_1730 = -1082130432;
	var uLocal_1731 = 0;
	var uLocal_1732 = -1082130432;
	var uLocal_1733 = 16;
	var uLocal_1734 = 0;
	var uLocal_1735 = -1082130432;
	var uLocal_1736 = 0;
	var uLocal_1737 = -1082130432;
	var uLocal_1738 = 0;
	var uLocal_1739 = -1082130432;
	var uLocal_1740 = 0;
	var uLocal_1741 = -1082130432;
	var uLocal_1742 = 0;
	var uLocal_1743 = -1082130432;
	var uLocal_1744 = 0;
	var uLocal_1745 = -1082130432;
	var uLocal_1746 = 0;
	var uLocal_1747 = -1082130432;
	var uLocal_1748 = 0;
	var uLocal_1749 = -1082130432;
	var uLocal_1750 = 0;
	var uLocal_1751 = -1082130432;
	var uLocal_1752 = 0;
	var uLocal_1753 = -1082130432;
	var uLocal_1754 = 0;
	var uLocal_1755 = -1082130432;
	var uLocal_1756 = 0;
	var uLocal_1757 = -1082130432;
	var uLocal_1758 = 0;
	var uLocal_1759 = -1082130432;
	var uLocal_1760 = 0;
	var uLocal_1761 = -1082130432;
	var uLocal_1762 = 0;
	var uLocal_1763 = -1082130432;
	var uLocal_1764 = 0;
	var uLocal_1765 = -1082130432;
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
	var uLocal_1782 = -1082130432;
	var uLocal_1783 = -1082130432;
	var uLocal_1784 = 1;
	var uLocal_1785 = 1;
	var uLocal_1786 = 1;
	var uLocal_1787 = -1;
	var uLocal_1788 = -1;
	var uLocal_1789 = -1;
	struct<2> Local_1790 = { 0, 0 } ;
	var uLocal_1791 = 0;
	var uLocal_1792 = 0;
	var uLocal_1793 = 2;
	var uLocal_1794 = 0;
	var uLocal_1795 = 0;
	var uLocal_1796 = 2;
	var uLocal_1797 = 0;
	var uLocal_1798 = 0;
	var uLocal_1799 = 20;
	var uLocal_1800 = 0;
	var uLocal_1801 = 0;
	var uLocal_1802 = 0;
	var uLocal_1803 = -1;
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
	var uLocal_1819 = 0;
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
	var uLocal_1832 = 0;
	var uLocal_1833 = 1065353216;
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
	var uLocal_1860 = -1;
	var uLocal_1861 = 0;
	var uLocal_1862 = 0;
	var uLocal_1863 = 0;
	var uLocal_1864 = 0;
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
	var uLocal_1890 = 1065353216;
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
	var uLocal_1914 = 0;
	var uLocal_1915 = 0;
	var uLocal_1916 = 0;
	var uLocal_1917 = -1;
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
	var uLocal_1940 = 0;
	var uLocal_1941 = 0;
	var uLocal_1942 = 0;
	var uLocal_1943 = 0;
	var uLocal_1944 = 0;
	var uLocal_1945 = 0;
	var uLocal_1946 = 0;
	var uLocal_1947 = 1065353216;
	var uLocal_1948 = 0;
	var uLocal_1949 = 0;
	var uLocal_1950 = 0;
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
	var uLocal_1974 = -1;
	var uLocal_1975 = 0;
	var uLocal_1976 = 0;
	var uLocal_1977 = 0;
	var uLocal_1978 = 0;
	var uLocal_1979 = 0;
	var uLocal_1980 = 0;
	var uLocal_1981 = 0;
	var uLocal_1982 = 0;
	var uLocal_1983 = 0;
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
	var uLocal_1996 = 0;
	var uLocal_1997 = 0;
	var uLocal_1998 = 0;
	var uLocal_1999 = 0;
	var uLocal_2000 = 0;
	var uLocal_2001 = 0;
	var uLocal_2002 = 0;
	var uLocal_2003 = 0;
	var uLocal_2004 = 1065353216;
	var uLocal_2005 = 0;
	var uLocal_2006 = 0;
	var uLocal_2007 = 0;
	var uLocal_2008 = 0;
	var uLocal_2009 = 0;
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
	var uLocal_2022 = 0;
	var uLocal_2023 = 0;
	var uLocal_2024 = 0;
	var uLocal_2025 = 0;
	var uLocal_2026 = 0;
	var uLocal_2027 = 0;
	var uLocal_2028 = 0;
	var uLocal_2029 = 0;
	var uLocal_2030 = 0;
	var uLocal_2031 = -1;
	var uLocal_2032 = 0;
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
	var uLocal_2061 = 1065353216;
	var uLocal_2062 = 0;
	var uLocal_2063 = 0;
	var uLocal_2064 = 0;
	var uLocal_2065 = 0;
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
	var uLocal_2078 = 0;
	var uLocal_2079 = 0;
	var uLocal_2080 = 0;
	var uLocal_2081 = 0;
	var uLocal_2082 = 0;
	var uLocal_2083 = 0;
	var uLocal_2084 = 0;
	var uLocal_2085 = 0;
	var uLocal_2086 = 0;
	var uLocal_2087 = 0;
	var uLocal_2088 = -1;
	var uLocal_2089 = 0;
	var uLocal_2090 = 0;
	var uLocal_2091 = 0;
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
	var uLocal_2104 = 0;
	var uLocal_2105 = 0;
	var uLocal_2106 = 0;
	var uLocal_2107 = 0;
	var uLocal_2108 = 0;
	var uLocal_2109 = 0;
	var uLocal_2110 = 0;
	var uLocal_2111 = 0;
	var uLocal_2112 = 0;
	var uLocal_2113 = 0;
	var uLocal_2114 = 0;
	var uLocal_2115 = 0;
	var uLocal_2116 = 0;
	var uLocal_2117 = 0;
	var uLocal_2118 = 1065353216;
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
	var uLocal_2145 = -1;
	var uLocal_2146 = 0;
	var uLocal_2147 = 0;
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
	var uLocal_2160 = 0;
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
	var uLocal_2173 = 0;
	var uLocal_2174 = 0;
	var uLocal_2175 = 1065353216;
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
	var uLocal_2186 = 0;
	var uLocal_2187 = 0;
	var uLocal_2188 = 0;
	var uLocal_2189 = 0;
	var uLocal_2190 = 0;
	var uLocal_2191 = 0;
	var uLocal_2192 = 0;
	var uLocal_2193 = 0;
	var uLocal_2194 = 0;
	var uLocal_2195 = 0;
	var uLocal_2196 = 0;
	var uLocal_2197 = 0;
	var uLocal_2198 = 0;
	var uLocal_2199 = 0;
	var uLocal_2200 = 0;
	var uLocal_2201 = 0;
	var uLocal_2202 = -1;
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
	var uLocal_2229 = 0;
	var uLocal_2230 = 0;
	var uLocal_2231 = 0;
	var uLocal_2232 = 1065353216;
	var uLocal_2233 = 0;
	var uLocal_2234 = 0;
	var uLocal_2235 = 0;
	var uLocal_2236 = 0;
	var uLocal_2237 = 0;
	var uLocal_2238 = 0;
	var uLocal_2239 = 0;
	var uLocal_2240 = 0;
	var uLocal_2241 = 0;
	var uLocal_2242 = 0;
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
	var uLocal_2255 = 0;
	var uLocal_2256 = 0;
	var uLocal_2257 = 0;
	var uLocal_2258 = 0;
	var uLocal_2259 = -1;
	var uLocal_2260 = 0;
	var uLocal_2261 = 0;
	var uLocal_2262 = 0;
	var uLocal_2263 = 0;
	var uLocal_2264 = 0;
	var uLocal_2265 = 0;
	var uLocal_2266 = 0;
	var uLocal_2267 = 0;
	var uLocal_2268 = 0;
	var uLocal_2269 = 0;
	var uLocal_2270 = 0;
	var uLocal_2271 = 0;
	var uLocal_2272 = 0;
	var uLocal_2273 = 0;
	var uLocal_2274 = 0;
	var uLocal_2275 = 0;
	var uLocal_2276 = 0;
	var uLocal_2277 = 0;
	var uLocal_2278 = 0;
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
	var uLocal_2289 = 1065353216;
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
	var uLocal_2311 = 0;
	var uLocal_2312 = 0;
	var uLocal_2313 = 0;
	var uLocal_2314 = 0;
	var uLocal_2315 = 0;
	var uLocal_2316 = -1;
	var uLocal_2317 = 0;
	var uLocal_2318 = 0;
	var uLocal_2319 = 0;
	var uLocal_2320 = 0;
	var uLocal_2321 = 0;
	var uLocal_2322 = 0;
	var uLocal_2323 = 0;
	var uLocal_2324 = 0;
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
	var uLocal_2337 = 0;
	var uLocal_2338 = 0;
	var uLocal_2339 = 0;
	var uLocal_2340 = 0;
	var uLocal_2341 = 0;
	var uLocal_2342 = 0;
	var uLocal_2343 = 0;
	var uLocal_2344 = 0;
	var uLocal_2345 = 0;
	var uLocal_2346 = 1065353216;
	var uLocal_2347 = 0;
	var uLocal_2348 = 0;
	var uLocal_2349 = 0;
	var uLocal_2350 = 0;
	var uLocal_2351 = 0;
	var uLocal_2352 = 0;
	var uLocal_2353 = 0;
	var uLocal_2354 = 0;
	var uLocal_2355 = 0;
	var uLocal_2356 = 0;
	var uLocal_2357 = 0;
	var uLocal_2358 = 0;
	var uLocal_2359 = 0;
	var uLocal_2360 = 0;
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
	var uLocal_2373 = -1;
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
	var uLocal_2393 = 0;
	var uLocal_2394 = 0;
	var uLocal_2395 = 0;
	var uLocal_2396 = 0;
	var uLocal_2397 = 0;
	var uLocal_2398 = 0;
	var uLocal_2399 = 0;
	var uLocal_2400 = 0;
	var uLocal_2401 = 0;
	var uLocal_2402 = 0;
	var uLocal_2403 = 1065353216;
	var uLocal_2404 = 0;
	var uLocal_2405 = 0;
	var uLocal_2406 = 0;
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
	var uLocal_2419 = 0;
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
	var uLocal_2430 = -1;
	var uLocal_2431 = 0;
	var uLocal_2432 = 0;
	var uLocal_2433 = 0;
	var uLocal_2434 = 0;
	var uLocal_2435 = 0;
	var uLocal_2436 = 0;
	var uLocal_2437 = 0;
	var uLocal_2438 = 0;
	var uLocal_2439 = 0;
	var uLocal_2440 = 0;
	var uLocal_2441 = 0;
	var uLocal_2442 = 0;
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
	var uLocal_2460 = 1065353216;
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
	var uLocal_2475 = 0;
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
	var uLocal_2487 = -1;
	var uLocal_2488 = 0;
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
	var uLocal_2501 = 0;
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
	var uLocal_2514 = 0;
	var uLocal_2515 = 0;
	var uLocal_2516 = 0;
	var uLocal_2517 = 1065353216;
	var uLocal_2518 = 0;
	var uLocal_2519 = 0;
	var uLocal_2520 = 0;
	var uLocal_2521 = 0;
	var uLocal_2522 = 0;
	var uLocal_2523 = 0;
	var uLocal_2524 = 0;
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
	var uLocal_2540 = 0;
	var uLocal_2541 = 0;
	var uLocal_2542 = 0;
	var uLocal_2543 = 0;
	var uLocal_2544 = -1;
	var uLocal_2545 = 0;
	var uLocal_2546 = 0;
	var uLocal_2547 = 0;
	var uLocal_2548 = 0;
	var uLocal_2549 = 0;
	var uLocal_2550 = 0;
	var uLocal_2551 = 0;
	var uLocal_2552 = 0;
	var uLocal_2553 = 0;
	var uLocal_2554 = 0;
	var uLocal_2555 = 0;
	var uLocal_2556 = 0;
	var uLocal_2557 = 0;
	var uLocal_2558 = 0;
	var uLocal_2559 = 0;
	var uLocal_2560 = 0;
	var uLocal_2561 = 0;
	var uLocal_2562 = 0;
	var uLocal_2563 = 0;
	var uLocal_2564 = 0;
	var uLocal_2565 = 0;
	var uLocal_2566 = 0;
	var uLocal_2567 = 0;
	var uLocal_2568 = 0;
	var uLocal_2569 = 0;
	var uLocal_2570 = 0;
	var uLocal_2571 = 0;
	var uLocal_2572 = 0;
	var uLocal_2573 = 0;
	var uLocal_2574 = 1065353216;
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
	var uLocal_2597 = 0;
	var uLocal_2598 = 0;
	var uLocal_2599 = 0;
	var uLocal_2600 = 0;
	var uLocal_2601 = -1;
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
	var uLocal_2624 = 0;
	var uLocal_2625 = 0;
	var uLocal_2626 = 0;
	var uLocal_2627 = 0;
	var uLocal_2628 = 0;
	var uLocal_2629 = 0;
	var uLocal_2630 = 0;
	var uLocal_2631 = 1065353216;
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
	var uLocal_2654 = 0;
	var uLocal_2655 = 0;
	var uLocal_2656 = 0;
	var uLocal_2657 = 0;
	var uLocal_2658 = -1;
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
	var uLocal_2681 = 0;
	var uLocal_2682 = 0;
	var uLocal_2683 = 0;
	var uLocal_2684 = 0;
	var uLocal_2685 = 0;
	var uLocal_2686 = 0;
	var uLocal_2687 = 0;
	var uLocal_2688 = 1065353216;
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
	var uLocal_2711 = 0;
	var uLocal_2712 = 0;
	var uLocal_2713 = 0;
	var uLocal_2714 = 0;
	var uLocal_2715 = -1;
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
	var uLocal_2738 = 0;
	var uLocal_2739 = 0;
	var uLocal_2740 = 0;
	var uLocal_2741 = 0;
	var uLocal_2742 = 0;
	var uLocal_2743 = 0;
	var uLocal_2744 = 0;
	var uLocal_2745 = 1065353216;
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
	var uLocal_2768 = 0;
	var uLocal_2769 = 0;
	var uLocal_2770 = 0;
	var uLocal_2771 = 0;
	var uLocal_2772 = -1;
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
	var uLocal_2795 = 0;
	var uLocal_2796 = 0;
	var uLocal_2797 = 0;
	var uLocal_2798 = 0;
	var uLocal_2799 = 0;
	var uLocal_2800 = 0;
	var uLocal_2801 = 0;
	var uLocal_2802 = 1065353216;
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
	var uLocal_2825 = 0;
	var uLocal_2826 = 0;
	var uLocal_2827 = 0;
	var uLocal_2828 = 0;
	var uLocal_2829 = -1;
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
	var uLocal_2852 = 0;
	var uLocal_2853 = 0;
	var uLocal_2854 = 0;
	var uLocal_2855 = 0;
	var uLocal_2856 = 0;
	var uLocal_2857 = 0;
	var uLocal_2858 = 0;
	var uLocal_2859 = 1065353216;
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
	var uLocal_2882 = 0;
	var uLocal_2883 = 0;
	var uLocal_2884 = 0;
	var uLocal_2885 = 0;
	var uLocal_2886 = -1;
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
	var uLocal_2909 = 0;
	var uLocal_2910 = 0;
	var uLocal_2911 = 0;
	var uLocal_2912 = 0;
	var uLocal_2913 = 0;
	var uLocal_2914 = 0;
	var uLocal_2915 = 0;
	var uLocal_2916 = 1065353216;
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
	var uLocal_2939 = 0;
	var uLocal_2940 = 16;
	var uLocal_2941 = 0;
	var uLocal_2942 = -1082130432;
	var uLocal_2943 = 0;
	var uLocal_2944 = -1082130432;
	var uLocal_2945 = 0;
	var uLocal_2946 = -1082130432;
	var uLocal_2947 = 0;
	var uLocal_2948 = -1082130432;
	var uLocal_2949 = 0;
	var uLocal_2950 = -1082130432;
	var uLocal_2951 = 0;
	var uLocal_2952 = -1082130432;
	var uLocal_2953 = 0;
	var uLocal_2954 = -1082130432;
	var uLocal_2955 = 0;
	var uLocal_2956 = -1082130432;
	var uLocal_2957 = 0;
	var uLocal_2958 = -1082130432;
	var uLocal_2959 = 0;
	var uLocal_2960 = -1082130432;
	var uLocal_2961 = 0;
	var uLocal_2962 = -1082130432;
	var uLocal_2963 = 0;
	var uLocal_2964 = -1082130432;
	var uLocal_2965 = 0;
	var uLocal_2966 = -1082130432;
	var uLocal_2967 = 0;
	var uLocal_2968 = -1082130432;
	var uLocal_2969 = 0;
	var uLocal_2970 = -1082130432;
	var uLocal_2971 = 0;
	var uLocal_2972 = -1082130432;
	var uLocal_2973 = 16;
	var uLocal_2974 = 0;
	var uLocal_2975 = -1082130432;
	var uLocal_2976 = 0;
	var uLocal_2977 = -1082130432;
	var uLocal_2978 = 0;
	var uLocal_2979 = -1082130432;
	var uLocal_2980 = 0;
	var uLocal_2981 = -1082130432;
	var uLocal_2982 = 0;
	var uLocal_2983 = -1082130432;
	var uLocal_2984 = 0;
	var uLocal_2985 = -1082130432;
	var uLocal_2986 = 0;
	var uLocal_2987 = -1082130432;
	var uLocal_2988 = 0;
	var uLocal_2989 = -1082130432;
	var uLocal_2990 = 0;
	var uLocal_2991 = -1082130432;
	var uLocal_2992 = 0;
	var uLocal_2993 = -1082130432;
	var uLocal_2994 = 0;
	var uLocal_2995 = -1082130432;
	var uLocal_2996 = 0;
	var uLocal_2997 = -1082130432;
	var uLocal_2998 = 0;
	var uLocal_2999 = -1082130432;
	var uLocal_3000 = 0;
	var uLocal_3001 = -1082130432;
	var uLocal_3002 = 0;
	var uLocal_3003 = -1082130432;
	var uLocal_3004 = 0;
	var uLocal_3005 = -1082130432;
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
	var uLocal_3022 = -1082130432;
	var uLocal_3023 = -1082130432;
	var uLocal_3024 = 1;
	var uLocal_3025 = 1;
	var uLocal_3026 = 1;
	var uLocal_3027 = -1;
	var uLocal_3028 = -1;
	var uLocal_3029 = -1;
	char* sLocal_3030 = NULL;
	char* sLocal_3031 = NULL;
	char* sLocal_3032 = NULL;
	char* sLocal_3033 = NULL;
	float fLocal_3034 = 0f;
	float fLocal_3035 = 0f;
	int iLocal_3036 = 0;
	float fLocal_3037 = 0f;
	var uLocal_3038 = 0;
	float fLocal_3039 = 0f;
	var uLocal_3040 = 0;
	float fLocal_3041 = 0f;
	int iLocal_3042 = 0;
	int iLocal_3043 = 0;
	struct<3> Local_3044 = { 0, 0, 0 } ;
	float fLocal_3045 = 0f;
	struct<3> Local_3046 = { 0, 0, 0 } ;
	float fLocal_3047 = 0f;
	var uLocal_3048 = 0;
	var uLocal_3049 = 0;
	var uLocal_3050 = 0;
	var uLocal_3051 = 0;
	struct<3> Local_3052 = { 0, 0, 0 } ;
	float fLocal_3053 = 0f;
	int iLocal_3054 = 0;
	struct<3> Local_3055 = { 0, 0, 0 } ;
	struct<3> Local_3056 = { 0, 0, 0 } ;
	struct<3> Local_3057 = { 0, 0, 0 } ;
	int iLocal_3058 = 0;
	struct<3> Local_3059 = { 0, 0, 0 } ;
	struct<3> Local_3060 = { 0, 0, 0 } ;
	struct<3> Local_3061 = { 0, 0, 0 } ;
	int* iLocal_3062 = NULL;
	struct<3> Local_3063 = { 0, 0, 0 } ;
	struct<3> Local_3064 = { 0, 0, 0 } ;
	struct<3> Local_3065 = { 0, 0, 0 } ;
	var uLocal_3066 = 0;
	int iLocal_3067 = 0;
	float fLocal_3068 = 0f;
	int iLocal_3069 = 0;
	int iLocal_3070 = 0;
	int iLocal_3071 = 0;
	int iLocal_3072 = 0;
	int iLocal_3073 = 0;
	int iLocal_3074 = 0;
	int iLocal_3075 = 0;
	float fLocal_3076 = 0f;
	float fLocal_3077 = 0f;
	int iLocal_3078 = 0;
	int iLocal_3079 = 0;
	float fLocal_3080 = 0f;
	float fLocal_3081 = 0f;
	float fLocal_3082 = 0f;
	float fLocal_3083 = 0f;
	var uLocal_3084 = 16;
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
	var uLocal_3110 = 0;
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
	var uLocal_3137 = 0;
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
	var uLocal_3167 = 0;
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
	var uLocal_3194 = 0;
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
	var uLocal_3224 = 0;
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
	var uLocal_3251 = 0;
	var uLocal_3252 = 0;
	var uLocal_3253 = 0;
	char* sLocal_3254 = NULL;
	int iLocal_3255 = 0;
	float fLocal_3256 = 0f;
	float fLocal_3257 = 0f;
	int iLocal_3258 = 0;
	int iLocal_3259 = 0;
	int iLocal_3260 = 0;
	struct<3> Local_3261 = { 0, 0, 0 } ;
	struct<3> Local_3262 = { 0, 0, 0 } ;
	float fLocal_3263 = 0f;
	bool bLocal_3264 = 0;
	bool bLocal_3265 = 0;
	bool bLocal_3266 = 0;
	int iLocal_3267 = 0;
	int iLocal_3268 = 0;
	int iLocal_3269 = 0;
#endregion
void __EntryFunction__()//Position - 0x0
{
	int iVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	int iVar4;
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
	fLocal_28 = 1f;
	bLocal_32 = true;
	iLocal_39 = 1;
	bLocal_61 = true;
	fLocal_82 = 120f;
	fLocal_83 = 0f;
	fLocal_85 = 1f;
	fLocal_86 = 0f;
	fLocal_87 = 1f;
	fLocal_88 = 30f;
	fLocal_90 = 1f;
	fLocal_91 = 5f;
	fLocal_92 = 1f;
	fLocal_93 = 1f;
	fLocal_94 = 100f;
	fLocal_95 = 100f;
	fLocal_96 = 0f;
	fLocal_97 = 7000f;
	fLocal_98 = 0f;
	fLocal_99 = 0f;
	fLocal_100 = 0.3f;
	fLocal_101 = 0.5f;
	fLocal_102 = 50f;
	iLocal_113 = -1;
	iLocal_121 = -1;
	iLocal_122 = -1;
	iLocal_198 = 1;
	bLocal_209 = true;
	Local_210 = { 0f, 0f, 0f };
	fLocal_211 = 0f;
	Local_212 = { 117.105f, -414.6006f, 40.1527f };
	Local_213 = { 2577.23f, 360.6015f, 107.8564f };
	Local_214 = { 2583.5542f, 360.265f, 107.7638f };
	Local_215 = { 2682.775f, 5131.357f, 43.8418f };
	Local_216 = { 2684.9312f, 5131.944f, 43.8593f };
	Local_217 = { 2571.36f, 360.45f, 107.4569f };
	Local_218 = { 488.887f, -1323.6843f, 28.1722f };
	sLocal_219 = "ALgasstation";
	sLocal_220 = "ALubersetup";
	sLocal_221 = "ALubercop";
	sLocal_222 = "ALgarage";
	fLocal_223 = 1f;
	sLocal_224 = "misscarsteal3";
	sLocal_225 = "misscarsteal3pullover";
	iLocal_254 = -449343164;
	sLocal_481 = "CST3AUD";
	bLocal_547 = true;
	sLocal_3030 = "misscarsteal3leadinout";
	sLocal_3031 = "veh@bike@quad@front@base";
	sLocal_3032 = "shake_cam_all@";
	sLocal_3033 = "carsteal1_customswitch";
	fLocal_3034 = 0f;
	fLocal_3035 = 3.8f;
	fLocal_3037 = 0f;
	fLocal_3039 = 4500f;
	fLocal_3041 = 0f;
	iLocal_3042 = 5000;
	iLocal_3043 = 800;
	Local_3044 = { 2686.8792f, 5131.9077f, 43.8515f };
	fLocal_3045 = 151.6033f;
	Local_3046 = { 2682.775f, 5131.357f, 43.8418f };
	fLocal_3047 = 147.9465f;
	Local_3052 = { 2801.3f, 4435.5f, 47.9f };
	fLocal_3053 = 14.29f;
	Local_3055 = { 2683.3f, 5132.5f, 43.8f };
	Local_3059 = { 2683f, 5130.8f, 43.9f };
	Local_3063 = { 2683.3f, 5132.5f, 44.8f };
	fLocal_3068 = 30000f;
	iLocal_3069 = -1;
	iLocal_3070 = -1;
	iLocal_3071 = -1;
	fLocal_3076 = 0.54f;
	fLocal_3077 = 0.63f;
	fLocal_3080 = 0.54f;
	fLocal_3081 = 0.78f;
	fLocal_3082 = 0.57f;
	fLocal_3083 = 0.78f;
	fLocal_3256 = 1f;
	fLocal_3257 = 1f;
	if (PLAYER::HAS_FORCE_CLEANUP_OCCURRED(3))
	{
		func_998();
		func_992(0, 1);
	}
	MISC::SET_MISSION_FLAG(true);
	if (__LIB_14__::func_742(Local_210, 1))
	{
		func_982(135.7141f, -432.904f, 40.0295f, 162.7001f, 0, 145);
	}
	if (__LIB_15__::func_944() != 1)
	{
		if (ENTITY::DOES_ENTITY_EXIST(Global_96938.f_9[3]))
		{
			if (!PED::IS_PED_INJURED(Global_96938.f_9[3]))
			{
				uLocal_489[1] = Global_96938.f_9[3];
				ENTITY::SET_ENTITY_AS_MISSION_ENTITY(uLocal_489[1], true, true);
				iVar0 = PLAYER::PLAYER_PED_ID();
				func_980(&uLocal_489, 1);
				func_956(&uLocal_489, 1, 1, 1);
				CAM::SET_GAMEPLAY_CAM_FOLLOW_PED_THIS_UPDATE(iVar0);
			}
		}
	}
	if (ENTITY::DOES_ENTITY_EXIST(Global_96938[0]))
	{
		if (!ENTITY::IS_ENTITY_DEAD(Global_96938[0], false))
		{
			iLocal_238 = Global_96938[0];
			ENTITY::SET_ENTITY_AS_MISSION_ENTITY(iLocal_238, true, true);
		}
	}
	if (ENTITY::DOES_ENTITY_EXIST(Global_96938[1]))
	{
		if (!ENTITY::IS_ENTITY_DEAD(Global_96938[1], false))
		{
			iLocal_232 = Global_96938[1];
			ENTITY::SET_ENTITY_AS_MISSION_ENTITY(iLocal_232, true, true);
		}
	}
	if (ENTITY::DOES_ENTITY_EXIST(Global_96938.f_9[0]))
	{
		if (!PED::IS_PED_INJURED(Global_96938.f_9[0]))
		{
			iLocal_228 = Global_96938.f_9[0];
			ENTITY::SET_ENTITY_AS_MISSION_ENTITY(iLocal_228, true, true);
		}
	}
	if (ENTITY::DOES_ENTITY_EXIST(Global_96938.f_9[1]))
	{
		if (!PED::IS_PED_INJURED(Global_96938.f_9[1]))
		{
			iLocal_229 = Global_96938.f_9[1];
			ENTITY::SET_ENTITY_AS_MISSION_ENTITY(iLocal_229, true, true);
		}
	}
	if (ENTITY::DOES_ENTITY_EXIST(Global_96938[2]))
	{
		if (!ENTITY::IS_ENTITY_DEAD(Global_96938[2], false))
		{
			iLocal_237 = Global_96938[2];
			ENTITY::SET_ENTITY_AS_MISSION_ENTITY(iLocal_237, true, true);
		}
	}
	if (ENTITY::DOES_ENTITY_EXIST(Global_96938.f_9[4]))
	{
		if (!PED::IS_PED_INJURED(Global_96938.f_9[4]))
		{
			uLocal_489[2] = Global_96938.f_9[4];
			ENTITY::SET_ENTITY_AS_MISSION_ENTITY(uLocal_489[2], true, true);
		}
	}
	if (!__LIB_0__::func_323())
	{
		if (CUTSCENE::HAS_THIS_CUTSCENE_LOADED("CAR_1_INT_CONCAT"))
		{
			HUD::THEFEED_FLUSH_QUEUE();
			__LIB_0__::func_532(1, 1, 1, 0, 0, 0, 0);
			if (ENTITY::DOES_ENTITY_EXIST(iLocal_232) && !ENTITY::IS_ENTITY_DEAD(iLocal_232, false))
			{
				CUTSCENE::REGISTER_ENTITY_FOR_CUTSCENE(iLocal_232, "Franklins_car", 0, 0, 0);
			}
			if (ENTITY::DOES_ENTITY_EXIST(iLocal_228) && !ENTITY::IS_ENTITY_DEAD(iLocal_228, false))
			{
				CUTSCENE::REGISTER_ENTITY_FOR_CUTSCENE(iLocal_228, "DEVIN", 0, 0, 0);
			}
			if (ENTITY::DOES_ENTITY_EXIST(iLocal_229) && !ENTITY::IS_ENTITY_DEAD(iLocal_229, false))
			{
				CUTSCENE::REGISTER_ENTITY_FOR_CUTSCENE(iLocal_229, "MOLLY", 1, 0, 0);
			}
			if (ENTITY::DOES_ENTITY_EXIST(iLocal_237) && !ENTITY::IS_ENTITY_DEAD(iLocal_237, false))
			{
				CUTSCENE::REGISTER_ENTITY_FOR_CUTSCENE(iLocal_237, "Devins_car", 0, 0, 0);
			}
			if (ENTITY::DOES_ENTITY_EXIST(iLocal_238) && !ENTITY::IS_ENTITY_DEAD(iLocal_238, false))
			{
				CUTSCENE::REGISTER_ENTITY_FOR_CUTSCENE(iLocal_238, "Car_1_Felon", 1, 0, 0);
			}
			if (ENTITY::DOES_ENTITY_EXIST(uLocal_489[2]) && !ENTITY::IS_ENTITY_DEAD(uLocal_489[2], false))
			{
				CUTSCENE::REGISTER_ENTITY_FOR_CUTSCENE(uLocal_489[2], "TREVOR", 1, 0, 0);
			}
			CUTSCENE::START_CUTSCENE(0);
			SYSTEM::WAIT(0);
			__LIB_15__::func_942(0, 0);
			__LIB_15__::func_942(2, 0);
			__LIB_31__::func_808(110.81168f, -421.14157f, 36.196766f, 126.11162f, -380.1021f, 57.26146f, 40f, 120.5374f, -429.8324f, 40.0967f, 289.2337f, __LIB_13__::func_790(), 1, 1, 1, 0, 0);
			MISC::CLEAR_AREA(115.56944f, -400.46335f, 40.26558f, 20f, true, false, false, false);
			GRAPHICS::DISABLE_PROCOBJ_CREATION();
			CAM::STOP_GAMEPLAY_HINT(true);
			func_940();
			iLocal_200 = 1;
		}
	}
	__LIB_9__::func_107(&(uLocal_489[0]));
	__LIB_0__::func_468(8);
	while (true)
	{
		RECORDING::REPLAY_CHECK_FOR_EVENT_THIS_FRAME("M_IFoughtTheLaw", 0);
		func_933();
		if (iLocal_479 <= 4)
		{
			if (ENTITY::DOES_ENTITY_EXIST(iLocal_233))
			{
				if (VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(iLocal_233))
				{
					func_930(VEHICLE::GET_TIME_POSITION_IN_RECORDING(iLocal_233), sLocal_220);
					VEHICLE::SET_PLAYBACK_SPEED(iLocal_233, fLocal_223);
					iLocal_48 = 1;
					func_929();
					func_906(iLocal_233, fLocal_223);
					fLocal_94 = 300f;
				}
			}
			if (ENTITY::DOES_ENTITY_EXIST(iLocal_234))
			{
				if (VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(iLocal_234))
				{
					VEHICLE::SET_PLAYBACK_SPEED(iLocal_234, fLocal_223);
				}
			}
			if (ENTITY::DOES_ENTITY_EXIST(iLocal_232))
			{
				if (VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(iLocal_232))
				{
					VEHICLE::SET_PLAYBACK_SPEED(iLocal_232, (fLocal_223 * 1.25f));
				}
			}
			if (ENTITY::DOES_ENTITY_EXIST(iLocal_235))
			{
				if (VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(iLocal_235))
				{
					VEHICLE::SET_PLAYBACK_SPEED(iLocal_235, (fLocal_223 * 1.25f));
				}
			}
		}
		else if (iLocal_479 == 6 && iLocal_196)
		{
			if (ENTITY::DOES_ENTITY_EXIST(iLocal_235))
			{
				if (VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(iLocal_235))
				{
					func_930(VEHICLE::GET_TIME_POSITION_IN_RECORDING(iLocal_235), sLocal_221);
					VEHICLE::SET_PLAYBACK_SPEED(iLocal_235, fLocal_223);
					iLocal_48 = 1;
					func_929();
					func_906(iLocal_235, fLocal_223);
					fLocal_94 = 300f;
				}
			}
			if (ENTITY::DOES_ENTITY_EXIST(iLocal_233))
			{
				if (VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(iLocal_233))
				{
					VEHICLE::SET_PLAYBACK_SPEED(iLocal_233, fLocal_223);
				}
			}
			if (ENTITY::DOES_ENTITY_EXIST(iLocal_233) && ENTITY::DOES_ENTITY_EXIST(iLocal_234))
			{
				if (VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(iLocal_234))
				{
					if (VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(iLocal_233))
					{
						__LIB_17__::func_84(&iLocal_234, VEHICLE::GET_TIME_POSITION_IN_RECORDING(iLocal_233));
					}
					else
					{
						VEHICLE::SET_PLAYBACK_SPEED(iLocal_234, fLocal_223);
					}
				}
			}
			if (ENTITY::DOES_ENTITY_EXIST(iLocal_232))
			{
				if (VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(iLocal_232))
				{
					if ((ENTITY::DOES_ENTITY_EXIST(iLocal_235) && VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(iLocal_235)) && VEHICLE::GET_TIME_POSITION_IN_RECORDING(iLocal_235) < 153107.8f)
					{
						VEHICLE::SET_PLAYBACK_SPEED(iLocal_232, fLocal_223);
					}
					else
					{
						VEHICLE::SET_PLAYBACK_SPEED(iLocal_232, 0.7f);
					}
				}
			}
		}
		if (iLocal_206)
		{
			if (MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), false), 479.0568f, -1316.8253f, 28.2038f, true) < 240f)
			{
				__LIB_11__::func_816(21, 0);
				iLocal_206 = 0;
			}
		}
		if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), 528.99994f, -1417.1763f, 27.145472f, 424.9881f, -1212.2749f, 139.67249f, 150f, false, true, 0) || iLocal_479 == 9)
		{
			if (!func_897("ChopShopDoors"))
			{
				ENTITY::CREATE_MODEL_HIDE(498.7252f, -1317.7551f, 28.2534f, 1f, joaat("prop_sc1_06_gate_l"), true);
				ENTITY::CREATE_MODEL_HIDE(494.6904f, -1312.0663f, 28.2534f, 1f, joaat("prop_sc1_06_gate_r"), true);
				func_894("ChopShopDoors", 1);
			}
			if (iLocal_250 == 0)
			{
				iLocal_250 = INTERIOR::GET_INTERIOR_AT_COORDS_WITH_TYPE(481.1439f, -1314.4697f, 28.2017f, "v_chopshop");
			}
			else if (iLocal_205 == 0)
			{
				INTERIOR::PIN_INTERIOR_IN_MEMORY(iLocal_250);
				if (!INTERIOR::IS_INTERIOR_READY(iLocal_250))
				{
				}
				else
				{
					iLocal_205 = 1;
				}
			}
		}
		else if (!ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), 528.99994f, -1417.1763f, 27.145472f, 424.9881f, -1212.2749f, 139.67249f, 150f, false, true, 0))
		{
			if (func_897("ChopShopDoors"))
			{
				ENTITY::REMOVE_MODEL_HIDE(498.7252f, -1317.7551f, 28.2534f, 1f, joaat("prop_sc1_06_gate_l"), false);
				ENTITY::REMOVE_MODEL_HIDE(494.6904f, -1312.0663f, 28.2534f, 1f, joaat("prop_sc1_06_gate_r"), false);
				func_894("ChopShopDoors", 0);
			}
			if (iLocal_250 != 0)
			{
				if (iLocal_205 == 1)
				{
					INTERIOR::UNPIN_INTERIOR(iLocal_250);
					iLocal_205 = 0;
				}
			}
		}
		if (iLocal_198 == 0)
		{
			if (HUD::IS_RADAR_PREFERENCE_SWITCHED_ON())
			{
				HUD::DISPLAY_RADAR(false);
			}
			if (HUD::IS_HUD_PREFERENCE_SWITCHED_ON())
			{
				HUD::DISPLAY_HUD(false);
			}
		}
		else
		{
			if (HUD::IS_RADAR_PREFERENCE_SWITCHED_ON())
			{
				HUD::DISPLAY_RADAR(true);
			}
			if (HUD::IS_HUD_PREFERENCE_SWITCHED_ON())
			{
				HUD::DISPLAY_HUD(true);
			}
		}
		if (!bLocal_208)
		{
			if (PLAYER::IS_SPECIAL_ABILITY_ACTIVE(PLAYER::PLAYER_ID(), 0))
			{
				bLocal_208 = true;
				__LIB_0__::func_630(115);
			}
		}
		if (iLocal_479 == 6)
		{
			if (CAM::DOES_CAM_EXIST(Local_1790.f_1) && CAM::IS_CAM_ACTIVE(Local_1790.f_1))
			{
				iVar1 = 0;
				iVar2 = 0;
				iVar3 = 0;
				iVar4 = 0;
				__LIB_17__::func_461(&iVar1, &iVar2, &iVar3, &iVar4, 0);
				__LIB_32__::func_30(&Local_1790);
				if ((((((CAM::GET_CAM_SPLINE_PHASE(Local_1790.f_1) >= 1f || iVar1 != 0) || iVar2 != 0) || iVar3 != 0) || iVar4 != 0) || PAD::IS_CONTROL_PRESSED(0 /*PLAYER_CONTROL*/, 71 /*INPUT_VEH_ACCELERATE*/)) || PAD::IS_CONTROL_PRESSED(0 /*PLAYER_CONTROL*/, 72 /*INPUT_VEH_BRAKE*/))
				{
					if (CAM::GET_CAM_VIEW_MODE_FOR_CONTEXT(1) != 4)
					{
						CAM::STOP_RENDERING_SCRIPT_CAMS_USING_CATCH_UP(false, fLocal_3035, 1, 0);
					}
					CAM::SET_CAM_ACTIVE(Local_1790.f_1, false);
					CAM::RENDER_SCRIPT_CAMS(false, false, 3000, true, false, 0);
				}
			}
		}
		if (PED::GET_VEHICLE_PED_IS_USING(PLAYER::PLAYER_PED_ID()) != 0)
		{
			__LIB_0__::func_505(PED::GET_VEHICLE_PED_IS_USING(PLAYER::PLAYER_PED_ID()), -1);
			__LIB_0__::func_377(PED::GET_VEHICLE_PED_IS_USING(PLAYER::PLAYER_PED_ID()), -1);
		}
		PLAYER::SET_ALL_RANDOM_PEDS_FLEE_THIS_FRAME(PLAYER::PLAYER_ID());
		func_874();
		func_873();
		if (iLocal_479 >= 4 && iLocal_479 <= 8)
		{
			MISC::SET_INSTANCE_PRIORITY_HINT(2);
		}
		else
		{
			MISC::SET_INSTANCE_PRIORITY_HINT(0);
		}
		switch (iLocal_479)
		{
			case 0:
				if (func_869(__LIB_0__::func_518(1)) && func_869(joaat("f620")))
				{
					func_759();
				}
				break;
			case 1:
				func_758();
				break;
			case 2:
				if (func_755(1, sLocal_219) && func_755(2, sLocal_219))
				{
					func_693();
				}
				break;
			case 3:
				if (((((func_869(joaat("IG_Car3guy2")) && func_869(joaat("IG_Car3guy1"))) && func_869(joaat("cheetah"))) && func_869(joaat("entityxf"))) && func_755(500, sLocal_220)) && func_755(501, sLocal_220))
				{
					func_689();
				}
				break;
			case 4:
				if ((((func_755(500, sLocal_220) && func_755(501, sLocal_220)) && func_755(401, sLocal_220)) && func_755(403, sLocal_220)) && func_686(sLocal_225))
				{
					func_678();
				}
				break;
			case 5:
				if ((((((((func_869(__LIB_0__::func_518(0)) && func_869(__LIB_0__::func_518(2))) && func_869(joaat("policeb"))) && func_869(joaat("prop_player_phone_01"))) && func_869(joaat("prop_donut_02"))) && func_869(joaat("prop_donut_02b"))) && func_755(600, "ALuberSetup")) && func_686(sLocal_3030)) && func_686(sLocal_3031))
				{
					func_640();
				}
				break;
			case 6:
				if (((((func_755(500, sLocal_221) && func_755(400, sLocal_221)) && func_755(401, sLocal_221)) && func_755(402, sLocal_221)) && func_686(sLocal_224)) && func_686(sLocal_225))
				{
					func_558();
				}
				break;
			case 7:
				func_556();
				break;
			case 8:
				if (func_869(joaat("p_ld_id_card_01")))
				{
					func_369();
				}
				break;
			case 9:
				if ((((((func_869(joaat("felon")) && func_869(joaat("S_M_Y_DWService_02"))) && func_869(__LIB_0__::func_493(45))) && func_869(__LIB_0__::func_493(29))) && func_755(1, sLocal_222)) && func_755(2, sLocal_222)) && func_755(3, sLocal_222))
				{
					func_35();
				}
				break;
			case 10:
				func_25();
				break;
			case 11:
				func_1();
				break;
		}
		SYSTEM::WAIT(0);
	}
}

void func_1()//Position - 0xDC0
{
	func_940();
	if (ENTITY::DOES_ENTITY_EXIST(iLocal_226) && !PED::IS_PED_INJURED(iLocal_226))
	{
		if (TASK::GET_SCRIPT_TASK_STATUS(iLocal_226, joaat("SCRIPT_TASK_REACT_AND_FLEE_PED")) != 1 && TASK::GET_SCRIPT_TASK_STATUS(iLocal_226, joaat("SCRIPT_TASK_VEHICLE_MISSION")) != 1)
		{
			TASK::CLEAR_PED_TASKS(iLocal_226);
			if ((ENTITY::DOES_ENTITY_EXIST(iLocal_233) && !ENTITY::IS_ENTITY_DEAD(iLocal_233, false)) && PED::IS_PED_IN_VEHICLE(iLocal_226, iLocal_233, false))
			{
				if (ENTITY::DOES_ENTITY_EXIST(iLocal_232) && !ENTITY::IS_ENTITY_DEAD(iLocal_232, false))
				{
					TASK::TASK_VEHICLE_MISSION(iLocal_226, iLocal_233, iLocal_232, 8, 50f, 262144, 1f, 1f, true);
				}
			}
			else
			{
				TASK::TASK_REACT_AND_FLEE_PED(iLocal_226, PLAYER::PLAYER_PED_ID());
			}
			PED::SET_PED_KEEP_TASK(iLocal_226, true);
		}
	}
	if (ENTITY::DOES_ENTITY_EXIST(iLocal_227) && !PED::IS_PED_INJURED(iLocal_227))
	{
		if (TASK::GET_SCRIPT_TASK_STATUS(iLocal_227, joaat("SCRIPT_TASK_REACT_AND_FLEE_PED")) != 1 && TASK::GET_SCRIPT_TASK_STATUS(iLocal_227, joaat("SCRIPT_TASK_VEHICLE_MISSION")) != 1)
		{
			TASK::CLEAR_PED_TASKS(iLocal_227);
			if ((ENTITY::DOES_ENTITY_EXIST(iLocal_234) && !ENTITY::IS_ENTITY_DEAD(iLocal_234, false)) && PED::IS_PED_IN_VEHICLE(iLocal_227, iLocal_234, false))
			{
				if (ENTITY::DOES_ENTITY_EXIST(iLocal_232) && !ENTITY::IS_ENTITY_DEAD(iLocal_232, false))
				{
					TASK::TASK_VEHICLE_MISSION(iLocal_227, iLocal_234, iLocal_232, 8, 50f, 262144, 1f, 1f, true);
				}
			}
			else
			{
				TASK::TASK_REACT_AND_FLEE_PED(iLocal_227, PLAYER::PLAYER_PED_ID());
			}
			PED::SET_PED_KEEP_TASK(iLocal_227, true);
		}
	}
	func_24(10);
	if (func_897("MollyContact"))
	{
		__LIB_15__::func_932(45);
	}
	if (iLocal_479 == 5)
	{
		__LIB_0__::func_325();
		__LIB_0__::func_366(1);
	}
	switch (iLocal_480)
	{
		case 0:
			__LIB_0__::func_381("S3_FAIL");
			break;
		case 1:
			__LIB_0__::func_381("S3_FAIL");
			break;
		case 2:
			__LIB_0__::func_381("CMN_MDIED" /* GXT: ~s~Michael died. */);
			break;
		case 3:
			__LIB_0__::func_381("CMN_FDIED" /* GXT: ~s~Franklin died. */);
			break;
		case 4:
			__LIB_0__::func_381("CMN_TDIED" /* GXT: ~s~Trevor died. */);
			break;
		case 5:
			__LIB_0__::func_381("S3_FSHOTTREVOR");
			break;
		case 6:
			__LIB_0__::func_381("S3_FDEVINDIED");
			break;
		case 7:
			__LIB_0__::func_381("S3_FSHOTDEVIN");
			break;
		case 8:
			__LIB_0__::func_381("S3_FDEVINCAR");
			break;
		case 9:
			__LIB_0__::func_381("S3_FSHOTDEVCAR");
			break;
		case 10:
			__LIB_0__::func_381("S3_FRACERDIED");
			break;
		case 11:
			__LIB_0__::func_381("CMN_GENDEST" /* GXT: ~s~The car was destroyed. */);
			break;
		case 12:
			__LIB_0__::func_381("S3_FBIKEDEST");
			break;
		case 13:
			__LIB_0__::func_381("S3_FBIKEDESTT");
			break;
		case 14:
			__LIB_0__::func_381("S3_FBIKEDAMT");
			break;
		case 15:
			__LIB_0__::func_381("S3_FLOSTRACE");
			break;
		case 16:
			__LIB_0__::func_381("S3_FBIKEABAN");
			break;
		case 17:
			__LIB_0__::func_381("S3_FCARABAN");
			break;
		case 18:
			__LIB_0__::func_381("S3_FSHOTRACER");
			break;
		case 19:
			__LIB_0__::func_381("S3_FSPKDRACER");
			break;
		case 20:
			__LIB_0__::func_381("S3_FRACERLEFT");
			break;
		case 21:
			__LIB_0__::func_381("S3_FDMGCAR");
			break;
		case 22:
			__LIB_0__::func_381("S3_FSTUCKCAR");
			break;
		case 23:
			__LIB_0__::func_381("S3_FDISRACE");
			break;
	}
	func_3(0);
	while (!__LIB_0__::func_223())
	{
		SYSTEM::WAIT(0);
	}
	func_992(0, 0);
}

void func_3(int iParam0)//Position - 0x1141
{
	int iVar0;
	if (Global_113386.f_9085_FLOW_STRUCT_isGameflowActive || __LIB_0__::func_2(0))
	{
		iVar0 = __LIB_0__::func_380();
		if (!func_4(iVar0))
		{
			return;
		}
		MISC::SET_BIT(&(Global_91193[iVar0 /*5*/].f_1), 5);
		Global_100477 = iParam0;
	}
}

int func_4(int iParam0)//Position - 0x1186
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
	func_5(&(Global_113386.f_2363.f_539), iVar1);
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

void func_5(var uParam0, int iParam1)//Position - 0x1296
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
			if (!func_7(Global_113386.f_18533[iVar0], &Var2, &fVar3))
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

int func_7(int iParam0, var uParam1, float fParam2)//Position - 0x146A
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
			return func_7(8, uParam1, fParam2);
			break;
		case 10:
			return func_7(8, uParam1, fParam2);
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

void func_24(int iParam0)//Position - 0x2270
{
	iLocal_488 = iParam0;
	func_873();
}

void func_25()//Position - 0x2281
{
	int iVar0;
	if (CAM::IS_SCREEN_FADED_OUT())
	{
		CAM::DO_SCREEN_FADE_IN(800);
	}
	if (!func_897("MollyContact"))
	{
		switch (__LIB_15__::func_944())
		{
			case 0:
				iVar0 = 0;
				break;
			case 1:
				iVar0 = 1;
				break;
			case 2:
				iVar0 = 2;
				break;
		}
		__LIB_31__::func_806(45, iVar0, 1);
	}
	func_940();
	__LIB_0__::func_526(0, 0);
	iLocal_203 = 1;
	func_992(0, 0);
}

void func_35()//Position - 0x2707
{
	float fVar0;
	int iVar1;
	int iVar2;
	int iVar3;
	float fVar4;
	float fVar5;
	float fVar6;
	float fVar7;
	float fVar8;
	struct<3> Var9;
	struct<3> Var10;
	int iVar11;
	int iVar12;
	int iVar13;
	int iVar14;
	if (func_366())
	{
		iLocal_198 = 0;
		CUTSCENE::REQUEST_CUTSCENE("car_1_ext_concat", 8);
		if (!AUDIO::IS_AUDIO_SCENE_ACTIVE("CAR_1_GARAGE_ARRIVAL"))
		{
			AUDIO::START_AUDIO_SCENE("CAR_1_GARAGE_ARRIVAL");
		}
		if (func_365())
		{
			TASK::CLEAR_PED_TASKS_IMMEDIATELY(PLAYER::PLAYER_PED_ID());
			TASK::CLEAR_PED_TASKS(uLocal_489[1]);
			TASK::CLEAR_PED_TASKS(uLocal_489[2]);
			PED::CLEAR_PED_PROP(PLAYER::PLAYER_PED_ID(), 0);
			PED::CLEAR_PED_PROP(uLocal_489[2], 0);
			__LIB_37__::func_920(PLAYER::PLAYER_PED_ID(), 485.9252f, -1330.5171f, 28.2488f, 293.9519f, 0);
			__LIB_37__::func_920(uLocal_489[1], 486.2881f, -1331.0845f, 28.285f, 296.1121f, 0);
			__LIB_37__::func_920(uLocal_489[2], 485.592f, -1330.7214f, 28.2454f, 296.1122f, 0);
			__LIB_15__::func_889(iLocal_232, 485.399f, -1332.9005f, 28.3095f, 292.4873f);
			__LIB_15__::func_889(iLocal_233, 485.9952f, -1335.4487f, 28.2862f, 286.6455f);
			__LIB_15__::func_889(iLocal_234, 487.1696f, -1337.8451f, 28.2688f, 293.0351f);
			ENTITY::FREEZE_ENTITY_POSITION(iLocal_232, true);
			ENTITY::FREEZE_ENTITY_POSITION(iLocal_233, true);
			ENTITY::FREEZE_ENTITY_POSITION(iLocal_234, true);
			if (iLocal_205 == 0)
			{
				iLocal_250 = INTERIOR::GET_INTERIOR_AT_COORDS_WITH_TYPE(481.1439f, -1314.4697f, 28.2017f, "v_chopshop");
				INTERIOR::PIN_INTERIOR_IN_MEMORY(iLocal_250);
				while (!INTERIOR::IS_INTERIOR_READY(iLocal_250))
				{
					func_362(0);
				}
				iLocal_205 = 1;
			}
			if (!bLocal_201)
			{
				func_361(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true), 1101004800);
			}
			ENTITY::FREEZE_ENTITY_POSITION(iLocal_232, false);
			ENTITY::FREEZE_ENTITY_POSITION(iLocal_233, false);
			ENTITY::FREEZE_ENTITY_POSITION(iLocal_234, false);
			VEHICLE::SET_VEHICLE_ON_GROUND_PROPERLY(iLocal_232, 5f);
			VEHICLE::SET_VEHICLE_ON_GROUND_PROPERLY(iLocal_233, 5f);
			VEHICLE::SET_VEHICLE_ON_GROUND_PROPERLY(iLocal_234, 5f);
			if (!PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), iLocal_233, false))
			{
				PED::SET_PED_INTO_VEHICLE(PLAYER::PLAYER_PED_ID(), iLocal_233, -1);
			}
			if (!PED::IS_PED_IN_VEHICLE(uLocal_489[1], iLocal_232, false))
			{
				PED::SET_PED_INTO_VEHICLE(uLocal_489[1], iLocal_232, -1);
			}
			if (!PED::IS_PED_IN_VEHICLE(uLocal_489[2], iLocal_234, false))
			{
				PED::SET_PED_INTO_VEHICLE(uLocal_489[2], iLocal_234, -1);
			}
			CAM::SET_GAMEPLAY_CAM_RELATIVE_HEADING(0f);
			CAM::SET_GAMEPLAY_CAM_RELATIVE_PITCH(-10f, 1f);
		}
	}
	else
	{
		if (CUTSCENE::CAN_REQUEST_ASSETS_FOR_CUTSCENE_ENTITY())
		{
			__LIB_41__::func_49("Franklin", func_359(1), 0, 2);
			__LIB_41__::func_49("Michael", func_359(0), 0, 2);
			__LIB_41__::func_49("Trevor", func_359(2), 0, 2);
			CUTSCENE::SET_CUTSCENE_PED_PROP_VARIATION("MOLLY", 1, 0, 0, 0);
		}
		VEHICLE::SET_VEHICLE_DENSITY_MULTIPLIER_THIS_FRAME(0f);
		fVar0 = 1f;
		if (iLocal_180 < 4)
		{
			if ((((!PED::IS_PED_INJURED(iLocal_230) && PED::HAVE_ALL_STREAMING_REQUESTS_COMPLETED(iLocal_230)) && (!PED::IS_PED_INJURED(iLocal_231) && PED::HAVE_ALL_STREAMING_REQUESTS_COMPLETED(iLocal_231))) && (!PED::IS_PED_INJURED(iLocal_229) && PED::HAVE_ALL_STREAMING_REQUESTS_COMPLETED(iLocal_229))) && (!PED::IS_PED_INJURED(iLocal_228) && PED::HAVE_ALL_STREAMING_REQUESTS_COMPLETED(iLocal_228)))
			{
				fVar0 = 0.5f;
				SYSTEM::SETTIMERB(0);
				func_894("WaitingForPeds", 0);
			}
			else
			{
				fVar0 = 0f;
				SYSTEM::SETTIMERB(0);
				func_894("WaitingForPeds", 1);
			}
		}
		else if (iLocal_180 == 4)
		{
			if ((((!PED::IS_PED_INJURED(iLocal_230) && PED::HAVE_ALL_STREAMING_REQUESTS_COMPLETED(iLocal_230)) && (!PED::IS_PED_INJURED(iLocal_231) && PED::HAVE_ALL_STREAMING_REQUESTS_COMPLETED(iLocal_231))) && (!PED::IS_PED_INJURED(iLocal_229) && PED::HAVE_ALL_STREAMING_REQUESTS_COMPLETED(iLocal_229))) && (!PED::IS_PED_INJURED(iLocal_228) && PED::HAVE_ALL_STREAMING_REQUESTS_COMPLETED(iLocal_228)))
			{
				if (!func_897("WaitingForPeds"))
				{
					fVar0 = (0.5f + __LIB_3__::func_714(0f, 0.5f, 0f, 3000f, SYSTEM::TO_FLOAT(SYSTEM::TIMERA())));
				}
				else
				{
					fVar0 = (0f + __LIB_3__::func_714(0f, 1f, 0f, 6000f, SYSTEM::TO_FLOAT(SYSTEM::TIMERB())));
				}
			}
			else
			{
				fVar0 = 0f;
				SYSTEM::SETTIMERB(0);
				func_894("WaitingForPeds", 1);
			}
		}
		else
		{
			fVar0 = 1f;
		}
		if (!OBJECT::IS_DOOR_REGISTERED_WITH_SYSTEM(Global_41748[24 /*31*/]))
		{
			OBJECT::ADD_DOOR_TO_SYSTEM(Global_41748[24 /*31*/], Global_41748[24 /*31*/].f_5, Global_41748[24 /*31*/].f_2, true, true, false);
		}
		if (OBJECT::IS_DOOR_REGISTERED_WITH_SYSTEM(Global_41748[24 /*31*/]))
		{
			if (OBJECT::DOOR_SYSTEM_GET_OPEN_RATIO(Global_41748[24 /*31*/]) != fVar0 || OBJECT::DOOR_SYSTEM_GET_DOOR_STATE(Global_41748[24 /*31*/]) != 4)
			{
				OBJECT::DOOR_SYSTEM_SET_OPEN_RATIO(Global_41748[24 /*31*/], fVar0, false, false);
				OBJECT::DOOR_SYSTEM_SET_DOOR_STATE(Global_41748[24 /*31*/], 4, false, true);
			}
		}
		if (!OBJECT::IS_DOOR_REGISTERED_WITH_SYSTEM(iLocal_254))
		{
			OBJECT::ADD_DOOR_TO_SYSTEM(iLocal_254, joaat("prop_sc1_06_gate_r"), 500.1759f, -1320.545f, 28.2499f, true, true, false);
		}
		if (OBJECT::IS_DOOR_REGISTERED_WITH_SYSTEM(iLocal_254))
		{
			if (OBJECT::DOOR_SYSTEM_GET_OPEN_RATIO(iLocal_254) != -1f || OBJECT::DOOR_SYSTEM_GET_DOOR_STATE(iLocal_254) != 5)
			{
				OBJECT::DOOR_SYSTEM_SET_OPEN_RATIO(iLocal_254, -1f, false, false);
				OBJECT::DOOR_SYSTEM_SET_DOOR_STATE(iLocal_254, 5, false, true);
			}
		}
		switch (iLocal_180)
		{
			case 0:
				if (!func_897("svolCarStealOutro"))
				{
					iLocal_251 = STREAMING::STREAMVOL_CREATE_FRUSTUM(498.09998f, -1334.3235f, 31.278627f, __LIB_0__::func_79(-0.022675f, 0.266968f, -0.017954f), 300f, 12, 127);
					func_894("svolCarStealOutro", 1);
				}
				if (iLocal_205 == 0)
				{
					iLocal_250 = INTERIOR::GET_INTERIOR_AT_COORDS_WITH_TYPE(481.1439f, -1314.4697f, 28.2017f, "v_chopshop");
					INTERIOR::PIN_INTERIOR_IN_MEMORY(iLocal_250);
				}
				iLocal_183[0] = MISC::GET_GAME_TIMER() + 20000;
				func_351();
				break;
			case 1:
				if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), 482.35654f, -1307.4642f, 27.70667f, 497.54346f, -1328.4677f, 33.34179f, 10f, false, true, 0))
				{
					func_350(PLAYER::PLAYER_ID(), 0, 0);
				}
				iLocal_205 = 1;
				func_350(PLAYER::PLAYER_ID(), 0, 0);
				__LIB_0__::func_532(1, 1, 1, 0, 0, 0, 0);
				__LIB_0__::func_366(1);
				iVar11 = PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false);
				fVar4 = MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(iVar11, true), VEHICLE::GET_POSITION_OF_VEHICLE_RECORDING_AT_TIME(3, VEHICLE::GET_TOTAL_DURATION_OF_VEHICLE_RECORDING(3, sLocal_222), sLocal_222), true);
				fVar5 = MISC::GET_DISTANCE_BETWEEN_COORDS(VEHICLE::GET_POSITION_OF_VEHICLE_RECORDING_AT_TIME(3, 0f, sLocal_222), VEHICLE::GET_POSITION_OF_VEHICLE_RECORDING_AT_TIME(3, VEHICLE::GET_TOTAL_DURATION_OF_VEHICLE_RECORDING(3, sLocal_222), sLocal_222), true);
				fVar6 = VEHICLE::GET_TOTAL_DURATION_OF_VEHICLE_RECORDING(3, sLocal_222);
				if (PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), iVar11, false))
				{
					fVar7 = 80f;
				}
				else
				{
					fVar7 = 100f;
				}
				fVar8 = __LIB_0__::func_331(((fVar6 / fVar5) * (fVar5 - fVar4)), 0f, ((fVar6 / 100f) * fVar7));
				VEHICLE::START_PLAYBACK_RECORDED_VEHICLE(iVar11, 3, sLocal_222, true);
				if (ENTITY::GET_ENTITY_MODEL(iVar11) == joaat("cheetah"))
				{
					VEHICLE::SET_GLOBAL_POSITION_OFFSET_FOR_RECORDED_VEHICLE_PLAYBACK(iVar11, 0f, 0f, -0.225f);
				}
				else if (ENTITY::GET_ENTITY_MODEL(iVar11) == joaat("entityxf"))
				{
					VEHICLE::SET_GLOBAL_POSITION_OFFSET_FOR_RECORDED_VEHICLE_PLAYBACK(iVar11, 0f, 0f, -0.15f);
				}
				if (fVar8 < ((VEHICLE::GET_TOTAL_DURATION_OF_VEHICLE_RECORDING(3, sLocal_222) / 100f) * 40f))
				{
					fVar8 = ((VEHICLE::GET_TOTAL_DURATION_OF_VEHICLE_RECORDING(3, sLocal_222) / 100f) * 40f);
				}
				__LIB_17__::func_84(&iVar11, fVar8);
				Var9 = { VEHICLE::GET_POSITION_OF_VEHICLE_RECORDING_AT_TIME(3, fVar8, sLocal_222) };
				if (__LIB_15__::func_944() != 1)
				{
					iVar11 = iLocal_232;
				}
				else if (__LIB_15__::func_944() != 0)
				{
					iVar11 = iLocal_233;
				}
				fVar4 = MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(iVar11, true), VEHICLE::GET_POSITION_OF_VEHICLE_RECORDING_AT_TIME(1, VEHICLE::GET_TOTAL_DURATION_OF_VEHICLE_RECORDING(1, sLocal_222), sLocal_222), true);
				fVar5 = MISC::GET_DISTANCE_BETWEEN_COORDS(VEHICLE::GET_POSITION_OF_VEHICLE_RECORDING_AT_TIME(1, 0f, sLocal_222), VEHICLE::GET_POSITION_OF_VEHICLE_RECORDING_AT_TIME(1, VEHICLE::GET_TOTAL_DURATION_OF_VEHICLE_RECORDING(1, sLocal_222), sLocal_222), true);
				fVar6 = VEHICLE::GET_TOTAL_DURATION_OF_VEHICLE_RECORDING(1, sLocal_222);
				if (PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), iVar11, false))
				{
					fVar7 = 80f;
				}
				else
				{
					fVar7 = 100f;
				}
				fVar8 = __LIB_0__::func_331(((fVar6 / fVar5) * (fVar5 - fVar4)), 0f, ((fVar6 / 100f) * fVar7));
				if (fVar8 < ((fVar6 / 100f) * 95f))
				{
					if (MISC::GET_DISTANCE_BETWEEN_COORDS(VEHICLE::GET_POSITION_OF_VEHICLE_RECORDING_AT_TIME(1, fVar8, sLocal_222), Var9, true) <= 10f && MISC::GET_DISTANCE_BETWEEN_COORDS(VEHICLE::GET_POSITION_OF_VEHICLE_RECORDING_AT_TIME(1, fVar8, sLocal_222), VEHICLE::GET_POSITION_OF_VEHICLE_RECORDING_AT_TIME(1, VEHICLE::GET_TOTAL_DURATION_OF_VEHICLE_RECORDING(1, sLocal_222), sLocal_222), true) > 5f)
					{
						fVar8 = __LIB_0__::func_331((((fVar6 / fVar5) * (fVar5 - fVar4)) - 1500f), 0f, ((VEHICLE::GET_TOTAL_DURATION_OF_VEHICLE_RECORDING(1, sLocal_222) / 100f) * fVar7));
					}
				}
				VEHICLE::START_PLAYBACK_RECORDED_VEHICLE(iVar11, 1, sLocal_222, true);
				if (ENTITY::GET_ENTITY_MODEL(iVar11) == joaat("f620"))
				{
					VEHICLE::SET_GLOBAL_POSITION_OFFSET_FOR_RECORDED_VEHICLE_PLAYBACK(iVar11, 0f, 0f, 0.2f);
				}
				else if (ENTITY::GET_ENTITY_MODEL(iVar11) == joaat("cheetah"))
				{
					VEHICLE::SET_GLOBAL_POSITION_OFFSET_FOR_RECORDED_VEHICLE_PLAYBACK(iVar11, 0f, 0f, -0.05f);
				}
				if (fVar8 < ((VEHICLE::GET_TOTAL_DURATION_OF_VEHICLE_RECORDING(1, sLocal_222) / 100f) * 40f))
				{
					fVar8 = ((VEHICLE::GET_TOTAL_DURATION_OF_VEHICLE_RECORDING(1, sLocal_222) / 100f) * 40f);
				}
				__LIB_17__::func_84(&iVar11, fVar8);
				Var10 = { VEHICLE::GET_POSITION_OF_VEHICLE_RECORDING_AT_TIME(1, fVar8, sLocal_222) };
				if (__LIB_15__::func_944() != 2)
				{
					iVar11 = iLocal_234;
				}
				else if (__LIB_15__::func_944() != 0)
				{
					iVar11 = iLocal_233;
				}
				fVar4 = MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(iVar11, true), VEHICLE::GET_POSITION_OF_VEHICLE_RECORDING_AT_TIME(2, VEHICLE::GET_TOTAL_DURATION_OF_VEHICLE_RECORDING(2, sLocal_222), sLocal_222), true);
				fVar5 = MISC::GET_DISTANCE_BETWEEN_COORDS(VEHICLE::GET_POSITION_OF_VEHICLE_RECORDING_AT_TIME(2, 0f, sLocal_222), VEHICLE::GET_POSITION_OF_VEHICLE_RECORDING_AT_TIME(2, VEHICLE::GET_TOTAL_DURATION_OF_VEHICLE_RECORDING(2, sLocal_222), sLocal_222), true);
				fVar6 = VEHICLE::GET_TOTAL_DURATION_OF_VEHICLE_RECORDING(2, sLocal_222);
				if (PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), iVar11, false))
				{
					fVar7 = 80f;
				}
				else
				{
					fVar7 = 100f;
				}
				fVar8 = __LIB_0__::func_331(((fVar6 / fVar5) * (fVar5 - fVar4)), 0f, ((fVar6 / 100f) * fVar7));
				if (fVar8 < ((fVar6 / 100f) * 95f))
				{
					if (MISC::GET_DISTANCE_BETWEEN_COORDS(VEHICLE::GET_POSITION_OF_VEHICLE_RECORDING_AT_TIME(2, fVar8, sLocal_222), Var9, true) <= 10f && MISC::GET_DISTANCE_BETWEEN_COORDS(VEHICLE::GET_POSITION_OF_VEHICLE_RECORDING_AT_TIME(2, fVar8, sLocal_222), VEHICLE::GET_POSITION_OF_VEHICLE_RECORDING_AT_TIME(2, VEHICLE::GET_TOTAL_DURATION_OF_VEHICLE_RECORDING(2, sLocal_222), sLocal_222), true) > 5f)
					{
						fVar8 = __LIB_0__::func_331((((fVar6 / fVar5) * (fVar5 - fVar4)) - 1500f), 0f, ((VEHICLE::GET_TOTAL_DURATION_OF_VEHICLE_RECORDING(2, sLocal_222) / 100f) * fVar7));
					}
				}
				if (fVar8 < ((fVar6 / 100f) * 95f))
				{
					if (MISC::GET_DISTANCE_BETWEEN_COORDS(VEHICLE::GET_POSITION_OF_VEHICLE_RECORDING_AT_TIME(2, fVar8, sLocal_222), Var10, true) <= 10f && MISC::GET_DISTANCE_BETWEEN_COORDS(VEHICLE::GET_POSITION_OF_VEHICLE_RECORDING_AT_TIME(2, fVar8, sLocal_222), VEHICLE::GET_POSITION_OF_VEHICLE_RECORDING_AT_TIME(2, VEHICLE::GET_TOTAL_DURATION_OF_VEHICLE_RECORDING(2, sLocal_222), sLocal_222), true) > 5f)
					{
						fVar8 = __LIB_0__::func_331((((fVar6 / fVar5) * (fVar5 - fVar4)) - 1500f), 0f, ((VEHICLE::GET_TOTAL_DURATION_OF_VEHICLE_RECORDING(2, sLocal_222) / 100f) * fVar7));
					}
				}
				VEHICLE::START_PLAYBACK_RECORDED_VEHICLE(iVar11, 2, sLocal_222, true);
				if (ENTITY::GET_ENTITY_MODEL(iVar11) == joaat("f620"))
				{
					VEHICLE::SET_GLOBAL_POSITION_OFFSET_FOR_RECORDED_VEHICLE_PLAYBACK(iVar11, 0f, 0f, 0.275f);
				}
				else if (ENTITY::GET_ENTITY_MODEL(iVar11) == joaat("entityxf"))
				{
					VEHICLE::SET_GLOBAL_POSITION_OFFSET_FOR_RECORDED_VEHICLE_PLAYBACK(iVar11, 0f, 0f, 0.1f);
				}
				if (fVar8 < ((VEHICLE::GET_TOTAL_DURATION_OF_VEHICLE_RECORDING(2, sLocal_222) / 100f) * 40f))
				{
					fVar8 = ((VEHICLE::GET_TOTAL_DURATION_OF_VEHICLE_RECORDING(2, sLocal_222) / 100f) * 40f);
				}
				__LIB_17__::func_84(&iVar11, fVar8);
				PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(func_359(1), true);
				PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(func_359(0), true);
				PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(func_359(2), true);
				if (!PED::IS_PED_IN_VEHICLE(func_359(1), iLocal_232, false))
				{
					PED::SET_PED_INTO_VEHICLE(func_359(1), iLocal_232, -1);
				}
				if (!PED::IS_PED_IN_VEHICLE(func_359(0), iLocal_233, false))
				{
					PED::SET_PED_INTO_VEHICLE(func_359(0), iLocal_233, -1);
				}
				if (!PED::IS_PED_IN_VEHICLE(func_359(2), iLocal_234, false))
				{
					PED::SET_PED_INTO_VEHICLE(func_359(2), iLocal_234, -1);
				}
				func_362(0);
				MISC::CLEAR_AREA(485.399f, -1332.9005f, 28.3095f, 500f, true, false, false, false);
				if (!CAM::DOES_CAM_EXIST(iLocal_247))
				{
					iLocal_247 = CAM::CREATE_CAM("DEFAULT_SCRIPTED_CAMERA", true);
				}
				iVar12 = 0;
				iVar11 = PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false);
				if (VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(iVar11))
				{
					if (SYSTEM::ROUND((VEHICLE::GET_TOTAL_DURATION_OF_VEHICLE_RECORDING_ID(VEHICLE::GET_CURRENT_PLAYBACK_FOR_VEHICLE(iVar11)) - VEHICLE::GET_TIME_POSITION_IN_RECORDING(iVar11))) > iVar12)
					{
						iVar12 = SYSTEM::ROUND((VEHICLE::GET_TOTAL_DURATION_OF_VEHICLE_RECORDING_ID(VEHICLE::GET_CURRENT_PLAYBACK_FOR_VEHICLE(iVar11)) - VEHICLE::GET_TIME_POSITION_IN_RECORDING(iVar11)));
					}
				}
				CAM::SET_CAM_PARAMS(iLocal_247, 490.69843f, -1337.0697f, 30.857084f, -0.61913f, 0.022362f, -15.04257f, 25.977287f, 0, 1, 1, 2);
				CAM::SET_CAM_PARAMS(iLocal_247, 491.12616f, -1337.1604f, 30.104757f, -0.61913f, 0.022362f, -16.54691f, 25.977287f, iVar12 + 500, 0, 0, 2);
				CAM::SHAKE_CAM(iLocal_247, "HAND_SHAKE", 0.2f);
				CAM::RENDER_SCRIPT_CAMS(true, false, 3000, true, false, 0);
				STREAMING::OVERRIDE_LODSCALE_THIS_FRAME(1f);
				AUDIO::SET_FRONTEND_RADIO_ACTIVE(false);
				RECORDING::REPLAY_RECORD_BACK_FOR_TIME(8f, 0f, 4);
				RECORDING::REPLAY_START_EVENT(4);
				func_940();
				if (CAM::IS_SCREEN_FADED_OUT())
				{
					CAM::DO_SCREEN_FADE_IN(500);
				}
				iLocal_183[0] = MISC::GET_GAME_TIMER() + 20000;
				func_351();
				break;
			case 2:
				STREAMING::OVERRIDE_LODSCALE_THIS_FRAME(1f);
				iVar1 = 1;
				iVar2 = 1;
				iVar3 = 1;
				if (VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(iLocal_232) && VEHICLE::GET_TIME_POSITION_IN_RECORDING(iLocal_232) >= ((VEHICLE::GET_TOTAL_DURATION_OF_VEHICLE_RECORDING_ID(VEHICLE::GET_CURRENT_PLAYBACK_FOR_VEHICLE(iLocal_232)) / 100f) * 99f))
				{
					VEHICLE::PAUSE_PLAYBACK_RECORDED_VEHICLE(iLocal_232);
				}
				else
				{
					iVar3 = 0;
				}
				if (VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(iLocal_233) && VEHICLE::GET_TIME_POSITION_IN_RECORDING(iLocal_233) >= ((VEHICLE::GET_TOTAL_DURATION_OF_VEHICLE_RECORDING_ID(VEHICLE::GET_CURRENT_PLAYBACK_FOR_VEHICLE(iLocal_233)) / 100f) * 99f))
				{
					VEHICLE::PAUSE_PLAYBACK_RECORDED_VEHICLE(iLocal_233);
				}
				else
				{
					iVar1 = 0;
				}
				if (VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(iLocal_234) && VEHICLE::GET_TIME_POSITION_IN_RECORDING(iLocal_234) >= ((VEHICLE::GET_TOTAL_DURATION_OF_VEHICLE_RECORDING_ID(VEHICLE::GET_CURRENT_PLAYBACK_FOR_VEHICLE(iLocal_234)) / 100f) * 99f))
				{
					VEHICLE::PAUSE_PLAYBACK_RECORDED_VEHICLE(iLocal_234);
				}
				else
				{
					iVar2 = 0;
				}
				PED::SET_PED_RESET_FLAG(func_359(0), 287, true);
				PED::SET_PED_RESET_FLAG(func_359(2), 287, true);
				PED::SET_PED_RESET_FLAG(func_359(1), 287, true);
				if (((__LIB_15__::func_944() == 1 && (iVar3 || !VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(iLocal_232))) || (__LIB_15__::func_944() == 0 && (iVar1 || !VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(iLocal_233)))) || (__LIB_15__::func_944() == 2 && (iVar2 || !VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(iLocal_234))))
				{
					func_348(&iLocal_238, joaat("felon"), 481.3185f, -1317.7887f, 28.2023f, -63.4145f, -1, 0);
					__LIB_38__::func_761(&iLocal_230, joaat("S_M_Y_DWService_02"), 480.6057f, -1317.0214f, 28.2028f, 75.2925f, 1);
					PED::SET_PED_COMPONENT_VARIATION(iLocal_230, 0, 1, 0, 0);
					__LIB_38__::func_761(&iLocal_231, joaat("S_M_Y_DWService_02"), 478.7872f, -1317.6216f, 28.2028f, -56.3168f, 1);
					PED::SET_PED_COMPONENT_VARIATION(iLocal_231, 0, 2, 0, 0);
					__LIB_0__::func_648(&iLocal_229, 45, 479.5576f, -1315.9417f, 28.2028f, -66.9277f, 1);
					PED::SET_PED_PROP_INDEX(iLocal_229, 1, 0, 0, false);
					ENTITY::SET_ENTITY_SHOULD_FREEZE_WAITING_ON_COLLISION(iLocal_229, true);
					__LIB_0__::func_648(&iLocal_228, 29, 479.905f, -1314.8568f, 28.2028f, 170.8332f, 1);
					PED::SET_PED_COMPONENT_VARIATION(iLocal_228, 3, 2, 0, 0);
					PED::SET_PED_COMPONENT_VARIATION(iLocal_228, 4, 2, 0, 0);
					PED::SET_PED_COMPONENT_VARIATION(iLocal_228, 10, 1, 0, 0);
					ENTITY::SET_ENTITY_SHOULD_FREEZE_WAITING_ON_COLLISION(iLocal_228, true);
					func_351();
				}
				break;
			case 3:
				STREAMING::OVERRIDE_LODSCALE_THIS_FRAME(1f);
				iVar1 = 1;
				iVar2 = 1;
				iVar3 = 1;
				if (VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(iLocal_232) && VEHICLE::GET_TIME_POSITION_IN_RECORDING(iLocal_232) >= ((VEHICLE::GET_TOTAL_DURATION_OF_VEHICLE_RECORDING_ID(VEHICLE::GET_CURRENT_PLAYBACK_FOR_VEHICLE(iLocal_232)) / 100f) * 99f))
				{
					VEHICLE::PAUSE_PLAYBACK_RECORDED_VEHICLE(iLocal_232);
				}
				else
				{
					iVar3 = 0;
				}
				if (VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(iLocal_233) && VEHICLE::GET_TIME_POSITION_IN_RECORDING(iLocal_233) >= ((VEHICLE::GET_TOTAL_DURATION_OF_VEHICLE_RECORDING_ID(VEHICLE::GET_CURRENT_PLAYBACK_FOR_VEHICLE(iLocal_233)) / 100f) * 99f))
				{
					VEHICLE::PAUSE_PLAYBACK_RECORDED_VEHICLE(iLocal_233);
				}
				else
				{
					iVar1 = 0;
				}
				if (VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(iLocal_234) && VEHICLE::GET_TIME_POSITION_IN_RECORDING(iLocal_234) >= ((VEHICLE::GET_TOTAL_DURATION_OF_VEHICLE_RECORDING_ID(VEHICLE::GET_CURRENT_PLAYBACK_FOR_VEHICLE(iLocal_234)) / 100f) * 99f))
				{
					VEHICLE::PAUSE_PLAYBACK_RECORDED_VEHICLE(iLocal_234);
				}
				else
				{
					iVar2 = 0;
				}
				PED::SET_PED_RESET_FLAG(func_359(0), 287, true);
				PED::SET_PED_RESET_FLAG(func_359(2), 287, true);
				PED::SET_PED_RESET_FLAG(func_359(1), 287, true);
				if (iVar3 || !VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(iLocal_232))
				{
					if (TASK::GET_SCRIPT_TASK_STATUS(func_359(1), joaat("SCRIPT_TASK_PERFORM_SEQUENCE")) != 1)
					{
						TASK::OPEN_SEQUENCE_TASK(&iLocal_249);
						TASK::TASK_LEAVE_ANY_VEHICLE(0, 400, 0);
						TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, 479.905f, -1314.8568f, 29.1361f, 1f, 20000, 0.25f, 0, 40000f);
						TASK::CLOSE_SEQUENCE_TASK(iLocal_249);
						TASK::TASK_PERFORM_SEQUENCE(func_359(1), iLocal_249);
						TASK::CLEAR_SEQUENCE_TASK(&iLocal_249);
					}
				}
				if (iVar1 || !VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(iLocal_233))
				{
					if (TASK::GET_SCRIPT_TASK_STATUS(func_359(0), joaat("SCRIPT_TASK_PERFORM_SEQUENCE")) != 1)
					{
						TASK::OPEN_SEQUENCE_TASK(&iLocal_249);
						TASK::TASK_LEAVE_ANY_VEHICLE(0, 0, 0);
						TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, 479.905f, -1314.8568f, 29.1361f, 1f, 20000, 0.25f, 0, 40000f);
						TASK::CLOSE_SEQUENCE_TASK(iLocal_249);
						TASK::TASK_PERFORM_SEQUENCE(func_359(0), iLocal_249);
						TASK::CLEAR_SEQUENCE_TASK(&iLocal_249);
					}
				}
				if (iVar2 || !VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(iLocal_234))
				{
					if (TASK::GET_SCRIPT_TASK_STATUS(func_359(2), joaat("SCRIPT_TASK_PERFORM_SEQUENCE")) != 1)
					{
						TASK::OPEN_SEQUENCE_TASK(&iLocal_249);
						TASK::TASK_LEAVE_ANY_VEHICLE(0, 150, 0);
						TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, 479.905f, -1314.8568f, 29.1361f, 1f, 20000, 0.25f, 0, 40000f);
						TASK::CLOSE_SEQUENCE_TASK(iLocal_249);
						TASK::TASK_PERFORM_SEQUENCE(func_359(2), iLocal_249);
						TASK::CLEAR_SEQUENCE_TASK(&iLocal_249);
					}
				}
				if (SYSTEM::TIMERA() > 500)
				{
					CAM::SET_CAM_PARAMS(iLocal_247, 506.65845f, -1312.6608f, 29.65644f, 1.058747f, 0.013282f, 96.03135f, 36.686596f, 0, 1, 1, 2);
					CAM::SET_CAM_PARAMS(iLocal_247, 505.9593f, -1312.439f, 29.66883f, 1.058747f, 0.013282f, 96.03135f, 36.686596f, 6000, 0, 0, 2);
					if (VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(iLocal_232) && VEHICLE::GET_TIME_POSITION_IN_RECORDING(iLocal_232) < ((VEHICLE::GET_TOTAL_DURATION_OF_VEHICLE_RECORDING_ID(VEHICLE::GET_CURRENT_PLAYBACK_FOR_VEHICLE(iLocal_232)) / 100f) * 80f))
					{
						__LIB_17__::func_84(&iLocal_232, ((VEHICLE::GET_TOTAL_DURATION_OF_VEHICLE_RECORDING_ID(VEHICLE::GET_CURRENT_PLAYBACK_FOR_VEHICLE(iLocal_232)) / 100f) * 80f));
						VEHICLE::FORCE_PLAYBACK_RECORDED_VEHICLE_UPDATE(iLocal_232, true);
					}
					if (VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(iLocal_233) && VEHICLE::GET_TIME_POSITION_IN_RECORDING(iLocal_233) < ((VEHICLE::GET_TOTAL_DURATION_OF_VEHICLE_RECORDING_ID(VEHICLE::GET_CURRENT_PLAYBACK_FOR_VEHICLE(iLocal_233)) / 100f) * 80f))
					{
						__LIB_17__::func_84(&iLocal_233, ((VEHICLE::GET_TOTAL_DURATION_OF_VEHICLE_RECORDING_ID(VEHICLE::GET_CURRENT_PLAYBACK_FOR_VEHICLE(iLocal_233)) / 100f) * 80f));
						VEHICLE::FORCE_PLAYBACK_RECORDED_VEHICLE_UPDATE(iLocal_233, true);
					}
					if (VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(iLocal_234) && VEHICLE::GET_TIME_POSITION_IN_RECORDING(iLocal_234) < ((VEHICLE::GET_TOTAL_DURATION_OF_VEHICLE_RECORDING_ID(VEHICLE::GET_CURRENT_PLAYBACK_FOR_VEHICLE(iLocal_234)) / 100f) * 80f))
					{
						__LIB_17__::func_84(&iLocal_234, ((VEHICLE::GET_TOTAL_DURATION_OF_VEHICLE_RECORDING_ID(VEHICLE::GET_CURRENT_PLAYBACK_FOR_VEHICLE(iLocal_234)) / 100f) * 80f));
						VEHICLE::FORCE_PLAYBACK_RECORDED_VEHICLE_UPDATE(iLocal_234, true);
					}
					func_351();
				}
				break;
			case 4:
				STREAMING::OVERRIDE_LODSCALE_THIS_FRAME(1f);
				iVar1 = 1;
				iVar2 = 1;
				iVar3 = 1;
				if (VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(iLocal_232) && VEHICLE::GET_TIME_POSITION_IN_RECORDING(iLocal_232) >= ((VEHICLE::GET_TOTAL_DURATION_OF_VEHICLE_RECORDING_ID(VEHICLE::GET_CURRENT_PLAYBACK_FOR_VEHICLE(iLocal_232)) / 100f) * 99f))
				{
					VEHICLE::PAUSE_PLAYBACK_RECORDED_VEHICLE(iLocal_232);
				}
				else
				{
					iVar3 = 0;
				}
				if (VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(iLocal_233) && VEHICLE::GET_TIME_POSITION_IN_RECORDING(iLocal_233) >= ((VEHICLE::GET_TOTAL_DURATION_OF_VEHICLE_RECORDING_ID(VEHICLE::GET_CURRENT_PLAYBACK_FOR_VEHICLE(iLocal_233)) / 100f) * 99f))
				{
					VEHICLE::PAUSE_PLAYBACK_RECORDED_VEHICLE(iLocal_233);
				}
				else
				{
					iVar1 = 0;
				}
				if (VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(iLocal_234) && VEHICLE::GET_TIME_POSITION_IN_RECORDING(iLocal_234) >= ((VEHICLE::GET_TOTAL_DURATION_OF_VEHICLE_RECORDING_ID(VEHICLE::GET_CURRENT_PLAYBACK_FOR_VEHICLE(iLocal_234)) / 100f) * 99f))
				{
					VEHICLE::PAUSE_PLAYBACK_RECORDED_VEHICLE(iLocal_234);
				}
				else
				{
					iVar2 = 0;
				}
				PED::SET_PED_RESET_FLAG(func_359(0), 287, true);
				PED::SET_PED_RESET_FLAG(func_359(2), 287, true);
				PED::SET_PED_RESET_FLAG(func_359(1), 287, true);
				if (iVar3 || !VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(iLocal_232))
				{
					if (TASK::GET_SCRIPT_TASK_STATUS(func_359(1), joaat("SCRIPT_TASK_PERFORM_SEQUENCE")) != 1)
					{
						TASK::OPEN_SEQUENCE_TASK(&iLocal_249);
						TASK::TASK_LEAVE_ANY_VEHICLE(0, 400, 0);
						TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, 479.905f, -1314.8568f, 29.1361f, 1f, 20000, 0.25f, 0, 40000f);
						TASK::CLOSE_SEQUENCE_TASK(iLocal_249);
						TASK::TASK_PERFORM_SEQUENCE(func_359(1), iLocal_249);
						TASK::CLEAR_SEQUENCE_TASK(&iLocal_249);
					}
				}
				if (iVar1 || !VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(iLocal_233))
				{
					if (TASK::GET_SCRIPT_TASK_STATUS(func_359(0), joaat("SCRIPT_TASK_PERFORM_SEQUENCE")) != 1)
					{
						TASK::OPEN_SEQUENCE_TASK(&iLocal_249);
						TASK::TASK_LEAVE_ANY_VEHICLE(0, 0, 0);
						TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, 479.905f, -1314.8568f, 29.1361f, 1f, 20000, 0.25f, 0, 40000f);
						TASK::CLOSE_SEQUENCE_TASK(iLocal_249);
						TASK::TASK_PERFORM_SEQUENCE(func_359(0), iLocal_249);
						TASK::CLEAR_SEQUENCE_TASK(&iLocal_249);
					}
				}
				if (iVar2 || !VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(iLocal_234))
				{
					if (TASK::GET_SCRIPT_TASK_STATUS(func_359(2), joaat("SCRIPT_TASK_PERFORM_SEQUENCE")) != 1)
					{
						TASK::OPEN_SEQUENCE_TASK(&iLocal_249);
						TASK::TASK_LEAVE_ANY_VEHICLE(0, 150, 0);
						TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, 479.905f, -1314.8568f, 29.1361f, 1f, 20000, 0.25f, 0, 40000f);
						TASK::CLOSE_SEQUENCE_TASK(iLocal_249);
						TASK::TASK_PERFORM_SEQUENCE(func_359(2), iLocal_249);
						TASK::CLEAR_SEQUENCE_TASK(&iLocal_249);
					}
				}
				if ((((((!VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(iLocal_232) || iVar3) && (!VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(iLocal_233) || iVar1)) && (!VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(iLocal_234) || iVar2)) && (SYSTEM::TIMERA() > 3000 && __LIB_13__::func_801("car_1_ext_concat"))) && (((PED::HAVE_ALL_STREAMING_REQUESTS_COMPLETED(iLocal_230) && PED::HAVE_ALL_STREAMING_REQUESTS_COMPLETED(iLocal_231)) && PED::HAVE_ALL_STREAMING_REQUESTS_COMPLETED(iLocal_229)) && PED::HAVE_ALL_STREAMING_REQUESTS_COMPLETED(iLocal_228))) || MISC::GET_GAME_TIMER() > iLocal_183[0])
				{
					if (STREAMING::STREAMVOL_IS_VALID(iLocal_251))
					{
						STREAMING::STREAMVOL_DELETE(iLocal_251);
					}
					__LIB_15__::func_888(&uLocal_489, 0, 0);
					__LIB_15__::func_888(&uLocal_489, 1, 0);
					__LIB_15__::func_888(&uLocal_489, 2, 0);
					iVar13 = PLAYER::PLAYER_PED_ID();
					if (__LIB_15__::func_944() != 0)
					{
						func_980(&uLocal_489, 0);
						func_956(&uLocal_489, 1, 1, 1);
						CAM::SET_GAMEPLAY_CAM_FOLLOW_PED_THIS_UPDATE(iVar13);
					}
					func_350(PLAYER::PLAYER_ID(), 0, 0);
					__LIB_0__::func_532(1, 1, 1, 0, 0, 0, 0);
					if (__LIB_15__::func_944() != 0)
					{
						CUTSCENE::REGISTER_ENTITY_FOR_CUTSCENE(func_359(0), "Michael", 0, 0, 0);
					}
					if (__LIB_15__::func_944() != 1)
					{
						CUTSCENE::REGISTER_ENTITY_FOR_CUTSCENE(func_359(1), "Franklin", 0, 0, 0);
					}
					if (__LIB_15__::func_944() != 2)
					{
						CUTSCENE::REGISTER_ENTITY_FOR_CUTSCENE(func_359(2), "Trevor", 0, 0, 0);
					}
					if (!ENTITY::IS_ENTITY_DEAD(iLocal_238, false))
					{
						CUTSCENE::REGISTER_ENTITY_FOR_CUTSCENE(iLocal_238, "Car_in_garage", 1, 0, 0);
					}
					CUTSCENE::REGISTER_ENTITY_FOR_CUTSCENE(iLocal_232, "Franklins_car", 0, 0, 0);
					CUTSCENE::REGISTER_ENTITY_FOR_CUTSCENE(iLocal_233, "Car_Racer_runsaway", 0, 0, 0);
					CUTSCENE::REGISTER_ENTITY_FOR_CUTSCENE(iLocal_234, "Car_Racer_dies", 0, 0, 0);
					CUTSCENE::REGISTER_ENTITY_FOR_CUTSCENE(iLocal_229, "MOLLY", 1, 0, 0);
					CUTSCENE::REGISTER_ENTITY_FOR_CUTSCENE(iLocal_228, "DEVIN", 1, 0, 0);
					if (!ENTITY::IS_ENTITY_DEAD(iLocal_230, false))
					{
						CUTSCENE::REGISTER_ENTITY_FOR_CUTSCENE(iLocal_230, "Car_1_guy", 1, 0, 0);
					}
					if (!ENTITY::IS_ENTITY_DEAD(iLocal_231, false))
					{
						CUTSCENE::REGISTER_ENTITY_FOR_CUTSCENE(iLocal_231, "Car_1_guy_2", 1, 0, 0);
					}
					CUTSCENE::START_CUTSCENE(0);
					func_362(0);
					CAM::RENDER_SCRIPT_CAMS(false, false, 3000, true, false, 0);
					AUDIO::SET_FRONTEND_RADIO_ACTIVE(true);
					func_351();
				}
				break;
			case 5:
				if (CUTSCENE::WAS_CUTSCENE_SKIPPED())
				{
					CUTSCENE::SET_CUTSCENE_FADE_VALUES(false, false, true, false);
					iLocal_202 = 1;
				}
				if (CUTSCENE::CAN_SET_EXIT_STATE_FOR_CAMERA(false))
				{
					CAM::SET_GAMEPLAY_CAM_RELATIVE_HEADING(0f);
					CAM::SET_GAMEPLAY_CAM_RELATIVE_PITCH(-10f, 1f);
				}
				if (!func_897("CutsceneFadeOut"))
				{
					if (CUTSCENE::GET_CUTSCENE_TIME() > SYSTEM::ROUND((108f * 1000f)))
					{
						if (!iLocal_202)
						{
							if (!func_897("RemoveCopUniform"))
							{
								__LIB_0__::func_472(0, iLocal_207);
								__LIB_0__::func_472(2, iLocal_207);
								func_39(func_359(0));
								func_894("RemoveCopUniform", 1);
							}
						}
						ENTITY::SET_ENTITY_VISIBLE(iLocal_232, false, false);
						ENTITY::SET_ENTITY_VISIBLE(iLocal_233, false, false);
						ENTITY::SET_ENTITY_VISIBLE(iLocal_234, false, false);
						VEHICLE::SET_VEHICLE_ENGINE_ON(iLocal_232, false, true, false);
						VEHICLE::SET_VEHICLE_ENGINE_ON(iLocal_233, false, true, false);
						VEHICLE::SET_VEHICLE_ENGINE_ON(iLocal_234, false, true, false);
						if (__LIB_15__::func_944() != 0)
						{
							ENTITY::SET_ENTITY_VISIBLE(uLocal_489[0], false, false);
						}
						if (__LIB_15__::func_944() != 1)
						{
							ENTITY::SET_ENTITY_VISIBLE(uLocal_489[1], false, false);
						}
						if (__LIB_15__::func_944() != 2)
						{
							ENTITY::SET_ENTITY_VISIBLE(uLocal_489[2], false, false);
						}
						ENTITY::REMOVE_MODEL_HIDE(498.7252f, -1317.7551f, 28.2534f, 1f, joaat("prop_sc1_06_gate_l"), false);
						ENTITY::REMOVE_MODEL_HIDE(494.6904f, -1312.0663f, 28.2534f, 1f, joaat("prop_sc1_06_gate_r"), false);
						func_894("CutsceneFadeOut", 1);
					}
				}
				if (CUTSCENE::CAN_SET_EXIT_STATE_FOR_REGISTERED_ENTITY("Michael", 0))
				{
					PLAYER::SIMULATE_PLAYER_INPUT_GAIT(PLAYER::PLAYER_ID(), 1f, 2000, 0f, true, false);
					PED::FORCE_PED_MOTION_STATE(func_359(0), joaat("MotionState_Walk"), true, 1, false);
				}
				if (iLocal_202)
				{
					if (!func_897("ForceFadeOut"))
					{
						if (CAM::IS_SCREEN_FADED_OUT())
						{
							func_894("ForceFadeOut", 1);
						}
					}
					else
					{
						CAM::DO_SCREEN_FADE_OUT(0);
					}
				}
				if (CUTSCENE::HAS_CUTSCENE_FINISHED())
				{
					RECORDING::REPLAY_STOP_EVENT();
					if (iLocal_202)
					{
						func_361(498.7252f, -1317.7551f, 28.2534f, 75f);
						if (!func_897("RemoveCopUniform"))
						{
							__LIB_0__::func_472(0, iLocal_207);
							__LIB_0__::func_472(2, iLocal_207);
							func_39(func_359(0));
						}
						iVar14 = MISC::GET_GAME_TIMER() + 10000;
						while (!PED::HAVE_ALL_STREAMING_REQUESTS_COMPLETED(func_359(0)) && MISC::GET_GAME_TIMER() < iVar14)
						{
							func_362(0);
						}
						__LIB_37__::func_920(func_359(0), 480.9356f, -1315.8055f, 28.2023f, 270.8615f, 0);
						PLAYER::SIMULATE_PLAYER_INPUT_GAIT(PLAYER::PLAYER_ID(), 1f, 2000, 0f, true, false);
						PED::FORCE_PED_MOTION_STATE(func_359(0), joaat("MotionState_Walk"), true, 1, false);
						func_362(100);
						CAM::DO_SCREEN_FADE_IN(1000);
					}
					iLocal_202 = 0;
					__LIB_0__::func_532(0, 1, 1, 0, 0, 0, 0);
					func_350(PLAYER::PLAYER_ID(), 1, 0);
					__LIB_15__::func_887(&iLocal_238);
					__LIB_15__::func_887(&iLocal_232);
					__LIB_15__::func_887(&iLocal_233);
					__LIB_15__::func_887(&iLocal_234);
					__LIB_9__::func_107(&iLocal_229);
					__LIB_9__::func_107(&iLocal_228);
					__LIB_9__::func_107(&iLocal_230);
					__LIB_9__::func_107(&iLocal_231);
					if (__LIB_15__::func_944() != 0)
					{
						__LIB_9__::func_107(&(uLocal_489[0]));
					}
					if (__LIB_15__::func_944() != 1)
					{
						__LIB_9__::func_107(&(uLocal_489[1]));
					}
					if (__LIB_15__::func_944() != 2)
					{
						__LIB_9__::func_107(&(uLocal_489[2]));
					}
					func_37();
				}
				break;
			}
	}
	if (func_36())
	{
		if (STREAMING::STREAMVOL_IS_VALID(iLocal_251))
		{
			STREAMING::STREAMVOL_DELETE(iLocal_251);
		}
		CUTSCENE::REMOVE_CUTSCENE();
		while (CUTSCENE::HAS_CUTSCENE_LOADED())
		{
			func_362(0);
		}
		if (AUDIO::IS_AUDIO_SCENE_ACTIVE("CAR_1_GARAGE_ARRIVAL"))
		{
			AUDIO::STOP_AUDIO_SCENE("CAR_1_GARAGE_ARRIVAL");
		}
		iLocal_479++;
	}
}

int func_36()//Position - 0x40A2
{
	int iVar0;
	if (iLocal_197 == 1)
	{
		SYSTEM::SETTIMERA(0);
		iLocal_196 = 0;
		iLocal_197 = 0;
		iLocal_180 = 0;
		iLocal_181 = 0;
		iVar0 = 0;
		while (iVar0 < iLocal_182)
		{
			iLocal_182[iVar0] = -1;
			iVar0++;
		}
		iVar0 = 0;
		while (iVar0 < iLocal_183)
		{
			iLocal_183[iVar0] = 0;
			iVar0++;
		}
		return 1;
	}
	return 0;
}

void func_37()//Position - 0x4106
{
	iLocal_197 = 1;
}

void func_39(int iParam0)//Position - 0x412A
{
	int iVar0;
	int iVar1;
	bool bVar2;
	iVar0 = __LIB_0__::func_650(iParam0);
	if (__LIB_0__::func_374(iVar0))
	{
		if (!Global_100362[iVar0])
		{
			if (Global_113386.f_2363.f_539.f_2391[iVar0] != 0)
			{
				if (__LIB_0__::func_407(iParam0) != Global_113386.f_2363.f_539.f_2391[iVar0])
				{
					__LIB_0__::func_414(iVar0);
					Global_113386.f_2363.f_539.f_2391[iVar0] = __LIB_0__::func_407(iParam0);
				}
			}
		}
		func_141(iParam0, &(Global_113386.f_2363.f_539[iVar0 /*65*/]), 0, 0, 1, 0);
		if (!Global_100362[iVar0])
		{
			bVar2 = false;
			if (iVar0 == 0)
			{
				if (!__LIB_0__::isMissionCompleted(49))
				{
					iVar1 = func_126(iParam0, 12, -1);
					if (iVar1 == 16)
					{
						bVar2 = true;
					}
					func_40(__LIB_0__::func_518(0), 12, 16, 0, 0, 0, 0);
				}
				if (!__LIB_0__::isMissionCompleted(44))
				{
					iVar1 = func_126(iParam0, 3, -1);
					if (((((iVar1 == 70 || iVar1 == 71) || iVar1 == 72) || iVar1 == 73) || iVar1 == 74) || iVar1 == 75)
					{
						bVar2 = true;
					}
					iVar1 = func_126(iParam0, 4, -1);
					if ((((iVar1 == 41 || iVar1 == 42) || iVar1 == 43) || iVar1 == 44) || iVar1 == 45)
					{
						bVar2 = true;
					}
					func_40(__LIB_0__::func_518(0), 3, 70, 1, 0, 0, 0);
					func_40(__LIB_0__::func_518(0), 3, 71, 1, 0, 0, 0);
					func_40(__LIB_0__::func_518(0), 3, 72, 1, 0, 0, 0);
					func_40(__LIB_0__::func_518(0), 3, 73, 1, 0, 0, 0);
					func_40(__LIB_0__::func_518(0), 3, 74, 1, 0, 0, 0);
					func_40(__LIB_0__::func_518(0), 3, 75, 1, 0, 0, 0);
					func_40(__LIB_0__::func_518(0), 4, 41, 1, 0, 0, 0);
					func_40(__LIB_0__::func_518(0), 4, 42, 1, 0, 0, 0);
					func_40(__LIB_0__::func_518(0), 4, 43, 1, 0, 0, 0);
					func_40(__LIB_0__::func_518(0), 4, 44, 1, 0, 0, 0);
					func_40(__LIB_0__::func_518(0), 4, 45, 1, 0, 0, 0);
				}
			}
			else if (iVar0 == 2)
			{
				iVar1 = func_126(iParam0, 4, -1);
				if (iVar1 == 93)
				{
					bVar2 = true;
				}
			}
			if (bVar2)
			{
				__LIB_0__::func_414(iVar0);
				func_141(iParam0, &(Global_113386.f_2363.f_539[iVar0 /*65*/]), 0, 0, 1, 0);
			}
		}
		Global_100362[iVar0] = 1;
	}
}

void func_40(int iParam0, int iParam1, int iParam2, bool bParam3, bool bParam4, bool bParam5, int iParam6)//Position - 0x4387
{
	__LIB_15__::func_950(iParam0, iParam1, iParam2, bParam3);
	func_113(iParam0, iParam1, iParam2, bParam4, 1);
	if (bParam5)
	{
		__LIB_0__::func_421(iParam0, iParam1, iParam2, 0);
	}
	if (iParam6 == 1)
	{
		__LIB_15__::func_952(iParam0, iParam1, iParam2, 0);
	}
}

int func_113(int iParam0, int iParam1, int iParam2, bool bParam3, int iParam4)//Position - 0x1B4C7
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
								func_113(iParam0, iVar1, uVar3[iVar1], 1, 1);
								__LIB_15__::func_950(iParam0, iVar1, uVar3[iVar1], 1);
							}
							else
							{
								uVar4 = { __LIB_0__::func_466(iParam0, uVar3[iVar1]) };
								iVar2 = 0;
								while (iVar2 <= 8)
								{
									func_113(iParam0, 14, uVar4[iVar2], 1, 1);
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
								func_113(iParam0, 3, iVar5, 1, 0);
							}
							else if (iParam2 >= 227 && iParam2 <= 242)
							{
								iVar5 = (176 + Global_78130[1 /*14*/].f_4);
								func_113(iParam0, 3, iVar5, 1, 0);
							}
							break;
						case 11:
							if (iParam2 >= 9 && iParam2 <= 24)
							{
								iVar5 = (25 + Global_78130[1 /*14*/].f_4);
								func_113(iParam0, 11, iVar5, 1, 0);
							}
							else if (iParam2 >= 25 && iParam2 <= 40)
							{
								iVar5 = (9 + Global_78130[1 /*14*/].f_4);
								func_113(iParam0, 11, iVar5, 1, 0);
							}
							break;
						case 8:
							if (iParam2 >= 27 && iParam2 <= 42)
							{
								iVar5 = (43 + Global_78130[1 /*14*/].f_4);
								func_113(iParam0, 8, iVar5, 1, 0);
								iVar5 = (59 + Global_78130[1 /*14*/].f_4);
								func_113(iParam0, 8, iVar5, 1, 0);
							}
							else if (iParam2 >= 43 && iParam2 <= 58)
							{
								iVar5 = (27 + Global_78130[1 /*14*/].f_4);
								func_113(iParam0, 8, iVar5, 1, 0);
								iVar5 = (59 + Global_78130[1 /*14*/].f_4);
								func_113(iParam0, 8, iVar5, 1, 0);
							}
							else if (iParam2 >= 59 && iParam2 <= 74)
							{
								iVar5 = (27 + Global_78130[1 /*14*/].f_4);
								func_113(iParam0, 8, iVar5, 1, 0);
								iVar5 = (43 + Global_78130[1 /*14*/].f_4);
								func_113(iParam0, 8, iVar5, 1, 0);
							}
							break;
						case 14:
							if (iParam2 >= 64 && iParam2 <= 79)
							{
								iVar5 = (41 + Global_78130[1 /*14*/].f_4);
								func_113(iParam0, 14, iVar5, 1, 0);
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
								func_113(iParam0, 4, iVar5, 1, 0);
							}
							break;
						case 12:
							if (iParam2 == 2)
							{
								func_113(iParam0, 14, 17, 1, 0);
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

int func_126(int iParam0, int iParam1, int iParam2)//Position - 0x1EA57
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
				if (func_133(iParam0, iParam1, iVar0))
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
				if (func_133(iParam0, iParam1, iVar1))
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

int func_133(int iParam0, int iParam1, int iParam2)//Position - 0x1EEB5
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
				if (!func_133(iParam0, iVar2, uVar5[iVar2]))
				{
					if (iVar2 == 13)
					{
						uVar6 = { __LIB_0__::func_466(iVar0, uVar5[iVar2]) };
						iVar3 = 0;
						while (iVar3 <= 8)
						{
							if (!func_133(iParam0, 14, uVar6[iVar3]))
							{
								iVar4 = 0;
								while (iVar4 <= 19)
								{
									Global_78130[2 /*14*/] = { __LIB_13__::func_798(iVar0, 14, iVar4, -1) };
									if (Global_78130[2 /*14*/].f_12 == iVar3)
									{
										if (func_133(iParam0, 14, iVar4))
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
			if (!func_133(iParam0, 14, uVar8[iVar7]))
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

void func_141(int iParam0, var uParam1, bool bParam2, bool bParam3, bool bParam4, int iParam5)//Position - 0x20270
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
		iVar0 = __LIB_0__::func_650(iParam0);
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
			if (func_337(iParam0, iVar1, &iVar2, 0))
			{
				func_323(iParam0, 2, iVar2, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
			}
			Global_113386.f_2363.f_539[iVar0 /*65*/].f_62 = uParam1->f_62;
			Global_113386.f_2363.f_539[iVar0 /*65*/].f_63 = uParam1->f_63;
			Global_113386.f_2363.f_539[iVar0 /*65*/].f_64 = uParam1->f_64;
			if (func_321(iParam0, iVar1, &iVar2))
			{
				func_323(iParam0, 1, iVar2, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
			}
		}
		else if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS() && ENTITY::GET_ENTITY_MODEL(iParam0) == ENTITY::GET_ENTITY_MODEL(PLAYER::PLAYER_PED_ID()))
		{
			bVar4 = func_318(iParam0);
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
			func_144(iParam0, 2, iVar5, 0, -1, 0, 0, 0, -1, -1, Global_78127, bVar4, 0, 0);
			if (!bParam2)
			{
				iVar7 = __LIB_0__::func_206(iParam0, uParam1->f_13[1], (*uParam1)[1], 1);
				func_144(iParam0, 1, iVar7, 0, -1, 0, 0, 0, -1, -1, Global_78127, bVar4, 0, 0);
			}
			if (!bParam3)
			{
				iVar8 = __LIB_0__::func_349(iParam0, uParam1->f_39[0], uParam1->f_49[0], 0);
				func_144(iParam0, 14, iVar8, 0, -1, 0, 0, 0, -1, -1, Global_78127, bVar4, 0, 0);
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

int func_144(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, int iParam9, int iParam10, bool bParam11, bool bParam12, bool bParam13)//Position - 0x2074C
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
			func_276(iVar5, iParam1, iParam2, 1);
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
						func_276(iVar5, 10, 0, 1);
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
									func_276(iVar5, iVar0, uVar14[iVar0], 1);
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
								func_144(iParam0, iVar0, uVar14[iVar0], 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
							}
							if (BitTest(Global_78130[1 /*14*/].f_6, 1))
							{
								func_276(iVar5, iVar0, uVar14[iVar0], 1);
							}
						}
					}
				}
			}
			else if (iVar0 != 12 && iVar0 != 14)
			{
				Global_78130[1 /*14*/] = { __LIB_3__::func_84(iVar5, iVar0, func_274(iParam0, iVar0, -1), -1) };
				if (BitTest(Global_78130[1 /*14*/].f_6, 3))
				{
					uVar16 = { __LIB_0__::func_459(iVar5, 0) };
					func_144(iParam0, iVar0, uVar16[iVar0], 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
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
			func_268(iParam0, 11, uVar14[11], iParam6, 0);
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
				func_276(iVar5, 14, uVar18[iVar1], 1);
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
							func_144(iParam0, iVar2, iVar3, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
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
			func_276(iVar5, iParam1, iParam2, 1);
		}
		if (Global_78130[1 /*14*/].f_12 == 0)
		{
			if (BitTest(Global_78130[1 /*14*/].f_6, 6) && FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(Global_2883588, joaat("SHRINK_HAIR"), 1))
			{
			}
			else if (FILES::DOES_CURRENT_PED_COMPONENT_HAVE_RESTRICTION_TAG(iParam0, 1, joaat("HAIR_SHRINK")))
			{
				func_144(iParam0, 1, 0, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
				Global_78130[1 /*14*/] = { __LIB_3__::func_84(iVar5, iParam1, iParam2, -1) };
			}
		}
		if (Global_78130[1 /*14*/].f_12 == 0)
		{
			func_259(iParam0);
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
						func_144(iParam0, iVar2, iVar3, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
					}
					iVar2++;
				}
				iVar3 = __LIB_12__::func_901(iParam0, iVar5, iParam1, iParam2, 14, 1);
				if (iVar3 != -99)
				{
					func_144(iParam0, 14, iVar3, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
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
					iVar27 = func_258(iVar5, iVar24, iVar23, iVar25);
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
							func_144(iParam0, 8, iVar29, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
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
								func_144(iParam0, 8, iVar31, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
								Global_78130[1 /*14*/] = { __LIB_3__::func_84(iVar5, iParam1, iParam2, -1) };
								iVar8 = -99;
							}
							else if (iVar30 != -99 && (iParam0 == PLAYER::PLAYER_PED_ID() || iParam0 == Global_4538723))
							{
								func_144(iParam0, 8, iVar30, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
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
								func_144(iParam0, 8, iVar31, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
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
								func_144(iParam0, 8, iVar39, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
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
								func_144(iParam0, 8, iVar39, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
							}
							else if (iVar5 == joaat("MP_F_Freemode_01"))
							{
								func_144(iParam0, 8, 48, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
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
			func_268(iParam0, iParam1, iParam2, iParam6, 0);
			if (iParam5 == 0)
			{
				iVar6 = func_258(iVar5, func_274(iParam0, 8, -1), iParam2, func_274(iParam0, 4, -1));
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
				func_191(iParam0, iParam2, iParam10, bParam11);
			}
		}
		else if (iParam1 == 8)
		{
			iVar43 = FILES::GET_HASH_NAME_FOR_COMPONENT(iParam0, 3, PED::GET_PED_DRAWABLE_VARIATION(iParam0, 3), 0);
			if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar43, joaat("GLOVES"), 0))
			{
				iVar44 = __LIB_0__::func_350(iParam0, 11);
				iVar45 = __LIB_0__::func_350(iParam0, 4);
				iVar46 = func_258(iVar5, iParam2, iVar44, iVar45);
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
			func_268(iParam0, iParam1, iParam2, iParam6, 0);
			iVar49 = __LIB_0__::func_350(iParam0, 11);
			if (__LIB_0__::func_280(iVar5, iVar49, -1))
			{
				iVar50 = __LIB_0__::func_357(iVar5, iParam2, Global_78130[1 /*14*/].f_4);
				__LIB_3__::func_520(iVar5, iVar50);
			}
			if (iParam5 == 0)
			{
				iVar6 = func_258(iVar5, iParam2, __LIB_0__::func_350(iParam0, 11), __LIB_0__::func_350(iParam0, 4));
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
						func_144(iParam0, 8, 240, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
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
						func_144(iParam0, 8, 78, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
						Global_78130[1 /*14*/] = { __LIB_3__::func_84(iVar5, iParam1, iParam2, -1) };
					}
				}
			}
			if (iParam5 == 0)
			{
				iVar6 = func_258(iVar5, __LIB_0__::func_350(iParam0, 8), __LIB_0__::func_350(iParam0, 11), iParam2);
			}
			iVar59 = FILES::GET_HASH_NAME_FOR_COMPONENT(iParam0, 3, PED::GET_PED_DRAWABLE_VARIATION(iParam0, 3), 0);
			if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar59, joaat("GLOVES"), 0))
			{
				iVar60 = func_258(iVar5, iVar58, iVar57, iParam2);
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
						func_144(iParam0, iVar2, iVar3, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, iParam1 == 10);
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
								iVar6 = func_258(iVar5, iVar3, __LIB_0__::func_350(iParam0, 11), __LIB_0__::func_350(iParam0, 4));
							}
						}
					}
					iVar2++;
				}
				iVar3 = __LIB_12__::func_901(iParam0, iVar5, iParam1, iParam2, 14, 1);
				if (iVar3 != -99)
				{
					func_144(iParam0, 14, iVar3, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
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
						if (!func_168(iParam0, 9, iVar63))
						{
							func_144(iParam0, 9, iVar63, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
						}
					}
					else
					{
						func_144(iParam0, 9, 0, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
					}
					if (FILES::DOES_CURRENT_PED_COMPONENT_HAVE_RESTRICTION_TAG(iParam0, 8, joaat("OVER_JACKET")))
					{
						func_144(iParam0, 9, 0, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
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
						func_144(iParam0, 9, 0, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
					}
				}
			}
			if (iVar5 == joaat("MP_F_Freemode_01") && (iParam1 == 11 || iParam1 == 4))
			{
				if (iParam1 == 11)
				{
					iVar65 = func_274(iParam0, 4, -1);
					iVar66 = iParam2;
				}
				else
				{
					iVar65 = iParam2;
					iVar66 = func_274(iParam0, 11, -1);
				}
				if (__LIB_0__::func_240(iVar5, 11, iVar66, -1))
				{
					if (!__LIB_0__::func_239(iVar5, 4, iVar65, -1))
					{
						if (__LIB_0__::func_353(iVar5, 4, iVar65, &uVar67))
						{
							func_144(iParam0, 4, uVar67, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
						}
					}
				}
				else if (__LIB_0__::func_239(iVar5, 4, iVar65, -1))
				{
					if (__LIB_0__::func_352(iVar5, 4, iVar65, &uVar67))
					{
						func_144(iParam0, 4, uVar67, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
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
										func_144(iParam0, 6, iVar75, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
									}
									else if (iVar5 == joaat("MP_F_Freemode_01"))
									{
										iVar75 = __LIB_0__::func_204(iVar5, iVar78, 6, 4);
										iVar70 = iVar78;
										func_144(iParam0, 6, iVar75, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
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
										func_144(iParam0, 4, iVar74, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
									}
									else if (iVar5 == joaat("MP_F_Freemode_01"))
									{
										iVar74 = __LIB_0__::func_204(iVar5, iVar78, 4, 4);
										iVar73 = iVar78;
										func_144(iParam0, 4, iVar74, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
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
										func_144(iParam0, 4, iVar74, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
									}
									else if (iVar5 == joaat("MP_F_Freemode_01"))
									{
										iVar74 = __LIB_0__::func_204(iVar5, iVar78, 4, 4);
										iVar73 = iVar78;
										func_144(iParam0, 4, iVar74, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
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
										func_144(iParam0, 6, iVar75, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
									}
									else if (iVar5 == joaat("MP_F_Freemode_01"))
									{
										iVar75 = __LIB_0__::func_204(iVar5, iVar78, 6, 4);
										iVar70 = iVar78;
										func_144(iParam0, 6, iVar75, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
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
				func_259(iParam0);
				iVar81 = PED::GET_PED_DRAWABLE_VARIATION(iParam0, 1);
				iVar82 = PED::GET_PED_TEXTURE_VARIATION(iParam0, 1);
				iVar83 = FILES::GET_HASH_NAME_FOR_COMPONENT(iParam0, 1, iVar81, iVar82);
				if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iVar83, joaat("FORCE_PROP"), 0))
				{
					iVar3 = __LIB_12__::func_901(iParam0, iVar5, iParam1, iParam2, 14, 0);
					if (iVar3 != -99)
					{
						func_144(iParam0, 14, iVar3, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
					}
					iVar3 = __LIB_12__::func_901(iParam0, iVar5, iParam1, iParam2, 14, 1);
					if (iVar3 != -99)
					{
						func_144(iParam0, 14, iVar3, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
					}
				}
			}
		}
	}
	if (iParam1 != 2)
	{
		if (func_145(iParam0, &uVar4))
		{
			func_144(iParam0, 2, uVar4, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
		}
	}
	if (iVar6 != -99 && !bParam13)
	{
		func_144(iParam0, 3, iVar6, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
	}
	if (iVar8 != -99)
	{
		func_144(iParam0, 8, iVar8, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
	}
	if (iVar7 != -99)
	{
		func_144(iParam0, 1, iVar7, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
	}
	if (iVar10 != -1)
	{
		iVar84 = __LIB_0__::func_282(iVar5, func_274(iParam0, 3, -1), iVar10);
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
				func_144(iParam0, 3, iVar9, 0, iParam4, 0, 0, 0, -1, -1, -1, 0, 0, 0);
			}
		}
	}
	Global_78128 = (Global_78128 - 1);
	return 1;
}

int func_145(int iParam0, var uParam1)//Position - 0x225F6
{
	int iVar0;
	int iVar1;
	*uParam1 = func_274(PLAYER::PLAYER_PED_ID(), 2, -1);
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
		if (!func_168(iParam0, iVar1, iVar0))
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

int func_168(int iParam0, int iParam1, int iParam2)//Position - 0x2691E
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
				if (!func_168(iParam0, iVar4, uVar8[iVar4]))
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
							if (!func_168(iParam0, 14, uVar9[iVar5]))
							{
								iVar6 = 0;
								while (iVar6 <= 19)
								{
									Global_78130[2 /*14*/] = { __LIB_3__::func_84(iVar0, 14, iVar6, -1) };
									if (Global_78130[2 /*14*/].f_12 == iVar5)
									{
										if (func_168(iParam0, 14, iVar6))
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
			if (!func_168(iParam0, 14, uVar11[iVar10]))
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
						return func_168(iParam0, 4, uVar18);
					}
				}
				else if (__LIB_0__::func_352(iVar0, 4, iParam2, &uVar18))
				{
					return func_168(iParam0, 4, uVar18);
				}
			}
			Global_78129 = (Global_78129 - 1);
		}
	}
	return 0;
}

void func_191(int iParam0, int iParam1, int iParam2, bool bParam3)//Position - 0x2D635
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
	func_192(iParam0, bParam3, 0, -1);
}

void func_192(int iParam0, bool bParam1, bool bParam2, int iParam3)//Position - 0x2D682
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
		bVar3 = func_238(iParam0, 0);
		bVar4 = __LIB_1__::func_37(iParam0);
		bVar5 = func_229(iParam0, iParam3);
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

int func_229(int iParam0, int iParam1)//Position - 0x3CA2D
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
				iVar3 = func_274(iParam0, 11, -1);
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
				iVar5 = func_274(iParam0, 11, -1);
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

int func_238(int iParam0, bool bParam1)//Position - 0x3CE8B
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
							iVar2 = __LIB_0__::func_676(joaat("MP_M_Freemode_01"), 11, func_274(iParam0, 11, -1), 0);
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
						iVar3 = func_274(iParam0, 11, -1);
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
						iVar5 = func_274(iParam0, 8, -1);
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
							iVar7 = __LIB_0__::func_676(joaat("MP_F_Freemode_01"), 11, func_274(iParam0, 11, -1), 0);
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
						iVar8 = func_274(iParam0, 11, -1);
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
							iVar10 = __LIB_0__::func_676(joaat("MP_F_Freemode_01"), 11, func_274(iParam0, 11, -1), 0);
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
							iVar11 = __LIB_0__::func_676(joaat("MP_F_Freemode_01"), 11, func_274(iParam0, 11, -1), 0);
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
						iVar12 = func_274(iParam0, 8, -1);
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

int func_258(int iParam0, int iParam1, int iParam2, int iParam3)//Position - 0x45D45
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
					iVar0 = func_258(iParam0, -99, __LIB_0__::func_357(iParam0, iParam1, 0), iParam3);
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
					iVar0 = func_258(iParam0, -99, __LIB_0__::func_357(iParam0, iParam1, 0), iParam3);
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

void func_259(int iParam0)//Position - 0x47080
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
		if (!func_264(iParam0, &bVar14, iVar9, iVar10, iVar12) || PED::IS_PED_IN_ANY_VEHICLE(iParam0, false))
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
		if (!func_264(iParam0, &bVar14, iVar9, iVar10, iVar12))
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

int func_264(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4)//Position - 0x47A4A
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
	if (FILES::DOES_SHOP_PED_APPAREL_HAVE_RESTRICTION_TAG(iParam3, joaat("HAZ_MASK"), 0) && !__LIB_0__::func_348(iVar0, 14, func_274(iParam0, 14, 0), -1))
	{
		return 1;
	}
	else
	{
		return 0;
	}
	return 1;
}

void func_268(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4)//Position - 0x4A70E
{
	int iVar0;
	int iVar1;
	int iVar2;
	if (!PED::IS_PED_INJURED(iParam0))
	{
		if (func_318(iParam0))
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

int func_274(int iParam0, int iParam1, int iParam2)//Position - 0x4A9BD
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
				if (func_168(iParam0, iParam1, iVar0))
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
				if (func_168(iParam0, iParam1, iVar1))
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

void func_276(int iParam0, int iParam1, int iParam2, bool bParam3)//Position - 0x4AAF6
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
							func_276(iParam0, __LIB_0__::func_33(iVar4), uVar3, 0);
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
									func_276(iParam0, __LIB_0__::func_33(Global_4538457[iVar1]), __LIB_0__::func_204(iParam0, Global_4538446[iVar1], __LIB_0__::func_33(Global_4538457[iVar1]), 3), 1);
								}
								else
								{
									func_276(iParam0, __LIB_0__::func_33(Global_4538457[iVar1]), __LIB_0__::func_204(iParam0, Global_4538446[iVar1], __LIB_0__::func_33(Global_4538457[iVar1]), 4), 1);
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
							func_276(iParam0, 14, iVar8, 0);
						}
						else if (iParam2 >= 75 && iParam2 <= 82)
						{
							iVar8 = (83 + Global_78130[2 /*14*/].f_4);
							func_276(iParam0, 14, iVar8, 0);
						}
					}
					else if (iParam1 == 8)
					{
						if (iParam2 >= 48 && iParam2 <= 63)
						{
							iVar8 = (64 + Global_78130[2 /*14*/].f_4);
							func_276(iParam0, 8, iVar8, 0);
						}
						else if (iParam2 >= 64 && iParam2 <= 79)
						{
							iVar8 = (48 + Global_78130[2 /*14*/].f_4);
							func_276(iParam0, 8, iVar8, 0);
						}
						else if (iParam2 >= 96 && iParam2 <= 111)
						{
							iVar8 = (112 + Global_78130[2 /*14*/].f_4);
							func_276(iParam0, 8, iVar8, 0);
						}
						else if (iParam2 >= 112 && iParam2 <= 127)
						{
							iVar8 = (96 + Global_78130[2 /*14*/].f_4);
							func_276(iParam0, 8, iVar8, 0);
						}
						else if (iParam2 >= 176 && iParam2 <= 191)
						{
							iVar8 = (160 + Global_78130[2 /*14*/].f_4);
							func_276(iParam0, 8, iVar8, 0);
						}
						else if (iParam2 >= 160 && iParam2 <= 175)
						{
							iVar8 = (176 + Global_78130[2 /*14*/].f_4);
							func_276(iParam0, 8, iVar8, 0);
						}
						else if (iParam2 >= 32 && iParam2 <= 47)
						{
							iVar8 = (0 + Global_78130[2 /*14*/].f_4);
							func_276(iParam0, 11, iVar8, 0);
						}
						else if (iParam2 >= 224 && iParam2 <= 239)
						{
							iVar8 = (16 + Global_78130[2 /*14*/].f_4);
							func_276(iParam0, 11, iVar8, 0);
						}
					}
					else if (iParam1 == 11)
					{
						if (iParam2 >= 0 && iParam2 <= 15)
						{
							iVar8 = (32 + Global_78130[2 /*14*/].f_4);
							func_276(iParam0, 8, iVar8, 0);
						}
						else if (iParam2 >= 16 && iParam2 <= 31)
						{
							iVar8 = (224 + Global_78130[2 /*14*/].f_4);
							func_276(iParam0, 8, iVar8, 0);
						}
						else if (iParam2 >= 220 && iParam2 <= 235)
						{
							switch (iParam2)
							{
								case 220:
									func_276(iParam0, 8, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI_M_ACCS4_0"), 8, 3), 0);
									func_276(iParam0, 8, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI_M_ACCS5_0"), 8, 3), 0);
									break;
								case 221:
									func_276(iParam0, 8, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI_M_ACCS4_1"), 8, 3), 0);
									func_276(iParam0, 8, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI_M_ACCS5_1"), 8, 3), 0);
									break;
								case 222:
									func_276(iParam0, 8, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI_M_ACCS4_2"), 8, 3), 0);
									func_276(iParam0, 8, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI_M_ACCS5_2"), 8, 3), 0);
									break;
								case 223:
									func_276(iParam0, 8, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI_M_ACCS4_3"), 8, 3), 0);
									func_276(iParam0, 8, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI_M_ACCS5_3"), 8, 3), 0);
									break;
								case 224:
									func_276(iParam0, 8, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI_M_ACCS4_4"), 8, 3), 0);
									func_276(iParam0, 8, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI_M_ACCS5_4"), 8, 3), 0);
									break;
								case 225:
									func_276(iParam0, 8, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI_M_ACCS4_5"), 8, 3), 0);
									func_276(iParam0, 8, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI_M_ACCS5_5"), 8, 3), 0);
									break;
								case 226:
									func_276(iParam0, 8, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI_M_ACCS4_6"), 8, 3), 0);
									func_276(iParam0, 8, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI_M_ACCS5_6"), 8, 3), 0);
									break;
								case 227:
									func_276(iParam0, 8, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI_M_ACCS4_7"), 8, 3), 0);
									func_276(iParam0, 8, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI_M_ACCS5_7"), 8, 3), 0);
									break;
								case 228:
									func_276(iParam0, 8, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI_M_ACCS4_8"), 8, 3), 0);
									func_276(iParam0, 8, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI_M_ACCS5_8"), 8, 3), 0);
									break;
								case 229:
									func_276(iParam0, 8, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI_M_ACCS4_9"), 8, 3), 0);
									func_276(iParam0, 8, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI_M_ACCS5_9"), 8, 3), 0);
									break;
								case 230:
									func_276(iParam0, 8, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI_M_ACCS4_10"), 8, 3), 0);
									func_276(iParam0, 8, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI_M_ACCS5_10"), 8, 3), 0);
									break;
								case 231:
									func_276(iParam0, 8, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI_M_ACCS4_11"), 8, 3), 0);
									func_276(iParam0, 8, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI_M_ACCS5_11"), 8, 3), 0);
									break;
								case 232:
									func_276(iParam0, 8, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI_M_ACCS4_12"), 8, 3), 0);
									func_276(iParam0, 8, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI_M_ACCS5_12"), 8, 3), 0);
									break;
								case 233:
									func_276(iParam0, 8, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI_M_ACCS4_13"), 8, 3), 0);
									func_276(iParam0, 8, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI_M_ACCS5_13"), 8, 3), 0);
									break;
								case 234:
									func_276(iParam0, 8, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI_M_ACCS4_14"), 8, 3), 0);
									func_276(iParam0, 8, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI_M_ACCS5_14"), 8, 3), 0);
									break;
								case 235:
									func_276(iParam0, 8, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI_M_ACCS4_15"), 8, 3), 0);
									func_276(iParam0, 8, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI_M_ACCS5_15"), 8, 3), 0);
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
									func_276(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH0_0"), 7, 3), 0);
									func_276(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH2_0"), 7, 3), 0);
									break;
								case 1:
									func_276(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH0_1"), 7, 3), 0);
									func_276(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH2_1"), 7, 3), 0);
									break;
								case 2:
									func_276(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH0_2"), 7, 3), 0);
									func_276(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH2_2"), 7, 3), 0);
									break;
								case 3:
									func_276(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH0_3"), 7, 3), 0);
									func_276(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH2_3"), 7, 3), 0);
									break;
								case 4:
									func_276(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH0_4"), 7, 3), 0);
									func_276(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH2_4"), 7, 3), 0);
									break;
								case 5:
									func_276(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH0_5"), 7, 3), 0);
									func_276(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH2_5"), 7, 3), 0);
									break;
								case 6:
									func_276(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH0_6"), 7, 3), 0);
									func_276(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH2_6"), 7, 3), 0);
									break;
								case 7:
									func_276(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH0_7"), 7, 3), 0);
									func_276(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH2_7"), 7, 3), 0);
									break;
								case 8:
									func_276(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH0_8"), 7, 3), 0);
									func_276(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH2_8"), 7, 3), 0);
									break;
								case 9:
									func_276(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH0_9"), 7, 3), 0);
									func_276(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH2_9"), 7, 3), 0);
									break;
								case 10:
									func_276(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH0_10"), 7, 3), 0);
									func_276(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH2_10"), 7, 3), 0);
									break;
								case 11:
									func_276(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH0_11"), 7, 3), 0);
									func_276(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH2_11"), 7, 3), 0);
									break;
								case 12:
									func_276(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH0_12"), 7, 3), 0);
									func_276(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH2_12"), 7, 3), 0);
									break;
								case 13:
									func_276(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH0_13"), 7, 3), 0);
									func_276(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH2_13"), 7, 3), 0);
									break;
								case 14:
									func_276(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH0_14"), 7, 3), 0);
									func_276(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH2_14"), 7, 3), 0);
									break;
								case 15:
									func_276(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH0_15"), 7, 3), 0);
									func_276(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH2_15"), 7, 3), 0);
									break;
							}
						}
						else if (iParam2 >= 73 && iParam2 <= 88)
						{
							switch (Global_78130[2 /*14*/].f_4)
							{
								case 0:
									func_276(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH1_0"), 7, 3), 0);
									func_276(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH3_0"), 7, 3), 0);
									break;
								case 1:
									func_276(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH1_1"), 7, 3), 0);
									func_276(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH3_1"), 7, 3), 0);
									break;
								case 2:
									func_276(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH1_2"), 7, 3), 0);
									func_276(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH3_2"), 7, 3), 0);
									break;
								case 3:
									func_276(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH1_3"), 7, 3), 0);
									func_276(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH3_3"), 7, 3), 0);
									break;
								case 4:
									func_276(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH1_4"), 7, 3), 0);
									func_276(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH3_4"), 7, 3), 0);
									break;
								case 5:
									func_276(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH1_5"), 7, 3), 0);
									func_276(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH3_5"), 7, 3), 0);
									break;
								case 6:
									func_276(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH1_6"), 7, 3), 0);
									func_276(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH3_6"), 7, 3), 0);
									break;
								case 7:
									func_276(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH1_7"), 7, 3), 0);
									func_276(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH3_7"), 7, 3), 0);
									break;
								case 8:
									func_276(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH1_8"), 7, 3), 0);
									func_276(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH3_8"), 7, 3), 0);
									break;
								case 9:
									func_276(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH1_9"), 7, 3), 0);
									func_276(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH3_9"), 7, 3), 0);
									break;
								case 10:
									func_276(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH1_10"), 7, 3), 0);
									func_276(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH3_10"), 7, 3), 0);
									break;
								case 11:
									func_276(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH1_11"), 7, 3), 0);
									func_276(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH3_11"), 7, 3), 0);
									break;
								case 12:
									func_276(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH1_12"), 7, 3), 0);
									func_276(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH3_12"), 7, 3), 0);
									break;
								case 13:
									func_276(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH1_13"), 7, 3), 0);
									func_276(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH3_13"), 7, 3), 0);
									break;
								case 14:
									func_276(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH1_14"), 7, 3), 0);
									func_276(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH3_14"), 7, 3), 0);
									break;
								case 15:
									func_276(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH1_15"), 7, 3), 0);
									func_276(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI2_M_TEETH3_15"), 7, 3), 0);
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
							func_276(iParam0, 8, iVar8, 0);
						}
					}
				}
				Global_78130[2 /*14*/] = { __LIB_3__::func_84(iParam0, iParam1, iParam2, -1) };
				if (iParam1 == 11)
				{
					iVar9 = __LIB_0__::func_358(iParam0, iParam2, Global_78130[2 /*14*/].f_4);
					if (iVar9 != -99)
					{
						func_276(iParam0, 8, iVar9, 0);
					}
					if (iParam2 >= 192 && iParam2 <= 203)
					{
						switch (iParam2)
						{
							case 199:
								func_276(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI_F_ACCS2_0"), 7, 4), 0);
								break;
							case 200:
								func_276(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI_F_ACCS2_1"), 7, 4), 0);
								break;
							case 201:
								func_276(iParam0, 7, __LIB_0__::func_204(iParam0, joaat("DLC_MP_BUSI_F_ACCS2_2"), 7, 4), 0);
								break;
							}
					}
				}
				else if (iParam1 == 8)
				{
					iVar9 = __LIB_0__::func_357(iParam0, iParam2, Global_78130[2 /*14*/].f_4);
					if (iVar9 != -99)
					{
						func_276(iParam0, 11, iVar9, 0);
					}
				}
			}
		}
	}
}

int func_318(int iParam0)//Position - 0x637D0
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
				iVar1 = func_274(iParam0, 11, -1);
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
				iVar3 = func_274(iParam0, 11, -1);
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

int func_321(int iParam0, int iParam1, int iParam2)//Position - 0x63B42
{
	int iVar0;
	iVar0 = __LIB_0__::func_19(iParam1);
	if (Global_113386.f_2363.f_539[iVar0 /*65*/].f_63 != -99)
	{
		if (!func_133(iParam0, Global_113386.f_2363.f_539[iVar0 /*65*/].f_64, Global_113386.f_2363.f_539[iVar0 /*65*/].f_63))
		{
			*iParam2 = Global_113386.f_2363.f_539[iVar0 /*65*/].f_62;
			Global_113386.f_2363.f_539[iVar0 /*65*/].f_63 = -99;
			Global_113386.f_2363.f_539[iVar0 /*65*/].f_64 = 1;
			return 1;
		}
	}
	return 0;
}

int func_323(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, int iParam9, int iParam10, int iParam11, int iParam12, int iParam13)//Position - 0x63C09
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
										func_323(iParam0, iVar2, iVar3, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
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
									func_323(iParam0, iVar2, iVar3, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
								}
								iVar2++;
							}
						}
					}
				}
			}
			else if (iVar0 != 12 && iVar0 != 14)
			{
				Global_78130[1 /*14*/] = { __LIB_13__::func_798(iVar10, iVar0, func_126(iParam0, iVar0, -1), -1) };
				if (BitTest(Global_78130[1 /*14*/].f_6, 3))
				{
					if (iVar0 == 2)
					{
						if (iVar10 == joaat("Player_One"))
						{
							if (func_337(iParam0, iVar10, &iVar4, 1))
							{
								func_323(iParam0, 2, iVar4, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
							}
						}
					}
					else
					{
						uVar13 = { __LIB_0__::func_459(iVar10, 0) };
						func_323(iParam0, iVar0, uVar13[iVar0], 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
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
					func_323(iParam0, 8, iVar5, iParam3, iParam4, iParam5, iParam6, iParam7, -1, -1, -1, 0, 0, 0);
				}
			}
			Var14 = { __LIB_13__::func_798(iVar10, 9, iVar6, -1) };
			if (iVar6 != -99)
			{
				if (__LIB_0__::func_551(iVar10, iParam2, 9, iVar6, &uVar11, &Var14))
				{
					func_323(iParam0, 9, iVar6, iParam3, iParam4, iParam5, iParam6, iParam7, -1, -1, -1, 0, 0, 0);
				}
			}
			Var14 = { __LIB_13__::func_798(iVar10, 14, iVar7, -1) };
			if (iVar7 != -99)
			{
				if (__LIB_0__::func_551(iVar10, iParam2, 14, iVar7, &uVar11, &Var14))
				{
					func_323(iParam0, 14, iVar7, iParam3, iParam4, iParam5, iParam6, iParam7, -1, -1, -1, 0, 0, 0);
				}
			}
			Var14 = { __LIB_13__::func_798(iVar10, 14, iVar8, -1) };
			if (iVar8 != -99)
			{
				if (__LIB_0__::func_551(iVar10, iParam2, 14, iVar8, &uVar11, &Var14))
				{
					func_323(iParam0, 14, iVar8, iParam3, iParam4, iParam5, iParam6, iParam7, -1, -1, -1, 0, 0, 0);
				}
			}
			Var14 = { __LIB_13__::func_798(iVar10, 14, iVar9, -1) };
			if (iVar9 != -99)
			{
				if (__LIB_0__::func_551(iVar10, iParam2, 14, iVar9, &uVar11, &Var14))
				{
					func_323(iParam0, 14, iVar9, iParam3, iParam4, iParam5, iParam6, iParam7, -1, -1, -1, 0, 0, 0);
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
						func_323(iParam0, iVar2, iVar3, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
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
					func_323(iParam0, iVar2, iVar3, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
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
					func_323(iParam0, iVar2, iVar3, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
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
		if (func_337(iParam0, iVar10, &iVar4, 0))
		{
			func_323(iParam0, 2, iVar4, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
		}
		if (func_321(iParam0, iVar10, &iVar4))
		{
			func_323(iParam0, 1, iVar4, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
		}
	}
	Global_78128 = (Global_78128 - 1);
	return 1;
}

int func_337(int iParam0, int iParam1, int iParam2, int iParam3)//Position - 0x661C8
{
	int iVar0;
	iVar0 = __LIB_0__::func_19(iParam1);
	if (Global_113386.f_2363.f_539[iVar0 /*65*/].f_60 != -99)
	{
		if (!func_133(iParam0, Global_113386.f_2363.f_539[iVar0 /*65*/].f_61, Global_113386.f_2363.f_539[iVar0 /*65*/].f_60) || iParam3 == 1)
		{
			*iParam2 = Global_113386.f_2363.f_539[iVar0 /*65*/].f_59;
			Global_113386.f_2363.f_539[iVar0 /*65*/].f_60 = -99;
			Global_113386.f_2363.f_539[iVar0 /*65*/].f_61 = 2;
			return 1;
		}
	}
	return 0;
}

void func_348(int iParam0, int iParam1, struct<3> Param2, float fParam3, int iParam4, float fParam5)//Position - 0x666D8
{
	if (!ENTITY::DOES_ENTITY_EXIST(*iParam0))
	{
		*iParam0 = VEHICLE::CREATE_VEHICLE(iParam1, Param2, fParam3, true, true, false);
		if (iParam4 >= 0)
		{
			VEHICLE::SET_VEHICLE_COLOURS(*iParam0, iParam4, iParam4);
			VEHICLE::SET_VEHICLE_EXTRA_COLOURS(*iParam0, iParam4, iParam4);
		}
		VEHICLE::SET_VEHICLE_DIRT_LEVEL(*iParam0, fParam5);
		ENTITY::SET_ENTITY_SHOULD_FREEZE_WAITING_ON_COLLISION(*iParam0, true);
	}
}

void func_350(int iParam0, bool bParam1, int iParam2)//Position - 0x66751
{
	PLAYER::SET_PLAYER_CONTROL(iParam0, bParam1, iParam2);
	bLocal_547 = bParam1;
}

void func_351()//Position - 0x66768
{
	SYSTEM::SETTIMERA(0);
	iLocal_180++;
}

int func_359(int iParam0)//Position - 0x67431
{
	if (__LIB_15__::func_944() == iParam0)
	{
		return PLAYER::PLAYER_PED_ID();
	}
	return uLocal_489[__LIB_0__::func_482(iParam0)];
}

void func_361(struct<3> Param0, float fParam1)//Position - 0x67492
{
	int iVar0;
	STREAMING::NEW_LOAD_SCENE_START_SPHERE(Param0, fParam1, 0);
	iVar0 = MISC::GET_GAME_TIMER() + 20000;
	while ((STREAMING::IS_NEW_LOAD_SCENE_ACTIVE() && !STREAMING::IS_NEW_LOAD_SCENE_LOADED()) && MISC::GET_GAME_TIMER() < iVar0)
	{
		func_362(0);
	}
	STREAMING::NEW_LOAD_SCENE_STOP();
}

void func_362(int iParam0)//Position - 0x674D8
{
	int iVar0;
	iVar0 = (MISC::GET_GAME_TIMER() + iParam0);
	while (MISC::GET_GAME_TIMER() <= iVar0)
	{
		SYSTEM::WAIT(0);
		RECORDING::REPLAY_CHECK_FOR_EVENT_THIS_FRAME("M_IFoughtTheLaw", 0);
		func_933();
	}
}

int func_365()//Position - 0x67555
{
	if (iLocal_199 == 1)
	{
		iLocal_199 = 0;
		return 1;
	}
	return 0;
}

int func_366()//Position - 0x67570
{
	if (iLocal_196 == 0)
	{
		SYSTEM::SETTIMERA(0);
		iLocal_196 = 1;
		return 1;
	}
	return 0;
}

void func_369()//Position - 0x675C5
{
	int iVar0;
	struct<3> Var1;
	var uVar2;
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
	int iVar15;
	int iVar16;
	int iVar17;
	int iVar18;
	int iVar19;
	int iVar20;
	int iVar21;
	struct<3> Var22;
	struct<3> Var23;
	float fVar24;
	if (func_366())
	{
		HUD::THEFEED_PAUSE();
		func_24(9);
		func_479(3, "stageDriveHome", 1, 0, func_359(1), 1);
		PLAYER::SET_MAX_WANTED_LEVEL(0);
		PLAYER::SET_WANTED_LEVEL_MULTIPLIER(0f);
		MISC::ENABLE_DISPATCH_SERVICE(1, false);
		MISC::ENABLE_DISPATCH_SERVICE(2, false);
		MISC::ENABLE_DISPATCH_SERVICE(3, false);
		MISC::ENABLE_DISPATCH_SERVICE(4, false);
		MISC::ENABLE_DISPATCH_SERVICE(5, false);
		func_350(PLAYER::PLAYER_ID(), 1, 0);
		__LIB_15__::func_961(&uLocal_489, 2, 0, 1);
		PED::SET_PED_CAN_SWITCH_WEAPON(PLAYER::PLAYER_PED_ID(), true);
		CAM::SET_CINEMATIC_BUTTON_ACTIVE(true);
		VEHICLE::SET_VEHICLE_STRONG(iLocal_232, true);
		VEHICLE::SET_VEHICLE_STRONG(iLocal_233, true);
		VEHICLE::SET_VEHICLE_STRONG(iLocal_234, true);
		VEHICLE::SET_VEHICLE_IS_RACING(iLocal_232, true);
		VEHICLE::SET_VEHICLE_IS_RACING(iLocal_233, true);
		VEHICLE::SET_VEHICLE_IS_RACING(iLocal_234, true);
		VEHICLE::SET_VEHICLE_USE_ALTERNATE_HANDLING(iLocal_232, true);
		VEHICLE::SET_VEHICLE_USE_ALTERNATE_HANDLING(iLocal_233, true);
		VEHICLE::SET_VEHICLE_USE_ALTERNATE_HANDLING(iLocal_234, true);
		VEHICLE::SET_VEHICLE_USE_MORE_RESTRICTIVE_SPAWN_CHECKS(iLocal_232, true);
		VEHICLE::SET_VEHICLE_USE_MORE_RESTRICTIVE_SPAWN_CHECKS(iLocal_233, true);
		VEHICLE::SET_VEHICLE_USE_MORE_RESTRICTIVE_SPAWN_CHECKS(iLocal_234, true);
		iLocal_192[0] = ENTITY::GET_ENTITY_HEALTH(iLocal_232);
		fLocal_193[0] = VEHICLE::GET_VEHICLE_PETROL_TANK_HEALTH(iLocal_232);
		fLocal_194[0] = VEHICLE::GET_VEHICLE_ENGINE_HEALTH(iLocal_232);
		iLocal_192[1] = ENTITY::GET_ENTITY_HEALTH(iLocal_233);
		fLocal_193[1] = VEHICLE::GET_VEHICLE_PETROL_TANK_HEALTH(iLocal_233);
		fLocal_194[1] = VEHICLE::GET_VEHICLE_ENGINE_HEALTH(iLocal_233);
		iLocal_192[2] = ENTITY::GET_ENTITY_HEALTH(iLocal_234);
		fLocal_193[2] = VEHICLE::GET_VEHICLE_PETROL_TANK_HEALTH(iLocal_234);
		fLocal_194[2] = VEHICLE::GET_VEHICLE_ENGINE_HEALTH(iLocal_234);
		AUDIO::SET_VEH_RADIO_STATION(iLocal_233, "RADIO_02_POP" /* GXT: Non-Stop-Pop FM */);
		AUDIO::SET_VEHICLE_RADIO_ENABLED(iLocal_233, true);
		AUDIO::SET_VEH_RADIO_STATION(iLocal_234, "RADIO_09_HIPHOP_OLD" /* GXT: West Coast Classics */);
		AUDIO::SET_VEHICLE_RADIO_ENABLED(iLocal_234, true);
		__LIB_15__::func_894(&iLocal_252);
		iLocal_252 = OBJECT::CREATE_OBJECT_NO_OFFSET(joaat("p_ld_id_card_01"), -1918.7059f, 4604.1597f, 56.035f, false, false, false);
		if (ENTITY::DOES_ENTITY_EXIST(iLocal_252))
		{
			ENTITY::SET_ENTITY_ROTATION(iLocal_252, -90f, 0f, 12.6f, 2, true);
		}
		STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(joaat("p_ld_id_card_01"));
		if (__LIB_0__::func_650(PLAYER::PLAYER_PED_ID()) == 1)
		{
			VEHICLE::SET_VEHICLE_IS_CONSIDERED_BY_PLAYER(iLocal_232, true);
			VEHICLE::SET_VEHICLE_IS_CONSIDERED_BY_PLAYER(iLocal_233, false);
			VEHICLE::SET_VEHICLE_IS_CONSIDERED_BY_PLAYER(iLocal_234, false);
		}
		else if (__LIB_0__::func_650(PLAYER::PLAYER_PED_ID()) == 0)
		{
			VEHICLE::SET_VEHICLE_IS_CONSIDERED_BY_PLAYER(iLocal_232, false);
			VEHICLE::SET_VEHICLE_IS_CONSIDERED_BY_PLAYER(iLocal_233, true);
			VEHICLE::SET_VEHICLE_IS_CONSIDERED_BY_PLAYER(iLocal_234, false);
		}
		else if (__LIB_0__::func_650(PLAYER::PLAYER_PED_ID()) == 2)
		{
			VEHICLE::SET_VEHICLE_IS_CONSIDERED_BY_PLAYER(iLocal_232, false);
			VEHICLE::SET_VEHICLE_IS_CONSIDERED_BY_PLAYER(iLocal_233, false);
			VEHICLE::SET_VEHICLE_IS_CONSIDERED_BY_PLAYER(iLocal_234, true);
		}
		func_894("CMN_GENGETIN" /* GXT: ~s~Get in the ~b~car. */, 0);
		if (!AUDIO::IS_AUDIO_SCENE_ACTIVE("CAR_1_GET_TO_GARAGE"))
		{
			AUDIO::START_AUDIO_SCENE("CAR_1_GET_TO_GARAGE");
		}
		iLocal_198 = 0;
		func_475("S3_DRIVE", 7500, 1);
		HUD::HIDE_HUD_AND_RADAR_THIS_FRAME();
		HUD::HIDE_HUD_COMPONENT_THIS_FRAME(1);
		HUD::HIDE_HUD_COMPONENT_THIS_FRAME(2);
		HUD::HIDE_HUD_COMPONENT_THIS_FRAME(3);
		HUD::HIDE_HUD_COMPONENT_THIS_FRAME(4);
		HUD::HIDE_HUD_COMPONENT_THIS_FRAME(5);
		HUD::HIDE_HUD_COMPONENT_THIS_FRAME(6);
		HUD::HIDE_HUD_COMPONENT_THIS_FRAME(7);
		HUD::HIDE_HUD_COMPONENT_THIS_FRAME(8);
		HUD::HIDE_HUD_COMPONENT_THIS_FRAME(9);
		HUD::HIDE_HUD_COMPONENT_THIS_FRAME(10);
		HUD::HIDE_HUD_COMPONENT_THIS_FRAME(11);
		HUD::HIDE_HUD_COMPONENT_THIS_FRAME(12);
		HUD::HIDE_HUD_COMPONENT_THIS_FRAME(13);
		HUD::HIDE_HUD_COMPONENT_THIS_FRAME(14);
		HUD::HIDE_HUD_COMPONENT_THIS_FRAME(15);
		HUD::HIDE_HUD_COMPONENT_THIS_FRAME(16);
		HUD::HIDE_HUD_COMPONENT_THIS_FRAME(17);
		HUD::HIDE_HUD_COMPONENT_THIS_FRAME(18);
		HUD::HIDE_HUD_COMPONENT_THIS_FRAME(19);
		HUD::HIDE_HUD_COMPONENT_THIS_FRAME(20);
		iLocal_204 = 1;
		iLocal_206 = 1;
		SYSTEM::SETTIMERB(0);
		if (!HUD::DOES_BLIP_EXIST(iLocal_246))
		{
			__LIB_15__::func_936(&iLocal_246, Local_218, 1);
		}
		bLocal_209 = true;
		iLocal_183[0] = (MISC::GET_GAME_TIMER() + MISC::GET_RANDOM_INT_IN_RANGE(15000, 25000));
		bLocal_3264 = false;
		bLocal_3265 = false;
		bLocal_3266 = false;
		iLocal_3267 = 0;
		iLocal_3268 = 0;
		iLocal_3269 = 0;
		MISC::CLEAR_AREA(-1907.4462f, 4621.807f, 56.0429f, 200f, true, false, false, false);
		PATHFIND::SET_ROADS_BACK_TO_ORIGINAL(Vector(56.0588f, 4597.9775f, -1928.3759f) - Vector(1000f, 1000f, 1000f), Vector(56.0588f, 4597.9775f, -1928.3759f) + Vector(1000f, 1000f, 1000f), 1);
		if (func_365())
		{
			TASK::CLEAR_PED_TASKS_IMMEDIATELY(PLAYER::PLAYER_PED_ID());
			PED::CLEAR_PED_PROP(PLAYER::PLAYER_PED_ID(), 0);
			PED::CLEAR_PED_PROP(uLocal_489[2], 0);
			__LIB_37__::func_920(PLAYER::PLAYER_PED_ID(), Vector(56.0562f, 4604.91f, -1921.7319f) + Vector(0f, -0.37f, 0.36f), 135.026f, 0);
			__LIB_37__::func_920(uLocal_489[1], -1910.9945f, 4615.9185f, 56.0528f, 23.9654f, 0);
			__LIB_37__::func_920(uLocal_489[2], -1917.8722f, 4608.782f, 56.0547f, 135.062f, 0);
			ENTITY::SET_ENTITY_INVINCIBLE(iLocal_233, false);
			ENTITY::SET_ENTITY_INVINCIBLE(iLocal_234, false);
			ENTITY::SET_ENTITY_INVINCIBLE(iLocal_232, false);
			__LIB_15__::func_889(iLocal_235, -1909.1063f, 4619.5996f, 56.044f, 135.7088f);
			__LIB_15__::func_889(iLocal_236, -1907.5037f, 4618.121f, 56.0526f, 137.0636f);
			__LIB_15__::func_889(iLocal_232, -1912.547f, 4616.3613f, 56.0427f, 134.6697f);
			__LIB_15__::func_889(iLocal_233, -1923.0222f, 4605.4927f, 56.044f, 135.0786f);
			__LIB_15__::func_889(iLocal_234, -1919.3284f, 4609.285f, 56.0532f, 135.0284f);
			VEHICLE::SET_VEHICLE_SIREN(iLocal_235, true);
			VEHICLE::SET_VEHICLE_SIREN(iLocal_236, true);
			if (!bLocal_201)
			{
				func_361(-1917.8722f, 4608.782f, 56.0547f, 50f);
			}
			VEHICLE::SET_VEHICLE_ON_GROUND_PROPERLY(iLocal_235, 5f);
			VEHICLE::SET_VEHICLE_ON_GROUND_PROPERLY(iLocal_236, 5f);
			VEHICLE::SET_VEHICLE_ON_GROUND_PROPERLY(iLocal_232, 5f);
			VEHICLE::SET_VEHICLE_ON_GROUND_PROPERLY(iLocal_233, 5f);
			VEHICLE::SET_VEHICLE_ON_GROUND_PROPERLY(iLocal_234, 5f);
			VEHICLE::REQUEST_VEHICLE_ASSET(joaat("cheetah"), 2);
			while (!VEHICLE::HAS_VEHICLE_ASSET_LOADED(joaat("cheetah")))
			{
				func_362(0);
			}
			while (!PED::HAVE_ALL_STREAMING_REQUESTS_COMPLETED(func_359(0)) || !PED::HAVE_ALL_STREAMING_REQUESTS_COMPLETED(func_359(2)))
			{
				func_362(0);
			}
			MISC::CLEAR_AREA(-1917.8722f, 4608.782f, 56.0547f, 200f, true, false, false, false);
			PED::SET_PED_INTO_VEHICLE(func_359(1), iLocal_232, -1);
			PED::SET_PED_INTO_VEHICLE(func_359(0), iLocal_233, -1);
			PED::SET_PED_INTO_VEHICLE(func_359(2), iLocal_234, -1);
			if (ENTITY::DOES_ENTITY_EXIST(iLocal_226) && !PED::IS_PED_INJURED(iLocal_226))
			{
				__LIB_37__::func_920(iLocal_226, -1915.6257f, 4600.5103f, 56.0301f, 141.4507f, 0);
				TASK::TASK_SMART_FLEE_PED(iLocal_226, PLAYER::PLAYER_PED_ID(), 500f, -1, false, false);
				PED::FORCE_PED_MOTION_STATE(iLocal_226, joaat("MotionState_Run"), false, 0, false);
				PED::SET_PED_KEEP_TASK(iLocal_226, true);
				ENTITY::SET_PED_AS_NO_LONGER_NEEDED(&iLocal_226);
			}
			if (ENTITY::DOES_ENTITY_EXIST(iLocal_227) && !PED::IS_PED_INJURED(iLocal_227))
			{
				__LIB_37__::func_920(iLocal_227, -1921.2577f, 4590.635f, 56.0301f, 141.4507f, 0);
				TASK::TASK_SMART_FLEE_PED(iLocal_227, PLAYER::PLAYER_PED_ID(), 500f, -1, false, false);
				PED::FORCE_PED_MOTION_STATE(iLocal_227, joaat("MotionState_Run"), false, 0, false);
				PED::SET_PED_KEEP_TASK(iLocal_227, true);
				ENTITY::SET_PED_AS_NO_LONGER_NEEDED(&iLocal_227);
			}
			CAM::SET_GAMEPLAY_CAM_RELATIVE_HEADING((141.1f - ENTITY::GET_ENTITY_HEADING(PLAYER::PLAYER_PED_ID())));
			CAM::SET_GAMEPLAY_CAM_RELATIVE_PITCH(-10f, 1f);
			func_362(1000);
			while (!VEHICLE::IS_VEHICLE_HIGH_DETAIL(iLocal_233) || !VEHICLE::IS_VEHICLE_HIGH_DETAIL(iLocal_234))
			{
				VEHICLE::SET_FORCE_HD_VEHICLE(iLocal_233, true);
				VEHICLE::SET_FORCE_HD_VEHICLE(iLocal_234, true);
				func_362(0);
			}
			if (CAM::IS_SCREEN_FADED_OUT())
			{
				CAM::DO_SCREEN_FADE_IN(500);
			}
		}
	}
	else
	{
		RECORDING::REPLAY_DISABLE_CAMERA_MOVEMENT_THIS_FRAME();
		if ((SYSTEM::TIMERB() < 800 && !__LIB_0__::func_104(0)) && !__LIB_0__::func_104(1))
		{
			HUD::HIDE_HUD_AND_RADAR_THIS_FRAME();
			HUD::HIDE_HUD_COMPONENT_THIS_FRAME(1);
			HUD::HIDE_HUD_COMPONENT_THIS_FRAME(2);
			HUD::HIDE_HUD_COMPONENT_THIS_FRAME(3);
			HUD::HIDE_HUD_COMPONENT_THIS_FRAME(4);
			HUD::HIDE_HUD_COMPONENT_THIS_FRAME(5);
			HUD::HIDE_HUD_COMPONENT_THIS_FRAME(6);
			HUD::HIDE_HUD_COMPONENT_THIS_FRAME(7);
			HUD::HIDE_HUD_COMPONENT_THIS_FRAME(8);
			HUD::HIDE_HUD_COMPONENT_THIS_FRAME(9);
			HUD::HIDE_HUD_COMPONENT_THIS_FRAME(10);
			HUD::HIDE_HUD_COMPONENT_THIS_FRAME(11);
			HUD::HIDE_HUD_COMPONENT_THIS_FRAME(12);
			HUD::HIDE_HUD_COMPONENT_THIS_FRAME(13);
			HUD::HIDE_HUD_COMPONENT_THIS_FRAME(14);
			HUD::HIDE_HUD_COMPONENT_THIS_FRAME(15);
			HUD::HIDE_HUD_COMPONENT_THIS_FRAME(16);
			HUD::HIDE_HUD_COMPONENT_THIS_FRAME(17);
			HUD::HIDE_HUD_COMPONENT_THIS_FRAME(18);
			HUD::HIDE_HUD_COMPONENT_THIS_FRAME(19);
			HUD::HIDE_HUD_COMPONENT_THIS_FRAME(20);
		}
		else if (iLocal_204)
		{
			HUD::THEFEED_RESUME();
			iLocal_198 = 1;
			iLocal_204 = 0;
		}
		if (__LIB_0__::func_86(Local_187[0 /*3*/]))
		{
			Local_187[0 /*3*/] = { 100f, 0f, 0f };
		}
		if (__LIB_0__::func_86(Local_187[2 /*3*/]))
		{
			Local_187[2 /*3*/] = { 0f, 100f, 0f };
		}
		if (__LIB_0__::func_86(Local_187[1 /*3*/]))
		{
			Local_187[1 /*3*/] = { 0f, 0f, 100f };
		}
		if (ENTITY::DOES_ENTITY_EXIST(iLocal_226) && !PED::IS_PED_INJURED(iLocal_226))
		{
			if (MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(iLocal_226, true), ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true), true) > 200f)
			{
				ENTITY::SET_PED_AS_NO_LONGER_NEEDED(&iLocal_226);
			}
		}
		if (ENTITY::DOES_ENTITY_EXIST(iLocal_227) && !PED::IS_PED_INJURED(iLocal_227))
		{
			if (MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(iLocal_227, true), ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true), true) > 200f)
			{
				ENTITY::SET_PED_AS_NO_LONGER_NEEDED(&iLocal_227);
			}
		}
		if (ENTITY::DOES_ENTITY_EXIST(iLocal_235) && !ENTITY::IS_ENTITY_DEAD(iLocal_235, false))
		{
			if (MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(iLocal_235, true), ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true), true) > 200f)
			{
				ENTITY::SET_VEHICLE_AS_NO_LONGER_NEEDED(&iLocal_235);
			}
		}
		if (ENTITY::DOES_ENTITY_EXIST(iLocal_236) && !ENTITY::IS_ENTITY_DEAD(iLocal_236, false))
		{
			if (MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(iLocal_236, true), ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true), true) > 200f)
			{
				ENTITY::SET_VEHICLE_AS_NO_LONGER_NEEDED(&iLocal_236);
			}
		}
		if (ENTITY::IS_ENTITY_AT_COORD(PLAYER::PLAYER_PED_ID(), -1919.3295f, 4609.286f, (56.0538f - 1f), 10f, 10f, 10f, false, true, 0))
		{
			VEHICLE::SET_VEHICLE_DENSITY_MULTIPLIER_THIS_FRAME(0f);
		}
		else
		{
			VEHICLE::SET_VEHICLE_DENSITY_MULTIPLIER_THIS_FRAME(1f);
		}
		if (ENTITY::IS_ENTITY_IN_AREA(PLAYER::PLAYER_PED_ID(), -387.44717f, -2211.64f, -200f, 1478.4885f, -552.18f, 1500f, false, true, 0))
		{
			PATHFIND::REQUEST_PATH_NODES_IN_AREA_THIS_FRAME(-387.44717f, -2211.64f, 1478.4885f, -552.18f);
		}
		else if (ENTITY::IS_ENTITY_IN_AREA(PLAYER::PLAYER_PED_ID(), -3624.2166f, -3439.0237f, -200f, 1435.4321f, 967.93536f, 1500f, false, true, 0))
		{
			PATHFIND::REQUEST_PATH_NODES_IN_AREA_THIS_FRAME(-3624.2166f, -3439.0237f, 1435.4321f, 967.93536f);
		}
		else if (ENTITY::IS_ENTITY_IN_AREA(PLAYER::PLAYER_PED_ID(), -3624.2166f, -3439.0237f, -200f, 1435.4321f, 2366.1055f, 1500f, false, true, 0))
		{
			PATHFIND::REQUEST_PATH_NODES_IN_AREA_THIS_FRAME(-3624.2166f, -3439.0237f, 1435.4321f, 2366.1055f);
		}
		else
		{
			PATHFIND::REQUEST_PATH_NODES_IN_AREA_THIS_FRAME(-3624.9932f, -3439.0237f, 1435.4321f, 5642.2188f);
		}
		if (!func_897("LOAD_ALL_PATH_NODES"))
		{
			if (((!PATHFIND::ARE_NODES_LOADED_FOR_AREA(-387.44717f, -2211.64f, 1478.4885f, -552.18f) && !PATHFIND::ARE_NODES_LOADED_FOR_AREA(-3624.2166f, -3439.0237f, 1435.4321f, 967.93536f)) && !PATHFIND::ARE_NODES_LOADED_FOR_AREA(-3624.2166f, -3439.0237f, 1435.4321f, 2366.1055f)) && !PATHFIND::ARE_NODES_LOADED_FOR_AREA(-3624.9932f, -3439.0237f, 1435.4321f, 5642.2188f))
			{
			}
			else
			{
				ENTITY::SET_ENTITY_SHOULD_FREEZE_WAITING_ON_COLLISION(iLocal_232, false);
				ENTITY::SET_ENTITY_SHOULD_FREEZE_WAITING_ON_COLLISION(iLocal_233, false);
				ENTITY::SET_ENTITY_SHOULD_FREEZE_WAITING_ON_COLLISION(iLocal_234, false);
				func_894("LOAD_ALL_PATH_NODES", 1);
			}
		}
		if (((((PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false) && VEHICLE::IS_VEHICLE_ON_ALL_WHEELS(PED::GET_VEHICLE_PED_IS_USING(PLAYER::PLAYER_PED_ID()))) && !PED::IS_PED_IN_FLYING_VEHICLE(PLAYER::PLAYER_PED_ID())) && !PED::IS_PED_IN_ANY_BOAT(PLAYER::PLAYER_PED_ID())) && !ENTITY::IS_ENTITY_IN_WATER(PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false))) && ENTITY::GET_ENTITY_SPEED(PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false)) > 5f)
		{
			if (MISC::GET_GAME_TIMER() > iLocal_185)
			{
				PATHFIND::GET_NTH_CLOSEST_VEHICLE_NODE_WITH_HEADING(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true), 1, &Var1, &uVar2, &iVar3, 0, 3f, 0f);
				iLocal_185 = MISC::GET_GAME_TIMER() + 500;
			}
			iVar0 = 0;
			while (iVar0 < 3)
			{
				if (MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true), Local_187[iVar0 /*3*/], true) > (40f - (VEHICLE::GET_VEHICLE_ESTIMATED_MAX_SPEED(PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false)) / 5f)) && MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true), Var1, true) < (5f + IntToFloat(iVar3)))
				{
					Local_188[iVar0 /*3*/] = { Local_187[iVar0 /*3*/] };
					uLocal_190[iVar0] = fLocal_189[iVar0];
					Local_187[iVar0 /*3*/] = { ENTITY::GET_ENTITY_COORDS(PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false), true) };
					fLocal_189[iVar0] = ENTITY::GET_ENTITY_HEADING(PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false));
				}
				iVar0++;
			}
		}
		if (SYSTEM::TIMERA() > 1000)
		{
			if (!ENTITY::IS_ENTITY_IN_ANGLED_AREA(iLocal_232, 481.8133f, -1306.4171f, 28.200811f, 497.21774f, -1328.9546f, 34.341835f, 15f, false, true, 0))
			{
				if (__LIB_15__::func_944() != 1)
				{
					if (ENTITY::DOES_ENTITY_EXIST(uLocal_489[1]))
					{
						if (!PED::IS_PED_IN_VEHICLE(uLocal_489[1], iLocal_232, false))
						{
							if (TASK::GET_SCRIPT_TASK_STATUS(uLocal_489[1], joaat("SCRIPT_TASK_ENTER_VEHICLE")) != 1)
							{
								TASK::TASK_ENTER_VEHICLE(uLocal_489[1], iLocal_232, -1, -1, 1f, 1, 0);
							}
							if (!ENTITY::IS_ENTITY_ON_SCREEN(uLocal_489[1]) && !ENTITY::IS_ENTITY_ON_SCREEN(iLocal_232))
							{
								PED::SET_PED_INTO_VEHICLE(uLocal_489[1], iLocal_232, -1);
							}
						}
						else if (func_897("LOAD_ALL_PATH_NODES"))
						{
							if (bLocal_209 == 0)
							{
								if (!ENTITY::IS_ENTITY_AT_COORD(uLocal_489[1], 496.117f, -1323.8239f, 28.8653f, 20f, 20f, 5f, false, true, 0))
								{
									if (TASK::GET_SCRIPT_TASK_STATUS(uLocal_489[1], joaat("SCRIPT_TASK_VEHICLE_DRIVE_TO_COORD_LONGRANGE")) != 1)
									{
										TASK::TASK_VEHICLE_DRIVE_TO_COORD_LONGRANGE(uLocal_489[1], iLocal_232, 496.117f, -1323.8239f, 28.8653f, 100f, 786469, 1f);
									}
								}
								else if (TASK::GET_SCRIPT_TASK_STATUS(uLocal_489[1], joaat("SCRIPT_TASK_VEHICLE_DRIVE_TO_COORD_LONGRANGE")) == 1)
								{
									TASK::CLEAR_PED_TASKS(uLocal_489[1]);
									TASK::TASK_VEHICLE_DRIVE_TO_COORD(uLocal_489[1], iLocal_232, 496.117f, -1323.8239f, 28.8653f, 20f, 0, joaat("f620"), 786603, 2f, 4f);
								}
								if ((PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), iLocal_232, false) || PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), iLocal_233, false)) || PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), iLocal_234, false))
								{
									if (ENTITY::IS_ENTITY_ON_SCREEN(iLocal_232))
									{
										iLocal_186[0] = MISC::GET_GAME_TIMER() + 3000;
									}
									else if ((MISC::GET_GAME_TIMER() > iLocal_186[0] && MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true), ENTITY::GET_ENTITY_COORDS(iLocal_232, true), true) > (50f - (VEHICLE::GET_VEHICLE_ESTIMATED_MAX_SPEED(PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false)) / 5f))) && MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true), Local_188[0 /*3*/], true) > (40f - (VEHICLE::GET_VEHICLE_ESTIMATED_MAX_SPEED(PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false)) / 5f)))
									{
										if ((((!__LIB_0__::func_86(Local_188[0 /*3*/]) && MISC::GET_DISTANCE_BETWEEN_COORDS(Local_188[0 /*3*/], ENTITY::GET_ENTITY_COORDS(iLocal_233, true), true) > 10f) && MISC::GET_DISTANCE_BETWEEN_COORDS(Local_188[0 /*3*/], ENTITY::GET_ENTITY_COORDS(iLocal_234, true), true) > 10f) && MISC::GET_DISTANCE_BETWEEN_COORDS(Local_188[0 /*3*/], 493.657f, -1319.0879f, 28.5502f, true) > MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true), 496.117f, -1323.8239f, 28.8653f, true)) && MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(iLocal_232, true), 493.657f, -1319.0879f, 28.5502f, true) > MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true), 496.117f, -1323.8239f, 28.8653f, true))
										{
											MISC::CLEAR_AREA(Local_188[0 /*3*/], 3f, true, false, false, false);
											__LIB_15__::func_889(iLocal_232, Local_188[0 /*3*/], uLocal_190[0]);
											VEHICLE::SET_VEHICLE_FORWARD_SPEED(iLocal_232, 10f);
											VEHICLE::SET_VEHICLE_ENGINE_ON(iLocal_232, true, true, false);
											iLocal_186[0] = (MISC::GET_GAME_TIMER() + (6000 - __LIB_0__::func_340(SYSTEM::ROUND((VEHICLE::GET_VEHICLE_ESTIMATED_MAX_SPEED(PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false)) * VEHICLE::GET_VEHICLE_ESTIMATED_MAX_SPEED(PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false)))), 0, 3000)));
										}
									}
								}
							}
						}
					}
				}
				else
				{
					iVar4 = 16;
					__LIB_17__::func_461(&iVar5, &iVar6, &iVar7, &iVar8, 0);
					if ((TASK::GET_SCRIPT_TASK_STATUS(PLAYER::PLAYER_PED_ID(), joaat("SCRIPT_TASK_VEHICLE_DRIVE_TO_COORD_LONGRANGE")) == 1 && CAM::GET_RENDERING_CAM() != Local_533.f_9) && (((MISC::GET_GAME_TIMER() > iLocal_184 || PAD::IS_CONTROL_PRESSED(0 /*PLAYER_CONTROL*/, 71 /*INPUT_VEH_ACCELERATE*/)) || PAD::IS_CONTROL_PRESSED(0 /*PLAYER_CONTROL*/, 72 /*INPUT_VEH_BRAKE*/)) || (iVar5 < -iVar4 || iVar5 > iVar4)))
					{
						TASK::CLEAR_PED_TASKS(PLAYER::PLAYER_PED_ID());
						VEHICLE::SET_VEHICLE_ENGINE_ON(iLocal_232, true, true, false);
					}
				}
			}
			else
			{
				__LIB_15__::func_888(&uLocal_489, 1, 1);
				if (bLocal_3265 == 0 && bLocal_3266 == 0)
				{
					bLocal_3264 = true;
				}
				else if ((bLocal_3265 == 1 && iLocal_3269 == 0) || (bLocal_3266 == 1 && iLocal_3268 == 0))
				{
					iLocal_3267 = 1;
				}
			}
			if (!ENTITY::IS_ENTITY_IN_ANGLED_AREA(iLocal_234, 481.8133f, -1306.4171f, 28.200811f, 497.21774f, -1328.9546f, 34.341835f, 15f, false, true, 0))
			{
				if (__LIB_15__::func_944() != 2)
				{
					if (ENTITY::DOES_ENTITY_EXIST(uLocal_489[2]))
					{
						if (!PED::IS_PED_IN_VEHICLE(uLocal_489[2], iLocal_234, false))
						{
							if (TASK::GET_SCRIPT_TASK_STATUS(uLocal_489[2], joaat("SCRIPT_TASK_ENTER_VEHICLE")) != 1)
							{
								TASK::TASK_ENTER_VEHICLE(uLocal_489[2], iLocal_234, -1, -1, 1f, 1, 0);
							}
							if (!ENTITY::IS_ENTITY_ON_SCREEN(uLocal_489[2]) && !ENTITY::IS_ENTITY_ON_SCREEN(iLocal_234))
							{
								PED::SET_PED_INTO_VEHICLE(uLocal_489[2], iLocal_234, -1);
							}
						}
						else if (func_897("LOAD_ALL_PATH_NODES"))
						{
							if (bLocal_209 == 0)
							{
								if (!ENTITY::IS_ENTITY_AT_COORD(uLocal_489[2], 490.83542f, -1311.9866f, 28.2584f, 20f, 20f, 5f, false, true, 0))
								{
									if (TASK::GET_SCRIPT_TASK_STATUS(uLocal_489[2], joaat("SCRIPT_TASK_VEHICLE_DRIVE_TO_COORD_LONGRANGE")) != 1)
									{
										TASK::TASK_VEHICLE_DRIVE_TO_COORD_LONGRANGE(uLocal_489[2], iLocal_234, 490.83542f, -1311.9866f, 28.2584f, 100f, 786469, 1f);
									}
								}
								else if (TASK::GET_SCRIPT_TASK_STATUS(uLocal_489[2], joaat("SCRIPT_TASK_VEHICLE_DRIVE_TO_COORD_LONGRANGE")) == 1)
								{
									TASK::CLEAR_PED_TASKS(uLocal_489[2]);
									TASK::TASK_VEHICLE_DRIVE_TO_COORD(uLocal_489[2], iLocal_234, 490.83542f, -1311.9866f, 28.2584f, 10f, 0, joaat("cheetah"), 786603, 2f, 4f);
								}
								if ((PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), iLocal_232, false) || PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), iLocal_233, false)) || PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), iLocal_234, false))
								{
									if (ENTITY::IS_ENTITY_ON_SCREEN(iLocal_234))
									{
										iLocal_186[2] = MISC::GET_GAME_TIMER() + 3000;
									}
									else if ((MISC::GET_GAME_TIMER() > iLocal_186[2] && MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true), ENTITY::GET_ENTITY_COORDS(iLocal_234, true), true) > (50f - (VEHICLE::GET_VEHICLE_ESTIMATED_MAX_SPEED(PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false)) / 5f))) && MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true), Local_188[2 /*3*/], true) > (40f - (VEHICLE::GET_VEHICLE_ESTIMATED_MAX_SPEED(PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false)) / 5f)))
									{
										if ((((!__LIB_0__::func_86(Local_188[2 /*3*/]) && MISC::GET_DISTANCE_BETWEEN_COORDS(Local_188[2 /*3*/], ENTITY::GET_ENTITY_COORDS(iLocal_232, true), true) > 10f) && MISC::GET_DISTANCE_BETWEEN_COORDS(Local_188[2 /*3*/], ENTITY::GET_ENTITY_COORDS(iLocal_233, true), true) > 10f) && MISC::GET_DISTANCE_BETWEEN_COORDS(Local_188[2 /*3*/], 490.83542f, -1311.9866f, 28.2584f, true) > MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true), 490.83542f, -1311.9866f, 28.2584f, true)) && MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(iLocal_234, true), 490.83542f, -1311.9866f, 28.2584f, true) > MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true), 490.83542f, -1311.9866f, 28.2584f, true))
										{
											MISC::CLEAR_AREA(Local_188[2 /*3*/], 3f, true, false, false, false);
											__LIB_15__::func_889(iLocal_234, Local_188[2 /*3*/], uLocal_190[2]);
											VEHICLE::SET_VEHICLE_FORWARD_SPEED(iLocal_234, 10f);
											VEHICLE::SET_VEHICLE_ENGINE_ON(iLocal_234, true, true, false);
											iLocal_186[2] = (MISC::GET_GAME_TIMER() + (6000 - __LIB_0__::func_340(SYSTEM::ROUND((VEHICLE::GET_VEHICLE_ESTIMATED_MAX_SPEED(PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false)) * VEHICLE::GET_VEHICLE_ESTIMATED_MAX_SPEED(PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false)))), 0, 3000)));
										}
									}
								}
							}
						}
					}
				}
				else
				{
					iVar9 = 16;
					__LIB_17__::func_461(&iVar10, &iVar11, &iVar12, &iVar13, 0);
					if ((TASK::GET_SCRIPT_TASK_STATUS(PLAYER::PLAYER_PED_ID(), joaat("SCRIPT_TASK_VEHICLE_DRIVE_TO_COORD_LONGRANGE")) == 1 && CAM::GET_RENDERING_CAM() != Local_533.f_9) && (((MISC::GET_GAME_TIMER() > iLocal_184 || PAD::IS_CONTROL_PRESSED(0 /*PLAYER_CONTROL*/, 71 /*INPUT_VEH_ACCELERATE*/)) || PAD::IS_CONTROL_PRESSED(0 /*PLAYER_CONTROL*/, 72 /*INPUT_VEH_BRAKE*/)) || (iVar10 < -iVar9 || iVar10 > iVar9)))
					{
						TASK::CLEAR_PED_TASKS(PLAYER::PLAYER_PED_ID());
						VEHICLE::SET_VEHICLE_ENGINE_ON(iLocal_234, true, true, false);
					}
				}
			}
			else
			{
				__LIB_15__::func_888(&uLocal_489, 2, 1);
				if (bLocal_3264 == 0 && bLocal_3266 == 0)
				{
					bLocal_3265 = true;
				}
				else if ((bLocal_3264 == 1 && iLocal_3269 == 0) || (bLocal_3266 == 1 && iLocal_3267 == 0))
				{
					iLocal_3268 = 1;
				}
			}
			if (!ENTITY::IS_ENTITY_IN_ANGLED_AREA(iLocal_233, 481.8133f, -1306.4171f, 28.200811f, 497.21774f, -1328.9546f, 34.341835f, 15f, false, true, 0))
			{
				if (__LIB_15__::func_944() != 0)
				{
					if (ENTITY::DOES_ENTITY_EXIST(uLocal_489[0]))
					{
						if (!PED::IS_PED_IN_VEHICLE(uLocal_489[0], iLocal_233, false))
						{
							if (TASK::GET_SCRIPT_TASK_STATUS(uLocal_489[0], joaat("SCRIPT_TASK_ENTER_VEHICLE")) != 1)
							{
								TASK::TASK_ENTER_VEHICLE(uLocal_489[0], iLocal_233, -1, -1, 1f, 1, 0);
							}
							if (!ENTITY::IS_ENTITY_ON_SCREEN(uLocal_489[0]) && !ENTITY::IS_ENTITY_ON_SCREEN(iLocal_233))
							{
								PED::SET_PED_INTO_VEHICLE(uLocal_489[0], iLocal_233, -1);
							}
						}
						else if (func_897("LOAD_ALL_PATH_NODES"))
						{
							if (bLocal_209 == 0)
							{
								if (!ENTITY::IS_ENTITY_AT_COORD(uLocal_489[0], 489.1545f, -1312.9886f, 28.6664f, 20f, 20f, 5f, false, true, 0))
								{
									if (TASK::GET_SCRIPT_TASK_STATUS(uLocal_489[0], joaat("SCRIPT_TASK_VEHICLE_DRIVE_TO_COORD_LONGRANGE")) != 1)
									{
										TASK::TASK_VEHICLE_DRIVE_TO_COORD_LONGRANGE(uLocal_489[0], iLocal_233, 489.1545f, -1312.9886f, 28.6664f, 100f, 786469, 1f);
									}
								}
								else if (TASK::GET_SCRIPT_TASK_STATUS(uLocal_489[0], joaat("SCRIPT_TASK_VEHICLE_DRIVE_TO_COORD_LONGRANGE")) == 1)
								{
									TASK::CLEAR_PED_TASKS(uLocal_489[0]);
									TASK::TASK_VEHICLE_DRIVE_TO_COORD(uLocal_489[0], iLocal_233, 489.1545f, -1312.9886f, 28.6664f, 20f, 0, joaat("entityxf"), 786603, 2f, 4f);
								}
								if ((PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), iLocal_232, false) || PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), iLocal_233, false)) || PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), iLocal_234, false))
								{
									if (ENTITY::IS_ENTITY_ON_SCREEN(iLocal_233))
									{
										iLocal_186[1] = MISC::GET_GAME_TIMER() + 3000;
									}
									else if ((MISC::GET_GAME_TIMER() > iLocal_186[1] && MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true), ENTITY::GET_ENTITY_COORDS(iLocal_233, true), true) > (50f - (VEHICLE::GET_VEHICLE_ESTIMATED_MAX_SPEED(PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false)) / 5f))) && MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true), Local_188[1 /*3*/], true) > (40f - (VEHICLE::GET_VEHICLE_ESTIMATED_MAX_SPEED(PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false)) / 5f)))
									{
										if ((((!__LIB_0__::func_86(Local_188[1 /*3*/]) && MISC::GET_DISTANCE_BETWEEN_COORDS(Local_188[1 /*3*/], ENTITY::GET_ENTITY_COORDS(iLocal_232, true), true) > 10f) && MISC::GET_DISTANCE_BETWEEN_COORDS(Local_188[1 /*3*/], ENTITY::GET_ENTITY_COORDS(iLocal_234, true), true) > 10f) && MISC::GET_DISTANCE_BETWEEN_COORDS(Local_188[1 /*3*/], 493.657f, -1319.0879f, 28.5502f, true) > MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true), 489.1545f, -1312.9886f, 28.6664f, true)) && MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(iLocal_233, true), 493.657f, -1319.0879f, 28.5502f, true) > MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true), 496.117f, -1323.8239f, 28.8653f, true))
										{
											MISC::CLEAR_AREA(Local_188[1 /*3*/], 3f, true, false, false, false);
											__LIB_15__::func_889(iLocal_233, Local_188[1 /*3*/], uLocal_190[1]);
											VEHICLE::SET_VEHICLE_FORWARD_SPEED(iLocal_233, 10f);
											VEHICLE::SET_VEHICLE_ENGINE_ON(iLocal_233, true, true, false);
											iLocal_186[1] = (MISC::GET_GAME_TIMER() + (6000 - __LIB_0__::func_340(SYSTEM::ROUND((VEHICLE::GET_VEHICLE_ESTIMATED_MAX_SPEED(PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false)) * VEHICLE::GET_VEHICLE_ESTIMATED_MAX_SPEED(PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false)))), 0, 3000)));
										}
									}
								}
							}
						}
					}
				}
				else
				{
					iVar14 = 16;
					__LIB_17__::func_461(&iVar15, &iVar16, &iVar17, &iVar18, 0);
					if ((TASK::GET_SCRIPT_TASK_STATUS(PLAYER::PLAYER_PED_ID(), joaat("SCRIPT_TASK_VEHICLE_DRIVE_TO_COORD_LONGRANGE")) == 1 && CAM::GET_RENDERING_CAM() != Local_533.f_9) && (((MISC::GET_GAME_TIMER() > iLocal_184 || PAD::IS_CONTROL_PRESSED(0 /*PLAYER_CONTROL*/, 71 /*INPUT_VEH_ACCELERATE*/)) || PAD::IS_CONTROL_PRESSED(0 /*PLAYER_CONTROL*/, 72 /*INPUT_VEH_BRAKE*/)) || (iVar15 < -iVar14 || iVar15 > iVar14)))
					{
						TASK::CLEAR_PED_TASKS(PLAYER::PLAYER_PED_ID());
						VEHICLE::SET_VEHICLE_ENGINE_ON(iLocal_233, true, true, false);
					}
				}
			}
			else
			{
				__LIB_15__::func_888(&uLocal_489, 0, 1);
				if (bLocal_3264 == 0 && bLocal_3265 == 0)
				{
					bLocal_3266 = true;
				}
				else if ((bLocal_3264 == 1 && iLocal_3268 == 0) || (bLocal_3265 == 1 && iLocal_3267 == 0))
				{
					iLocal_3269 = 1;
				}
			}
		}
		if ((!HUD::IS_MESSAGE_BEING_DISPLAYED() || MISC::GET_PROFILE_SETTING(203) == 0) && !__LIB_0__::func_75())
		{
			if ((func_897("SwitchOnce") && !STREAMING::IS_PLAYER_SWITCH_IN_PROGRESS()) && !__LIB_0__::func_201())
			{
				if (MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true), 492.65005f, -1317.1921f, 28.25825f, true) > 500f)
				{
					if ((!func_897("CST3_GoHomeM") && !func_897("CST3_GoHomeT")) && !func_897("CST3_GoHomeF"))
					{
						if (!func_897("MollyDialogue"))
						{
							__LIB_0__::func_222(&uLocal_312, 5, 0, "Molly", 0, 1);
							func_894("MollyDialogue", 1);
						}
						if (__LIB_15__::func_944() == 0)
						{
							if (__LIB_31__::func_805(&uLocal_312, 45, sLocal_481, "CST3_GoHomeM", 8, 1, 0, 0, 0))
							{
								func_894("CST3_GoHomeM", 1);
							}
						}
						else if (__LIB_15__::func_944() == 2)
						{
							if (__LIB_31__::func_805(&uLocal_312, 45, sLocal_481, "CST3_GoHomeT", 8, 1, 0, 0, 0))
							{
								func_894("CST3_GoHomeT", 1);
							}
						}
						else if (__LIB_15__::func_944() == 1)
						{
							if (__LIB_31__::func_805(&uLocal_312, 45, sLocal_481, "CST3_GoHomeF", 8, 1, 0, 0, 0))
							{
								func_894("CST3_GoHomeF", 1);
							}
						}
					}
					else if (!func_897("MollyContact"))
					{
						switch (__LIB_15__::func_944())
						{
							case 0:
								iVar19 = 0;
								break;
							case 1:
								iVar19 = 1;
								break;
							case 2:
								iVar19 = 2;
								break;
						}
						__LIB_31__::func_806(45, iVar19, 1);
						func_894("MollyContact", 1);
					}
					else if ((!func_897("CST3_MollyM") && !func_897("CST3_MollyF")) && !func_897("CST3_MollyT"))
					{
						if (__LIB_15__::func_944() == 0)
						{
							func_452("CST3_MollyM", 7, 1, 0, 0);
						}
						else if (__LIB_15__::func_944() == 1)
						{
							func_452("CST3_MollyF", 7, 1, 0, 0);
						}
						else if (__LIB_15__::func_944() == 2)
						{
							func_452("CST3_MollyT", 7, 1, 0, 0);
						}
					}
					else if ((!func_897("CST3_ShitM") && !func_897("CST3_ShitF")) && !func_897("CST3_ShitT"))
					{
						if (__LIB_15__::func_944() == 0)
						{
							func_452("CST3_ShitT", 7, 1, 0, 0);
							iLocal_183[1] = (MISC::GET_GAME_TIMER() + MISC::GET_RANDOM_INT_IN_RANGE(15000, 25000));
						}
						else if (__LIB_15__::func_944() == 1)
						{
							func_452("CST3_ShitM", 7, 1, 0, 0);
							iLocal_183[1] = (MISC::GET_GAME_TIMER() + MISC::GET_RANDOM_INT_IN_RANGE(15000, 25000));
						}
						else if (__LIB_15__::func_944() == 2)
						{
							func_452("CST3_ShitF", 7, 1, 0, 0);
							iLocal_183[1] = (MISC::GET_GAME_TIMER() + MISC::GET_RANDOM_INT_IN_RANGE(15000, 25000));
						}
					}
					else if (!func_897("CST3_RAD1"))
					{
						if (MISC::GET_GAME_TIMER() > iLocal_183[1])
						{
							func_452("CST3_RAD1", 7, 1, 0, 0);
							iLocal_183[1] = (MISC::GET_GAME_TIMER() + MISC::GET_RANDOM_INT_IN_RANGE(40000, 55000));
						}
					}
					else if (!func_897("CST3_RAD2"))
					{
						if (MISC::GET_GAME_TIMER() > iLocal_183[1])
						{
							func_452("CST3_RAD2", 7, 1, 0, 0);
							iLocal_183[1] = (MISC::GET_GAME_TIMER() + MISC::GET_RANDOM_INT_IN_RANGE(40000, 55000));
						}
					}
					else if (!func_897("CST3_RAD3"))
					{
						if (MISC::GET_GAME_TIMER() > iLocal_183[1])
						{
							func_452("CST3_RAD3", 7, 1, 0, 0);
							iLocal_183[1] = (MISC::GET_GAME_TIMER() + MISC::GET_RANDOM_INT_IN_RANGE(40000, 55000));
						}
					}
					else if (!func_897("CST3_RAD4"))
					{
						if (MISC::GET_GAME_TIMER() > iLocal_183[1])
						{
							func_452("CST3_RAD4", 7, 1, 0, 0);
							iLocal_183[1] = (MISC::GET_GAME_TIMER() + MISC::GET_RANDOM_INT_IN_RANGE(40000, 55000));
						}
					}
				}
			}
		}
		if ((!HUD::IS_MESSAGE_BEING_DISPLAYED() || MISC::GET_PROFILE_SETTING(203) == 0) && !__LIB_0__::func_75())
		{
			if (__LIB_15__::func_944() != 1)
			{
				if (ENTITY::DOES_ENTITY_EXIST(iLocal_232) && !ENTITY::IS_ENTITY_DEAD(iLocal_232, false))
				{
					if (ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(iLocal_232, PLAYER::PLAYER_PED_ID(), true))
					{
						func_452("CST3_CrashF", 7, 1, 0, 0);
					}
				}
			}
			if (__LIB_15__::func_944() != 0)
			{
				if (ENTITY::DOES_ENTITY_EXIST(iLocal_233) && !ENTITY::IS_ENTITY_DEAD(iLocal_233, false))
				{
					if (ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(iLocal_233, PLAYER::PLAYER_PED_ID(), true))
					{
						func_452("CST3_CrashM", 7, 1, 0, 0);
					}
				}
			}
			if (__LIB_15__::func_944() != 2)
			{
				if (ENTITY::DOES_ENTITY_EXIST(iLocal_234) && !ENTITY::IS_ENTITY_DEAD(iLocal_234, false))
				{
					if (ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(iLocal_234, PLAYER::PLAYER_PED_ID(), true))
					{
						func_452("CST3_CrashT", 7, 1, 0, 0);
					}
				}
			}
		}
		if ((ENTITY::GET_ENTITY_HEALTH(iLocal_232) < iLocal_192[0] || VEHICLE::GET_VEHICLE_PETROL_TANK_HEALTH(iLocal_232) < fLocal_193[0]) || VEHICLE::GET_VEHICLE_ENGINE_HEALTH(iLocal_232) < fLocal_194[0])
		{
			if (ENTITY::IS_ENTITY_ON_SCREEN(iLocal_232) && !ENTITY::IS_ENTITY_OCCLUDED(iLocal_232))
			{
				if (MISC::GET_GAME_TIMER() > iLocal_191)
				{
					if ((!HUD::IS_MESSAGE_BEING_DISPLAYED() || MISC::GET_PROFILE_SETTING(203) == 0) && !__LIB_0__::func_75())
					{
						if (!func_897("CST3_StackF"))
						{
							func_452("CST3_StackF", 7, 1, 0, 0);
						}
						else if (!func_897("CST3_StackM"))
						{
							func_452("CST3_StackM", 7, 1, 0, 0);
						}
					}
				}
			}
			iLocal_192[0] = ENTITY::GET_ENTITY_HEALTH(iLocal_232);
			fLocal_193[0] = VEHICLE::GET_VEHICLE_PETROL_TANK_HEALTH(iLocal_232);
			fLocal_194[0] = VEHICLE::GET_VEHICLE_ENGINE_HEALTH(iLocal_232);
			iLocal_191 = MISC::GET_GAME_TIMER() + 7500;
		}
		if ((ENTITY::GET_ENTITY_HEALTH(iLocal_233) < iLocal_192[1] || VEHICLE::GET_VEHICLE_PETROL_TANK_HEALTH(iLocal_233) < fLocal_193[1]) || VEHICLE::GET_VEHICLE_ENGINE_HEALTH(iLocal_233) < fLocal_194[1])
		{
			if (ENTITY::IS_ENTITY_ON_SCREEN(iLocal_233) && !ENTITY::IS_ENTITY_OCCLUDED(iLocal_233))
			{
				if (MISC::GET_GAME_TIMER() > iLocal_191)
				{
					if ((!HUD::IS_MESSAGE_BEING_DISPLAYED() || MISC::GET_PROFILE_SETTING(203) == 0) && !__LIB_0__::func_75())
					{
						if (!func_897("CST3_StackM"))
						{
							func_452("CST3_StackM", 7, 1, 0, 0);
						}
						else if (!func_897("CST3_StackT"))
						{
							func_452("CST3_StackT", 7, 1, 0, 0);
						}
					}
				}
			}
			iLocal_192[1] = ENTITY::GET_ENTITY_HEALTH(iLocal_233);
			fLocal_193[1] = VEHICLE::GET_VEHICLE_PETROL_TANK_HEALTH(iLocal_233);
			fLocal_194[1] = VEHICLE::GET_VEHICLE_ENGINE_HEALTH(iLocal_233);
			iLocal_191 = MISC::GET_GAME_TIMER() + 7500;
		}
		if ((ENTITY::GET_ENTITY_HEALTH(iLocal_234) < iLocal_192[2] || VEHICLE::GET_VEHICLE_PETROL_TANK_HEALTH(iLocal_234) < fLocal_193[2]) || VEHICLE::GET_VEHICLE_ENGINE_HEALTH(iLocal_234) < fLocal_194[2])
		{
			if (ENTITY::IS_ENTITY_ON_SCREEN(iLocal_234) && !ENTITY::IS_ENTITY_OCCLUDED(iLocal_234))
			{
				if (MISC::GET_GAME_TIMER() > iLocal_191)
				{
					if ((!HUD::IS_MESSAGE_BEING_DISPLAYED() || MISC::GET_PROFILE_SETTING(203) == 0) && !__LIB_0__::func_75())
					{
						if (!func_897("CST3_StackT"))
						{
							func_452("CST3_StackT", 7, 1, 0, 0);
						}
						else if (!func_897("CST3_StackF"))
						{
							func_452("CST3_StackF", 7, 1, 0, 0);
						}
					}
				}
			}
			iLocal_192[2] = ENTITY::GET_ENTITY_HEALTH(iLocal_234);
			fLocal_193[2] = VEHICLE::GET_VEHICLE_PETROL_TANK_HEALTH(iLocal_234);
			fLocal_194[2] = VEHICLE::GET_VEHICLE_ENGINE_HEALTH(iLocal_234);
			iLocal_191 = MISC::GET_GAME_TIMER() + 7500;
		}
		if ((!HUD::IS_MESSAGE_BEING_DISPLAYED() || MISC::GET_PROFILE_SETTING(203) == 0) && !__LIB_0__::func_75())
		{
			if ((func_897("SwitchOnce") && !STREAMING::IS_PLAYER_SWITCH_IN_PROGRESS()) && !__LIB_0__::func_201())
			{
				if (bLocal_3264 || iLocal_3267)
				{
					if (!func_897("CST3_FinishF"))
					{
						if (bLocal_3264)
						{
							if ((PED::IS_PED_IN_VEHICLE(func_359(1), iLocal_232, false) && PED::IS_PED_IN_VEHICLE(func_359(0), iLocal_233, false)) && PED::IS_PED_IN_VEHICLE(func_359(2), iLocal_234, false))
							{
								if (MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(iLocal_232, true), ENTITY::GET_ENTITY_COORDS(iLocal_233, true), true) < 100f || MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(iLocal_232, true), ENTITY::GET_ENTITY_COORDS(iLocal_234, true), true) < 100f)
								{
									func_452("CST3_JUSTF", 7, 1, 0, 0);
								}
								else
								{
									func_452("CST3_FinishF", 7, 1, 0, 0);
								}
							}
						}
						func_894("CST3_FinishF", 1);
					}
				}
				if (bLocal_3265 || iLocal_3268)
				{
					if (!func_897("CST3_FinishT"))
					{
						if (bLocal_3265)
						{
							if ((PED::IS_PED_IN_VEHICLE(func_359(1), iLocal_232, false) && PED::IS_PED_IN_VEHICLE(func_359(0), iLocal_233, false)) && PED::IS_PED_IN_VEHICLE(func_359(2), iLocal_234, false))
							{
								if (MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(iLocal_234, true), ENTITY::GET_ENTITY_COORDS(iLocal_232, true), true) < 100f || MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(iLocal_234, true), ENTITY::GET_ENTITY_COORDS(iLocal_233, true), true) < 100f)
								{
									func_452("CST3_JUSTT", 7, 1, 0, 0);
								}
								else
								{
									func_452("CST3_FinishT", 7, 1, 0, 0);
								}
							}
						}
						func_894("CST3_FinishT", 1);
					}
				}
				if (bLocal_3266 || iLocal_3269)
				{
					if (!func_897("CST3_FinishM"))
					{
						if (bLocal_3266)
						{
							if ((PED::IS_PED_IN_VEHICLE(func_359(1), iLocal_232, false) && PED::IS_PED_IN_VEHICLE(func_359(0), iLocal_233, false)) && PED::IS_PED_IN_VEHICLE(func_359(2), iLocal_234, false))
							{
								if (MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(iLocal_233, true), ENTITY::GET_ENTITY_COORDS(iLocal_232, true), true) < 100f || MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(iLocal_233, true), ENTITY::GET_ENTITY_COORDS(iLocal_234, true), true) < 100f)
								{
									func_452("CST3_JUSTM", 7, 1, 0, 0);
								}
								else
								{
									func_452("CST3_FinishM", 7, 1, 0, 0);
								}
							}
						}
						func_894("CST3_FinishM", 1);
					}
				}
			}
		}
		if (((__LIB_0__::func_650(PLAYER::PLAYER_PED_ID()) != 1 && !ENTITY::IS_ENTITY_IN_ANGLED_AREA(iLocal_232, 509.4869f, -1338.5309f, 27.32558f, 475.68536f, -1289.8898f, 44.556633f, 55f, false, true, 0)) || (__LIB_0__::func_650(PLAYER::PLAYER_PED_ID()) != 0 && !ENTITY::IS_ENTITY_IN_ANGLED_AREA(iLocal_233, 509.4869f, -1338.5309f, 27.32558f, 475.68536f, -1289.8898f, 44.556633f, 55f, false, true, 0))) || (__LIB_0__::func_650(PLAYER::PLAYER_PED_ID()) != 2 && !ENTITY::IS_ENTITY_IN_ANGLED_AREA(iLocal_234, 509.4869f, -1338.5309f, 27.32558f, 475.68536f, -1289.8898f, 44.556633f, 55f, false, true, 0)))
		{
			if (!Local_533.f_20)
			{
				if (!func_897("SwitchOnce"))
				{
					if (SYSTEM::TIMERA() < 20000)
					{
						if (func_897("CST3_Return"))
						{
							func_450("S3_RACEHOME", 1, -1);
						}
						if (func_424(&uLocal_489, 1, 1))
						{
							if (!__LIB_15__::func_893(&uLocal_489, 3))
							{
								TASK::CLEAR_PED_TASKS(PLAYER::PLAYER_PED_ID());
								__LIB_0__::func_497(118, 1, 0);
								Local_533.f_12 = uLocal_489[uLocal_489.f_7];
								Local_533.f_20 = 1;
								iLocal_3260 = PED::GET_VEHICLE_PED_IS_USING(Local_533.f_12);
								Local_3261 = { Local_210 };
								Local_3262 = { Local_210 };
								fLocal_3263 = 0f;
								if (ENTITY::DOES_ENTITY_EXIST(iLocal_3260) && !ENTITY::IS_ENTITY_DEAD(iLocal_3260, false))
								{
									Local_3261 = { ENTITY::GET_ENTITY_COORDS(iLocal_3260, true) };
									Local_3262 = { ENTITY::GET_ENTITY_ROTATION(iLocal_3260, 2) };
									fLocal_3263 = ENTITY::GET_ENTITY_SPEED(iLocal_3260);
								}
								func_894("SwitchOnce", 1);
							}
						}
					}
					else
					{
						func_894("SwitchOnce", 1);
					}
				}
			}
			else if (__LIB_17__::func_736(&Local_533, 0, 0, 1148829696, 1148829696, 0, 0, 0, 0, 0))
			{
				if (Local_533.f_18)
				{
					if (!Local_533.f_19)
					{
						if (func_956(&uLocal_489, 1, 1, 0))
						{
							iLocal_183[0] = (MISC::GET_GAME_TIMER() + MISC::GET_RANDOM_INT_IN_RANGE(5000, 10000));
							iLocal_184 = MISC::GET_GAME_TIMER() + 5000;
							if (__LIB_0__::func_650(PLAYER::PLAYER_PED_ID()) == 1)
							{
								VEHICLE::SET_VEHICLE_ENGINE_ON(iLocal_232, true, true, false);
								VEHICLE::SET_VEHICLE_IS_CONSIDERED_BY_PLAYER(iLocal_232, true);
								VEHICLE::SET_VEHICLE_IS_CONSIDERED_BY_PLAYER(iLocal_233, false);
								VEHICLE::SET_VEHICLE_IS_CONSIDERED_BY_PLAYER(iLocal_234, false);
							}
							else if (__LIB_0__::func_650(PLAYER::PLAYER_PED_ID()) == 0)
							{
								VEHICLE::SET_VEHICLE_ENGINE_ON(iLocal_233, true, true, false);
								VEHICLE::SET_VEHICLE_IS_CONSIDERED_BY_PLAYER(iLocal_232, false);
								VEHICLE::SET_VEHICLE_IS_CONSIDERED_BY_PLAYER(iLocal_233, true);
								VEHICLE::SET_VEHICLE_IS_CONSIDERED_BY_PLAYER(iLocal_234, false);
							}
							else if (__LIB_0__::func_650(PLAYER::PLAYER_PED_ID()) == 2)
							{
								VEHICLE::SET_VEHICLE_ENGINE_ON(iLocal_234, true, true, false);
								VEHICLE::SET_VEHICLE_IS_CONSIDERED_BY_PLAYER(iLocal_232, false);
								VEHICLE::SET_VEHICLE_IS_CONSIDERED_BY_PLAYER(iLocal_233, false);
								VEHICLE::SET_VEHICLE_IS_CONSIDERED_BY_PLAYER(iLocal_234, true);
							}
							Local_533.f_19 = 1;
						}
					}
				}
			}
		}
		if (!__LIB_0__::func_78(Local_3261, Local_210, 0))
		{
			if (STREAMING::IS_PLAYER_SWITCH_IN_PROGRESS() && STREAMING::GET_PLAYER_SWITCH_TYPE() != 3)
			{
				iVar20 = STREAMING::GET_PLAYER_SWITCH_STATE();
				if (ENTITY::DOES_ENTITY_EXIST(iLocal_3260) && !ENTITY::IS_ENTITY_DEAD(iLocal_3260, false))
				{
					if (iVar20 > 3)
					{
						MISC::CLEAR_AREA(Local_3261, 15f, true, false, false, false);
						if (iLocal_232 != iLocal_3260)
						{
							if (ENTITY::IS_ENTITY_AT_COORD(iLocal_232, ENTITY::GET_ENTITY_COORDS(iLocal_3260, true) - Vector(1f, 0f, 0f), 4f, 4f, 4f, false, true, 0))
							{
								ENTITY::SET_ENTITY_COORDS(iLocal_232, ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(iLocal_3260, 0f, -10f, 1f), true, false, false, true);
								ENTITY::SET_ENTITY_ROTATION(iLocal_232, ENTITY::GET_ENTITY_ROTATION(iLocal_232, 2), 2, true);
								VEHICLE::SET_VEHICLE_ON_GROUND_PROPERLY(iLocal_232, 5f);
							}
						}
						if (iLocal_233 != iLocal_3260)
						{
							if (ENTITY::IS_ENTITY_AT_COORD(iLocal_233, ENTITY::GET_ENTITY_COORDS(iLocal_3260, true) - Vector(1f, 0f, 0f), 4f, 4f, 4f, false, true, 0))
							{
								ENTITY::SET_ENTITY_COORDS(iLocal_233, ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(iLocal_3260, 0f, -10f, 1f), true, false, false, true);
								ENTITY::SET_ENTITY_ROTATION(iLocal_233, ENTITY::GET_ENTITY_ROTATION(iLocal_233, 2), 2, true);
								VEHICLE::SET_VEHICLE_ON_GROUND_PROPERLY(iLocal_233, 5f);
							}
						}
						if (iLocal_234 != iLocal_3260)
						{
							if (ENTITY::IS_ENTITY_AT_COORD(iLocal_234, ENTITY::GET_ENTITY_COORDS(iLocal_3260, true) - Vector(1f, 0f, 0f), 4f, 4f, 4f, false, true, 0))
							{
								ENTITY::SET_ENTITY_COORDS(iLocal_234, ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(iLocal_3260, 0f, -10f, 1f), true, false, false, true);
								ENTITY::SET_ENTITY_ROTATION(iLocal_234, ENTITY::GET_ENTITY_ROTATION(iLocal_234, 2), 2, true);
								VEHICLE::SET_VEHICLE_ON_GROUND_PROPERLY(iLocal_234, 5f);
							}
						}
						ENTITY::SET_ENTITY_COORDS(iLocal_3260, Local_3261, true, false, false, true);
						ENTITY::SET_ENTITY_ROTATION(iLocal_3260, Local_3262, 2, true);
						VEHICLE::SET_VEHICLE_ON_GROUND_PROPERLY(iLocal_3260, 5f);
						if (iVar20 > 8)
						{
							VEHICLE::SET_VEHICLE_FORWARD_SPEED(iLocal_3260, fLocal_3263);
							Local_3261 = { Local_210 };
							Local_3262 = { Local_210 };
							fLocal_3263 = 0f;
						}
					}
				}
			}
		}
		if (!func_897("MichaelHelmet"))
		{
			if (PED::IS_PED_IN_ANY_VEHICLE(func_359(0), false))
			{
				PED::CLEAR_PED_PROP(func_359(0), 0);
				PED::REMOVE_PED_HELMET(func_359(0), true);
				func_894("MichaelHelmet", 1);
			}
		}
		if (!func_897("TrevorHelmet"))
		{
			if (PED::IS_PED_IN_ANY_VEHICLE(func_359(2), false))
			{
				PED::CLEAR_PED_PROP(func_359(2), 0);
				PED::REMOVE_PED_HELMET(func_359(2), true);
				func_894("TrevorHelmet", 1);
			}
		}
		if (PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), iLocal_233, false))
		{
			__LIB_0__::func_377(iLocal_233, -1);
		}
		if (PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), iLocal_234, false))
		{
			__LIB_0__::func_377(iLocal_234, -1);
		}
		if (!__LIB_0__::func_75() && (!HUD::IS_MESSAGE_BEING_DISPLAYED() || MISC::GET_PROFILE_SETTING(203) == 0))
		{
			if (bLocal_209 == 0)
			{
				if (__LIB_0__::func_650(PLAYER::PLAYER_PED_ID()) == 1)
				{
					if (PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), iLocal_232, false))
					{
						if (MISC::GET_GAME_TIMER() > iLocal_183[0])
						{
							if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(iLocal_232, ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(iLocal_233, -10f, 0f, -5f), ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(iLocal_233, 10f, 10f, 5f), 10f, false, true, 0) || ENTITY::IS_ENTITY_IN_ANGLED_AREA(iLocal_232, ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(iLocal_234, -10f, 0f, -5f), ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(iLocal_234, 10f, 10f, 5f), 10f, false, true, 0))
							{
								iLocal_181 = 0;
								if (iLocal_182[iLocal_181] == -1)
								{
									iLocal_182[iLocal_181] = 3;
								}
								else if (iLocal_182[iLocal_181] > 0)
								{
									func_452("CST3_OverF", 7, 0, 0, 0);
									iLocal_183[0] = (MISC::GET_GAME_TIMER() + MISC::GET_RANDOM_INT_IN_RANGE(15000, 25000));
									iLocal_182[iLocal_181] = (iLocal_182[iLocal_181] - 1);
								}
							}
						}
					}
				}
				if (__LIB_0__::func_650(PLAYER::PLAYER_PED_ID()) == 0)
				{
					if (PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), iLocal_233, false))
					{
						if (MISC::GET_GAME_TIMER() > iLocal_183[0])
						{
							if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(iLocal_233, ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(iLocal_232, -10f, 0f, -5f), ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(iLocal_232, 10f, 10f, 5f), 10f, false, true, 0) || ENTITY::IS_ENTITY_IN_ANGLED_AREA(iLocal_233, ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(iLocal_234, -10f, 0f, -5f), ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(iLocal_234, 10f, 10f, 5f), 10f, false, true, 0))
							{
								iLocal_181 = 1;
								if (iLocal_182[iLocal_181] == -1)
								{
									iLocal_182[iLocal_181] = 3;
								}
								else if (iLocal_182[iLocal_181] > 0)
								{
									func_452("CST3_OverM", 7, 0, 0, 0);
									iLocal_183[0] = (MISC::GET_GAME_TIMER() + MISC::GET_RANDOM_INT_IN_RANGE(15000, 25000));
									iLocal_182[iLocal_181] = (iLocal_182[iLocal_181] - 1);
								}
							}
						}
					}
				}
				if (__LIB_0__::func_650(PLAYER::PLAYER_PED_ID()) == 2)
				{
					if (PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), iLocal_234, false))
					{
						if (MISC::GET_GAME_TIMER() > iLocal_183[0])
						{
							if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(iLocal_234, ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(iLocal_232, -10f, 0f, -5f), ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(iLocal_232, 10f, 10f, 5f), 10f, false, true, 0) || ENTITY::IS_ENTITY_IN_ANGLED_AREA(iLocal_234, ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(iLocal_233, -10f, 0f, -5f), ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(iLocal_233, 10f, 10f, 5f), 10f, false, true, 0))
							{
								iLocal_181 = 2;
								if (iLocal_182[iLocal_181] == -1)
								{
									iLocal_182[iLocal_181] = 3;
								}
								else if (iLocal_182[iLocal_181] > 0)
								{
									func_452("CST3_OverT", 7, 0, 0, 0);
									iLocal_183[0] = (MISC::GET_GAME_TIMER() + MISC::GET_RANDOM_INT_IN_RANGE(15000, 25000));
									iLocal_182[iLocal_181] = (iLocal_182[iLocal_181] - 1);
								}
							}
						}
					}
				}
			}
		}
		if (!__LIB_0__::func_75() && (!HUD::IS_MESSAGE_BEING_DISPLAYED() || MISC::GET_PROFILE_SETTING(203) == 0))
		{
			if ((func_897("SwitchOnce") && !STREAMING::IS_PLAYER_SWITCH_IN_PROGRESS()) && !__LIB_0__::func_201())
			{
				if ((!func_897("CST3_ShitM") || !func_897("CST3_ShitF")) || !func_897("CST3_ShitT"))
				{
					if (SYSTEM::TIMERA() > 60000)
					{
						if (!func_897("CST3_FR_M"))
						{
							if (MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(iLocal_233, true), 492.9378f, -1317.7393f, (29.25194f - 1f), true) < (MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(iLocal_232, true), 492.9378f, -1317.7393f, (29.25194f - 1f), true) - 300f) && MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(iLocal_233, true), 492.9378f, -1317.7393f, (29.25194f - 1f), true) < (MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(iLocal_234, true), 492.9378f, -1317.7393f, (29.25194f - 1f), true) - 300f))
							{
								func_452("CST3_FR_M", 7, 1, 0, 0);
							}
						}
						else
						{
							if (!func_897("CST3_CATCHF"))
							{
								if (MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(iLocal_233, true), 492.9378f, -1317.7393f, (29.25194f - 1f), true) > (MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(iLocal_232, true), 492.9378f, -1317.7393f, (29.25194f - 1f), true) - 300f))
								{
									func_452("CST3_CATCHF", 7, 1, 0, 0);
								}
							}
							if (!func_897("CST3_CATCHT"))
							{
								if (MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(iLocal_233, true), 492.9378f, -1317.7393f, (29.25194f - 1f), true) > (MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(iLocal_234, true), 492.9378f, -1317.7393f, (29.25194f - 1f), true) - 300f))
								{
									func_452("CST3_CATCHT", 7, 1, 0, 0);
								}
							}
						}
						if (!func_897("CST3_FR_F"))
						{
							if (MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(iLocal_232, true), 492.9378f, -1317.7393f, (29.25194f - 1f), true) < (MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(iLocal_233, true), 492.9378f, -1317.7393f, (29.25194f - 1f), true) - 300f) && MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(iLocal_232, true), 492.9378f, -1317.7393f, (29.25194f - 1f), true) < (MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(iLocal_234, true), 492.9378f, -1317.7393f, (29.25194f - 1f), true) - 300f))
							{
								func_452("CST3_FR_F", 7, 1, 0, 0);
							}
						}
						else
						{
							if (!func_897("CST3_CATCHM"))
							{
								if (MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(iLocal_232, true), 492.9378f, -1317.7393f, (29.25194f - 1f), true) > (MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(iLocal_233, true), 492.9378f, -1317.7393f, (29.25194f - 1f), true) - 300f))
								{
									func_452("CST3_CATCHM", 7, 1, 0, 0);
								}
							}
							if (!func_897("CST3_CATCHT"))
							{
								if (MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(iLocal_232, true), 492.9378f, -1317.7393f, (29.25194f - 1f), true) > (MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(iLocal_234, true), 492.9378f, -1317.7393f, (29.25194f - 1f), true) - 300f))
								{
									func_452("CST3_CATCHT", 7, 1, 0, 0);
								}
							}
						}
						if (!func_897("CST3_FR_T"))
						{
							if (MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(iLocal_234, true), 492.9378f, -1317.7393f, (29.25194f - 1f), true) < (MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(iLocal_233, true), 492.9378f, -1317.7393f, (29.25194f - 1f), true) - 300f) && MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(iLocal_234, true), 492.9378f, -1317.7393f, (29.25194f - 1f), true) < (MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(iLocal_232, true), 492.9378f, -1317.7393f, (29.25194f - 1f), true) - 300f))
							{
								func_452("CST3_FR_T", 7, 1, 0, 0);
							}
						}
						else
						{
							if (!func_897("CST3_CATCHM"))
							{
								if (MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(iLocal_234, true), 492.9378f, -1317.7393f, (29.25194f - 1f), true) > (MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(iLocal_233, true), 492.9378f, -1317.7393f, (29.25194f - 1f), true) - 300f))
								{
									func_452("CST3_CATCHM", 7, 1, 0, 0);
								}
							}
							if (!func_897("CST3_CATCHF"))
							{
								if (MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(iLocal_234, true), 492.9378f, -1317.7393f, (29.25194f - 1f), true) > (MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(iLocal_232, true), 492.9378f, -1317.7393f, (29.25194f - 1f), true) - 300f))
								{
									func_452("CST3_CATCHF", 7, 1, 0, 0);
								}
							}
						}
					}
				}
			}
		}
		if (!ENTITY::DOES_ENTITY_EXIST(iLocal_253))
		{
			if (ENTITY::IS_ENTITY_AT_COORD(PLAYER::PLAYER_PED_ID(), -2575.9487f, 3186.5703f, 71.91477f, 200f, 200f, 50f, false, true, 0))
			{
				if (func_869(joaat("prop_mp_ramp_03")))
				{
					iLocal_253 = OBJECT::CREATE_OBJECT_NO_OFFSET(joaat("prop_mp_ramp_03"), -2589.9f, 3126.1f, 32.58f, true, true, false);
					ENTITY::SET_ENTITY_ROTATION(iLocal_253, 0f, 0f, 170.73997f, 2, true);
					STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(joaat("prop_mp_ramp_03"));
				}
			}
		}
		if ((PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), iLocal_233, false) || PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), iLocal_234, false)) || PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), iLocal_232, false))
		{
			if (bLocal_209)
			{
				iVar21 = PED::GET_VEHICLE_PED_IS_USING(PLAYER::PLAYER_PED_ID());
				if (((ENTITY::DOES_ENTITY_EXIST(iVar21) && !ENTITY::IS_ENTITY_DEAD(iVar21, false)) && ENTITY::GET_ENTITY_SPEED(iVar21) > 5f) || !ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), -1908.2922f, 4619.0396f, 55.05199f, -1924.486f, 4602.3916f, 60.057453f, 10f, false, true, 0))
				{
					bLocal_209 = false;
				}
			}
			if (HUD::GET_BLIP_FROM_ENTITY(iLocal_232) == iLocal_241)
			{
				__LIB_13__::func_808(&iLocal_241);
			}
			if (HUD::GET_BLIP_FROM_ENTITY(iLocal_233) == iLocal_242)
			{
				__LIB_13__::func_808(&iLocal_242);
			}
			if (HUD::GET_BLIP_FROM_ENTITY(iLocal_234) == iLocal_243)
			{
				__LIB_13__::func_808(&iLocal_243);
			}
			if (HUD::IS_PAUSE_MENU_ACTIVE())
			{
				if (HUD::DOES_BLIP_EXIST(iLocal_241))
				{
					HUD::SET_BLIP_COORDS(iLocal_241, ENTITY::GET_ENTITY_COORDS(iLocal_232, true));
				}
				if (HUD::DOES_BLIP_EXIST(iLocal_242))
				{
					HUD::SET_BLIP_COORDS(iLocal_242, ENTITY::GET_ENTITY_COORDS(iLocal_233, true));
				}
				if (HUD::DOES_BLIP_EXIST(iLocal_243))
				{
					HUD::SET_BLIP_COORDS(iLocal_243, ENTITY::GET_ENTITY_COORDS(iLocal_234, true));
				}
			}
			if (PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), iLocal_233, false))
			{
				if (ENTITY::DOES_ENTITY_EXIST(iLocal_232))
				{
					AUDIO::REMOVE_ENTITY_FROM_AUDIO_MIX_GROUP(iLocal_232, 0f);
				}
				if (ENTITY::DOES_ENTITY_EXIST(iLocal_234))
				{
					AUDIO::REMOVE_ENTITY_FROM_AUDIO_MIX_GROUP(iLocal_234, 0f);
				}
				__LIB_13__::func_808(&iLocal_242);
				if (!HUD::DOES_BLIP_EXIST(iLocal_243))
				{
					iLocal_243 = HUD::ADD_BLIP_FOR_COORD(ENTITY::GET_ENTITY_COORDS(iLocal_234, true));
					HUD::SET_BLIP_COLOUR(iLocal_243, 3);
					HUD::SET_BLIP_PRIORITY(iLocal_243, 9);
					HUD::SET_BLIP_NAME_FROM_TEXT_FILE(iLocal_243, "S3_BLIPVEH");
				}
				Var22 = { ENTITY::GET_ENTITY_COORDS(iLocal_234, true) };
				Var23 = { HUD::GET_BLIP_COORDS(iLocal_243) };
				fVar24 = (1f + __LIB_0__::func_331((MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true), ENTITY::GET_ENTITY_COORDS(iLocal_234, true), true) / 4f), 0f, 17.5f));
				Var23.f_0 = (Var23.f_0 + ((((Var22.f_0 - Var23.f_0) / fVar24) * 15f) * SYSTEM::TIMESTEP()));
				Var23.f_1 = (Var23.f_1 + ((((Var22.f_1 - Var23.f_1) / fVar24) * 15f) * SYSTEM::TIMESTEP()));
				Var23.f_2 = (Var23.f_2 + ((((Var22.f_2 - Var23.f_2) / fVar24) * 15f) * SYSTEM::TIMESTEP()));
				HUD::SET_BLIP_COORDS(iLocal_243, Var23);
				if (!HUD::DOES_BLIP_EXIST(iLocal_241))
				{
					iLocal_241 = HUD::ADD_BLIP_FOR_COORD(ENTITY::GET_ENTITY_COORDS(iLocal_232, true));
					HUD::SET_BLIP_COLOUR(iLocal_241, 3);
					HUD::SET_BLIP_PRIORITY(iLocal_241, 9);
					HUD::SET_BLIP_NAME_FROM_TEXT_FILE(iLocal_241, "S3_BLIPVEH");
				}
				Var22 = { ENTITY::GET_ENTITY_COORDS(iLocal_232, true) };
				Var23 = { HUD::GET_BLIP_COORDS(iLocal_241) };
				fVar24 = (1f + __LIB_0__::func_331((MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true), ENTITY::GET_ENTITY_COORDS(iLocal_232, true), true) / 4f), 0f, 17.5f));
				Var23.f_0 = (Var23.f_0 + ((((Var22.f_0 - Var23.f_0) / fVar24) * 15f) * SYSTEM::TIMESTEP()));
				Var23.f_1 = (Var23.f_1 + ((((Var22.f_1 - Var23.f_1) / fVar24) * 15f) * SYSTEM::TIMESTEP()));
				Var23.f_2 = (Var23.f_2 + ((((Var22.f_2 - Var23.f_2) / fVar24) * 15f) * SYSTEM::TIMESTEP()));
				HUD::SET_BLIP_COORDS(iLocal_241, Var23);
			}
			else if (PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), iLocal_234, false))
			{
				if (ENTITY::DOES_ENTITY_EXIST(iLocal_232))
				{
					AUDIO::REMOVE_ENTITY_FROM_AUDIO_MIX_GROUP(iLocal_232, 0f);
				}
				if (ENTITY::DOES_ENTITY_EXIST(iLocal_233))
				{
					AUDIO::REMOVE_ENTITY_FROM_AUDIO_MIX_GROUP(iLocal_233, 0f);
				}
				__LIB_13__::func_808(&iLocal_243);
				if (!HUD::DOES_BLIP_EXIST(iLocal_242))
				{
					iLocal_242 = HUD::ADD_BLIP_FOR_COORD(ENTITY::GET_ENTITY_COORDS(iLocal_233, true));
					HUD::SET_BLIP_COLOUR(iLocal_242, 3);
					HUD::SET_BLIP_PRIORITY(iLocal_242, 9);
					HUD::SET_BLIP_NAME_FROM_TEXT_FILE(iLocal_242, "S3_BLIPVEH");
				}
				Var22 = { ENTITY::GET_ENTITY_COORDS(iLocal_233, true) };
				Var23 = { HUD::GET_BLIP_COORDS(iLocal_242) };
				fVar24 = (1f + __LIB_0__::func_331((MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true), ENTITY::GET_ENTITY_COORDS(iLocal_233, true), true) / 4f), 0f, 17.5f));
				Var23.f_0 = (Var23.f_0 + ((((Var22.f_0 - Var23.f_0) / fVar24) * 15f) * SYSTEM::TIMESTEP()));
				Var23.f_1 = (Var23.f_1 + ((((Var22.f_1 - Var23.f_1) / fVar24) * 15f) * SYSTEM::TIMESTEP()));
				Var23.f_2 = (Var23.f_2 + ((((Var22.f_2 - Var23.f_2) / fVar24) * 15f) * SYSTEM::TIMESTEP()));
				HUD::SET_BLIP_COORDS(iLocal_242, Var23);
				if (!HUD::DOES_BLIP_EXIST(iLocal_241))
				{
					iLocal_241 = HUD::ADD_BLIP_FOR_COORD(ENTITY::GET_ENTITY_COORDS(iLocal_232, true));
					HUD::SET_BLIP_COLOUR(iLocal_241, 3);
					HUD::SET_BLIP_PRIORITY(iLocal_241, 9);
					HUD::SET_BLIP_NAME_FROM_TEXT_FILE(iLocal_241, "S3_BLIPVEH");
				}
				Var22 = { ENTITY::GET_ENTITY_COORDS(iLocal_232, true) };
				Var23 = { HUD::GET_BLIP_COORDS(iLocal_241) };
				fVar24 = (1f + __LIB_0__::func_331((MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true), ENTITY::GET_ENTITY_COORDS(iLocal_232, true), true) / 4f), 0f, 17.5f));
				Var23.f_0 = (Var23.f_0 + ((((Var22.f_0 - Var23.f_0) / fVar24) * 15f) * SYSTEM::TIMESTEP()));
				Var23.f_1 = (Var23.f_1 + ((((Var22.f_1 - Var23.f_1) / fVar24) * 15f) * SYSTEM::TIMESTEP()));
				Var23.f_2 = (Var23.f_2 + ((((Var22.f_2 - Var23.f_2) / fVar24) * 15f) * SYSTEM::TIMESTEP()));
				HUD::SET_BLIP_COORDS(iLocal_241, Var23);
			}
			else if (PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), iLocal_232, false))
			{
				if (ENTITY::DOES_ENTITY_EXIST(iLocal_233))
				{
					AUDIO::REMOVE_ENTITY_FROM_AUDIO_MIX_GROUP(iLocal_233, 0f);
				}
				if (ENTITY::DOES_ENTITY_EXIST(iLocal_234))
				{
					AUDIO::REMOVE_ENTITY_FROM_AUDIO_MIX_GROUP(iLocal_234, 0f);
				}
				__LIB_13__::func_808(&iLocal_241);
				if (!HUD::DOES_BLIP_EXIST(iLocal_242))
				{
					iLocal_242 = HUD::ADD_BLIP_FOR_COORD(ENTITY::GET_ENTITY_COORDS(iLocal_233, true));
					HUD::SET_BLIP_COLOUR(iLocal_242, 3);
					HUD::SET_BLIP_PRIORITY(iLocal_242, 9);
					HUD::SET_BLIP_NAME_FROM_TEXT_FILE(iLocal_242, "S3_BLIPVEH");
				}
				Var22 = { ENTITY::GET_ENTITY_COORDS(iLocal_233, true) };
				Var23 = { HUD::GET_BLIP_COORDS(iLocal_242) };
				fVar24 = (1f + __LIB_0__::func_331((MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true), ENTITY::GET_ENTITY_COORDS(iLocal_233, true), true) / 4f), 0f, 17.5f));
				Var23.f_0 = (Var23.f_0 + ((((Var22.f_0 - Var23.f_0) / fVar24) * 15f) * SYSTEM::TIMESTEP()));
				Var23.f_1 = (Var23.f_1 + ((((Var22.f_1 - Var23.f_1) / fVar24) * 15f) * SYSTEM::TIMESTEP()));
				Var23.f_2 = (Var23.f_2 + ((((Var22.f_2 - Var23.f_2) / fVar24) * 15f) * SYSTEM::TIMESTEP()));
				HUD::SET_BLIP_COORDS(iLocal_242, Var23);
				if (!HUD::DOES_BLIP_EXIST(iLocal_243))
				{
					iLocal_243 = HUD::ADD_BLIP_FOR_COORD(ENTITY::GET_ENTITY_COORDS(iLocal_234, true));
					HUD::SET_BLIP_COLOUR(iLocal_243, 3);
					HUD::SET_BLIP_PRIORITY(iLocal_243, 9);
					HUD::SET_BLIP_NAME_FROM_TEXT_FILE(iLocal_243, "S3_BLIPVEH");
				}
				Var22 = { ENTITY::GET_ENTITY_COORDS(iLocal_234, true) };
				Var23 = { HUD::GET_BLIP_COORDS(iLocal_243) };
				fVar24 = (1f + __LIB_0__::func_331((MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true), ENTITY::GET_ENTITY_COORDS(iLocal_234, true), true) / 4f), 0f, 17.5f));
				Var23.f_0 = (Var23.f_0 + ((((Var22.f_0 - Var23.f_0) / fVar24) * 15f) * SYSTEM::TIMESTEP()));
				Var23.f_1 = (Var23.f_1 + ((((Var22.f_1 - Var23.f_1) / fVar24) * 15f) * SYSTEM::TIMESTEP()));
				Var23.f_2 = (Var23.f_2 + ((((Var22.f_2 - Var23.f_2) / fVar24) * 15f) * SYSTEM::TIMESTEP()));
				HUD::SET_BLIP_COORDS(iLocal_243, Var23);
			}
			if (!HUD::DOES_BLIP_EXIST(iLocal_246))
			{
				HUD::CLEAR_PRINTS();
				func_475("S3_DRIVE", 7500, 1);
				__LIB_15__::func_936(&iLocal_246, Local_218, 1);
			}
			if ((!HUD::IS_MESSAGE_BEING_DISPLAYED() || MISC::GET_PROFILE_SETTING(203) == 0) && !__LIB_0__::func_75())
			{
				if (!func_897("CST3_Return"))
				{
					func_452("CST3_Return", 7, 1, 0, 0);
				}
				else if ((!func_897("CST3_RaceM") && !func_897("CST3_RaceF")) && !func_897("CST3_RaceT"))
				{
					if (__LIB_15__::func_944() == 0)
					{
						func_452("CST3_RaceM", 7, 1, 0, 0);
					}
					else if (__LIB_15__::func_944() == 1)
					{
						func_452("CST3_RaceF", 7, 1, 0, 0);
					}
					else if (__LIB_15__::func_944() == 2)
					{
						func_452("CST3_RaceT", 7, 1, 0, 0);
					}
				}
			}
			if (MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true), 492.9378f, -1317.7393f, (29.25194f - 1f), true) <= 50f)
			{
				func_869(joaat("felon"));
				func_869(joaat("S_M_Y_DWService_02"));
				func_869(__LIB_0__::func_493(45));
				func_869(__LIB_0__::func_493(29));
			}
			if (!func_897("svolCarStealOutro"))
			{
				if (MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true), 492.9378f, -1317.7393f, (29.25194f - 1f), true) <= 250f)
				{
					iLocal_251 = STREAMING::STREAMVOL_CREATE_FRUSTUM(498.09998f, -1334.3235f, 31.278627f, __LIB_0__::func_79(-0.022675f, 0.266968f, -0.017954f), 300f, 12, 127);
					if (iLocal_205 == 0)
					{
						iLocal_250 = INTERIOR::GET_INTERIOR_AT_COORDS_WITH_TYPE(481.1439f, -1314.4697f, 28.2017f, "v_chopshop");
						INTERIOR::PIN_INTERIOR_IN_MEMORY(iLocal_250);
					}
					func_894("svolCarStealOutro", 1);
				}
			}
			if (!func_897("car_1_ext_concat"))
			{
				if (MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true), 492.9378f, -1317.7393f, (29.25194f - 1f), true) < (100f * 2f))
				{
					CUTSCENE::REQUEST_CUTSCENE("car_1_ext_concat", 8);
					func_894("car_1_ext_concat", 1);
				}
			}
			else if (CUTSCENE::CAN_REQUEST_ASSETS_FOR_CUTSCENE_ENTITY())
			{
				__LIB_41__::func_49("Franklin", func_359(1), 0, 2);
				__LIB_41__::func_49("Michael", func_359(0), 0, 2);
				__LIB_41__::func_49("Trevor", func_359(2), 0, 2);
				CUTSCENE::SET_CUTSCENE_PED_PROP_VARIATION("MOLLY", 1, 0, 0, 0);
			}
			if (ENTITY::IS_ENTITY_AT_COORD(PLAYER::PLAYER_PED_ID(), 492.9378f, -1317.7393f, (29.25194f - 1f), 0f, 0f, 2f, true, true, 0))
			{
			}
			if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), 501.68546f, -1324.2195f, 27.310808f, 488.54285f, -1304.1708f, 32.355415f, 20f, false, true, 0))
			{
				func_37();
			}
			func_894("GetInCar", 0);
		}
		else
		{
			if (bLocal_209)
			{
				SYSTEM::SETTIMERA(0);
			}
			if (HUD::DOES_BLIP_EXIST(iLocal_246))
			{
				HUD::CLEAR_PRINTS();
				__LIB_13__::func_808(&iLocal_246);
			}
			if (!HUD::IS_MESSAGE_BEING_DISPLAYED() || MISC::GET_PROFILE_SETTING(203) == 0)
			{
				if (!func_897("GetInCar"))
				{
					if (!func_897("CMN_GENGETIN" /* GXT: ~s~Get in the ~b~car. */))
					{
						func_894("CMN_GENGETIN" /* GXT: ~s~Get in the ~b~car. */, 1);
					}
					else if (!func_897("CMN_GENGETBCK" /* GXT: ~s~Get back in the ~b~car. */))
					{
						func_475("CMN_GENGETBCK" /* GXT: ~s~Get back in the ~b~car. */, 7500, 1);
					}
					func_894("GetInCar", 1);
				}
			}
			if (__LIB_0__::func_650(PLAYER::PLAYER_PED_ID()) == 0)
			{
				__LIB_15__::func_946(&iLocal_242, &iLocal_233, 0);
				__LIB_13__::func_808(&iLocal_243);
				__LIB_13__::func_808(&iLocal_241);
			}
			else if (__LIB_0__::func_650(PLAYER::PLAYER_PED_ID()) == 2)
			{
				__LIB_15__::func_946(&iLocal_243, &iLocal_234, 0);
				__LIB_13__::func_808(&iLocal_242);
				__LIB_13__::func_808(&iLocal_241);
			}
			else if (__LIB_0__::func_650(PLAYER::PLAYER_PED_ID()) == 1)
			{
				__LIB_15__::func_946(&iLocal_241, &iLocal_232, 0);
				__LIB_13__::func_808(&iLocal_242);
				__LIB_13__::func_808(&iLocal_243);
			}
			if ((MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true), ENTITY::GET_ENTITY_COORDS(iLocal_232, true), true) >= 75f && MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true), ENTITY::GET_ENTITY_COORDS(iLocal_233, true), true) >= 75f) && MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true), ENTITY::GET_ENTITY_COORDS(iLocal_234, true), true) >= 75f)
			{
				iLocal_480 = 17;
				func_1();
			}
		}
	}
	if (func_36())
	{
		if (AUDIO::IS_AUDIO_SCENE_ACTIVE("CAR_1_GET_TO_GARAGE"))
		{
			AUDIO::STOP_AUDIO_SCENE("CAR_1_GET_TO_GARAGE");
		}
		if (ENTITY::DOES_ENTITY_EXIST(iLocal_232))
		{
			AUDIO::REMOVE_ENTITY_FROM_AUDIO_MIX_GROUP(iLocal_232, 0f);
		}
		if (ENTITY::DOES_ENTITY_EXIST(iLocal_233))
		{
			AUDIO::REMOVE_ENTITY_FROM_AUDIO_MIX_GROUP(iLocal_233, 0f);
		}
		if (ENTITY::DOES_ENTITY_EXIST(iLocal_234))
		{
			AUDIO::REMOVE_ENTITY_FROM_AUDIO_MIX_GROUP(iLocal_234, 0f);
		}
		if (VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(iLocal_232))
		{
			VEHICLE::STOP_PLAYBACK_RECORDED_VEHICLE(iLocal_232);
		}
		if (VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(iLocal_233))
		{
			VEHICLE::STOP_PLAYBACK_RECORDED_VEHICLE(iLocal_233);
		}
		if (VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(iLocal_234))
		{
			VEHICLE::STOP_PLAYBACK_RECORDED_VEHICLE(iLocal_234);
		}
		__LIB_9__::func_107(&iLocal_226);
		__LIB_9__::func_107(&iLocal_227);
		iLocal_479++;
	}
}

bool func_424(var uParam0, bool bParam1, int iParam2)//Position - 0x6CF18
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
	bool bVar11;
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
		func_446(uParam0, iVar0, 1, &iVar1, &iVar2, &uVar3, &uVar4);
		Global_23011.f_71[iVar0] = -1;
		Global_23011.f_76[iVar0] = -1;
		Global_23011.f_94[iVar0] = -1;
		Global_23011.f_99[iVar0] = -1;
		Global_23011.f_54[iVar0] = 0;
		Global_23011.f_59[iVar0] = 0;
		Global_23011.f_81[iVar0 /*3*/] = { 0f, 0f, 0f };
		if (__LIB_0__::func_39(14))
		{
			iVar10 = iVar0;
			if (iVar10 == 3)
			{
				Global_23011.f_70 = 1;
			}
			else if ((__LIB_13__::func_765(iVar10) && func_440(iVar10)) && iVar10 == __LIB_0__::func_482(Global_113386.f_2363.f_539.f_4323))
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
				else if ((iVar0 < 3 && iVar1 != 3) && (!__LIB_13__::func_94() || __LIB_0__::func_39(14)))
				{
					Global_23011.f_34[iVar0] = Global_97754[iVar0];
					Global_23011.f_44[iVar0] = 0;
					Global_23011.f_34[iVar0] = (Global_23011.f_34[iVar0] + Global_97766[iVar0]);
					Global_23011.f_39[iVar0] = 0;
					Global_23011.f_34[iVar0] = (Global_23011.f_34[iVar0] + Global_97762[iVar0]);
				}
			}
		}
		if (((Global_23011.f_69 == -1 || !Global_23011.f_14) && Global_23011.f_69 != iVar2) && !__LIB_0__::func_39(14))
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
		if ((((((Global_23011.f_124 && (!Global_23011.f_9 || Global_23011.f_10)) && ((!__LIB_0__::func_540(0) || Global_23011.f_12) || __LIB_0__::func_39(14))) && ((!__LIB_0__::func_540(3) || Global_23011.f_12) || __LIB_0__::func_39(14))) && ((!__LIB_0__::func_540(2) || Global_23011.f_12) || __LIB_0__::func_39(14))) && ((!__LIB_0__::func_540(9) || Global_23011.f_12) || __LIB_0__::func_39(14))) && ((!__LIB_0__::func_540(10) || Global_23011.f_12) || __LIB_0__::func_39(14)))
		{
			if (Global_23011.f_104 == 4)
			{
				if (__LIB_0__::func_39(14))
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
					Global_23011.f_11 = func_980(uParam0, 1);
				}
				else if (Global_23011.f_69 == 1)
				{
					Global_23011.f_11 = func_980(uParam0, 2);
				}
				else if (Global_23011.f_69 == 2)
				{
					Global_23011.f_11 = __LIB_16__::func_30(uParam0);
				}
				else if (Global_23011.f_69 == 3)
				{
					Global_23011.f_11 = func_980(uParam0, 0);
				}
			}
			else if (Global_23011.f_104 == 3 || (Global_23011.f_9 && Global_23011.f_10))
			{
				if ((((!Global_23011.f_11 && Global_23011.f_12) && Global_23011.f_70) && !NETWORK::NETWORK_IS_GAME_IN_PROGRESS()) && !(__LIB_1__::func_732(PLAYER::PLAYER_PED_ID()) && (PAD::IS_CONTROL_PRESSED(0 /*PLAYER_CONTROL*/, 25 /*INPUT_AIM*/) || PAD::IS_CONTROL_PRESSED(0 /*PLAYER_CONTROL*/, 68 /*INPUT_VEH_AIM*/))))
				{
					if (uParam0->f_34[0] == 3)
					{
						bVar11 = false;
					}
					else if (uParam0->f_34[1] == 3)
					{
						bVar11 = true;
					}
					else if (uParam0->f_34[2] == 3)
					{
						bVar11 = 2;
					}
					else
					{
						bVar11 = __LIB_15__::func_944();
					}
					switch (bVar11)
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
								if (bVar11 != 0)
								{
									if (func_980(uParam0, 0))
									{
										Global_23011.f_11 = 1;
									}
								}
							}
							else if (PAD::IS_CONTROL_JUST_RELEASED(0 /*PLAYER_CONTROL*/, 167 /*INPUT_SELECT_CHARACTER_FRANKLIN*/))
							{
								bVar15 = false;
								if (bVar11 != 1)
								{
									if (func_980(uParam0, 1))
									{
										Global_23011.f_11 = 1;
									}
								}
							}
							else if (PAD::IS_CONTROL_JUST_RELEASED(0 /*PLAYER_CONTROL*/, 168 /*INPUT_SELECT_CHARACTER_TREVOR*/))
							{
								bVar15 = false;
								if (bVar11 != 2)
								{
									if (func_980(uParam0, 2))
									{
										Global_23011.f_11 = 1;
									}
								}
							}
						}
					}
					if (bVar15)
					{
						if (func_980(uParam0, bVar12))
						{
							Global_23011.f_11 = 1;
						}
						else if (func_980(uParam0, bVar13))
						{
							Global_23011.f_11 = 1;
						}
						else if (func_980(uParam0, bVar14))
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

int func_440(int iParam0)//Position - 0x6DF2B
{
	if (Global_113386.f_9085_FLOW_STRUCT_isGameflowActive || Global_3)
	{
		if (!Global_78319 || (Global_78319 && iParam0 != __LIB_0__::func_482(__LIB_0__::func_563())))
		{
			if (!__LIB_16__::func_20(__LIB_0__::func_484(iParam0)))
			{
				return 0;
			}
		}
	}
	return 1;
}

void func_446(var uParam0, int iParam1, bool bParam2, var uParam3, var uParam4, var uParam5, var uParam6)//Position - 0x6E0C5
{
	int iVar0;
	iVar0 = 0;
	if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
	{
		if (iParam1 == 3)
		{
			iVar0 = 1;
		}
	}
	else if (__LIB_0__::func_563() == __LIB_0__::func_484(iParam1))
	{
		iVar0 = 1;
	}
	switch (iParam1)
	{
		case 0:
			*uParam4 = 3;
			*uParam6 = 0;
			if (!__LIB_13__::func_765(iParam1))
			{
				*uParam3 = 3;
			}
			else if (!func_440(iParam1))
			{
				*uParam3 = 2;
			}
			else
			{
				*uParam3 = 1;
			}
			if (uParam0->f_23 && *uParam3 == 1)
			{
				if ((((!NETWORK::NETWORK_IS_GAME_IN_PROGRESS() && PLAYER::GET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID()) > 0) || ((((__LIB_0__::func_540(0) || __LIB_0__::func_540(3)) || __LIB_0__::func_540(2)) || __LIB_0__::func_39(9)) || __LIB_0__::func_39(10))) || __LIB_0__::func_2(0)) || Global_43018)
				{
					*uParam3 = 2;
				}
			}
			break;
		case 1:
			*uParam4 = 0;
			*uParam6 = 0;
			if (!__LIB_13__::func_765(iParam1))
			{
				*uParam3 = 3;
			}
			else if (!func_440(iParam1))
			{
				*uParam3 = 2;
			}
			else
			{
				*uParam3 = 1;
			}
			if (uParam0->f_23 && *uParam3 == 1)
			{
				if ((((!NETWORK::NETWORK_IS_GAME_IN_PROGRESS() && PLAYER::GET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID()) > 0) || ((((__LIB_0__::func_540(0) || __LIB_0__::func_540(3)) || __LIB_0__::func_540(2)) || __LIB_0__::func_39(9)) || __LIB_0__::func_39(10))) || __LIB_0__::func_2(0)) || Global_43018)
				{
					*uParam3 = 2;
				}
			}
			break;
		case 2:
			*uParam4 = 1;
			*uParam6 = 0;
			if (!__LIB_13__::func_765(iParam1))
			{
				*uParam3 = 3;
			}
			else if (!func_440(iParam1))
			{
				*uParam3 = 2;
			}
			else
			{
				*uParam3 = 1;
			}
			if (uParam0->f_23 && *uParam3 == 1)
			{
				if ((((!NETWORK::NETWORK_IS_GAME_IN_PROGRESS() && PLAYER::GET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID()) > 0) || ((((__LIB_0__::func_540(0) || __LIB_0__::func_540(3)) || __LIB_0__::func_540(2)) || __LIB_0__::func_39(9)) || __LIB_0__::func_39(10))) || __LIB_0__::func_2(0)) || Global_43018)
				{
					*uParam3 = 2;
				}
			}
			break;
		case 3:
			*uParam4 = 2;
			*uParam6 = 0;
			if ((((((!uParam0->f_23 || Global_3) || (uParam0->f_23 && ((((__LIB_0__::func_540(0) || __LIB_0__::func_540(3)) || __LIB_0__::func_540(2)) || __LIB_0__::func_39(9)) || __LIB_0__::func_39(10)))) || (uParam0->f_23 && __LIB_0__::func_2(0))) || (uParam0->f_23 && Global_43018)) || !__LIB_13__::func_748()) || !__LIB_15__::func_970(0))
			{
				*uParam3 = 2;
			}
			else
			{
				*uParam3 = 1;
			}
			if (uParam0->f_23 && *uParam3 == 1)
			{
				if (((((__LIB_0__::func_540(0) || __LIB_0__::func_540(3)) || __LIB_0__::func_540(2)) || __LIB_0__::func_39(9)) || __LIB_0__::func_39(10)) || Global_43018)
				{
					*uParam3 = 2;
				}
			}
			break;
	}
	if (iParam1 != 3)
	{
		if (iVar0 || uParam0->f_34[iParam1] == 2)
		{
			*uParam3 = 1;
		}
		else if (((uParam0->f_34[iParam1] == 1 || uParam0->f_18[iParam1]) || ((!uParam0->f_23 && PED::IS_PED_INJURED((*uParam0)[iParam1])) && *uParam3 == 1)) || (uParam0->f_23 && BitTest(Global_97919.f_47, iParam1)))
		{
			if (*uParam3 == 1)
			{
				*uParam3 = 2;
			}
		}
		else if (uParam0->f_24[iParam1] != 0)
		{
			*uParam3 = 1;
		}
		else if (((uParam0->f_23 && !BitTest(Global_113386.f_9085_FLOW_STRUCT_isGameflowActive.f_2_MF_STRANDS_ARRAY[27 /*3*/], 1)) && !Global_3) && !__LIB_0__::func_2(0))
		{
			if ((((__LIB_0__::func_540(0) || __LIB_0__::func_540(3)) || __LIB_0__::func_540(2)) || __LIB_0__::func_39(9)) || __LIB_0__::func_39(10))
			{
			}
			else
			{
				*uParam3 = 1;
			}
		}
	}
	else
	{
		*uParam3 = 3;
	}
	if ((iVar0 && uParam0->f_34[iParam1] == 0) || uParam0->f_34[iParam1] == 3)
	{
		if (!__LIB_0__::func_39(14))
		{
			*uParam6 = 1;
		}
	}
	if (bParam2)
	{
		__LIB_13__::func_766(uParam0, iParam1, uParam5);
	}
}

void func_450(char* sParam0, bool bParam1, int iParam2)//Position - 0x6E875
{
	if (!HUD::IS_HELP_MESSAGE_BEING_DISPLAYED())
	{
		if (!func_897(sParam0))
		{
			__LIB_0__::func_151(sParam0, iParam2);
			func_894(sParam0, bParam1);
		}
	}
}

void func_452(char* sParam0, int iParam1, bool bParam2, int iParam3, int iParam4)//Position - 0x6E8B6
{
	if (!func_897(sParam0))
	{
		while (!__LIB_17__::func_243(&uLocal_312, sLocal_481, sParam0, iParam1, iParam3, iParam4, 0))
		{
			if (__LIB_0__::func_75())
			{
				__LIB_0__::func_429();
			}
			func_362(0);
		}
		func_894(sParam0, bParam2);
	}
}

void func_475(char* sParam0, int iParam1, bool bParam2)//Position - 0x6F13C
{
	if (!func_897(sParam0))
	{
		__LIB_0__::func_229(sParam0, iParam1, 1);
		func_894(sParam0, bParam2);
	}
}

void func_479(int iParam0, char* sParam1, int iParam2, int iParam3, int iParam4, int iParam5)//Position - 0x6F1AF
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
		func_480(iParam0, sParam1, iParam4, iParam5);
		if (MISC::ARE_STRINGS_EQUAL(sParam1, ""))
		{
		}
	}
	else if (iParam0 < Global_100478)
	{
	}
}

void func_480(int iParam0, var uParam1, int iParam2, int iParam3)//Position - 0x6F328
{
	func_481(&Global_106934, SCRIPT::GET_THIS_SCRIPT_NAME(), iParam0, uParam1, iParam3, iParam2);
}

void func_481(var uParam0, char* sParam1, var uParam2, var uParam3, int iParam4, int iParam5)//Position - 0x6F344
{
	int iVar0;
	int iVar1;
	*uParam0 = __LIB_15__::func_944();
	uParam0->f_1 = __LIB_0__::func_464();
	MISC::GET_CURR_WEATHER_STATE(&(uParam0->f_6), &(uParam0->f_7), &(uParam0->f_8));
	if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
	{
		__LIB_17__::func_657(&(uParam0->f_2884), 0);
		__LIB_16__::func_26(PLAYER::PLAYER_PED_ID());
		__LIB_16__::func_28(PLAYER::PLAYER_PED_ID(), 0);
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
			__LIB_16__::func_32(PLAYER::PLAYER_PED_ID(), &(uParam0->f_616[iVar1 /*65*/]), 1, -1);
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
		__LIB_31__::func_807(&(uParam0->f_2890), uParam0, iParam5, 1, 1, 0);
	}
	__LIB_0__::func_384(&(uParam0->f_2980));
	uParam3 = uParam3;
	uParam2 = uParam2;
}

void func_556()//Position - 0x7763C
{
	if (func_366())
	{
		func_350(PLAYER::PLAYER_ID(), 0, 0);
		PLAYER::SET_MAX_WANTED_LEVEL(0);
		PLAYER::SET_WANTED_LEVEL_MULTIPLIER(0f);
		MISC::ENABLE_DISPATCH_SERVICE(1, false);
		MISC::ENABLE_DISPATCH_SERVICE(2, false);
		MISC::ENABLE_DISPATCH_SERVICE(3, false);
		MISC::ENABLE_DISPATCH_SERVICE(4, false);
		MISC::ENABLE_DISPATCH_SERVICE(5, false);
		VEHICLE::SET_VEHICLE_SIREN(iLocal_235, true);
		VEHICLE::SET_VEHICLE_SIREN(iLocal_236, true);
		VEHICLE::SET_VEHICLE_DOORS_LOCKED(iLocal_233, 1);
		VEHICLE::SET_VEHICLE_DOORS_LOCKED(iLocal_234, 1);
		PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(uLocal_489[1], true);
		PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(uLocal_489[2], true);
		if (ENTITY::DOES_ENTITY_EXIST(iLocal_232))
		{
			AUDIO::REMOVE_ENTITY_FROM_AUDIO_MIX_GROUP(iLocal_232, 0f);
		}
		if (ENTITY::DOES_ENTITY_EXIST(iLocal_226))
		{
			AUDIO::REMOVE_ENTITY_FROM_AUDIO_MIX_GROUP(iLocal_233, 0f);
		}
		if (ENTITY::DOES_ENTITY_EXIST(iLocal_227))
		{
			AUDIO::REMOVE_ENTITY_FROM_AUDIO_MIX_GROUP(iLocal_234, 0f);
		}
		iLocal_198 = 0;
		CUTSCENE::REQUEST_CUTSCENE("Car_steal_3_mcs_3", 4);
		if (func_365())
		{
			func_24(9);
			__LIB_37__::func_920(PLAYER::PLAYER_PED_ID(), Vector(56.0562f, 4604.91f, -1921.7319f) + Vector(0f, -0.37f, 0.36f), 135.026f, 0);
			if (!bLocal_201)
			{
				func_361(-1917.8722f, 4608.782f, 56.0547f, 50f);
			}
			CAM::SET_GAMEPLAY_CAM_RELATIVE_HEADING(0f);
			CAM::SET_GAMEPLAY_CAM_RELATIVE_PITCH(-10f, 1f);
		}
	}
	else
	{
		if (CUTSCENE::CAN_REQUEST_ASSETS_FOR_CUTSCENE_ENTITY())
		{
			__LIB_41__::func_49("Franklin", func_359(1), 0, 2);
			__LIB_41__::func_49("Michael", func_359(0), 0, 2);
			__LIB_41__::func_49("Trevor", func_359(2), 0, 2);
			CUTSCENE::SET_CUTSCENE_PED_COMPONENT_VARIATION_FROM_PED("Racer_that_dies", iLocal_226, 0);
			CUTSCENE::SET_CUTSCENE_PED_COMPONENT_VARIATION_FROM_PED("Racer_that_runsaway", iLocal_227, 0);
		}
		switch (iLocal_180)
		{
			case 0:
				if (__LIB_0__::func_90())
				{
					VEHICLE::REQUEST_VEHICLE_ASSET(joaat("cheetah"), 2);
					CUTSCENE::REGISTER_ENTITY_FOR_CUTSCENE(func_359(1), "Franklin", 0, 0, 0);
					CUTSCENE::REGISTER_ENTITY_FOR_CUTSCENE(func_359(2), "Trevor", 0, 0, 0);
					CUTSCENE::REGISTER_ENTITY_FOR_CUTSCENE(iLocal_226, "Racer_that_dies", 0, 0, 0);
					CUTSCENE::REGISTER_ENTITY_FOR_CUTSCENE(iLocal_227, "Racer_that_runsaway", 0, 0, 0);
					CUTSCENE::REGISTER_ENTITY_FOR_CUTSCENE(iLocal_232, "Franklins_car", 0, 0, 0);
					CUTSCENE::REGISTER_ENTITY_FOR_CUTSCENE(iLocal_233, "Car_Racer_runsaway", 0, 0, 32);
					CUTSCENE::REGISTER_ENTITY_FOR_CUTSCENE(iLocal_234, "Car_Racer_dies", 0, 0, 0);
					CUTSCENE::REGISTER_ENTITY_FOR_CUTSCENE(iLocal_235, "Trevors_police_bike", 0, 0, 0);
					CUTSCENE::REGISTER_ENTITY_FOR_CUTSCENE(iLocal_236, "Michaels_Police_bike", 0, 0, 0);
					__LIB_0__::func_532(1, 1, 1, 0, 0, 0, 0);
					CUTSCENE::START_CUTSCENE(0);
					RECORDING::REPLAY_START_EVENT(4);
					func_362(0);
					PATHFIND::SET_ROADS_IN_AREA(Vector(56.0588f, 4597.9775f, -1928.3759f) - Vector(1000f, 1000f, 1000f), Vector(56.0588f, 4597.9775f, -1928.3759f) + Vector(1000f, 1000f, 1000f), false, true);
					MISC::CLEAR_AREA(-1928.3759f, 4597.9775f, 56.0588f, 2000f, true, false, false, false);
					if (VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(iLocal_235))
					{
						VEHICLE::STOP_PLAYBACK_RECORDED_VEHICLE(iLocal_235);
					}
					VEHICLE::SET_VEHICLE_ENGINE_ON(iLocal_232, false, true, false);
					VEHICLE::SET_VEHICLE_ENGINE_ON(iLocal_233, false, true, false);
					VEHICLE::SET_VEHICLE_ENGINE_ON(iLocal_234, false, true, false);
					VEHICLE::SET_VEHICLE_ENGINE_ON(iLocal_235, false, true, false);
					VEHICLE::SET_VEHICLE_ENGINE_ON(iLocal_236, false, true, false);
					VEHICLE::REQUEST_VEHICLE_ASSET(joaat("f620"), 3);
					if (CAM::IS_SCREEN_FADED_OUT())
					{
						CAM::DO_SCREEN_FADE_IN(500);
					}
					func_351();
				}
				break;
			case 1:
				VEHICLE::SET_FORCE_HD_VEHICLE(iLocal_233, true);
				VEHICLE::SET_FORCE_HD_VEHICLE(iLocal_234, true);
				if (CUTSCENE::CAN_SET_EXIT_STATE_FOR_REGISTERED_ENTITY("Racer_that_dies", 0))
				{
					__LIB_37__::func_920(iLocal_226, -1915.6257f, 4600.5103f, 56.0301f, 141.4507f, 0);
					TASK::TASK_SMART_FLEE_PED(iLocal_226, PLAYER::PLAYER_PED_ID(), 500f, -1, false, false);
					PED::FORCE_PED_MOTION_STATE(iLocal_226, joaat("MotionState_Run"), false, 0, false);
					PED::SET_PED_KEEP_TASK(iLocal_226, true);
				}
				if (CUTSCENE::CAN_SET_EXIT_STATE_FOR_REGISTERED_ENTITY("Racer_that_runsaway", 0))
				{
					__LIB_37__::func_920(iLocal_227, -1921.2577f, 4590.635f, 56.0301f, 141.4507f, 0);
					TASK::TASK_SMART_FLEE_PED(iLocal_227, PLAYER::PLAYER_PED_ID(), 500f, -1, false, false);
					PED::FORCE_PED_MOTION_STATE(iLocal_227, joaat("MotionState_Run"), false, 0, false);
					PED::SET_PED_KEEP_TASK(iLocal_227, true);
				}
				if (PED::GET_PED_PROP_INDEX(PLAYER::PLAYER_PED_ID(), 0) != -1 || PED::IS_PED_WEARING_HELMET(PLAYER::PLAYER_PED_ID()))
				{
					if (CUTSCENE::GET_CUTSCENE_TIME() > SYSTEM::ROUND((46.687057f * 1000f)))
					{
						PED::CLEAR_PED_PROP(PLAYER::PLAYER_PED_ID(), 0);
						PED::REMOVE_PED_HELMET(PLAYER::PLAYER_PED_ID(), true);
					}
				}
				if (CUTSCENE::CAN_SET_EXIT_STATE_FOR_REGISTERED_ENTITY("Michael", 0))
				{
					PED::CLEAR_PED_PROP(PLAYER::PLAYER_PED_ID(), 0);
					PED::REMOVE_PED_HELMET(PLAYER::PLAYER_PED_ID(), true);
					PED::SET_PED_INTO_VEHICLE(PLAYER::PLAYER_PED_ID(), iLocal_233, -1);
				}
				if (CUTSCENE::CAN_SET_EXIT_STATE_FOR_REGISTERED_ENTITY("Franklin", 0))
				{
					PED::SET_PED_INTO_VEHICLE(uLocal_489[1], iLocal_232, -1);
				}
				if (CUTSCENE::CAN_SET_EXIT_STATE_FOR_REGISTERED_ENTITY("Trevor", 0))
				{
					PED::CLEAR_PED_PROP(uLocal_489[2], 0);
					PED::REMOVE_PED_HELMET(uLocal_489[2], true);
					PED::SET_PED_INTO_VEHICLE(uLocal_489[2], iLocal_234, -1);
				}
				if (CUTSCENE::CAN_SET_EXIT_STATE_FOR_REGISTERED_ENTITY("Franklins_car", 0))
				{
					ENTITY::SET_ENTITY_INVINCIBLE(iLocal_232, false);
					VEHICLE::SET_VEHICLE_DOORS_SHUT(iLocal_232, true);
					func_894("WheelCompression[vehPlayer](Car_steal_3_mcs_3)", 1);
				}
				if (!func_897("WheelCompression[vehPlayer](Car_steal_3_mcs_3)"))
				{
					VEHICLE::SET_VEHICLE_USE_CUTSCENE_WHEEL_COMPRESSION(iLocal_232, true, true, true);
				}
				if (CUTSCENE::CAN_SET_EXIT_STATE_FOR_REGISTERED_ENTITY("Car_Racer_runsaway", 0))
				{
					ENTITY::SET_ENTITY_INVINCIBLE(iLocal_233, false);
					VEHICLE::SET_VEHICLE_DOORS_SHUT(iLocal_233, true);
					func_894("WheelCompression[vehRival1](Car_steal_3_mcs_3)", 1);
				}
				if (!func_897("WheelCompression[vehRival1](Car_steal_3_mcs_3)"))
				{
					VEHICLE::SET_VEHICLE_USE_CUTSCENE_WHEEL_COMPRESSION(iLocal_233, true, true, true);
				}
				if (CUTSCENE::CAN_SET_EXIT_STATE_FOR_REGISTERED_ENTITY("Car_Racer_dies", 0))
				{
					ENTITY::SET_ENTITY_INVINCIBLE(iLocal_234, false);
					VEHICLE::SET_VEHICLE_DOORS_SHUT(iLocal_234, true);
					func_894("WheelCompression[vehRival2](Car_steal_3_mcs_3)", 1);
				}
				if (!func_897("WheelCompression[vehRival2](Car_steal_3_mcs_3)"))
				{
					VEHICLE::SET_VEHICLE_USE_CUTSCENE_WHEEL_COMPRESSION(iLocal_234, true, true, true);
				}
				if (CUTSCENE::CAN_SET_EXIT_STATE_FOR_REGISTERED_ENTITY("Trevors_police_bike", 0))
				{
					__LIB_15__::func_889(iLocal_235, -1909.1063f, 4619.5996f, 56.044f, 135.7088f);
					func_894("WheelCompression[vehPolice1](Car_steal_3_mcs_3)", 1);
				}
				if (!func_897("WheelCompression[vehPolice1](Car_steal_3_mcs_3)"))
				{
					VEHICLE::SET_VEHICLE_USE_CUTSCENE_WHEEL_COMPRESSION(iLocal_235, true, true, true);
				}
				if (CUTSCENE::CAN_SET_EXIT_STATE_FOR_REGISTERED_ENTITY("Michaels_Police_bike", 0))
				{
					__LIB_15__::func_889(iLocal_236, -1907.5037f, 4618.121f, 56.0526f, 137.0636f);
					func_894("WheelCompression[vehPolice2](Car_steal_3_mcs_3)", 1);
				}
				if (!func_897("WheelCompression[vehPolice2](Car_steal_3_mcs_3)"))
				{
					VEHICLE::SET_VEHICLE_USE_CUTSCENE_WHEEL_COMPRESSION(iLocal_236, true, true, true);
				}
				if (CUTSCENE::HAS_CUTSCENE_FINISHED())
				{
					__LIB_0__::func_532(0, 1, 1, 0, 0, 0, 0);
					func_362(0);
					RECORDING::REPLAY_STOP_EVENT();
					RECORDING::REPLAY_RECORD_BACK_FOR_TIME(0f, 8f, 4);
					func_37();
				}
				break;
			}
	}
	if (func_36())
	{
		CUTSCENE::REMOVE_CUTSCENE();
		while (CUTSCENE::HAS_CUTSCENE_LOADED())
		{
			func_362(0);
		}
		MISC::CLEAR_AREA(-1907.4462f, 4621.807f, 56.0429f, 1000f, true, false, false, false);
		__LIB_13__::func_808(&iLocal_241);
		__LIB_13__::func_808(&iLocal_242);
		__LIB_13__::func_808(&iLocal_243);
		iLocal_479++;
	}
}

void func_558()//Position - 0x77C97
{
	int iVar0;
	struct<3> Var1;
	struct<3> Var2;
	if (func_366())
	{
		func_479(2, "stageChase", 0, 0, func_359(1), 1);
		PLAYER::SET_MAX_WANTED_LEVEL(0);
		PLAYER::SET_WANTED_LEVEL_MULTIPLIER(0f);
		MISC::ENABLE_DISPATCH_SERVICE(1, false);
		MISC::ENABLE_DISPATCH_SERVICE(2, false);
		MISC::ENABLE_DISPATCH_SERVICE(3, false);
		MISC::ENABLE_DISPATCH_SERVICE(4, false);
		MISC::ENABLE_DISPATCH_SERVICE(5, false);
		iLocal_198 = 1;
		if (__LIB_15__::func_944() != 0)
		{
			func_980(&uLocal_489, 0);
			func_956(&uLocal_489, 1, 0, 0);
			func_323(PLAYER::PLAYER_PED_ID(), 12, 4, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
			__LIB_16__::func_888(0);
			__LIB_15__::func_889(iLocal_235, Local_215, 147.9465f);
			__LIB_15__::func_889(iLocal_236, 2686.8792f, 5131.9077f, 43.8515f, 151.6033f);
			ENTITY::SET_ENTITY_ROTATION(iLocal_236, -0.3083f, -9.4703f, 151.234f, 2, true);
			if (!__LIB_2__::func_925(iLocal_236, 0, 0, 0, 0, 0, 1, 0, 1))
			{
				if (VEHICLE::GET_PED_IN_VEHICLE_SEAT(iLocal_236, -1, false) != PLAYER::PLAYER_PED_ID())
				{
					TASK::CLEAR_PED_TASKS_IMMEDIATELY(VEHICLE::GET_PED_IN_VEHICLE_SEAT(iLocal_236, -1, false));
				}
			}
			if (ENTITY::DOES_ENTITY_EXIST(uLocal_489[2]))
			{
				if (!PED::IS_PED_IN_VEHICLE(uLocal_489[2], iLocal_235, false))
				{
					PED::SET_PED_INTO_VEHICLE(uLocal_489[2], iLocal_235, -1);
				}
			}
			if (ENTITY::DOES_ENTITY_EXIST(uLocal_489[0]))
			{
				if (PED::IS_PED_IN_VEHICLE(uLocal_489[0], iLocal_236, false))
				{
					__LIB_9__::func_107(&(uLocal_489[0]));
				}
			}
			if (!PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), iLocal_236, false))
			{
				PED::SET_PED_INTO_VEHICLE(PLAYER::PLAYER_PED_ID(), iLocal_236, -1);
			}
			CAM::SET_GAMEPLAY_CAM_RELATIVE_HEADING(0f);
			CAM::SET_GAMEPLAY_CAM_RELATIVE_PITCH(-10f, 1f);
		}
		PED::SET_PED_RELATIONSHIP_GROUP_HASH(uLocal_489[2], iLocal_255);
		PED::SET_PED_RELATIONSHIP_GROUP_HASH(uLocal_489[1], iLocal_255);
		if (!PED::IS_PED_WEARING_HELMET(PLAYER::PLAYER_PED_ID()))
		{
			PED::SET_PED_HELMET_PROP_INDEX(PLAYER::PLAYER_PED_ID(), 4, true);
			PED::SET_PED_HELMET_TEXTURE_INDEX(PLAYER::PLAYER_PED_ID(), 0);
		}
		PED::GIVE_PED_HELMET(PLAYER::PLAYER_PED_ID(), true, 16384, -1);
		if (!PED::IS_PED_WEARING_HELMET(uLocal_489[2]))
		{
			PED::SET_PED_HELMET_PROP_INDEX(uLocal_489[2], 5, true);
			PED::SET_PED_HELMET_TEXTURE_INDEX(uLocal_489[2], 0);
		}
		PED::GIVE_PED_HELMET(uLocal_489[2], true, 16384, -1);
		VEHICLE::STOP_PLAYBACK_RECORDED_VEHICLE(iLocal_233);
		VEHICLE::STOP_PLAYBACK_RECORDED_VEHICLE(iLocal_234);
		VEHICLE::STOP_PLAYBACK_RECORDED_VEHICLE(iLocal_232);
		func_622(1, 1);
		fLocal_223 = 1f;
		func_615(sLocal_221, 500, 1, 1);
		func_614();
		iLocal_48 = 1;
		if (!VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(iLocal_235))
		{
			VEHICLE::START_PLAYBACK_RECORDED_VEHICLE(iLocal_235, 500, sLocal_221, true);
		}
		else
		{
			VEHICLE::SET_PLAYBACK_SPEED(iLocal_235, 1f);
		}
		VEHICLE::START_PLAYBACK_RECORDED_VEHICLE(iLocal_233, 400, sLocal_221, true);
		VEHICLE::START_PLAYBACK_RECORDED_VEHICLE(iLocal_234, 401, sLocal_221, true);
		VEHICLE::START_PLAYBACK_RECORDED_VEHICLE(iLocal_232, 402, sLocal_221, true);
		VEHICLE::SET_VEHICLE_CAN_BE_VISIBLY_DAMAGED(iLocal_232, true);
		VEHICLE::SET_VEHICLE_CAN_BE_VISIBLY_DAMAGED(iLocal_233, true);
		VEHICLE::SET_VEHICLE_CAN_BE_VISIBLY_DAMAGED(iLocal_234, true);
		ENTITY::SET_ENTITY_INVINCIBLE(iLocal_233, true);
		ENTITY::SET_ENTITY_INVINCIBLE(iLocal_234, true);
		ENTITY::SET_ENTITY_INVINCIBLE(iLocal_232, true);
		ENTITY::SET_ENTITY_COLLISION(iLocal_233, false, false);
		ENTITY::SET_ENTITY_COLLISION(iLocal_234, false, false);
		ENTITY::SET_ENTITY_COLLISION(iLocal_232, false, false);
		VEHICLE::SET_VEHICLE_IS_RACING(iLocal_232, true);
		VEHICLE::SET_VEHICLE_IS_RACING(iLocal_233, true);
		VEHICLE::SET_VEHICLE_IS_RACING(iLocal_234, true);
		VEHICLE::SET_VEHICLE_IS_RACING(iLocal_235, true);
		VEHICLE::SET_VEHICLE_IS_RACING(iLocal_236, true);
		fLocal_223 = 1f;
		if (ENTITY::DOES_ENTITY_EXIST(uLocal_489[1]))
		{
			if (!PED::IS_PED_IN_VEHICLE(uLocal_489[1], iLocal_232, false))
			{
				PED::SET_PED_INTO_VEHICLE(uLocal_489[1], iLocal_232, -1);
			}
		}
		VEHICLE::SET_VEHICLE_ENGINE_ON(iLocal_235, true, true, false);
		VEHICLE::SET_VEHICLE_ENGINE_ON(iLocal_236, true, true, false);
		PED::SET_PED_CAN_BE_TARGETTED(uLocal_489[2], false);
		PED::SET_PED_CAN_BE_KNOCKED_OFF_VEHICLE(PLAYER::PLAYER_PED_ID(), 3);
		if (!AUDIO::IS_AUDIO_SCENE_ACTIVE("CAR_1_BIKE_CHASE_MAIN"))
		{
			AUDIO::START_AUDIO_SCENE("CAR_1_BIKE_CHASE_MAIN");
		}
		AUDIO::ADD_ENTITY_TO_AUDIO_MIX_GROUP(iLocal_235, "CAR_1_TREVORS_BIKE", 0f);
		iLocal_198 = 1;
		func_475("S3_COP", 6000, 1);
		iLocal_3043 = MISC::GET_GAME_TIMER() + 1000;
		PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 71 /*INPUT_VEH_ACCELERATE*/, true);
		PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 72 /*INPUT_VEH_BRAKE*/, true);
		PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 76 /*INPUT_VEH_HANDBRAKE*/, true);
		PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 73 /*INPUT_VEH_DUCK*/, true);
		PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 59 /*INPUT_VEH_MOVE_LR*/, true);
		func_24(6);
		if (func_365())
		{
			VEHICLE::PAUSE_PLAYBACK_RECORDED_VEHICLE(iLocal_235);
			VEHICLE::PAUSE_PLAYBACK_RECORDED_VEHICLE(iLocal_233);
			VEHICLE::PAUSE_PLAYBACK_RECORDED_VEHICLE(iLocal_234);
			VEHICLE::PAUSE_PLAYBACK_RECORDED_VEHICLE(iLocal_232);
			if (!bLocal_201)
			{
				func_361(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true), 1101004800);
			}
			while (!PED::HAVE_ALL_STREAMING_REQUESTS_COMPLETED(func_359(0)) || !PED::HAVE_ALL_STREAMING_REQUESTS_COMPLETED(func_359(2)))
			{
				func_362(0);
			}
			iVar0 = MISC::GET_GAME_TIMER() + 5000;
			while (!AUDIO::LOAD_STREAM("CAR_STEAL_1_PASSBY", "CAR_STEAL_1_SOUNDSET") && MISC::GET_GAME_TIMER() < iVar0)
			{
				func_362(0);
			}
			__LIB_15__::func_894(&iLocal_3054);
			iLocal_3054 = OBJECT::CREATE_OBJECT_NO_OFFSET(joaat("prop_donut_02b"), 2683.8784f, 5130.149f, 43.85238f, false, false, false);
			if (ENTITY::DOES_ENTITY_EXIST(iLocal_3054))
			{
				OBJECT::PLACE_OBJECT_ON_GROUND_PROPERLY(iLocal_3054);
			}
			__LIB_15__::func_894(&iLocal_3058);
			iLocal_3058 = OBJECT::CREATE_OBJECT_NO_OFFSET(joaat("prop_donut_02b"), 2683.2903f, 5128.5923f, 43.85796f, false, false, false);
			if (ENTITY::DOES_ENTITY_EXIST(iLocal_3058))
			{
				OBJECT::PLACE_OBJECT_ON_GROUND_PROPERLY(iLocal_3058);
			}
			func_24(8);
			__LIB_15__::func_889(iLocal_236, 2686.8792f, 5131.9077f, 43.8515f, 151.6033f);
			ENTITY::SET_ENTITY_ROTATION(iLocal_236, -0.3083f, -9.4703f, 151.234f, 2, true);
			if (!PED::IS_PED_WEARING_HELMET(PLAYER::PLAYER_PED_ID()))
			{
				PED::SET_PED_HELMET_PROP_INDEX(PLAYER::PLAYER_PED_ID(), 5, true);
				PED::SET_PED_HELMET_TEXTURE_INDEX(PLAYER::PLAYER_PED_ID(), 0);
			}
			PED::GIVE_PED_HELMET(PLAYER::PLAYER_PED_ID(), true, 16384, -1);
			if (!PED::IS_PED_WEARING_HELMET(uLocal_489[2]))
			{
				PED::SET_PED_HELMET_PROP_INDEX(uLocal_489[2], 5, true);
				PED::SET_PED_HELMET_TEXTURE_INDEX(uLocal_489[2], 0);
			}
			PED::GIVE_PED_HELMET(uLocal_489[2], true, 16384, -1);
			func_362(500);
			VEHICLE::UNPAUSE_PLAYBACK_RECORDED_VEHICLE(iLocal_235);
			VEHICLE::UNPAUSE_PLAYBACK_RECORDED_VEHICLE(iLocal_233);
			VEHICLE::UNPAUSE_PLAYBACK_RECORDED_VEHICLE(iLocal_234);
			VEHICLE::UNPAUSE_PLAYBACK_RECORDED_VEHICLE(iLocal_232);
			if (CAM::GET_CAM_VIEW_MODE_FOR_CONTEXT(1) != 4 || CAM::GET_CAM_VIEW_MODE_FOR_CONTEXT(2) != 4)
			{
				func_613(&Local_1790, &iLocal_236);
				__LIB_16__::func_29(&Local_1790);
				CAM::SET_CAM_ACTIVE(Local_1790.f_1, true);
				CAM::RENDER_SCRIPT_CAMS(true, false, 3000, true, false, 0);
			}
			iLocal_3043 = MISC::GET_GAME_TIMER() + 1000;
			CAM::SET_GAMEPLAY_CAM_RELATIVE_HEADING(0f);
			CAM::SET_GAMEPLAY_CAM_RELATIVE_PITCH(-10f, 1f);
			if (CAM::IS_SCREEN_FADED_OUT())
			{
				CAM::DO_SCREEN_FADE_IN(500);
			}
		}
	}
	else
	{
		if (MISC::GET_GAME_TIMER() < iLocal_3043)
		{
			PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 71 /*INPUT_VEH_ACCELERATE*/, true);
			PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 72 /*INPUT_VEH_BRAKE*/, true);
			PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 76 /*INPUT_VEH_HANDBRAKE*/, true);
			PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 73 /*INPUT_VEH_DUCK*/, true);
			PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 59 /*INPUT_VEH_MOVE_LR*/, true);
		}
		__LIB_17__::func_71(&uLocal_282, iLocal_233, "S3_HELP2", 0, 1, 1, 1);
		RECORDING::REPLAY_DISABLE_CAMERA_MOVEMENT_THIS_FRAME();
		if (CAM::IS_GAMEPLAY_HINT_ACTIVE())
		{
			if (!AUDIO::IS_AUDIO_SCENE_ACTIVE("CAR_1_RACE_CARS_FOCUS_CAM"))
			{
				AUDIO::START_AUDIO_SCENE("CAR_1_RACE_CARS_FOCUS_CAM");
			}
		}
		else if (AUDIO::IS_AUDIO_SCENE_ACTIVE("CAR_1_RACE_CARS_FOCUS_CAM"))
		{
			AUDIO::STOP_AUDIO_SCENE("CAR_1_RACE_CARS_FOCUS_CAM");
		}
		if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), 2370.7473f, 5771.0547f, 45.03312f, 2119.4556f, 6025.142f, 60.062992f, 50f, false, true, 0))
		{
			if (!AUDIO::IS_AUDIO_SCENE_ACTIVE("CAR_1_BIKE_ENTER_TUNNEL"))
			{
				AUDIO::START_AUDIO_SCENE("CAR_1_BIKE_ENTER_TUNNEL");
			}
		}
		else if (AUDIO::IS_AUDIO_SCENE_ACTIVE("CAR_1_BIKE_ENTER_TUNNEL"))
		{
			AUDIO::STOP_AUDIO_SCENE("CAR_1_BIKE_ENTER_TUNNEL");
		}
		switch (iLocal_180)
		{
			case 0:
				if (AUDIO::LOAD_STREAM("CAR_STEAL_1_PASSBY", "CAR_STEAL_1_SOUNDSET"))
				{
					AUDIO::PLAY_STREAM_FRONTEND();
				}
				MISC::CLEAR_AREA_OF_VEHICLES(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true), 500f, false, false, false, false, false, false, 0);
				func_351();
				break;
			case 1:
				if (SYSTEM::TIMERA() >= 1000)
				{
					func_350(PLAYER::PLAYER_ID(), 1, 0);
					func_351();
				}
				break;
			case 2:
				if (SYSTEM::TIMERA() >= 1000)
				{
					VEHICLE::SET_VEHICLE_SIREN(iLocal_235, true);
					func_351();
				}
				break;
			case 3:
				if (SYSTEM::TIMERA() >= 2000)
				{
					VEHICLE::SET_VEHICLE_SIREN(iLocal_236, true);
					func_351();
				}
				break;
		}
		if (PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), iLocal_236, false) && PED::IS_PED_IN_VEHICLE(func_359(2), iLocal_235, false))
		{
			if (VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(iLocal_235))
			{
				if (VEHICLE::GET_TIME_POSITION_IN_RECORDING(iLocal_235) > 8000f)
				{
					if (!__LIB_0__::func_75() && (!HUD::IS_MESSAGE_BEING_DISPLAYED() || MISC::GET_PROFILE_SETTING(203) == 0))
					{
						func_452("CST3_Chase", 7, 1, 0, 0);
					}
				}
			}
		}
		if (!func_897("CST3_Tunnel"))
		{
			if (VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(iLocal_235))
			{
				if (VEHICLE::GET_TIME_POSITION_IN_RECORDING(iLocal_235) > 37000f)
				{
					if ((!HUD::IS_MESSAGE_BEING_DISPLAYED() || MISC::GET_PROFILE_SETTING(203) == 0) && !__LIB_0__::func_75())
					{
						RECORDING::REPLAY_RECORD_BACK_FOR_TIME(4f, 8f, 4);
						func_452("CST3_Tunnel", 7, 1, 0, 0);
					}
				}
			}
		}
		if (VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(iLocal_235))
		{
			if (VEHICLE::GET_TIME_POSITION_IN_RECORDING(iLocal_235) > 15000f)
			{
				if ((!HUD::IS_MESSAGE_BEING_DISPLAYED() || MISC::GET_PROFILE_SETTING(203) == 0) && !__LIB_0__::func_75())
				{
					if (!func_897("CST3_Lag"))
					{
						if (MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true), ENTITY::GET_ENTITY_COORDS(uLocal_489[2], true), true) > 120f)
						{
							func_452("CST3_Lag", 7, 1, 0, 0);
							iLocal_183[0] = (MISC::GET_GAME_TIMER() + MISC::GET_RANDOM_INT_IN_RANGE(5000, 7500));
						}
					}
					else if (!func_897("CST3_Catchup"))
					{
						func_452("CST3_Catchup", 7, 1, 0, 0);
						iLocal_183[0] = (MISC::GET_GAME_TIMER() + MISC::GET_RANDOM_INT_IN_RANGE(5000, 7500));
					}
				}
			}
		}
		if (VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(iLocal_235))
		{
			if (VEHICLE::GET_TIME_POSITION_IN_RECORDING(iLocal_235) > 40000f && VEHICLE::GET_TIME_POSITION_IN_RECORDING(iLocal_235) < 110000f)
			{
				if (MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true), ENTITY::GET_ENTITY_COORDS(uLocal_489[2], true), true) < 30f)
				{
					if ((!HUD::IS_MESSAGE_BEING_DISPLAYED() || MISC::GET_PROFILE_SETTING(203) == 0) && !__LIB_0__::func_75())
					{
						if (MISC::GET_GAME_TIMER() > iLocal_183[0])
						{
							if (iLocal_182[0] == -1)
							{
								iLocal_182[0] = 5;
							}
							else if (iLocal_182[1] == -1)
							{
								iLocal_182[1] = 5;
							}
							if (iLocal_182[iLocal_181] > 0)
							{
								if (iLocal_181 == 0)
								{
									func_452("CST3_Stay", 6, 0, 0, 0);
								}
								else if (iLocal_181 == 1)
								{
									func_452("CST3_LetsGo", 6, 0, 0, 0);
								}
								iLocal_183[0] = (MISC::GET_GAME_TIMER() + MISC::GET_RANDOM_INT_IN_RANGE(7500, 10000));
								iLocal_182[iLocal_181] = (iLocal_182[iLocal_181] - 1);
							}
							if (iLocal_181 < 1)
							{
								iLocal_181++;
							}
							else
							{
								iLocal_181 = 0;
							}
						}
					}
				}
			}
		}
		if (VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(iLocal_235))
		{
			if (VEHICLE::GET_TIME_POSITION_IN_RECORDING(iLocal_235) > 78000f)
			{
				if ((!HUD::IS_MESSAGE_BEING_DISPLAYED() || MISC::GET_PROFILE_SETTING(203) == 0) && !__LIB_0__::func_75())
				{
					if (!func_897("CST3_Bay"))
					{
						if (MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true), ENTITY::GET_ENTITY_COORDS(uLocal_489[2], true), true) < 30f)
						{
							func_452("CST3_Bay", 7, 1, 0, 0);
							RECORDING::REPLAY_RECORD_BACK_FOR_TIME(4f, 8f, 4);
							iLocal_183[0] = (MISC::GET_GAME_TIMER() + MISC::GET_RANDOM_INT_IN_RANGE(5000, 7500));
						}
					}
				}
			}
		}
		if (VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(iLocal_235))
		{
			if (VEHICLE::GET_TIME_POSITION_IN_RECORDING(iLocal_235) > 93000f)
			{
				if ((!HUD::IS_MESSAGE_BEING_DISPLAYED() || MISC::GET_PROFILE_SETTING(203) == 0) && !__LIB_0__::func_75())
				{
					if (!func_897("CST3_FRAN"))
					{
						if (MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true), ENTITY::GET_ENTITY_COORDS(uLocal_489[2], true), true) < 30f)
						{
							func_452("CST3_FRAN", 7, 1, 0, 0);
							iLocal_183[0] = (MISC::GET_GAME_TIMER() + MISC::GET_RANDOM_INT_IN_RANGE(5000, 7500));
						}
					}
				}
			}
		}
		if (VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(iLocal_235))
		{
			if (VEHICLE::GET_TIME_POSITION_IN_RECORDING(iLocal_235) > 14000f && VEHICLE::GET_TIME_POSITION_IN_RECORDING(iLocal_235) < 30000f)
			{
				if (MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true), ENTITY::GET_ENTITY_COORDS(uLocal_489[2], true), true) < 30f)
				{
					if (!func_897("CST3_Split"))
					{
						if ((!HUD::IS_MESSAGE_BEING_DISPLAYED() || MISC::GET_PROFILE_SETTING(203) == 0) && !__LIB_0__::func_75())
						{
							TASK::CLEAR_PED_TASKS(uLocal_489[2]);
							TASK::CLEAR_PED_SECONDARY_TASK(uLocal_489[2]);
							TASK::TASK_PLAY_ANIM(uLocal_489[2], sLocal_224, "point_left", 8f, -8f, -1, 131104, 0f, false, 2, false);
							PED::FORCE_PED_AI_AND_ANIMATION_UPDATE(uLocal_489[2], false, false);
							func_452("CST3_Split", 7, 1, 0, 0);
							RECORDING::REPLAY_RECORD_BACK_FOR_TIME(4f, 8f, 4);
							SYSTEM::SETTIMERB(0);
						}
					}
				}
				if (ENTITY::IS_ENTITY_PLAYING_ANIM(uLocal_489[2], sLocal_224, "point_left", 3))
				{
					if (SYSTEM::TIMERB() < 1500)
					{
						if (ENTITY::GET_ENTITY_ANIM_CURRENT_TIME(uLocal_489[2], sLocal_224, "point_left") > 0.55f)
						{
							ENTITY::SET_ENTITY_ANIM_CURRENT_TIME(uLocal_489[2], sLocal_224, "point_left", 0.55f);
						}
					}
				}
			}
		}
		if (VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(iLocal_235))
		{
			if (VEHICLE::GET_TIME_POSITION_IN_RECORDING(iLocal_235) > 106000f && VEHICLE::GET_TIME_POSITION_IN_RECORDING(iLocal_235) < 109000f)
			{
				if (!AUDIO::IS_AUDIO_SCENE_ACTIVE("CAR_1_BIKE_PASS_THE_LOST"))
				{
					AUDIO::START_AUDIO_SCENE("CAR_1_BIKE_PASS_THE_LOST");
				}
			}
			if (VEHICLE::GET_TIME_POSITION_IN_RECORDING(iLocal_235) > 106000f && VEHICLE::GET_TIME_POSITION_IN_RECORDING(iLocal_235) < 108000f)
			{
				if (ENTITY::DOES_ENTITY_EXIST(iLocal_162[3]) && !ENTITY::IS_ENTITY_DEAD(iLocal_162[3], false))
				{
					AUDIO::ADD_ENTITY_TO_AUDIO_MIX_GROUP(iLocal_162[3], "CAR_1_THE_LOST", 0f);
				}
				if (ENTITY::DOES_ENTITY_EXIST(iLocal_162[4]) && !ENTITY::IS_ENTITY_DEAD(iLocal_162[4], false))
				{
					AUDIO::ADD_ENTITY_TO_AUDIO_MIX_GROUP(iLocal_162[4], "CAR_1_THE_LOST", 0f);
				}
				if (ENTITY::DOES_ENTITY_EXIST(iLocal_162[5]) && !ENTITY::IS_ENTITY_DEAD(iLocal_162[5], false))
				{
					AUDIO::ADD_ENTITY_TO_AUDIO_MIX_GROUP(iLocal_162[5], "CAR_1_THE_LOST", 0f);
				}
			}
			if (!func_897("CST3_Epic"))
			{
				if (VEHICLE::GET_TIME_POSITION_IN_RECORDING(iLocal_235) > 90000f)
				{
					if ((!HUD::IS_MESSAGE_BEING_DISPLAYED() || MISC::GET_PROFILE_SETTING(203) == 0) && !__LIB_0__::func_75())
					{
						func_452("CST3_Epic", 7, 1, 0, 0);
						RECORDING::REPLAY_RECORD_BACK_FOR_TIME(4f, 8f, 4);
						iLocal_183[0] = (MISC::GET_GAME_TIMER() + MISC::GET_RANDOM_INT_IN_RANGE(5000, 7500));
					}
				}
			}
			if (VEHICLE::GET_TIME_POSITION_IN_RECORDING(iLocal_235) > 105000f)
			{
				if (!func_897("CST3_Bikers"))
				{
					if ((!HUD::IS_MESSAGE_BEING_DISPLAYED() || MISC::GET_PROFILE_SETTING(203) == 0) && !__LIB_0__::func_75())
					{
						func_452("CST3_Bikers", 7, 1, 0, 0);
						RECORDING::REPLAY_RECORD_BACK_FOR_TIME(4f, 8f, 4);
						iLocal_183[0] = (MISC::GET_GAME_TIMER() + MISC::GET_RANDOM_INT_IN_RANGE(5000, 7500));
					}
				}
				if (AUDIO::IS_AUDIO_SCENE_ACTIVE("CAR_1_BIKE_PASS_THE_LOST"))
				{
					if (((((ENTITY::DOES_ENTITY_EXIST(iLocal_162[3]) && !ENTITY::IS_ENTITY_DEAD(iLocal_162[3], false)) && MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(iLocal_162[3], false), ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true), true) > 50f) || !ENTITY::DOES_ENTITY_EXIST(iLocal_162[3])) && (((ENTITY::DOES_ENTITY_EXIST(iLocal_162[4]) && !ENTITY::IS_ENTITY_DEAD(iLocal_162[4], false)) && MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(iLocal_162[4], false), ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true), true) > 50f) || !ENTITY::DOES_ENTITY_EXIST(iLocal_162[4]))) && (((ENTITY::DOES_ENTITY_EXIST(iLocal_162[5]) && !ENTITY::IS_ENTITY_DEAD(iLocal_162[5], false)) && MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(iLocal_162[5], false), ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true), true) > 50f) || !ENTITY::DOES_ENTITY_EXIST(iLocal_162[5])))
					{
						AUDIO::STOP_AUDIO_SCENE("CAR_1_BIKE_PASS_THE_LOST");
						if (ENTITY::DOES_ENTITY_EXIST(iLocal_162[3]))
						{
							AUDIO::REMOVE_ENTITY_FROM_AUDIO_MIX_GROUP(iLocal_162[3], 0f);
						}
						if (ENTITY::DOES_ENTITY_EXIST(iLocal_162[4]))
						{
							AUDIO::REMOVE_ENTITY_FROM_AUDIO_MIX_GROUP(iLocal_162[4], 0f);
						}
						if (ENTITY::DOES_ENTITY_EXIST(iLocal_162[5]))
						{
							AUDIO::REMOVE_ENTITY_FROM_AUDIO_MIX_GROUP(iLocal_162[5], 0f);
						}
					}
				}
			}
		}
		if (VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(iLocal_235))
		{
			if (VEHICLE::GET_TIME_POSITION_IN_RECORDING(iLocal_235) > 120000f)
			{
				if ((!HUD::IS_MESSAGE_BEING_DISPLAYED() || MISC::GET_PROFILE_SETTING(203) == 0) && !__LIB_0__::func_75())
				{
					if (!func_897("CST3_Caught"))
					{
						if (MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true), ENTITY::GET_ENTITY_COORDS(uLocal_489[2], true), true) < 30f)
						{
							func_452("CST3_Caught", 7, 1, 0, 0);
						}
					}
					else if (!func_897("CST3_MGood"))
					{
						if (MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true), ENTITY::GET_ENTITY_COORDS(uLocal_489[2], true), true) < 30f)
						{
							func_452("CST3_MGood", 7, 1, 0, 0);
						}
					}
				}
			}
		}
		if (VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(iLocal_235))
		{
			if (VEHICLE::GET_TIME_POSITION_IN_RECORDING(iLocal_235) > 110000f && VEHICLE::GET_TIME_POSITION_IN_RECORDING(iLocal_235) < 133000f)
			{
				if (MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true), ENTITY::GET_ENTITY_COORDS(uLocal_489[2], true), true) < 30f)
				{
					if ((!func_897("CST3_PullT") && !func_897("CST3_Pull")) && !func_897("CST3_PullLas"))
					{
						if ((!HUD::IS_MESSAGE_BEING_DISPLAYED() || MISC::GET_PROFILE_SETTING(203) == 0) && !__LIB_0__::func_75())
						{
							if (MISC::GET_GAME_TIMER() > iLocal_183[0])
							{
								iLocal_181 = 2;
								if (iLocal_182[iLocal_181] == -1)
								{
									iLocal_182[iLocal_181] = 7;
								}
								else if (iLocal_182[iLocal_181] > 0)
								{
									func_452("CST3_PullT", 6, 0, 0, 0);
									RECORDING::REPLAY_RECORD_BACK_FOR_TIME(4f, 8f, 4);
									iLocal_183[0] = (MISC::GET_GAME_TIMER() + MISC::GET_RANDOM_INT_IN_RANGE(5000, 7500));
									iLocal_182[iLocal_181] = (iLocal_182[iLocal_181] - 1);
								}
							}
						}
					}
				}
			}
		}
		if (VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(iLocal_235))
		{
			if ((!HUD::IS_MESSAGE_BEING_DISPLAYED() || MISC::GET_PROFILE_SETTING(203) == 0) && !__LIB_0__::func_75())
			{
				if (VEHICLE::GET_TIME_POSITION_IN_RECORDING(iLocal_235) > 120000f && VEHICLE::GET_TIME_POSITION_IN_RECORDING(iLocal_235) < 143000f)
				{
					if (MISC::GET_GAME_TIMER() > iLocal_183[1])
					{
						if (!func_897("CST3_Pull_1"))
						{
							func_568("CST3_Pull", "CST3_Pull_1", 7, 1);
						}
						else if (!func_897("CST3_Pull_2"))
						{
							func_568("CST3_Pull", "CST3_Pull_2", 7, 1);
						}
						else if (!func_897("CST3_Pull_3"))
						{
							func_568("CST3_Pull", "CST3_Pull_3", 7, 1);
						}
						else if (!func_897("CST3_Pull_4"))
						{
							func_568("CST3_Pull", "CST3_Pull_4", 7, 1);
						}
						else if (!func_897("CST3_Pull_5"))
						{
							func_568("CST3_Pull", "CST3_Pull_5", 7, 1);
						}
						iLocal_183[1] = (MISC::GET_GAME_TIMER() + MISC::GET_RANDOM_INT_IN_RANGE(7500, 10000));
					}
				}
			}
		}
		if (VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(iLocal_235))
		{
			if (VEHICLE::GET_TIME_POSITION_IN_RECORDING(iLocal_235) > 133000f)
			{
				if (MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true), ENTITY::GET_ENTITY_COORDS(uLocal_489[2], true), true) < 30f)
				{
					if (!func_897("PullOverTwo"))
					{
						TASK::CLEAR_PED_TASKS(uLocal_489[2]);
						TASK::CLEAR_PED_SECONDARY_TASK(uLocal_489[2]);
						TASK::TASK_PLAY_ANIM(uLocal_489[2], sLocal_224, "point_right_micheal", 8f, -8f, -1, 131104, 0f, false, 2, false);
						TASK::TASK_LOOK_AT_ENTITY(uLocal_489[2], iLocal_232, 5000, 0, 2);
						PED::FORCE_PED_AI_AND_ANIMATION_UPDATE(uLocal_489[2], false, false);
						SYSTEM::SETTIMERB(2000);
						if ((!HUD::IS_MESSAGE_BEING_DISPLAYED() || MISC::GET_PROFILE_SETTING(203) == 0) && !__LIB_0__::func_75())
						{
							if (!func_897("CST3_Pull_1"))
							{
								func_568("CST3_Pull", "CST3_Pull_1", 7, 1);
							}
							else if (!func_897("CST3_Pull_2"))
							{
								func_568("CST3_Pull", "CST3_Pull_2", 7, 1);
							}
							else if (!func_897("CST3_Pull_3"))
							{
								func_568("CST3_Pull", "CST3_Pull_3", 7, 1);
							}
							else if (!func_897("CST3_Pull_4"))
							{
								func_568("CST3_Pull", "CST3_Pull_4", 7, 1);
							}
							else if (!func_897("CST3_Pull_5"))
							{
								func_568("CST3_Pull", "CST3_Pull_5", 7, 1);
							}
						}
						RECORDING::REPLAY_RECORD_BACK_FOR_TIME(4f, 8f, 4);
						func_894("PullOverTwo", 1);
					}
					if (VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(iLocal_232))
					{
						if (VEHICLE::GET_TIME_POSITION_IN_RECORDING(iLocal_232) > 135000f)
						{
							VEHICLE::SET_VEHICLE_INDICATOR_LIGHTS(iLocal_232, 0, true);
						}
					}
					if (VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(iLocal_233))
					{
						if (VEHICLE::GET_TIME_POSITION_IN_RECORDING(iLocal_233) > 145000f)
						{
							VEHICLE::SET_VEHICLE_INDICATOR_LIGHTS(iLocal_233, 0, true);
						}
					}
					if (VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(iLocal_234))
					{
						if (VEHICLE::GET_TIME_POSITION_IN_RECORDING(iLocal_234) > 146000f)
						{
							VEHICLE::SET_VEHICLE_INDICATOR_LIGHTS(iLocal_234, 0, true);
						}
					}
					if (VEHICLE::GET_TIME_POSITION_IN_RECORDING(iLocal_235) > 143000f)
					{
						if (!func_897("PullOverTwo"))
						{
							TASK::CLEAR_PED_TASKS(uLocal_489[2]);
							TASK::CLEAR_PED_SECONDARY_TASK(uLocal_489[2]);
							TASK::TASK_PLAY_ANIM(uLocal_489[2], sLocal_224, "point_right_micheal", 8f, -8f, -1, 131104, 0f, false, 2, false);
							TASK::TASK_LOOK_AT_ENTITY(uLocal_489[2], iLocal_232, 5000, 0, 2);
							PED::FORCE_PED_AI_AND_ANIMATION_UPDATE(uLocal_489[2], false, false);
							SYSTEM::SETTIMERB(0);
							func_894("PullOverTwo", 1);
						}
						if ((!HUD::IS_MESSAGE_BEING_DISPLAYED() || MISC::GET_PROFILE_SETTING(203) == 0) && !__LIB_0__::func_75())
						{
							func_452("CST3_PullLas", 7, 1, 0, 0);
						}
					}
				}
				if (ENTITY::IS_ENTITY_PLAYING_ANIM(uLocal_489[2], sLocal_224, "point_right_micheal", 3))
				{
					if (SYSTEM::TIMERB() < 4000)
					{
						if (ENTITY::GET_ENTITY_ANIM_CURRENT_TIME(uLocal_489[2], sLocal_224, "point_right_micheal") > 0.55f)
						{
							ENTITY::SET_ENTITY_ANIM_CURRENT_TIME(uLocal_489[2], sLocal_224, "point_right_micheal", 0.55f);
						}
					}
				}
			}
		}
		if ((!HUD::IS_MESSAGE_BEING_DISPLAYED() || MISC::GET_PROFILE_SETTING(203) == 0) && !__LIB_0__::func_75())
		{
			if (func_897("CST3_PullLas"))
			{
				if (!func_897("CST3_Over"))
				{
					func_452("CST3_Over", 7, 1, 0, 0);
				}
				else if (!func_897("CST3_About"))
				{
					func_452("CST3_About", 7, 1, 0, 0);
				}
			}
		}
		if (!func_897("ThroughTunnel"))
		{
			if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), 2122.7f, 6032.38f, 48.97f, 2113.73f, 6019.76f, 55.97f, 5f, false, true, 0))
			{
				__LIB_0__::func_630(113);
				TASK::CLEAR_PED_TASKS(uLocal_489[2]);
				TASK::CLEAR_PED_SECONDARY_TASK(uLocal_489[2]);
				TASK::TASK_PLAY_ANIM(uLocal_489[2], sLocal_224, "punch_air", 8f, -8f, -1, 131104, 0f, false, 2, false);
				PED::FORCE_PED_AI_AND_ANIMATION_UPDATE(uLocal_489[2], false, false);
				if (!__LIB_0__::func_75())
				{
					__LIB_0__::func_640(func_359(2), "GENERIC_CURSE_HIGH", 10);
				}
				RECORDING::REPLAY_RECORD_BACK_FOR_TIME(5f, 2f, 3);
				func_894("ThroughTunnel", 1);
			}
		}
		if (PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), iLocal_236, false))
		{
			if (!HUD::DOES_BLIP_EXIST(iLocal_244))
			{
				__LIB_15__::func_946(&iLocal_244, &iLocal_235, 0);
				HUD::SET_BLIP_SCALE(iLocal_244, 0.5f);
			}
			if (!HUD::DOES_BLIP_EXIST(iLocal_241))
			{
				__LIB_15__::func_946(&iLocal_241, &iLocal_232, 0);
				HUD::SET_BLIP_SCALE(iLocal_241, 0.5f);
			}
			__LIB_15__::func_946(&iLocal_242, &iLocal_233, 0);
			__LIB_15__::func_946(&iLocal_243, &iLocal_234, 0);
			if (HUD::DOES_BLIP_EXIST(iLocal_245))
			{
				HUD::CLEAR_PRINTS();
				func_475("S3_COP", 7500, 1);
				__LIB_13__::func_808(&iLocal_245);
			}
		}
		else
		{
			if (__LIB_0__::func_1("S3_HELP2"))
			{
				HUD::CLEAR_HELP(true);
			}
			__LIB_13__::func_808(&iLocal_244);
			__LIB_13__::func_808(&iLocal_241);
			__LIB_13__::func_808(&iLocal_242);
			__LIB_13__::func_808(&iLocal_243);
			if (!HUD::DOES_BLIP_EXIST(iLocal_245))
			{
				HUD::CLEAR_PRINTS();
				func_475("CMN_GENGETBCKBK" /* GXT: ~s~Get on the ~b~bike. */, 7500, 1);
				__LIB_15__::func_946(&iLocal_245, &iLocal_236, 0);
			}
		}
		if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), -1765.3965f, 4732.7046f, 50.9022f, -1786.8444f, 4754.6094f, 60.9306f, 80f, false, true, 0) && PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), iLocal_236, false))
		{
			if ((!HUD::IS_MESSAGE_BEING_DISPLAYED() || MISC::GET_PROFILE_SETTING(203) == 0) && !__LIB_0__::func_75())
			{
				func_475("S3_STOP", 7500, 1);
			}
		}
		if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), -1778.0725f, 4740.4814f, 56.03952f, -1953.0111f, 4565.7676f, 66.02429f, 20.5f, false, true, 0) && PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), iLocal_236, false))
		{
			if (MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(iLocal_236, true), -1906.9209f, 4621.751f, 56.044f, true) < (MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(iLocal_235, true), -1906.9209f, 4621.751f, 56.044f, true) + __LIB_0__::func_331(ENTITY::GET_ENTITY_SPEED(iLocal_235), 0f, 7.5f)))
			{
				if (fLocal_211 > -50f)
				{
					fLocal_211 = (fLocal_211 - (25f * SYSTEM::TIMESTEP()));
				}
				if (ENTITY::GET_ENTITY_SPEED(iLocal_236) > 7.5f && ENTITY::GET_ENTITY_SPEED(iLocal_236) > ENTITY::GET_ENTITY_SPEED(iLocal_235))
				{
					Var1 = { ENTITY::GET_ENTITY_VELOCITY(iLocal_236) };
					ENTITY::SET_ENTITY_VELOCITY(iLocal_236, (Var1.f_0 / 1.05f), (Var1.f_1 / 1.05f), Var1.f_2);
				}
			}
			else if (MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(iLocal_236, true), -1906.9209f, 4621.751f, 56.044f, true) > (MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(iLocal_235, true), -1906.9209f, 4621.751f, 56.044f, true) + __LIB_0__::func_331((ENTITY::GET_ENTITY_SPEED(iLocal_235) + 2.5f), 0f, 10f)))
			{
				if (fLocal_211 < 0f)
				{
					fLocal_211 = (fLocal_211 + (25f * SYSTEM::TIMESTEP()));
				}
			}
			VEHICLE::MODIFY_VEHICLE_TOP_SPEED(iLocal_236, fLocal_211);
			Var2 = { ENTITY::GET_OFFSET_FROM_ENTITY_GIVEN_WORLD_COORDS(iLocal_235, ENTITY::GET_ENTITY_COORDS(iLocal_236, true)) };
			if ((ENTITY::GET_ENTITY_HEADING(iLocal_236) > 121.7529f && ENTITY::GET_ENTITY_HEADING(iLocal_236) < 223.1123f) && ENTITY::IS_ENTITY_IN_ANGLED_AREA(iLocal_236, -1956.1871f, 4560.51f, 56.03042f, -1799.0609f, 4717.2935f, 66.00614f, 16f, false, true, 0))
			{
				VEHICLE::SET_VEHICLE_STEER_BIAS(iLocal_236, __LIB_0__::func_331((Var2.f_0 / 4f), -0.05f, 0f));
			}
			else if ((ENTITY::GET_ENTITY_HEADING(iLocal_236) > 43.7849f && ENTITY::GET_ENTITY_HEADING(iLocal_236) < 224.4444f) && ENTITY::IS_ENTITY_IN_ANGLED_AREA(iLocal_236, -1805.9515f, 4724.2f, 56.044353f, -1963.0634f, 4567.36f, 66.069725f, 3f, false, true, 0))
			{
				VEHICLE::SET_VEHICLE_STEER_BIAS(iLocal_236, __LIB_0__::func_331((Var2.f_0 / 4f), 0f, 0.05f));
			}
			if (!func_897("BridgeSlowDown"))
			{
				func_24(9);
				func_894("BridgeSlowDown", 1);
			}
		}
		if (PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), iLocal_236, false))
		{
			if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), -1912.8f, 4602.7f, 56.01148f, -1944.6206f, 4574.3213f, 66.013885f, 21.5f, false, true, 0))
			{
				if (__LIB_0__::func_213(iLocal_236, 10.5f, 1, 0.5f, 0, 1, 0))
				{
					if (ENTITY::GET_ENTITY_SPEED(iLocal_235) < 0.5f && ENTITY::GET_ENTITY_SPEED(iLocal_235) < 0.5f)
					{
						func_350(PLAYER::PLAYER_ID(), 0, 0);
						func_362(100);
						func_37();
					}
				}
			}
		}
		if (!func_897("BikerSpawn1"))
		{
			func_894("BikerSpawn1", func_560(iLocal_162[3], joaat("G_M_Y_Lost_01"), 26));
		}
		if (!func_897("BikerSpawn2"))
		{
			func_894("BikerSpawn2", func_560(iLocal_162[4], joaat("G_M_Y_Lost_01"), 26));
		}
		if (!func_897("BikerSpawn3"))
		{
			func_894("BikerSpawn3", func_560(iLocal_162[5], joaat("G_M_Y_Lost_01"), 26));
		}
		if (ENTITY::DOES_ENTITY_EXIST(iLocal_162[3]) && !ENTITY::IS_ENTITY_DEAD(iLocal_162[3], false))
		{
			if (VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(iLocal_162[3]))
			{
				if (ENTITY::DOES_ENTITY_EXIST(VEHICLE::GET_PED_IN_VEHICLE_SEAT(iLocal_162[3], -1, false)))
				{
					if ((PED::IS_PED_INJURED(VEHICLE::GET_PED_IN_VEHICLE_SEAT(iLocal_162[3], -1, false)) || (!PED::IS_PED_INJURED(VEHICLE::GET_PED_IN_VEHICLE_SEAT(iLocal_162[3], -1, false)) && ENTITY::GET_ENTITY_HEALTH(VEHICLE::GET_PED_IN_VEHICLE_SEAT(iLocal_162[3], -1, false)) < 200)) || PED::IS_PED_SHOOTING_IN_AREA(PLAYER::PLAYER_PED_ID(), ENTITY::GET_ENTITY_COORDS(iLocal_162[3], true) - Vector(50f, 50f, 50f), ENTITY::GET_ENTITY_COORDS(iLocal_162[3], true) + Vector(25f, 25f, 25f), false, true))
					{
						VEHICLE::STOP_PLAYBACK_RECORDED_VEHICLE(iLocal_162[3]);
						if (ENTITY::DOES_ENTITY_EXIST(VEHICLE::GET_PED_IN_VEHICLE_SEAT(iLocal_162[3], -1, false)) && !PED::IS_PED_INJURED(VEHICLE::GET_PED_IN_VEHICLE_SEAT(iLocal_162[3], -1, false)))
						{
							if (!PED::IS_PED_IN_COMBAT(VEHICLE::GET_PED_IN_VEHICLE_SEAT(iLocal_162[3], -1, false), 0))
							{
								WEAPON::GIVE_WEAPON_TO_PED(VEHICLE::GET_PED_IN_VEHICLE_SEAT(iLocal_162[3], -1, false), joaat("WEAPON_PISTOL"), -1, false, true);
								PED::SET_PED_KEEP_TASK(VEHICLE::GET_PED_IN_VEHICLE_SEAT(iLocal_162[3], -1, false), true);
								TASK::TASK_COMBAT_PED(VEHICLE::GET_PED_IN_VEHICLE_SEAT(iLocal_162[3], -1, false), PLAYER::PLAYER_PED_ID(), 0, 16);
							}
						}
					}
				}
			}
		}
		if (ENTITY::DOES_ENTITY_EXIST(iLocal_162[4]) && !ENTITY::IS_ENTITY_DEAD(iLocal_162[4], false))
		{
			if (VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(iLocal_162[4]))
			{
				if (ENTITY::DOES_ENTITY_EXIST(VEHICLE::GET_PED_IN_VEHICLE_SEAT(iLocal_162[4], -1, false)))
				{
					if ((PED::IS_PED_INJURED(VEHICLE::GET_PED_IN_VEHICLE_SEAT(iLocal_162[4], -1, false)) || (!PED::IS_PED_INJURED(VEHICLE::GET_PED_IN_VEHICLE_SEAT(iLocal_162[4], -1, false)) && ENTITY::GET_ENTITY_HEALTH(VEHICLE::GET_PED_IN_VEHICLE_SEAT(iLocal_162[4], -1, false)) < 200)) || PED::IS_PED_SHOOTING_IN_AREA(PLAYER::PLAYER_PED_ID(), ENTITY::GET_ENTITY_COORDS(iLocal_162[4], true) - Vector(50f, 50f, 50f), ENTITY::GET_ENTITY_COORDS(iLocal_162[4], true) + Vector(25f, 25f, 25f), false, true))
					{
						VEHICLE::STOP_PLAYBACK_RECORDED_VEHICLE(iLocal_162[4]);
						if (ENTITY::DOES_ENTITY_EXIST(VEHICLE::GET_PED_IN_VEHICLE_SEAT(iLocal_162[4], -1, false)) && !PED::IS_PED_INJURED(VEHICLE::GET_PED_IN_VEHICLE_SEAT(iLocal_162[4], -1, false)))
						{
							if (!PED::IS_PED_IN_COMBAT(VEHICLE::GET_PED_IN_VEHICLE_SEAT(iLocal_162[4], -1, false), 0))
							{
								WEAPON::GIVE_WEAPON_TO_PED(VEHICLE::GET_PED_IN_VEHICLE_SEAT(iLocal_162[4], -1, false), joaat("WEAPON_SMG"), -1, false, true);
								PED::SET_PED_KEEP_TASK(VEHICLE::GET_PED_IN_VEHICLE_SEAT(iLocal_162[4], -1, false), true);
								TASK::TASK_COMBAT_PED(VEHICLE::GET_PED_IN_VEHICLE_SEAT(iLocal_162[4], -1, false), PLAYER::PLAYER_PED_ID(), 0, 16);
							}
						}
					}
				}
			}
		}
		if (ENTITY::DOES_ENTITY_EXIST(iLocal_162[5]) && !ENTITY::IS_ENTITY_DEAD(iLocal_162[5], false))
		{
			if (VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(iLocal_162[5]))
			{
				if (ENTITY::DOES_ENTITY_EXIST(VEHICLE::GET_PED_IN_VEHICLE_SEAT(iLocal_162[5], -1, false)))
				{
					if ((PED::IS_PED_INJURED(VEHICLE::GET_PED_IN_VEHICLE_SEAT(iLocal_162[5], -1, false)) || (!PED::IS_PED_INJURED(VEHICLE::GET_PED_IN_VEHICLE_SEAT(iLocal_162[5], -1, false)) && ENTITY::GET_ENTITY_HEALTH(VEHICLE::GET_PED_IN_VEHICLE_SEAT(iLocal_162[5], -1, false)) < 200)) || PED::IS_PED_SHOOTING_IN_AREA(PLAYER::PLAYER_PED_ID(), ENTITY::GET_ENTITY_COORDS(iLocal_162[5], true) - Vector(50f, 50f, 50f), ENTITY::GET_ENTITY_COORDS(iLocal_162[5], true) + Vector(25f, 25f, 25f), false, true))
					{
						VEHICLE::STOP_PLAYBACK_RECORDED_VEHICLE(iLocal_162[5]);
						if (ENTITY::DOES_ENTITY_EXIST(VEHICLE::GET_PED_IN_VEHICLE_SEAT(iLocal_162[5], -1, false)) && !PED::IS_PED_INJURED(VEHICLE::GET_PED_IN_VEHICLE_SEAT(iLocal_162[5], -1, false)))
						{
							if (!PED::IS_PED_IN_COMBAT(VEHICLE::GET_PED_IN_VEHICLE_SEAT(iLocal_162[5], -1, false), 0))
							{
								WEAPON::GIVE_WEAPON_TO_PED(VEHICLE::GET_PED_IN_VEHICLE_SEAT(iLocal_162[5], -1, false), joaat("WEAPON_SAWNOFFSHOTGUN"), -1, false, true);
								PED::SET_PED_KEEP_TASK(VEHICLE::GET_PED_IN_VEHICLE_SEAT(iLocal_162[5], -1, false), true);
								TASK::TASK_COMBAT_PED(VEHICLE::GET_PED_IN_VEHICLE_SEAT(iLocal_162[5], -1, false), PLAYER::PLAYER_PED_ID(), 0, 16);
							}
						}
					}
				}
			}
		}
		if (VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(iLocal_235))
		{
			if (VEHICLE::GET_TIME_POSITION_IN_RECORDING(iLocal_235) > 130000f)
			{
				CUTSCENE::REQUEST_CUTSCENE("Car_steal_3_mcs_3", 8);
				if (CUTSCENE::CAN_REQUEST_ASSETS_FOR_CUTSCENE_ENTITY())
				{
					__LIB_41__::func_49("Franklin", func_359(1), 0, 2);
					__LIB_41__::func_49("Michael", func_359(0), 0, 2);
					__LIB_41__::func_49("Trevor", func_359(2), 0, 2);
					CUTSCENE::SET_CUTSCENE_PED_COMPONENT_VARIATION_FROM_PED("Racer_that_dies", iLocal_226, 0);
					CUTSCENE::SET_CUTSCENE_PED_COMPONENT_VARIATION_FROM_PED("Racer_that_runsaway", iLocal_227, 0);
				}
			}
		}
		PED::SET_PED_RESET_FLAG(uLocal_489[2], 55, true);
		if ((!VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(iLocal_233) || !VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(iLocal_234)) || !VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(iLocal_232))
		{
			ENTITY::SET_ENTITY_COLLISION(iLocal_233, true, false);
			ENTITY::SET_ENTITY_COLLISION(iLocal_234, true, false);
			ENTITY::SET_ENTITY_COLLISION(iLocal_232, true, false);
			ENTITY::SET_ENTITY_INVINCIBLE(iLocal_233, false);
			ENTITY::SET_ENTITY_INVINCIBLE(iLocal_234, false);
			ENTITY::SET_ENTITY_INVINCIBLE(iLocal_232, false);
		}
	}
	if (func_36())
	{
		func_24(9);
		__LIB_0__::func_345(&uLocal_282, 0, 0);
		if (AUDIO::IS_AUDIO_SCENE_ACTIVE("CAR_1_BIKE_CHASE_MAIN"))
		{
			AUDIO::STOP_AUDIO_SCENE("CAR_1_BIKE_CHASE_MAIN");
		}
		if (AUDIO::IS_AUDIO_SCENE_ACTIVE("CAR_1_RACE_CARS_FOCUS_CAM"))
		{
			AUDIO::STOP_AUDIO_SCENE("CAR_1_RACE_CARS_FOCUS_CAM");
		}
		if (AUDIO::IS_AUDIO_SCENE_ACTIVE("CAR_1_BIKE_ENTER_TUNNEL"))
		{
			AUDIO::STOP_AUDIO_SCENE("CAR_1_BIKE_ENTER_TUNNEL");
		}
		if (AUDIO::IS_AUDIO_SCENE_ACTIVE("CAR_1_BIKE_PASS_THE_LOST"))
		{
			AUDIO::STOP_AUDIO_SCENE("CAR_1_BIKE_PASS_THE_LOST");
		}
		if (ENTITY::DOES_ENTITY_EXIST(iLocal_235))
		{
			AUDIO::REMOVE_ENTITY_FROM_AUDIO_MIX_GROUP(iLocal_235, 0f);
		}
		if (ENTITY::DOES_ENTITY_EXIST(iLocal_162[3]))
		{
			AUDIO::REMOVE_ENTITY_FROM_AUDIO_MIX_GROUP(iLocal_162[3], 0f);
		}
		if (ENTITY::DOES_ENTITY_EXIST(iLocal_162[4]))
		{
			AUDIO::REMOVE_ENTITY_FROM_AUDIO_MIX_GROUP(iLocal_162[4], 0f);
		}
		if (ENTITY::DOES_ENTITY_EXIST(iLocal_162[5]))
		{
			AUDIO::REMOVE_ENTITY_FROM_AUDIO_MIX_GROUP(iLocal_162[5], 0f);
		}
		HUD::CLEAR_HELP(true);
		__LIB_13__::func_808(&iLocal_242);
		__LIB_13__::func_808(&iLocal_243);
		__LIB_13__::func_808(&iLocal_244);
		__LIB_13__::func_808(&iLocal_245);
		if (VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(iLocal_232))
		{
			VEHICLE::STOP_PLAYBACK_RECORDED_VEHICLE(iLocal_232);
		}
		if (VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(iLocal_233))
		{
			VEHICLE::STOP_PLAYBACK_RECORDED_VEHICLE(iLocal_233);
		}
		if (VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(iLocal_234))
		{
			VEHICLE::STOP_PLAYBACK_RECORDED_VEHICLE(iLocal_234);
		}
		VEHICLE::SET_VEHICLE_INDICATOR_LIGHTS(iLocal_232, 0, false);
		VEHICLE::SET_VEHICLE_INDICATOR_LIGHTS(iLocal_233, 0, false);
		VEHICLE::SET_VEHICLE_INDICATOR_LIGHTS(iLocal_234, 0, false);
		func_622(0, 1);
		ENTITY::SET_ENTITY_COLLISION(iLocal_233, true, false);
		ENTITY::SET_ENTITY_COLLISION(iLocal_234, true, false);
		ENTITY::SET_ENTITY_COLLISION(iLocal_232, true, false);
		iLocal_479++;
	}
}

int func_560(int iParam0, int iParam1, int iParam2)//Position - 0x79E7E
{
	bool bVar0;
	int iVar1;
	int iVar2;
	if (VEHICLE::IS_VEHICLE_DRIVEABLE(iParam0, false))
	{
		bVar0 = false;
		iVar1 = VEHICLE::GET_PED_IN_VEHICLE_SEAT(iParam0, -1, false);
		if (ENTITY::DOES_ENTITY_EXIST(iVar1))
		{
			if (iVar1 != PLAYER::PLAYER_PED_ID())
			{
				if (ENTITY::GET_ENTITY_MODEL(iVar1) != iParam1)
				{
					bVar0 = true;
				}
				else
				{
					return 1;
				}
			}
		}
		else
		{
			bVar0 = true;
		}
		if (bVar0)
		{
			STREAMING::REQUEST_MODEL(iParam1);
			if (STREAMING::HAS_MODEL_LOADED(iParam1))
			{
				if (ENTITY::DOES_ENTITY_EXIST(iVar1))
				{
					ENTITY::SET_ENTITY_AS_MISSION_ENTITY(iVar1, true, false);
					PED::DELETE_PED(&iVar1);
				}
				iVar2 = PED::CREATE_PED_INSIDE_VEHICLE(iParam0, iParam2, iParam1, -1, false, false);
				if (__LIB_15__::func_896(ENTITY::GET_ENTITY_MODEL(iParam0)))
				{
					PED::SET_PED_RELATIONSHIP_GROUP_HASH(iVar2, iLocal_152);
				}
				PED::SET_PED_RANDOM_COMPONENT_VARIATION(iVar2, 0);
				PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iVar2, true);
				ENTITY::SET_ENTITY_ONLY_DAMAGED_BY_PLAYER(iVar2, true);
				PED::SET_PED_SUFFERS_CRITICAL_HITS(iVar2, false);
				PED::SET_PED_CONFIG_FLAG(iVar2, 32, false);
				if (bLocal_62)
				{
					PED::SET_PED_FLEE_ATTRIBUTES(iVar2, 8192, true);
					PED::SET_PED_FLEE_ATTRIBUTES(iVar2, 65536, true);
					PED::SET_PED_FLEE_ATTRIBUTES(iVar2, 2, false);
					VEHICLE::SET_DISABLE_PRETEND_OCCUPANTS(iParam0, true);
				}
				STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(iParam1);
				__LIB_15__::func_895(iVar2);
				return 1;
			}
		}
	}
	return 0;
}

void func_568(char* sParam0, char* sParam1, int iParam2, bool bParam3)//Position - 0x7A412
{
	if (!func_897(sParam1))
	{
		while (!__LIB_17__::func_731(&uLocal_312, sLocal_481, sParam0, sParam1, iParam2, 0, 0))
		{
			if (__LIB_0__::func_75())
			{
				__LIB_0__::func_429();
				func_362(0);
			}
		}
		func_894(sParam1, bParam3);
	}
}

void func_613(var uParam0, int iParam1)//Position - 0x7C616
{
	if (!*uParam0)
	{
		uParam0->f_10[0 /*57*/].f_2 = 0;
		uParam0->f_10[0 /*57*/].f_3 = -1;
		uParam0->f_10[0 /*57*/].f_4 = 0;
		uParam0->f_10[0 /*57*/].f_5 = 0;
		uParam0->f_10[0 /*57*/].f_6 = { 2.518f, 2.853f, 0.246f };
		uParam0->f_10[0 /*57*/].f_13 = { 0f, 0f, 0f };
		uParam0->f_10[0 /*57*/].f_12 = 0f;
		uParam0->f_10[0 /*57*/].f_16 = 0f;
		uParam0->f_10[0 /*57*/].f_17 = 0;
		uParam0->f_10[0 /*57*/].f_9 = { 0.669f, -0.085f, 0.248f };
		uParam0->f_10[0 /*57*/].f_18 = 1;
		uParam0->f_10[0 /*57*/].f_19 = 1;
		uParam0->f_10[0 /*57*/].f_20 = 0;
		uParam0->f_10[0 /*57*/].f_21 = 0f;
		uParam0->f_10[0 /*57*/].f_50 = 0;
		uParam0->f_10[0 /*57*/].f_51 = 0f;
		uParam0->f_10[0 /*57*/].f_52 = 0f;
		uParam0->f_10[0 /*57*/].f_22 = 0f;
		uParam0->f_10[0 /*57*/].f_53 = 0;
		uParam0->f_10[0 /*57*/].f_23 = 0f;
		uParam0->f_10[0 /*57*/].f_28 = 1;
		uParam0->f_10[0 /*57*/].f_29 = 0.8f;
		uParam0->f_10[0 /*57*/].f_32 = 0f;
		uParam0->f_10[0 /*57*/].f_30 = 0;
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
		uParam0->f_10[0 /*57*/].f_45 = 0;
		uParam0->f_10[0 /*57*/].f_46 = 0;
		uParam0->f_10[0 /*57*/].f_47 = 0f;
		uParam0->f_10[0 /*57*/].f_47.f_1 = 0f;
		uParam0->f_10[0 /*57*/].f_47.f_2 = 0f;
		uParam0->f_10[1 /*57*/].f_2 = 0;
		uParam0->f_10[1 /*57*/].f_3 = -1;
		uParam0->f_10[1 /*57*/].f_4 = 0;
		uParam0->f_10[1 /*57*/].f_5 = 5000;
		uParam0->f_10[1 /*57*/].f_6 = { 2.1235f, 2.5186f, 0.246f };
		uParam0->f_10[1 /*57*/].f_13 = { 0f, 0f, 0f };
		uParam0->f_10[1 /*57*/].f_12 = 0f;
		uParam0->f_10[1 /*57*/].f_16 = 0f;
		uParam0->f_10[1 /*57*/].f_17 = 0;
		uParam0->f_10[1 /*57*/].f_9 = { 0.63f, -0.2496f, 0.25f };
		uParam0->f_10[1 /*57*/].f_18 = 1;
		uParam0->f_10[1 /*57*/].f_19 = 1;
		uParam0->f_10[1 /*57*/].f_20 = 0;
		uParam0->f_10[1 /*57*/].f_21 = 0f;
		uParam0->f_10[1 /*57*/].f_50 = 0;
		uParam0->f_10[1 /*57*/].f_51 = 0f;
		uParam0->f_10[1 /*57*/].f_52 = 0f;
		uParam0->f_10[1 /*57*/].f_22 = 0f;
		uParam0->f_10[1 /*57*/].f_53 = 0;
		uParam0->f_10[1 /*57*/].f_23 = 0f;
		uParam0->f_10[1 /*57*/].f_28 = 0;
		uParam0->f_10[1 /*57*/].f_29 = 0f;
		uParam0->f_10[1 /*57*/].f_32 = 0f;
		uParam0->f_10[1 /*57*/].f_30 = 0;
		uParam0->f_10[1 /*57*/].f_31 = 0;
		uParam0->f_10[1 /*57*/].f_33 = 1f;
		uParam0->f_10[1 /*57*/].f_34 = 0;
		uParam0->f_10[1 /*57*/].f_35 = 0f;
		uParam0->f_10[1 /*57*/].f_36 = 0;
		uParam0->f_10[1 /*57*/].f_37 = 0;
		uParam0->f_10[1 /*57*/].f_39 = 0f;
		uParam0->f_10[1 /*57*/].f_40 = 0f;
		uParam0->f_10[1 /*57*/].f_41 = 0;
		uParam0->f_10[1 /*57*/].f_42 = 0;
		uParam0->f_10[1 /*57*/].f_43 = 0;
		uParam0->f_10[1 /*57*/].f_38 = 0f;
		uParam0->f_10[1 /*57*/].f_45 = 0;
		uParam0->f_10[1 /*57*/].f_46 = 0;
		uParam0->f_10[1 /*57*/].f_47 = 0f;
		uParam0->f_10[1 /*57*/].f_47.f_1 = 0f;
		uParam0->f_10[1 /*57*/].f_47.f_2 = 0f;
		uParam0->f_1217 = 2;
		uParam0->f_1218 = 0;
		uParam0->f_2 = 1;
		uParam0->f_3 = 0;
		uParam0->f_1219 = 0;
		uParam0->f_1221 = "thisSwitchCam";
		uParam0->f_1220 = "CameraInfo_CarSteal_EndCam.txt";
		uParam0->f_1225 = "CameraInfo_CarSteal_EndCam.xml";
		*uParam0 = 1;
	}
	uParam0->f_4[0] = *iParam1;
}

void func_614()//Position - 0x7C9F7
{
	Local_127[0 /*3*/] = { 2651.6782f, 5083.7163f, 44.2504f };
	fLocal_63[0] = 0.0013f;
	fLocal_64[0] = 0.0025f;
	fLocal_65[0] = 0.0925f;
	fLocal_66[0] = 0.9957f;
	iLocal_103[0] = 1;
	fLocal_67[0] = 2009284f;
	iLocal_153[0] = joaat("asterope");
	Local_127[1 /*3*/] = { 2578.6765f, 5206.689f, 44.1481f };
	fLocal_63[1] = 0.0007f;
	fLocal_64[1] = -0.0009f;
	fLocal_65[1] = 0.9908f;
	fLocal_66[1] = -0.1355f;
	iLocal_103[1] = 2;
	fLocal_67[1] = 4224f;
	iLocal_153[1] = joaat("emperor");
	Local_127[2 /*3*/] = { 2564.1345f, 5263.9688f, 44.0797f };
	fLocal_63[2] = 0f;
	fLocal_64[2] = 0.0007f;
	fLocal_65[2] = 0.9896f;
	fLocal_66[2] = -0.1436f;
	iLocal_103[2] = 3;
	fLocal_67[2] = 4422f;
	iLocal_153[2] = joaat("emperor");
	Local_127[3 /*3*/] = { 2571.2625f, 5256.6226f, 44.1779f };
	fLocal_63[3] = 0.0001f;
	fLocal_64[3] = 0.0007f;
	fLocal_65[3] = 0.9922f;
	fLocal_66[3] = -0.1243f;
	iLocal_103[3] = 4;
	fLocal_67[3] = 4620f;
	iLocal_153[3] = joaat("journey");
	Local_127[5 /*3*/] = { 2567.121f, 5272.3496f, 44.3493f };
	fLocal_63[5] = -0.0003f;
	fLocal_64[5] = 0.0005f;
	fLocal_65[5] = 0.9923f;
	fLocal_66[5] = -0.1239f;
	iLocal_103[5] = 6;
	fLocal_67[5] = 5280f;
	iLocal_153[5] = joaat("asterope");
	Local_127[6 /*3*/] = { 2581.3538f, 5314.8896f, 44.0127f };
	fLocal_63[6] = -0.0004f;
	fLocal_64[6] = -0.0005f;
	fLocal_65[6] = 0.1847f;
	fLocal_66[6] = 0.9828f;
	iLocal_103[6] = 7;
	fLocal_67[6] = 5610f;
	iLocal_153[6] = joaat("emperor");
	Local_127[7 /*3*/] = { 2548.6987f, 5322.8833f, 44.3774f };
	fLocal_63[7] = -0.0001f;
	fLocal_64[7] = 0.0006f;
	fLocal_65[7] = 0.992f;
	fLocal_66[7] = -0.1263f;
	iLocal_103[7] = 8;
	fLocal_67[7] = 6006f;
	iLocal_153[7] = joaat("journey");
	Local_127[8 /*3*/] = { 2553.1313f, 5327.9746f, 44.2761f };
	fLocal_63[8] = 0.0001f;
	fLocal_64[8] = 0.0007f;
	fLocal_65[8] = 0.991f;
	fLocal_66[8] = -0.134f;
	iLocal_103[8] = 9;
	fLocal_67[8] = 6072f;
	iLocal_153[8] = joaat("asterope");
	Local_127[10 /*3*/] = { 2593.3813f, 5293.014f, 44.3104f };
	fLocal_63[10] = -0.0007f;
	fLocal_64[10] = 0.0001f;
	fLocal_65[10] = 0.1465f;
	fLocal_66[10] = 0.9892f;
	iLocal_103[10] = 11;
	fLocal_67[10] = 6468f;
	iLocal_153[10] = joaat("asterope");
	Local_127[11 /*3*/] = { 2548.9211f, 5343.3643f, 44.1531f };
	fLocal_63[11] = 0.0001f;
	fLocal_64[11] = 0.0007f;
	fLocal_65[11] = 0.9962f;
	fLocal_66[11] = -0.0873f;
	iLocal_103[11] = 12;
	fLocal_67[11] = 6930f;
	iLocal_153[11] = joaat("asterope");
	Local_127[12 /*3*/] = { 2539.3406f, 5358.377f, 43.9659f };
	fLocal_63[12] = 0.0002f;
	fLocal_64[12] = 0.0002f;
	fLocal_65[12] = 0.9915f;
	fLocal_66[12] = -0.13f;
	iLocal_103[12] = 13;
	fLocal_67[12] = 7326f;
	iLocal_153[12] = joaat("emperor");
	Local_127[14 /*3*/] = { 2547.9246f, 5346.385f, 44.3941f };
	fLocal_63[14] = -0.0001f;
	fLocal_64[14] = 0.0004f;
	fLocal_65[14] = 0.994f;
	fLocal_66[14] = -0.109f;
	iLocal_103[14] = 15;
	fLocal_67[14] = 8646f;
	iLocal_153[14] = joaat("minivan");
	Local_127[15 /*3*/] = { 2554.264f, 5406.557f, 44.3017f };
	fLocal_63[15] = -0.0015f;
	fLocal_64[15] = -0.0006f;
	fLocal_65[15] = 0.1376f;
	fLocal_66[15] = 0.9905f;
	iLocal_103[15] = 16;
	fLocal_67[15] = 9174f;
	iLocal_153[15] = joaat("journey");
	Local_127[16 /*3*/] = { 2556.2463f, 5399.689f, 44.2142f };
	fLocal_63[16] = -0.0001f;
	fLocal_64[16] = 0.0001f;
	fLocal_65[16] = 0.142f;
	fLocal_66[16] = 0.9899f;
	iLocal_103[16] = 17;
	fLocal_67[16] = 10164f;
	iLocal_153[16] = joaat("asterope");
	Local_127[18 /*3*/] = { 2546.3093f, 5449.573f, 44.2454f };
	fLocal_63[18] = -0.0001f;
	fLocal_64[18] = 0.0001f;
	fLocal_65[18] = 0.152f;
	fLocal_66[18] = 0.9884f;
	iLocal_103[18] = 19;
	fLocal_67[18] = 10890f;
	iLocal_153[18] = joaat("asterope");
	Local_127[19 /*3*/] = { 2512.8413f, 5449.7285f, 44.3785f };
	fLocal_63[19] = 0f;
	fLocal_64[19] = -0.0002f;
	fLocal_65[19] = 0.9875f;
	fLocal_66[19] = -0.1577f;
	iLocal_103[19] = 20;
	fLocal_67[19] = 10956f;
	iLocal_153[19] = joaat("minivan");
	Local_127[20 /*3*/] = { 2536.328f, 5478.375f, 43.9978f };
	fLocal_63[20] = 0.0006f;
	fLocal_64[20] = 0.0001f;
	fLocal_65[20] = 0.1958f;
	fLocal_66[20] = 0.9806f;
	iLocal_103[20] = 21;
	fLocal_67[20] = 11484f;
	iLocal_153[20] = joaat("emperor");
	Local_127[21 /*3*/] = { 2493.391f, 5506.577f, 44.1779f };
	fLocal_63[21] = 0.0001f;
	fLocal_64[21] = -0.0016f;
	fLocal_65[21] = 0.9845f;
	fLocal_66[21] = -0.1754f;
	iLocal_103[21] = 22;
	fLocal_67[21] = 12144f;
	iLocal_153[21] = joaat("journey");
	Local_127[22 /*3*/] = { 2509.642f, 5537.393f, 44.1639f };
	fLocal_63[22] = 0.0009f;
	fLocal_64[22] = 0.0002f;
	fLocal_65[22] = 0.1787f;
	fLocal_66[22] = 0.9839f;
	iLocal_103[22] = 23;
	fLocal_67[22] = 12606f;
	iLocal_153[22] = joaat("emperor");
	Local_127[23 /*3*/] = { 2503.3555f, 5556.0645f, 44.3684f };
	fLocal_63[23] = 0.0009f;
	fLocal_64[23] = 0.0003f;
	fLocal_65[23] = 0.1796f;
	fLocal_66[23] = 0.9837f;
	iLocal_103[23] = 24;
	fLocal_67[23] = 13398f;
	iLocal_153[23] = joaat("asterope");
	Local_127[28 /*3*/] = { 2494.8794f, 5594.3193f, 44.4232f };
	fLocal_63[28] = 0.0012f;
	fLocal_64[28] = 0f;
	fLocal_65[28] = 0.1843f;
	fLocal_66[28] = 0.9829f;
	iLocal_103[28] = 29;
	fLocal_67[28] = 15708f;
	iLocal_153[28] = joaat("minivan");
	Local_127[29 /*3*/] = { 2445.1016f, 5638.984f, 44.4275f };
	fLocal_63[29] = 0.0004f;
	fLocal_64[29] = -0.0014f;
	fLocal_65[29] = 0.9702f;
	fLocal_66[29] = -0.2423f;
	iLocal_103[29] = 30;
	fLocal_67[29] = 15840f;
	iLocal_153[29] = joaat("emperor");
	Local_127[30 /*3*/] = { 2461.4565f, 5658.5557f, 44.8311f };
	fLocal_63[30] = 0.0013f;
	fLocal_64[30] = 0.0003f;
	fLocal_65[30] = 0.2075f;
	fLocal_66[30] = 0.9782f;
	iLocal_103[30] = 31;
	fLocal_67[30] = 16302f;
	iLocal_153[30] = joaat("journey");
	Local_127[31 /*3*/] = { 2427.976f, 5673.8774f, 44.6726f };
	fLocal_63[31] = 0.0004f;
	fLocal_64[31] = -0.0017f;
	fLocal_65[31] = 0.9732f;
	fLocal_66[31] = -0.23f;
	iLocal_103[31] = 32;
	fLocal_67[31] = 17094f;
	iLocal_153[31] = joaat("journey");
	Local_127[33 /*3*/] = { 2400.9226f, 5713.9766f, 45.1135f };
	fLocal_63[33] = 0.0007f;
	fLocal_64[33] = -0.003f;
	fLocal_65[33] = 0.9697f;
	fLocal_66[33] = -0.2445f;
	iLocal_103[33] = 34;
	fLocal_67[33] = 18084f;
	iLocal_153[33] = joaat("surfer");
	Local_127[34 /*3*/] = { 2393.4893f, 5737.1675f, 45.0127f };
	fLocal_63[34] = 0.001f;
	fLocal_64[34] = -0.0043f;
	fLocal_65[34] = 0.9713f;
	fLocal_66[34] = -0.2379f;
	iLocal_103[34] = 35;
	fLocal_67[34] = 18810f;
	iLocal_153[34] = joaat("emperor");
	Local_127[35 /*3*/] = { 2424.103f, 5737.523f, 45.1532f };
	fLocal_63[35] = 0.0035f;
	fLocal_64[35] = 0.0008f;
	fLocal_65[35] = 0.2295f;
	fLocal_66[35] = 0.9733f;
	iLocal_103[35] = 36;
	fLocal_67[35] = 18876f;
	iLocal_153[35] = joaat("asterope");
	Local_127[36 /*3*/] = { 2390.8848f, 5743.3213f, 45.2131f };
	fLocal_63[36] = 0.0011f;
	fLocal_64[36] = -0.0043f;
	fLocal_65[36] = 0.9535f;
	fLocal_66[36] = -0.3014f;
	iLocal_103[36] = 37;
	fLocal_67[36] = 19338f;
	iLocal_153[36] = joaat("minivan");
	Local_127[37 /*3*/] = { 2412.9656f, 5770.1772f, 45.1403f };
	fLocal_63[37] = 0.0039f;
	fLocal_64[37] = 0.0009f;
	fLocal_65[37] = 0.2406f;
	fLocal_66[37] = 0.9706f;
	iLocal_103[37] = 38;
	fLocal_67[37] = 19404f;
	iLocal_153[37] = joaat("emperor");
	Local_127[38 /*3*/] = { 2386.7268f, 5749.7593f, 45.3162f };
	fLocal_63[38] = 0.0011f;
	fLocal_64[38] = -0.0046f;
	fLocal_65[38] = 0.967f;
	fLocal_66[38] = -0.2546f;
	iLocal_103[38] = 39;
	fLocal_67[38] = 19734f;
	iLocal_153[38] = joaat("asterope");
	Local_127[39 /*3*/] = { 2379.0435f, 5762.482f, 45.2977f };
	fLocal_63[39] = 0.0015f;
	fLocal_64[39] = -0.0046f;
	fLocal_65[39] = 0.9501f;
	fLocal_66[39] = -0.312f;
	iLocal_103[39] = 40;
	fLocal_67[39] = 20328f;
	iLocal_153[39] = joaat("emperor");
	Local_127[40 /*3*/] = { 2341.2683f, 5808.588f, 46.1418f };
	fLocal_63[40] = -0.0018f;
	fLocal_64[40] = -0.0084f;
	fLocal_65[40] = 0.9447f;
	fLocal_66[40] = -0.3278f;
	iLocal_103[40] = 41;
	fLocal_67[40] = 21120f;
	iLocal_153[40] = joaat("journey");
	Local_127[41 /*3*/] = { 2334.064f, 5818.2275f, 46.4928f };
	fLocal_63[41] = -0.0019f;
	fLocal_64[41] = -0.0082f;
	fLocal_65[41] = 0.9489f;
	fLocal_66[41] = -0.3156f;
	iLocal_103[41] = 42;
	fLocal_67[41] = 21450f;
	iLocal_153[41] = joaat("asterope");
	Local_127[42 /*3*/] = { 2341.32f, 5808.52f, 46.3244f };
	fLocal_63[42] = -0.0015f;
	fLocal_64[42] = -0.0085f;
	fLocal_65[42] = 0.9358f;
	fLocal_66[42] = -0.3523f;
	iLocal_103[42] = 43;
	fLocal_67[42] = 21648f;
	iLocal_153[42] = joaat("surfer");
	Local_127[44 /*3*/] = { 2356.755f, 5852.9966f, 46.8044f };
	fLocal_63[44] = 0.0077f;
	fLocal_64[44] = 0.0023f;
	fLocal_65[44] = 0.2911f;
	fLocal_66[44] = 0.9567f;
	iLocal_103[44] = 45;
	fLocal_67[44] = 22440f;
	iLocal_153[44] = joaat("minivan");
	Local_127[45 /*3*/] = { 2306.9895f, 5851.7124f, 47.3458f };
	fLocal_63[45] = 0.0013f;
	fLocal_64[45] = -0.01f;
	fLocal_65[45] = 0.9375f;
	fLocal_66[45] = -0.3479f;
	iLocal_103[45] = 46;
	fLocal_67[45] = 22638f;
	iLocal_153[45] = joaat("journey");
	Local_127[48 /*3*/] = { 2305.7908f, 5853.135f, 47.0949f };
	fLocal_63[48] = 0.0004f;
	fLocal_64[48] = -0.0102f;
	fLocal_65[48] = 0.9353f;
	fLocal_66[48] = -0.3536f;
	iLocal_103[48] = 49;
	fLocal_67[48] = 24024f;
	iLocal_153[48] = joaat("journey");
	Local_127[49 /*3*/] = { 2264.785f, 5905.3477f, 48.6f };
	fLocal_63[49] = 0.0056f;
	fLocal_64[49] = -0.0124f;
	fLocal_65[49] = 0.9091f;
	fLocal_66[49] = -0.4164f;
	iLocal_103[49] = 50;
	fLocal_67[49] = 24222f;
	iLocal_153[49] = joaat("asterope");
	Local_127[50 /*3*/] = { 2276.7534f, 5892.9897f, 48.1198f };
	fLocal_63[50] = 0.0046f;
	fLocal_64[50] = -0.0105f;
	fLocal_65[50] = 0.9142f;
	fLocal_66[50] = -0.4052f;
	iLocal_103[50] = 51;
	fLocal_67[50] = 24354f;
	iLocal_153[50] = joaat("emperor");
	Local_127[51 /*3*/] = { 2294.085f, 5934.6953f, 48.315f };
	fLocal_63[51] = 0.0128f;
	fLocal_64[51] = 0.0035f;
	fLocal_65[51] = 0.3199f;
	fLocal_66[51] = 0.9473f;
	iLocal_103[51] = 52;
	fLocal_67[51] = 24618f;
	iLocal_153[51] = joaat("minivan");
	Local_127[55 /*3*/] = { 2245.7124f, 5916.9033f, 49.1332f };
	fLocal_63[55] = 0.0036f;
	fLocal_64[55] = -0.0122f;
	fLocal_65[55] = 0.9221f;
	fLocal_66[55] = -0.3867f;
	iLocal_103[55] = 56;
	fLocal_67[55] = 26334f;
	iLocal_153[55] = joaat("emperor");
	Local_127[56 /*3*/] = { 2194.014f, 5963.9224f, 50.5311f };
	fLocal_63[56] = 0.0019f;
	fLocal_64[56] = -0.004f;
	fLocal_65[56] = 0.9006f;
	fLocal_66[56] = -0.4346f;
	iLocal_103[56] = 57;
	fLocal_67[56] = 26532f;
	iLocal_153[56] = joaat("journey");
	Local_127[58 /*3*/] = { 2225.7893f, 5935.94f, 49.7968f };
	fLocal_63[58] = 0.0087f;
	fLocal_64[58] = -0.008f;
	fLocal_65[58] = 0.9007f;
	fLocal_66[58] = -0.4343f;
	iLocal_103[58] = 59;
	fLocal_67[58] = 26928f;
	iLocal_153[58] = joaat("emperor");
	Local_127[61 /*3*/] = { 2151.9482f, 6004.317f, 50.8595f };
	fLocal_63[61] = -0.0007f;
	fLocal_64[61] = 0.0013f;
	fLocal_65[61] = 0.8772f;
	fLocal_66[61] = -0.4801f;
	iLocal_103[61] = 62;
	fLocal_67[61] = 27918f;
	iLocal_153[61] = joaat("asterope");
	Local_127[62 /*3*/] = { 2143.4595f, 6010.6953f, 50.9416f };
	fLocal_63[62] = -0.0006f;
	fLocal_64[62] = 0.0012f;
	fLocal_65[62] = 0.8935f;
	fLocal_66[62] = -0.449f;
	iLocal_103[62] = 63;
	fLocal_67[62] = 28248f;
	iLocal_153[62] = joaat("asterope");
	Local_127[66 /*3*/] = { 2128.2231f, 6021.9575f, 50.5741f };
	fLocal_63[66] = -0.0034f;
	fLocal_64[66] = 0.0038f;
	fLocal_65[66] = 0.8762f;
	fLocal_66[66] = -0.482f;
	iLocal_103[66] = 67;
	fLocal_67[66] = 30096f;
	iLocal_153[66] = joaat("emperor");
	Local_127[68 /*3*/] = { 2106.0881f, 6030.7827f, 50.0777f };
	fLocal_63[68] = -0.0059f;
	fLocal_64[68] = 0.0126f;
	fLocal_65[68] = 0.9114f;
	fLocal_66[68] = -0.4112f;
	iLocal_103[68] = 69;
	fLocal_67[68] = 30690f;
	iLocal_153[68] = joaat("emperor");
	Local_127[71 /*3*/] = { 2077.3833f, 6053.5493f, 49.1698f };
	fLocal_63[71] = -0.0056f;
	fLocal_64[71] = 0.0132f;
	fLocal_65[71] = 0.922f;
	fLocal_66[71] = -0.387f;
	iLocal_103[71] = 72;
	fLocal_67[71] = 31482f;
	iLocal_153[71] = joaat("asterope");
	Local_127[73 /*3*/] = { 2025.274f, 6101.408f, 47.5248f };
	fLocal_63[73] = -0.008f;
	fLocal_64[73] = 0.0081f;
	fLocal_65[73] = 0.9381f;
	fLocal_66[73] = -0.3461f;
	iLocal_103[73] = 74;
	fLocal_67[73] = 31878f;
	iLocal_153[73] = joaat("surfer");
	Local_127[74 /*3*/] = { 2056.4045f, 6071.644f, 48.3698f };
	fLocal_63[74] = -0.0049f;
	fLocal_64[74] = 0.012f;
	fLocal_65[74] = 0.9275f;
	fLocal_66[74] = -0.3735f;
	iLocal_103[74] = 75;
	fLocal_67[74] = 32208f;
	iLocal_153[74] = joaat("minivan");
	Local_127[75 /*3*/] = { 2016.8806f, 6117.559f, 47.1699f };
	fLocal_63[75] = -0.0044f;
	fLocal_64[75] = 0.0108f;
	fLocal_65[75] = 0.9266f;
	fLocal_66[75] = -0.376f;
	iLocal_103[75] = 76;
	fLocal_67[75] = 32274f;
	iLocal_153[75] = joaat("asterope");
	Local_127[76 /*3*/] = { 2064.5444f, 6124.388f, 49.5683f };
	fLocal_63[76] = -0.0121f;
	fLocal_64[76] = -0.005f;
	fLocal_65[76] = 0.4074f;
	fLocal_66[76] = 0.9131f;
	iLocal_103[76] = 77;
	fLocal_67[76] = (32274f - 1000f);
	iLocal_153[76] = joaat("journey");
	Local_127[78 /*3*/] = { 2011.3207f, 6123.388f, 46.7588f };
	fLocal_63[78] = -0.0037f;
	fLocal_64[78] = 0.0097f;
	fLocal_65[78] = 0.9278f;
	fLocal_66[78] = -0.3729f;
	iLocal_103[78] = 79;
	fLocal_67[78] = 32868f;
	iLocal_153[78] = joaat("asterope");
	Local_127[79 /*3*/] = { 2022.5339f, 6104.149f, 47.5842f };
	fLocal_63[79] = -0.0083f;
	fLocal_64[79] = 0.0076f;
	fLocal_65[79] = 0.9083f;
	fLocal_66[79] = -0.4181f;
	iLocal_103[79] = 80;
	fLocal_67[79] = 33264f;
	iLocal_153[79] = joaat("minivan");
	Local_127[80 /*3*/] = { 1988.7322f, 6150.8906f, 45.9257f };
	fLocal_63[80] = -0.0041f;
	fLocal_64[80] = 0.0108f;
	fLocal_65[80] = 0.9411f;
	fLocal_66[80] = -0.3378f;
	iLocal_103[80] = 81;
	fLocal_67[80] = 33396f;
	iLocal_153[80] = joaat("emperor");
	Local_127[81 /*3*/] = { 1985.0082f, 6155.7656f, 45.922f };
	fLocal_63[81] = -0.0028f;
	fLocal_64[81] = 0.0112f;
	fLocal_65[81] = 0.9647f;
	fLocal_66[81] = -0.263f;
	iLocal_103[81] = 82;
	fLocal_67[81] = 33792f;
	iLocal_153[81] = joaat("minivan");
	Local_127[82 /*3*/] = { 1955.8132f, 6202.2827f, 44.6369f };
	fLocal_63[82] = -0.0026f;
	fLocal_64[82] = 0.0127f;
	fLocal_65[82] = 0.9876f;
	fLocal_66[82] = -0.1563f;
	iLocal_103[82] = 83;
	fLocal_67[82] = 34650f;
	iLocal_153[82] = joaat("asterope");
	Local_127[83 /*3*/] = { 1951.5308f, 6214.4453f, 44.0232f };
	fLocal_63[83] = -0.0024f;
	fLocal_64[83] = 0.0129f;
	fLocal_65[83] = 0.9803f;
	fLocal_66[83] = -0.1973f;
	iLocal_103[83] = 84;
	fLocal_67[83] = 36498f;
	iLocal_153[83] = joaat("emperor");
	Local_127[84 /*3*/] = { 1941.91f, 6251.784f, 43.0887f };
	fLocal_63[84] = -0.0024f;
	fLocal_64[84] = 0.0126f;
	fLocal_65[84] = 0.9769f;
	fLocal_66[84] = -0.2135f;
	iLocal_103[84] = 85;
	fLocal_67[84] = 37224f;
	iLocal_153[84] = joaat("journey");
	Local_127[86 /*3*/] = { 1895.512f, 6313.5635f, 41.4656f };
	fLocal_63[86] = -0.0063f;
	fLocal_64[86] = 0.0114f;
	fLocal_65[86] = 0.8745f;
	fLocal_66[86] = -0.4849f;
	iLocal_103[86] = 87;
	fLocal_67[86] = 37686f;
	iLocal_153[86] = joaat("asterope");
	Local_127[87 /*3*/] = { 1862.3741f, 6328.804f, 40.3474f };
	fLocal_63[87] = -0.0113f;
	fLocal_64[87] = 0.0158f;
	fLocal_65[87] = 0.8149f;
	fLocal_66[87] = -0.5793f;
	iLocal_103[87] = 88;
	fLocal_67[87] = 38346f;
	iLocal_153[87] = joaat("surfer");
	Local_127[88 /*3*/] = { 1891.9431f, 6349.652f, 41.5862f };
	fLocal_63[88] = -0.0107f;
	fLocal_64[88] = -0.0078f;
	fLocal_65[88] = 0.567f;
	fLocal_66[88] = 0.8236f;
	iLocal_103[88] = 89;
	fLocal_67[88] = 38412f;
	iLocal_153[88] = joaat("minivan");
	Local_127[89 /*3*/] = { 1846.8118f, 6363.404f, 40.1519f };
	fLocal_63[89] = -0.0114f;
	fLocal_64[89] = -0.0087f;
	fLocal_65[89] = 0.6037f;
	fLocal_66[89] = 0.7971f;
	iLocal_103[89] = 90;
	fLocal_67[89] = 39204f;
	iLocal_153[89] = joaat("emperor");
	Local_127[90 /*3*/] = { 1784.391f, 6370.211f, 37.9927f };
	fLocal_63[90] = -0.0174f;
	fLocal_64[90] = -0.0171f;
	fLocal_65[90] = 0.6835f;
	fLocal_66[90] = 0.7295f;
	iLocal_103[90] = 91;
	fLocal_67[90] = 41778f;
	iLocal_153[90] = joaat("asterope");
	Local_128[0 /*3*/] = { 1732.1554f, 6403.5503f, 34.4566f };
	fLocal_78[0] = -0.0159f;
	fLocal_79[0] = -0.0254f;
	fLocal_80[0] = -0.255f;
	fLocal_81[0] = 0.9665f;
	iLocal_154[0] = joaat("minivan");
	Local_127[91 /*3*/] = { 1773.8611f, 6343.8247f, 36.3343f };
	fLocal_63[91] = -0.013f;
	fLocal_64[91] = 0.019f;
	fLocal_65[91] = 0.7427f;
	fLocal_66[91] = -0.6692f;
	iLocal_103[91] = 92;
	fLocal_67[91] = 41910f;
	iLocal_153[91] = joaat("journey");
	Local_127[92 /*3*/] = { 1725.8148f, 6352.4946f, 33.9923f };
	fLocal_63[92] = -0.0156f;
	fLocal_64[92] = 0.0212f;
	fLocal_65[92] = 0.7943f;
	fLocal_66[92] = -0.607f;
	iLocal_103[92] = 93;
	fLocal_67[92] = 42108f;
	iLocal_153[92] = joaat("asterope");
	Local_127[93 /*3*/] = { 1693.923f, 6380.9585f, 31.6176f };
	fLocal_63[93] = -0.0288f;
	fLocal_64[93] = -0.022f;
	fLocal_65[93] = 0.6188f;
	fLocal_66[93] = 0.7847f;
	iLocal_103[93] = 94;
	fLocal_67[93] = 42702f;
	iLocal_153[93] = joaat("asterope");
	Local_127[94 /*3*/] = { 1675.1924f, 6368.179f, 31.2057f };
	fLocal_63[94] = -0.017f;
	fLocal_64[94] = 0.023f;
	fLocal_65[94] = 0.8127f;
	fLocal_66[94] = -0.5819f;
	iLocal_103[94] = 95;
	fLocal_67[94] = 42900f;
	iLocal_153[94] = joaat("asterope");
	Local_127[95 /*3*/] = { 1648.9746f, 6371.3037f, 29.7276f };
	fLocal_63[95] = -0.0172f;
	fLocal_64[95] = 0.0237f;
	fLocal_65[95] = 0.806f;
	fLocal_66[95] = -0.5912f;
	iLocal_103[95] = 96;
	fLocal_67[95] = 43428f;
	iLocal_153[95] = joaat("surfer");
	Local_127[96 /*3*/] = { 1621.5427f, 6382.089f, 27.9963f };
	fLocal_63[96] = -0.0179f;
	fLocal_64[96] = 0.026f;
	fLocal_65[96] = 0.822f;
	fLocal_66[96] = -0.5686f;
	iLocal_103[96] = 97;
	fLocal_67[96] = 44088f;
	iLocal_153[96] = joaat("journey");
	Local_127[97 /*3*/] = { 1613.9684f, 6404.0195f, 26.7857f };
	fLocal_63[97] = -0.0289f;
	fLocal_64[97] = -0.0185f;
	fLocal_65[97] = 0.5576f;
	fLocal_66[97] = 0.8294f;
	iLocal_103[97] = 98;
	fLocal_67[97] = 44418f;
	iLocal_153[97] = joaat("emperor");
	Local_127[98 /*3*/] = { 1594.1198f, 6392.8965f, 25.6806f };
	fLocal_63[98] = -0.0173f;
	fLocal_64[98] = 0.0277f;
	fLocal_65[98] = 0.8492f;
	fLocal_66[98] = -0.5271f;
	iLocal_103[98] = 99;
	fLocal_67[98] = 44814f;
	iLocal_153[98] = joaat("emperor");
	Local_127[99 /*3*/] = { 1593.061f, 6413.142f, 25.312f };
	fLocal_63[99] = -0.0286f;
	fLocal_64[99] = -0.0196f;
	fLocal_65[99] = 0.5784f;
	fLocal_66[99] = 0.815f;
	iLocal_103[99] = 100;
	fLocal_67[99] = 44946f;
	iLocal_153[99] = joaat("minivan");
	Local_127[101 /*3*/] = { 1588.1694f, 6421.3286f, 24.7918f };
	fLocal_63[101] = -0.0301f;
	fLocal_64[101] = -0.0185f;
	fLocal_65[101] = 0.5236f;
	fLocal_66[101] = 0.8512f;
	iLocal_103[101] = 102;
	fLocal_67[101] = 45342f;
	iLocal_153[101] = joaat("asterope");
	Local_127[102 /*3*/] = { 1587.3392f, 6396.2217f, 25.2695f };
	fLocal_63[102] = -0.0181f;
	fLocal_64[102] = 0.0275f;
	fLocal_65[102] = 0.8375f;
	fLocal_66[102] = -0.5455f;
	iLocal_103[102] = 103;
	fLocal_67[102] = 45474f;
	iLocal_153[102] = joaat("journey");
	Local_127[103 /*3*/] = { 1542.3279f, 6415.5874f, 23.3908f };
	fLocal_63[103] = -0.0083f;
	fLocal_64[103] = 0.0124f;
	fLocal_65[103] = 0.8169f;
	fLocal_66[103] = -0.5765f;
	iLocal_103[103] = 104;
	fLocal_67[103] = 46068f;
	iLocal_153[103] = joaat("emperor");
	Local_128[2 /*3*/] = { 1576.5372f, 6451.1187f, 24.521f };
	fLocal_78[2] = 0.0361f;
	fLocal_79[2] = -0.0126f;
	fLocal_80[2] = -0.2494f;
	fLocal_81[2] = 0.9676f;
	iLocal_154[2] = joaat("minivan");
	Local_128[3 /*3*/] = { 1532.3318f, 6408.2344f, 23.1721f };
	fLocal_78[3] = 0f;
	fLocal_79[3] = 0f;
	fLocal_80[3] = 0.8056f;
	fLocal_81[3] = -0.5924f;
	iLocal_154[3] = joaat("emperor");
	Local_127[106 /*3*/] = { 1531.3542f, 6419.3477f, 23.3128f };
	fLocal_63[106] = -0.0092f;
	fLocal_64[106] = 0.0122f;
	fLocal_65[106] = 0.8038f;
	fLocal_66[106] = -0.5947f;
	iLocal_103[106] = 107;
	fLocal_67[106] = 46992f;
	iLocal_153[106] = joaat("surfer");
	Local_127[107 /*3*/] = { 1487.2659f, 6441.6406f, 21.9444f };
	fLocal_63[107] = -0.0092f;
	fLocal_64[107] = 0.0102f;
	fLocal_65[107] = 0.7991f;
	fLocal_66[107] = -0.601f;
	iLocal_103[107] = 108;
	fLocal_67[107] = 47520f;
	iLocal_153[107] = joaat("journey");
	Local_127[109 /*3*/] = { 1406.0055f, 6480.3774f, 19.6421f };
	fLocal_63[109] = -0.0031f;
	fLocal_64[109] = -0.0048f;
	fLocal_65[109] = 0.6208f;
	fLocal_66[109] = 0.784f;
	iLocal_103[109] = 110;
	fLocal_67[109] = 49368f;
	iLocal_153[109] = joaat("emperor");
	Local_127[110 /*3*/] = { 1394.3269f, 6471.6846f, 19.6279f };
	fLocal_63[110] = -0.001f;
	fLocal_64[110] = 0.0034f;
	fLocal_65[110] = 0.7756f;
	fLocal_66[110] = -0.6312f;
	iLocal_103[110] = 111;
	fLocal_67[110] = 49566f;
	iLocal_153[110] = joaat("journey");
	Local_127[111 /*3*/] = { 1373.033f, 6476.132f, 19.4375f };
	fLocal_63[111] = 0.0019f;
	fLocal_64[111] = 0.0044f;
	fLocal_65[111] = 0.7449f;
	fLocal_66[111] = -0.6672f;
	iLocal_103[111] = 112;
	fLocal_67[111] = 50028f;
	iLocal_153[111] = joaat("emperor");
	Local_127[112 /*3*/] = { 1372.0283f, 6482.6143f, 19.6764f };
	fLocal_63[112] = -0.0018f;
	fLocal_64[112] = -0.0012f;
	fLocal_65[112] = 0.6428f;
	fLocal_66[112] = 0.766f;
	iLocal_103[112] = 113;
	fLocal_67[112] = 50094f;
	iLocal_153[112] = joaat("asterope");
	Local_127[113 /*3*/] = { 1385.5012f, 6480.0137f, 19.7448f };
	fLocal_63[113] = -0.002f;
	fLocal_64[113] = -0.0017f;
	fLocal_65[113] = 0.6064f;
	fLocal_66[113] = 0.7951f;
	iLocal_103[113] = 114;
	fLocal_67[113] = 50292f;
	iLocal_153[113] = joaat("surfer");
	Local_127[114 /*3*/] = { 1383.4406f, 6473.8906f, 19.8693f };
	fLocal_63[114] = 0.0022f;
	fLocal_64[114] = 0.0043f;
	fLocal_65[114] = 0.7876f;
	fLocal_66[114] = -0.6162f;
	iLocal_103[114] = 115;
	fLocal_67[114] = 50358f;
	iLocal_153[114] = joaat("journey");
	Local_127[115 /*3*/] = { 1322.904f, 6483.072f, 19.6677f };
	fLocal_63[115] = 0.0041f;
	fLocal_64[115] = 0.002f;
	fLocal_65[115] = 0.7191f;
	fLocal_66[115] = -0.6949f;
	iLocal_103[115] = 116;
	fLocal_67[115] = 51084f;
	iLocal_153[115] = joaat("asterope");
	Local_127[116 /*3*/] = { 1203.2847f, 6495.1777f, 20.7136f };
	fLocal_63[116] = 0.0013f;
	fLocal_64[116] = 0.0012f;
	fLocal_65[116] = 0.7118f;
	fLocal_66[116] = 0.7024f;
	iLocal_103[116] = 117;
	fLocal_67[116] = 54120f;
	iLocal_153[116] = joaat("minivan");
	Local_128[4 /*3*/] = { 1167.2759f, 6510.267f, 20.4517f };
	fLocal_78[4] = -0.0056f;
	fLocal_79[4] = 0.0116f;
	fLocal_80[4] = 0.6716f;
	fLocal_81[4] = 0.7408f;
	iLocal_154[4] = joaat("minivan");
	Local_127[117 /*3*/] = { 1155.1647f, 6482.5327f, 20.727f };
	fLocal_63[117] = -0.0035f;
	fLocal_64[117] = -0.0023f;
	fLocal_65[117] = -0.7037f;
	fLocal_66[117] = 0.7105f;
	iLocal_103[117] = 118;
	fLocal_67[117] = 55110f;
	iLocal_153[117] = joaat("surfer");
	Local_128[5 /*3*/] = { 1140.6067f, 6511.6465f, 20.5916f };
	fLocal_78[5] = -0.0319f;
	fLocal_79[5] = 0.0231f;
	fLocal_80[5] = 0.6637f;
	fLocal_81[5] = 0.7469f;
	iLocal_154[5] = joaat("minivan");
	Local_127[118 /*3*/] = { 1124.6927f, 6494.4053f, 20.5125f };
	fLocal_63[118] = 0.0029f;
	fLocal_64[118] = -0.0031f;
	fLocal_65[118] = 0.7094f;
	fLocal_66[118] = 0.7048f;
	iLocal_103[118] = 119;
	fLocal_67[118] = 55704f;
	iLocal_153[118] = joaat("emperor");
	Local_127[119 /*3*/] = { 1119.5255f, 6488.295f, 20.7457f };
	fLocal_63[119] = 0.0031f;
	fLocal_64[119] = -0.0033f;
	fLocal_65[119] = 0.7145f;
	fLocal_66[119] = 0.6997f;
	iLocal_103[119] = 120;
	fLocal_67[119] = 56034f;
	iLocal_153[119] = joaat("asterope");
	Local_127[120 /*3*/] = { 1106.9222f, 6481.554f, 20.5177f };
	fLocal_63[120] = 0.003f;
	fLocal_64[120] = 0.0031f;
	fLocal_65[120] = 0.7152f;
	fLocal_66[120] = -0.6989f;
	iLocal_103[120] = 121;
	fLocal_67[120] = 56166f;
	iLocal_153[120] = joaat("asterope");
	Local_128[6 /*3*/] = { 1112.5037f, 6510.346f, 20.6561f };
	fLocal_78[6] = 0f;
	fLocal_79[6] = 0f;
	fLocal_80[6] = 0.6373f;
	fLocal_81[6] = 0.7707f;
	iLocal_154[6] = joaat("asterope");
	Local_127[121 /*3*/] = { 1089.8398f, 6482.092f, 20.4654f };
	fLocal_63[121] = -0.0021f;
	fLocal_64[121] = -0.0042f;
	fLocal_65[121] = -0.6711f;
	fLocal_66[121] = 0.7414f;
	iLocal_103[121] = 122;
	fLocal_67[121] = 56562f;
	iLocal_153[121] = joaat("emperor");
	Local_127[122 /*3*/] = { 1064.264f, 6481.4595f, 20.5162f };
	fLocal_63[122] = 0.002f;
	fLocal_64[122] = 0.0035f;
	fLocal_65[122] = 0.7168f;
	fLocal_66[122] = -0.6973f;
	iLocal_103[122] = 123;
	fLocal_67[122] = 57156f;
	iLocal_153[122] = joaat("journey");
	Local_127[123 /*3*/] = { 1060.3815f, 6493.458f, 20.7409f };
	fLocal_63[123] = 0.0021f;
	fLocal_64[123] = -0.0037f;
	fLocal_65[123] = 0.6976f;
	fLocal_66[123] = 0.7165f;
	iLocal_103[123] = 124;
	fLocal_67[123] = 57156f;
	iLocal_153[123] = joaat("asterope");
	Local_127[124 /*3*/] = { 1048.4277f, 6481.55f, 20.7796f };
	fLocal_63[124] = 0.0036f;
	fLocal_64[124] = 0.0026f;
	fLocal_65[124] = 0.7133f;
	fLocal_66[124] = -0.7008f;
	iLocal_103[124] = 125;
	fLocal_67[124] = 57486f;
	iLocal_153[124] = joaat("journey");
	Local_128[7 /*3*/] = { 1038.6754f, 6504.091f, 20.5573f };
	fLocal_78[7] = 0.0135f;
	fLocal_79[7] = -0.0175f;
	fLocal_80[7] = 0.7902f;
	fLocal_81[7] = 0.6125f;
	iLocal_154[7] = joaat("minivan");
	Local_127[125 /*3*/] = { 1029.0808f, 6488.5986f, 20.3729f };
	fLocal_63[125] = 0.0001f;
	fLocal_64[125] = -0.0004f;
	fLocal_65[125] = 0.6854f;
	fLocal_66[125] = 0.7282f;
	iLocal_103[125] = 126;
	fLocal_67[125] = 57882f;
	iLocal_153[125] = joaat("emperor");
	Local_127[126 /*3*/] = { 1013.0278f, 6481.343f, 20.373f };
	fLocal_63[126] = 0.0031f;
	fLocal_64[126] = 0.0031f;
	fLocal_65[126] = 0.7262f;
	fLocal_66[126] = -0.6875f;
	iLocal_103[126] = 127;
	fLocal_67[126] = 58278f;
	iLocal_153[126] = joaat("emperor");
	Local_127[127 /*3*/] = { 1002.9684f, 6481.8f, 20.7867f };
	fLocal_63[127] = -0.0033f;
	fLocal_64[127] = -0.0029f;
	fLocal_65[127] = -0.6788f;
	fLocal_66[127] = 0.7343f;
	iLocal_103[127] = 128;
	fLocal_67[127] = 58476f;
	iLocal_153[127] = joaat("minivan");
	Local_127[128 /*3*/] = { 987.0549f, 6481.98f, 20.6444f };
	fLocal_63[128] = -0.0032f;
	fLocal_64[128] = -0.0033f;
	fLocal_65[128] = -0.7041f;
	fLocal_66[128] = 0.7101f;
	iLocal_103[128] = 129;
	fLocal_67[128] = 58872f;
	iLocal_153[128] = joaat("surfer");
	Local_127[129 /*3*/] = { 978.0116f, 6482.1367f, 20.6604f };
	fLocal_63[129] = 0.0037f;
	fLocal_64[129] = 0.0022f;
	fLocal_65[129] = 0.7221f;
	fLocal_66[129] = -0.6918f;
	iLocal_103[129] = 130;
	fLocal_67[129] = 59598f;
	iLocal_153[129] = joaat("asterope");
	Local_127[130 /*3*/] = { 934.914f, 6495.5503f, 20.5344f };
	fLocal_63[130] = 0.0025f;
	fLocal_64[130] = -0.0002f;
	fLocal_65[130] = 0.6975f;
	fLocal_66[130] = 0.7165f;
	iLocal_103[130] = 131;
	fLocal_67[130] = 60060f;
	iLocal_153[130] = joaat("emperor");
	Local_127[131 /*3*/] = { 932.5633f, 6483.0703f, 20.9136f };
	fLocal_63[131] = 0.0052f;
	fLocal_64[131] = 0.0011f;
	fLocal_65[131] = 0.7226f;
	fLocal_66[131] = -0.6913f;
	iLocal_103[131] = 132;
	fLocal_67[131] = 60390f;
	iLocal_153[131] = joaat("journey");
	Local_127[132 /*3*/] = { 909.9576f, 6483.846f, 20.7867f };
	fLocal_63[132] = 0.0069f;
	fLocal_64[132] = -0.0002f;
	fLocal_65[132] = 0.7339f;
	fLocal_66[132] = -0.6792f;
	iLocal_103[132] = 133;
	fLocal_67[132] = 60984f;
	iLocal_153[132] = joaat("journey");
	Local_127[133 /*3*/] = { 888.3078f, 6491.088f, 21.314f };
	fLocal_63[133] = 0.0049f;
	fLocal_64[133] = 0.0028f;
	fLocal_65[133] = 0.6906f;
	fLocal_66[133] = 0.7232f;
	iLocal_103[133] = 134;
	fLocal_67[133] = 61116f;
	iLocal_153[133] = joaat("minivan");
	Local_127[134 /*3*/] = { 889.868f, 6484.9717f, 21.28f };
	fLocal_63[134] = 0.0071f;
	fLocal_64[134] = -0.0009f;
	fLocal_65[134] = 0.725f;
	fLocal_66[134] = -0.6887f;
	iLocal_103[134] = 135;
	fLocal_67[134] = 61446f;
	iLocal_153[134] = joaat("journey");
	Local_127[135 /*3*/] = { 842.5891f, 6488.0615f, 22.1128f };
	fLocal_63[135] = 0.0123f;
	fLocal_64[135] = -0.007f;
	fLocal_65[135] = 0.7344f;
	fLocal_66[135] = -0.6786f;
	iLocal_103[135] = 136;
	fLocal_67[135] = 62172f;
	iLocal_153[135] = joaat("journey");
	Local_127[136 /*3*/] = { 841.4916f, 6494.06f, 21.7476f };
	fLocal_63[136] = 0.0096f;
	fLocal_64[136] = 0.0076f;
	fLocal_65[136] = 0.6762f;
	fLocal_66[136] = 0.7366f;
	iLocal_103[136] = 137;
	fLocal_67[136] = 62172f;
	iLocal_153[136] = joaat("emperor");
	Local_127[137 /*3*/] = { 822.6181f, 6489.598f, 22.7336f };
	fLocal_63[137] = 0.0142f;
	fLocal_64[137] = -0.0097f;
	fLocal_65[137] = 0.7634f;
	fLocal_66[137] = -0.6457f;
	iLocal_103[137] = 138;
	fLocal_67[137] = 62634f;
	iLocal_153[137] = joaat("minivan");
	Local_127[138 /*3*/] = { 798.2071f, 6491.523f, 23.6704f };
	fLocal_63[138] = 0.0171f;
	fLocal_64[138] = -0.0136f;
	fLocal_65[138] = 0.7653f;
	fLocal_66[138] = -0.6434f;
	iLocal_103[138] = 139;
	fLocal_67[138] = 63228f;
	iLocal_153[138] = joaat("minivan");
	Local_127[139 /*3*/] = { 795.2281f, 6497.8896f, 23.5202f };
	fLocal_63[139] = 0.0163f;
	fLocal_64[139] = 0.0138f;
	fLocal_65[139] = 0.6766f;
	fLocal_66[139] = 0.7361f;
	iLocal_103[139] = 140;
	fLocal_67[139] = 63228f;
	iLocal_153[139] = joaat("minivan");
	Local_127[140 /*3*/] = { 797.379f, 6503.7246f, 23.3211f };
	fLocal_63[140] = 0.0169f;
	fLocal_64[140] = 0.0141f;
	fLocal_65[140] = 0.6396f;
	fLocal_66[140] = 0.7684f;
	iLocal_103[140] = 141;
	fLocal_67[140] = 63558f;
	iLocal_153[140] = joaat("emperor");
	Local_127[141 /*3*/] = { 747.9111f, 6498.4053f, 26.0047f };
	fLocal_63[141] = 0.0165f;
	fLocal_64[141] = -0.0131f;
	fLocal_65[141] = 0.7684f;
	fLocal_66[141] = -0.6397f;
	iLocal_103[141] = 142;
	fLocal_67[141] = 64350f;
	iLocal_153[141] = joaat("journey");
	Local_127[142 /*3*/] = { 713.0914f, 6505.1797f, 26.9262f };
	fLocal_63[142] = 0.0099f;
	fLocal_64[142] = -0.0055f;
	fLocal_65[142] = 0.7799f;
	fLocal_66[142] = -0.6259f;
	iLocal_103[142] = 143;
	fLocal_67[142] = 65142f;
	iLocal_153[142] = joaat("journey");
	Local_127[144 /*3*/] = { 725.2426f, 6509.24f, 26.9223f };
	fLocal_63[144] = 0.0136f;
	fLocal_64[144] = 0.0054f;
	fLocal_65[144] = 0.6585f;
	fLocal_66[144] = 0.7525f;
	iLocal_103[144] = 145;
	fLocal_67[144] = 65472f;
	iLocal_153[144] = joaat("minivan");
	Local_127[147 /*3*/] = { 669.4201f, 6515.0186f, 27.8855f };
	fLocal_63[147] = 0.0052f;
	fLocal_64[147] = 0.0006f;
	fLocal_65[147] = 0.7765f;
	fLocal_66[147] = -0.6301f;
	iLocal_103[147] = 148;
	fLocal_67[147] = 66396f;
	iLocal_153[147] = joaat("journey");
	Local_127[148 /*3*/] = { 648.7714f, 6519.734f, 28.0324f };
	fLocal_63[148] = 0.0045f;
	fLocal_64[148] = 0.0014f;
	fLocal_65[148] = 0.766f;
	fLocal_66[148] = -0.6428f;
	iLocal_103[148] = 149;
	fLocal_67[148] = 67188f;
	iLocal_153[148] = joaat("minivan");
	Local_127[149 /*3*/] = { 617.5839f, 6538.9854f, 27.6398f };
	fLocal_63[149] = 0.0007f;
	fLocal_64[149] = -0.0028f;
	fLocal_65[149] = 0.6262f;
	fLocal_66[149] = 0.7797f;
	iLocal_103[149] = 150;
	fLocal_67[149] = 67584f;
	iLocal_153[149] = joaat("emperor");
	Local_127[150 /*3*/] = { 595.9203f, 6531.1943f, 27.9013f };
	fLocal_63[150] = 0.0016f;
	fLocal_64[150] = 0.0049f;
	fLocal_65[150] = 0.7801f;
	fLocal_66[150] = -0.6256f;
	iLocal_103[150] = 151;
	fLocal_67[150] = 68112f;
	iLocal_153[150] = joaat("journey");
	Local_127[151 /*3*/] = { 573.7428f, 6536.121f, 27.4576f };
	fLocal_63[151] = 0.0012f;
	fLocal_64[151] = 0.0059f;
	fLocal_65[151] = 0.7853f;
	fLocal_66[151] = -0.6191f;
	iLocal_103[151] = 152;
	fLocal_67[151] = 68442f;
	iLocal_153[151] = joaat("journey");
	Local_127[152 /*3*/] = { 569.4676f, 6549.8774f, 27.7749f };
	fLocal_63[152] = -0.0003f;
	fLocal_64[152] = -0.0058f;
	fLocal_65[152] = 0.6257f;
	fLocal_66[152] = 0.78f;
	iLocal_103[152] = 153;
	fLocal_67[152] = 68706f;
	iLocal_153[152] = joaat("minivan");
	Local_127[153 /*3*/] = { 553.1826f, 6540.714f, 27.5681f };
	fLocal_63[153] = 0.0006f;
	fLocal_64[153] = 0.0064f;
	fLocal_65[153] = 0.7703f;
	fLocal_66[153] = -0.6376f;
	iLocal_103[153] = 154;
	fLocal_67[153] = 69366f;
	iLocal_153[153] = joaat("journey");
	Local_127[156 /*3*/] = { 490.8492f, 6565.363f, 26.8575f };
	fLocal_63[156] = -0.0004f;
	fLocal_64[156] = -0.0041f;
	fLocal_65[156] = 0.6584f;
	fLocal_66[156] = 0.7526f;
	iLocal_103[156] = 157;
	fLocal_67[156] = 70488f;
	iLocal_153[156] = joaat("minivan");
	Local_127[157 /*3*/] = { 504.1685f, 6557.9175f, 26.9448f };
	fLocal_63[157] = -0.0045f;
	fLocal_64[157] = -0.0036f;
	fLocal_65[157] = 0.6266f;
	fLocal_66[157] = 0.7793f;
	iLocal_103[157] = 158;
	fLocal_67[157] = 70686f;
	iLocal_153[157] = joaat("journey");
	Local_127[158 /*3*/] = { 468.7714f, 6557.208f, 26.8139f };
	fLocal_63[158] = 0.0029f;
	fLocal_64[158] = 0.0027f;
	fLocal_65[158] = 0.7754f;
	fLocal_66[158] = -0.6314f;
	iLocal_103[158] = 159;
	fLocal_67[158] = 71016f;
	iLocal_153[158] = joaat("minivan");
	Local_127[159 /*3*/] = { 443.9303f, 6561.51f, 26.5272f };
	fLocal_63[159] = 0.0017f;
	fLocal_64[159] = -0.0019f;
	fLocal_65[159] = 0.7477f;
	fLocal_66[159] = -0.6641f;
	iLocal_103[159] = 160;
	fLocal_67[159] = 71544f;
	iLocal_153[159] = joaat("journey");
	Local_127[160 /*3*/] = { 410.8601f, 6564.7383f, 27.172f };
	fLocal_63[160] = 0.0061f;
	fLocal_64[160] = -0.0049f;
	fLocal_65[160] = 0.7329f;
	fLocal_66[160] = -0.6803f;
	iLocal_103[160] = 161;
	fLocal_67[160] = 72336f;
	iLocal_153[160] = joaat("journey");
	Local_127[161 /*3*/] = { 405.5365f, 6576.076f, 27.3538f };
	fLocal_63[161] = 0.0096f;
	fLocal_64[161] = 0.0013f;
	fLocal_65[161] = 0.6791f;
	fLocal_66[161] = 0.7339f;
	iLocal_103[161] = 162;
	fLocal_67[161] = 72468f;
	iLocal_153[161] = joaat("minivan");
	Local_127[163 /*3*/] = { 395.5341f, 6577.0586f, 27.2913f };
	fLocal_63[163] = 0.0078f;
	fLocal_64[163] = 0.0014f;
	fLocal_65[163] = 0.6561f;
	fLocal_66[163] = 0.7546f;
	iLocal_103[163] = 164;
	fLocal_67[163] = 72798f;
	iLocal_153[163] = joaat("surfer");
	Local_127[164 /*3*/] = { 348.5958f, 6567.658f, 28.2457f };
	fLocal_63[164] = -0.0079f;
	fLocal_64[164] = 0.0079f;
	fLocal_65[164] = -0.6893f;
	fLocal_66[164] = 0.7244f;
	iLocal_103[164] = 165;
	fLocal_67[164] = 73788f;
	iLocal_153[164] = joaat("minivan");
	Local_127[165 /*3*/] = { 341.6452f, 6578.4043f, 28.4158f };
	fLocal_63[165] = 0.0112f;
	fLocal_64[165] = 0.0051f;
	fLocal_65[165] = 0.7104f;
	fLocal_66[165] = 0.7037f;
	iLocal_103[165] = 166;
	fLocal_67[165] = 73986f;
	iLocal_153[165] = joaat("journey");
	Local_128[8 /*3*/] = { 301.0602f, 6596.749f, 29.7845f };
	fLocal_78[8] = -0.0241f;
	fLocal_79[8] = 0.0122f;
	fLocal_80[8] = -0.1432f;
	fLocal_81[8] = 0.9893f;
	iLocal_154[8] = joaat("surfer");
	Local_127[169 /*3*/] = { 289.2193f, 6565.6675f, 29.8009f };
	fLocal_63[169] = -0.0105f;
	fLocal_64[169] = 0.0097f;
	fLocal_65[169] = -0.6653f;
	fLocal_66[169] = 0.7465f;
	iLocal_103[169] = 170;
	fLocal_67[169] = 75570f;
	iLocal_153[169] = joaat("minivan");
	Local_127[170 /*3*/] = { 280.0489f, 6564.2744f, 30.5158f };
	fLocal_63[170] = -0.0102f;
	fLocal_64[170] = 0.0098f;
	fLocal_65[170] = -0.6946f;
	fLocal_66[170] = 0.7193f;
	iLocal_103[170] = 171;
	fLocal_67[170] = 75768f;
	iLocal_153[170] = joaat("mule");
	Local_127[171 /*3*/] = { 223.4678f, 6553.7607f, 31.5455f };
	fLocal_63[171] = -0.0027f;
	fLocal_64[171] = 0.0055f;
	fLocal_65[171] = -0.6048f;
	fLocal_66[171] = 0.7963f;
	iLocal_103[171] = 172;
	fLocal_67[171] = 76626f;
	iLocal_153[171] = joaat("journey");
	Local_127[173 /*3*/] = { 204.3794f, 6547.8735f, 31.7291f };
	fLocal_63[173] = -0.0001f;
	fLocal_64[173] = 0.0024f;
	fLocal_65[173] = -0.538f;
	fLocal_66[173] = 0.843f;
	iLocal_103[173] = 174;
	fLocal_67[173] = 77220f;
	iLocal_153[173] = joaat("minivan");
	Local_127[174 /*3*/] = { 191.195f, 6542.26f, 31.7253f };
	fLocal_63[174] = 0.0012f;
	fLocal_64[174] = -0.0008f;
	fLocal_65[174] = -0.5002f;
	fLocal_66[174] = 0.8659f;
	iLocal_103[174] = 175;
	fLocal_67[174] = 77880f;
	iLocal_153[174] = joaat("minivan");
	Local_128[9 /*3*/] = { 150.8109f, 6597.5127f, 30.8449f };
	fLocal_78[9] = 0f;
	fLocal_79[9] = 0f;
	fLocal_80[9] = -0.0089f;
	fLocal_81[9] = 1f;
	iLocal_154[9] = joaat("mule");
	Local_128[10 /*3*/] = { 146.6424f, 6579.655f, 30.8164f };
	fLocal_78[10] = 0f;
	fLocal_79[10] = 0f;
	fLocal_80[10] = -0.6845f;
	fLocal_81[10] = 0.729f;
	iLocal_154[10] = joaat("mule");
	Local_127[176 /*3*/] = { 136.9821f, 6540.7783f, 31.3868f };
	fLocal_63[176] = -0.018f;
	fLocal_64[176] = -0.002f;
	fLocal_65[176] = 0.9253f;
	fLocal_66[176] = -0.3787f;
	iLocal_103[176] = 177;
	fLocal_67[176] = 78672f;
	iLocal_153[176] = joaat("minivan");
	Local_127[177 /*3*/] = { 88.7146f, 6597.5522f, 31.327f };
	fLocal_63[177] = -0.0033f;
	fLocal_64[177] = 0.008f;
	fLocal_65[177] = 0.3907f;
	fLocal_66[177] = 0.9205f;
	iLocal_103[177] = 178;
	fLocal_67[177] = 79794f;
	iLocal_153[177] = joaat("minivan");
	Local_127[178 /*3*/] = { 62.4602f, 6447.9053f, 31.1752f };
	fLocal_63[178] = 0.0041f;
	fLocal_64[178] = -0.0017f;
	fLocal_65[178] = 0.922f;
	fLocal_66[178] = 0.3872f;
	iLocal_103[178] = 179;
	fLocal_67[178] = 81906f;
	iLocal_153[178] = joaat("minivan");
	Local_128[11 /*3*/] = { 40.8196f, 6439.5845f, 30.3269f };
	fLocal_78[11] = 0f;
	fLocal_79[11] = 0f;
	fLocal_80[11] = 0.9229f;
	fLocal_81[11] = 0.385f;
	iLocal_154[11] = joaat("mule");
	Local_127[179 /*3*/] = { 95.0551f, 6464.879f, 31.4468f };
	fLocal_63[179] = 0.0059f;
	fLocal_64[179] = -0.0024f;
	fLocal_65[179] = -0.3842f;
	fLocal_66[179] = 0.9232f;
	iLocal_103[179] = 180;
	fLocal_67[179] = 82104f;
	iLocal_153[179] = joaat("mule");
	Local_127[180 /*3*/] = { 35.1529f, 6421.5063f, 31.1415f };
	fLocal_63[180] = 0.0036f;
	fLocal_64[180] = -0.0021f;
	fLocal_65[180] = 0.921f;
	fLocal_66[180] = 0.3895f;
	iLocal_103[180] = 181;
	fLocal_67[180] = 82302f;
	iLocal_153[180] = joaat("journey");
	Local_127[181 /*3*/] = { 54.4397f, 6424.6313f, 30.9632f };
	fLocal_63[181] = -0.0006f;
	fLocal_64[181] = 0f;
	fLocal_65[181] = -0.3767f;
	fLocal_66[181] = 0.9263f;
	iLocal_103[181] = 182;
	fLocal_67[181] = 82434f;
	iLocal_153[181] = joaat("surfer");
	Local_127[182 /*3*/] = { 44.9629f, 6415.1523f, 31.1338f };
	fLocal_63[182] = -0.0006f;
	fLocal_64[182] = 0f;
	fLocal_65[182] = -0.4186f;
	fLocal_66[182] = 0.9082f;
	iLocal_103[182] = 183;
	fLocal_67[182] = 82566f;
	iLocal_153[182] = joaat("minivan");
	Local_127[184 /*3*/] = { 24.52f, 6394.3013f, 31.1302f };
	fLocal_63[184] = -0.0004f;
	fLocal_64[184] = 0f;
	fLocal_65[184] = -0.421f;
	fLocal_66[184] = 0.9071f;
	iLocal_103[184] = 185;
	fLocal_67[184] = 82962f;
	iLocal_153[184] = joaat("minivan");
	Local_127[186 /*3*/] = { 47.3566f, 6417.546f, 31.4162f };
	fLocal_63[186] = -0.0047f;
	fLocal_64[186] = 0.0019f;
	fLocal_65[186] = -0.3832f;
	fLocal_66[186] = 0.9237f;
	iLocal_103[186] = 187;
	fLocal_67[186] = 83424f;
	iLocal_153[186] = joaat("mule");
	Local_127[187 /*3*/] = { 9.9551f, 6396.016f, 31.1338f };
	fLocal_63[187] = 0.0002f;
	fLocal_64[187] = -0.0006f;
	fLocal_65[187] = 0.9382f;
	fLocal_66[187] = 0.3461f;
	iLocal_103[187] = 188;
	fLocal_67[187] = 83622f;
	iLocal_153[187] = joaat("minivan");
	Local_127[188 /*3*/] = { 13.5893f, 6399.6494f, 31.5825f };
	fLocal_63[188] = 0.0002f;
	fLocal_64[188] = 0.0004f;
	fLocal_65[188] = 0.926f;
	fLocal_66[188] = 0.3776f;
	iLocal_103[188] = 189;
	fLocal_67[188] = 83886f;
	iLocal_153[188] = joaat("mule");
	Local_127[190 /*3*/] = { -2.7613f, 6366.9287f, 31.1338f };
	fLocal_63[190] = -0.0006f;
	fLocal_64[190] = 0f;
	fLocal_65[190] = -0.4186f;
	fLocal_66[190] = 0.9082f;
	iLocal_103[190] = 191;
	fLocal_67[190] = 84216f;
	iLocal_153[190] = joaat("minivan");
	Local_127[192 /*3*/] = { -4.7622f, 6364.703f, 31.5749f };
	fLocal_63[192] = -0.0012f;
	fLocal_64[192] = 0.0005f;
	fLocal_65[192] = -0.3836f;
	fLocal_66[192] = 0.9235f;
	iLocal_103[192] = 193;
	fLocal_67[192] = 85206f;
	iLocal_153[192] = joaat("mule");
	Local_127[194 /*3*/] = { -46.7229f, 6323.0806f, 30.9614f };
	fLocal_63[194] = -0.0005f;
	fLocal_64[194] = 0.0002f;
	fLocal_65[194] = -0.3384f;
	fLocal_66[194] = 0.941f;
	iLocal_103[194] = 195;
	fLocal_67[194] = 86064f;
	iLocal_153[194] = joaat("surfer");
	Local_127[196 /*3*/] = { -57.0975f, 6312.9463f, 31.1302f };
	fLocal_63[196] = -0.001f;
	fLocal_64[196] = 0.0002f;
	fLocal_65[196] = -0.3729f;
	fLocal_66[196] = 0.9279f;
	iLocal_103[196] = 197;
	fLocal_67[196] = 86922f;
	iLocal_153[196] = joaat("minivan");
	Local_127[197 /*3*/] = { -118.5549f, 6259.6343f, 30.9714f };
	fLocal_63[197] = 0.0034f;
	fLocal_64[197] = -0.0035f;
	fLocal_65[197] = -0.3943f;
	fLocal_66[197] = 0.919f;
	iLocal_103[197] = 198;
	fLocal_67[197] = 87450f;
	iLocal_153[197] = joaat("minivan");
	Local_128[12 /*3*/] = { -139.0886f, 6276.7036f, 31.0148f };
	fLocal_78[12] = 0f;
	fLocal_79[12] = 0f;
	fLocal_80[12] = 0.4019f;
	fLocal_81[12] = 0.9157f;
	iLocal_154[12] = joaat("minivan");
	Local_128[13 /*3*/] = { -104.6942f, 6263.705f, 30.2543f };
	fLocal_78[13] = 0f;
	fLocal_79[13] = 0f;
	fLocal_80[13] = -0.3802f;
	fLocal_81[13] = 0.9249f;
	iLocal_154[13] = joaat("mule");
	Local_127[198 /*3*/] = { -129.7646f, 6239.847f, 30.9729f };
	fLocal_63[198] = -0.0003f;
	fLocal_64[198] = 0.0004f;
	fLocal_65[198] = -0.3557f;
	fLocal_66[198] = 0.9346f;
	iLocal_103[198] = 199;
	fLocal_67[198] = 87978f;
	iLocal_153[198] = joaat("minivan");
	Local_128[14 /*3*/] = { -131.429f, 6282.8022f, 31.0148f };
	fLocal_78[14] = 0f;
	fLocal_79[14] = 0f;
	fLocal_80[14] = 0.9305f;
	fLocal_81[14] = -0.3662f;
	iLocal_154[14] = joaat("minivan");
	Local_127[199 /*3*/] = { -143.0423f, 6242.148f, 30.9584f };
	fLocal_63[199] = 0.0007f;
	fLocal_64[199] = 0.0017f;
	fLocal_65[199] = 0.9282f;
	fLocal_66[199] = 0.3721f;
	iLocal_103[199] = 200;
	fLocal_67[199] = 88110f;
	iLocal_153[199] = joaat("journey");
	Local_128[15 /*3*/] = { -142.2711f, 6252.6636f, 31.2133f };
	fLocal_78[15] = 0f;
	fLocal_79[15] = 0f;
	fLocal_80[15] = 0.7589f;
	fLocal_81[15] = -0.6512f;
	iLocal_154[15] = joaat("minivan");
	Local_127[200 /*3*/] = { -149.4187f, 6219.9175f, 31.4495f };
	fLocal_63[200] = -0.0013f;
	fLocal_64[200] = 0.0007f;
	fLocal_65[200] = -0.3658f;
	fLocal_66[200] = 0.9307f;
	iLocal_103[200] = 201;
	fLocal_67[200] = 88638f;
	iLocal_153[200] = joaat("mule");
	Local_127[201 /*3*/] = { -159.8186f, 6226.0146f, 31.0039f };
	fLocal_63[201] = 0.0001f;
	fLocal_64[201] = -0.0003f;
	fLocal_65[201] = 0.9112f;
	fLocal_66[201] = 0.4121f;
	iLocal_103[201] = 202;
	fLocal_67[201] = 88704f;
	iLocal_153[201] = joaat("minivan");
	Local_127[202 /*3*/] = { -156.576f, 6212.6206f, 31.2925f };
	fLocal_63[202] = -0.0032f;
	fLocal_64[202] = 0.0011f;
	fLocal_65[202] = -0.3874f;
	fLocal_66[202] = 0.9219f;
	iLocal_103[202] = 203;
	fLocal_67[202] = 89232f;
	iLocal_153[202] = joaat("mule");
	Local_127[203 /*3*/] = { -177.8305f, 6207.8335f, 30.8371f };
	fLocal_63[203] = -0.0005f;
	fLocal_64[203] = -0.0003f;
	fLocal_65[203] = 0.9093f;
	fLocal_66[203] = 0.4161f;
	iLocal_103[203] = 204;
	fLocal_67[203] = 89298f;
	iLocal_153[203] = joaat("surfer");
	Local_128[16 /*3*/] = { -197.4503f, 6228.776f, 30.9489f };
	fLocal_78[16] = 0f;
	fLocal_79[16] = 0f;
	fLocal_80[16] = 0.4072f;
	fLocal_81[16] = 0.9133f;
	iLocal_154[16] = joaat("minivan");
	Local_127[204 /*3*/] = { -200.7223f, 6184.806f, 31.0163f };
	fLocal_63[204] = 0.0039f;
	fLocal_64[204] = -0.0021f;
	fLocal_65[204] = 0.9257f;
	fLocal_66[204] = 0.3782f;
	iLocal_103[204] = 205;
	fLocal_67[204] = 90024f;
	iLocal_153[204] = joaat("journey");
	Local_128[17 /*3*/] = { -238.7583f, 6196.2285f, 31.1881f };
	fLocal_78[17] = 0f;
	fLocal_79[17] = 0f;
	fLocal_80[17] = -0.3988f;
	fLocal_81[17] = 0.917f;
	iLocal_154[17] = joaat("minivan");
	Local_127[206 /*3*/] = { -200.2096f, 6169.2295f, 31.5074f };
	fLocal_63[206] = -0.0012f;
	fLocal_64[206] = -0.0042f;
	fLocal_65[206] = -0.3741f;
	fLocal_66[206] = 0.9274f;
	iLocal_103[206] = 207;
	fLocal_67[206] = 91080f;
	iLocal_153[206] = joaat("mule");
	Local_127[207 /*3*/] = { -219.4954f, 6166.0654f, 31.0585f };
	fLocal_63[207] = 0.0039f;
	fLocal_64[207] = -0.0023f;
	fLocal_65[207] = 0.9082f;
	fLocal_66[207] = 0.4186f;
	iLocal_103[207] = 208;
	fLocal_67[207] = 91278f;
	iLocal_153[207] = joaat("minivan");
	Local_127[208 /*3*/] = { -242.7871f, 6133.8745f, 31.0087f };
	fLocal_63[208] = -0.0016f;
	fLocal_64[208] = -0.0034f;
	fLocal_65[208] = -0.3642f;
	fLocal_66[208] = 0.9313f;
	iLocal_103[208] = 209;
	fLocal_67[208] = 91542f;
	iLocal_153[208] = joaat("minivan");
	Local_128[18 /*3*/] = { -227.085f, 6120.908f, 31.4034f };
	fLocal_78[18] = 0f;
	fLocal_79[18] = 0f;
	fLocal_80[18] = 0.9135f;
	fLocal_81[18] = 0.4068f;
	iLocal_154[18] = joaat("minivan");
	Local_127[209 /*3*/] = { -273.2502f, 6094.9175f, 31.3158f };
	fLocal_63[209] = -0.0014f;
	fLocal_64[209] = -0.0017f;
	fLocal_65[209] = -0.3911f;
	fLocal_66[209] = 0.9203f;
	iLocal_103[209] = 210;
	fLocal_67[209] = 92664f;
	iLocal_153[209] = joaat("mule");
	Local_128[19 /*3*/] = { -268.2806f, 6066.7236f, 31.4731f };
	fLocal_78[19] = 0f;
	fLocal_79[19] = 0f;
	fLocal_80[19] = -0.5672f;
	fLocal_81[19] = 0.8236f;
	iLocal_154[19] = joaat("minivan");
	Local_127[211 /*3*/] = { -320.4204f, 6065.1772f, 31.4226f };
	fLocal_63[211] = 0.0022f;
	fLocal_64[211] = -0.001f;
	fLocal_65[211] = 0.9238f;
	fLocal_66[211] = 0.3829f;
	iLocal_103[211] = 212;
	fLocal_67[211] = 93918f;
	iLocal_153[211] = joaat("mule");
	Local_128[20 /*3*/] = { -343.3658f, 6076.2744f, 31.2703f };
	fLocal_78[20] = 0f;
	fLocal_79[20] = 0f;
	fLocal_80[20] = 0.9055f;
	fLocal_81[20] = -0.4243f;
	iLocal_154[20] = joaat("minivan");
	Local_127[212 /*3*/] = { -342.7433f, 6026.788f, 30.9903f };
	fLocal_63[212] = -0.0027f;
	fLocal_64[212] = -0.0012f;
	fLocal_65[212] = -0.3927f;
	fLocal_66[212] = 0.9197f;
	iLocal_103[212] = 213;
	fLocal_67[212] = 94908f;
	iLocal_153[212] = joaat("minivan");
	Local_127[213 /*3*/] = { -345.5276f, 6024.0957f, 30.8184f };
	fLocal_63[213] = -0.0024f;
	fLocal_64[213] = 0.0009f;
	fLocal_65[213] = -0.332f;
	fLocal_66[213] = 0.9433f;
	iLocal_103[213] = 214;
	fLocal_67[213] = 95238f;
	iLocal_153[213] = joaat("surfer");
	Local_127[214 /*3*/] = { -366.1345f, 6019.9106f, 31.0597f };
	fLocal_63[214] = 0.0047f;
	fLocal_64[214] = 0.0006f;
	fLocal_65[214] = 0.9468f;
	fLocal_66[214] = 0.3219f;
	iLocal_103[214] = 215;
	fLocal_67[214] = 95436f;
	iLocal_153[214] = joaat("journey");
	Local_127[215 /*3*/] = { -386.347f, 5988.0854f, 31.3453f };
	fLocal_63[215] = -0.0057f;
	fLocal_64[215] = -0.006f;
	fLocal_65[215] = -0.3475f;
	fLocal_66[215] = 0.9376f;
	iLocal_103[215] = 216;
	fLocal_67[215] = 96228f;
	iLocal_153[215] = joaat("minivan");
	Local_127[216 /*3*/] = { -397.9482f, 6021.191f, 31.1729f };
	fLocal_63[216] = -0.0166f;
	fLocal_64[216] = -0.0055f;
	fLocal_65[216] = 0.9252f;
	fLocal_66[216] = -0.3791f;
	iLocal_103[216] = 217;
	fLocal_67[216] = 96426f;
	iLocal_153[216] = joaat("minivan");
	Local_127[217 /*3*/] = { -396.4938f, 5985.07f, 31.6773f };
	fLocal_63[217] = 0.001f;
	fLocal_64[217] = 0.0024f;
	fLocal_65[217] = 0.9301f;
	fLocal_66[217] = 0.3674f;
	iLocal_103[217] = 218;
	fLocal_67[217] = 96492f;
	iLocal_153[217] = joaat("mule");
	Local_127[218 /*3*/] = { -385.9991f, 5979.5903f, 31.8351f };
	fLocal_63[218] = -0.0034f;
	fLocal_64[218] = 0.0014f;
	fLocal_65[218] = -0.3756f;
	fLocal_66[218] = 0.9268f;
	iLocal_103[218] = 219;
	fLocal_67[218] = 96558f;
	iLocal_153[218] = joaat("mule");
	Local_127[219 /*3*/] = { -425.9279f, 5933.403f, 32.0897f };
	fLocal_63[219] = -0.0076f;
	fLocal_64[219] = 0.0026f;
	fLocal_65[219] = -0.2957f;
	fLocal_66[219] = 0.9553f;
	iLocal_103[219] = 220;
	fLocal_67[219] = 97812f;
	iLocal_153[219] = joaat("minivan");
	Local_127[221 /*3*/] = { -450.5932f, 5901.5835f, 32.5169f };
	fLocal_63[221] = -0.007f;
	fLocal_64[221] = 0.0019f;
	fLocal_65[221] = -0.2731f;
	fLocal_66[221] = 0.962f;
	iLocal_103[221] = 222;
	fLocal_67[221] = 98736f;
	iLocal_153[221] = joaat("surfer");
	Local_127[224 /*3*/] = { -451.5227f, 5899.928f, 33.1721f };
	fLocal_63[224] = -0.0071f;
	fLocal_64[224] = 0.0025f;
	fLocal_65[224] = -0.3279f;
	fLocal_66[224] = 0.9447f;
	iLocal_103[224] = 225;
	fLocal_67[224] = 99264f;
	iLocal_153[224] = joaat("mule");
	Local_127[227 /*3*/] = { -494.7882f, 5834.927f, 33.9774f };
	fLocal_63[227] = -0.0086f;
	fLocal_64[227] = 0.0026f;
	fLocal_65[227] = -0.2869f;
	fLocal_66[227] = 0.9579f;
	iLocal_103[227] = 228;
	fLocal_67[227] = 100584f;
	iLocal_153[227] = joaat("minivan");
	Local_127[228 /*3*/] = { -512.1516f, 5804.1235f, 34.6696f };
	fLocal_63[228] = -0.0113f;
	fLocal_64[228] = -0.0016f;
	fLocal_65[228] = -0.2395f;
	fLocal_66[228] = 0.9708f;
	iLocal_103[228] = 229;
	fLocal_67[228] = 101310f;
	iLocal_153[228] = joaat("journey");
	Local_127[230 /*3*/] = { -522.2422f, 5783.059f, 35.6767f };
	fLocal_63[230] = -0.0124f;
	fLocal_64[230] = -0.0021f;
	fLocal_65[230] = -0.1982f;
	fLocal_66[230] = 0.9801f;
	iLocal_103[230] = 231;
	fLocal_67[230] = 102366f;
	iLocal_153[230] = joaat("mule");
	Local_127[231 /*3*/] = { -544.503f, 5760.5815f, 35.6938f };
	fLocal_63[231] = 0.0025f;
	fLocal_64[231] = 0.0112f;
	fLocal_65[231] = 0.9733f;
	fLocal_66[231] = 0.2292f;
	iLocal_103[231] = 232;
	fLocal_67[231] = 102630f;
	iLocal_153[231] = joaat("surfer");
	Local_127[232 /*3*/] = { -540.8187f, 5768.0986f, 35.9515f };
	fLocal_63[232] = 0.0016f;
	fLocal_64[232] = 0.0081f;
	fLocal_65[232] = 0.9812f;
	fLocal_66[232] = 0.1929f;
	iLocal_103[232] = 233;
	fLocal_67[232] = 102828f;
	iLocal_153[232] = joaat("mule");
	Local_127[233 /*3*/] = { -540.1239f, 5740.1914f, 36.2707f };
	fLocal_63[233] = -0.0113f;
	fLocal_64[233] = 0.002f;
	fLocal_65[233] = -0.193f;
	fLocal_66[233] = 0.9811f;
	iLocal_103[233] = 234;
	fLocal_67[233] = 104346f;
	iLocal_153[233] = joaat("minivan");
	Local_127[234 /*3*/] = { -567.8047f, 5677.111f, 37.7006f };
	fLocal_63[234] = -0.01f;
	fLocal_64[234] = -0.0015f;
	fLocal_65[234] = -0.2147f;
	fLocal_66[234] = 0.9766f;
	iLocal_103[234] = 235;
	fLocal_67[234] = 104676f;
	iLocal_153[234] = joaat("journey");
	Local_127[235 /*3*/] = { -578.9499f, 5679.6934f, 38.2365f };
	fLocal_63[235] = 0.006f;
	fLocal_64[235] = 0.0086f;
	fLocal_65[235] = 0.9778f;
	fLocal_66[235] = 0.2094f;
	iLocal_103[235] = 236;
	fLocal_67[235] = 104676f;
	iLocal_153[235] = joaat("mule");
	Local_127[236 /*3*/] = { -582.9236f, 5643.653f, 38.4277f };
	fLocal_63[236] = -0.0074f;
	fLocal_64[236] = -0.0028f;
	fLocal_65[236] = -0.2457f;
	fLocal_66[236] = 0.9693f;
	iLocal_103[236] = 237;
	fLocal_67[236] = 105534f;
	iLocal_153[236] = joaat("minivan");
	Local_127[237 /*3*/] = { -603.3911f, 5611.917f, 38.8401f };
	fLocal_63[237] = -0.0034f;
	fLocal_64[237] = -0.0034f;
	fLocal_65[237] = -0.3058f;
	fLocal_66[237] = 0.9521f;
	iLocal_103[237] = 238;
	fLocal_67[237] = 106458f;
	iLocal_153[237] = joaat("minivan");
	Local_127[238 /*3*/] = { -617.3054f, 5612.0728f, 39.1315f };
	fLocal_63[238] = 0.0027f;
	fLocal_64[238] = 0.0034f;
	fLocal_65[238] = 0.9518f;
	fLocal_66[238] = 0.3068f;
	iLocal_103[238] = 239;
	fLocal_67[238] = 106524f;
	iLocal_153[238] = joaat("mule");
	Local_127[239 /*3*/] = { -631.8846f, 5579.895f, 38.7442f };
	fLocal_63[239] = 0.0031f;
	fLocal_64[239] = -0.0014f;
	fLocal_65[239] = -0.4165f;
	fLocal_66[239] = 0.9091f;
	iLocal_103[239] = 240;
	fLocal_67[239] = 107382f;
	iLocal_153[239] = joaat("journey");
	Local_127[240 /*3*/] = { -652.1945f, 5563.6494f, 38.9956f };
	fLocal_63[240] = 0.0059f;
	fLocal_64[240] = -0.0028f;
	fLocal_65[240] = -0.4297f;
	fLocal_66[240] = 0.9029f;
	iLocal_103[240] = 241;
	fLocal_67[240] = 107910f;
	iLocal_153[240] = joaat("mule");
	Local_127[242 /*3*/] = { -681.4705f, 5543.0757f, 37.919f };
	fLocal_63[242] = 0.0095f;
	fLocal_64[242] = -0.01f;
	fLocal_65[242] = -0.4741f;
	fLocal_66[242] = 0.8803f;
	iLocal_103[242] = 243;
	fLocal_67[242] = 108702f;
	iLocal_153[242] = joaat("journey");
	Local_127[243 /*3*/] = { -698.1723f, 5532.0845f, 37.6632f };
	fLocal_63[243] = 0.009f;
	fLocal_64[243] = -0.01f;
	fLocal_65[243] = -0.4885f;
	fLocal_66[243] = 0.8724f;
	iLocal_103[243] = 244;
	fLocal_67[243] = 109164f;
	iLocal_153[243] = joaat("mule");
	Local_127[244 /*3*/] = { -723.4635f, 5515.5347f, 36.1629f };
	fLocal_63[244] = 0.0138f;
	fLocal_64[244] = -0.0127f;
	fLocal_65[244] = -0.4765f;
	fLocal_66[244] = 0.879f;
	iLocal_103[244] = 245;
	fLocal_67[244] = 111276f;
	iLocal_153[244] = joaat("surfer");
	Local_127[245 /*3*/] = { -771.7394f, 5485.4854f, 34.3527f };
	fLocal_63[245] = 0.0092f;
	fLocal_64[245] = -0.0046f;
	fLocal_65[245] = -0.4793f;
	fLocal_66[245] = 0.8776f;
	iLocal_103[245] = 246;
	fLocal_67[245] = 111408f;
	iLocal_153[245] = joaat("journey");
	Local_127[246 /*3*/] = { -780.158f, 5479.9624f, 34.1691f };
	fLocal_63[246] = 0.0085f;
	fLocal_64[246] = -0.0063f;
	fLocal_65[246] = -0.4854f;
	fLocal_66[246] = 0.8742f;
	iLocal_103[246] = 247;
	fLocal_67[246] = 111606f;
	iLocal_153[246] = joaat("minivan");
	Local_127[247 /*3*/] = { -751.5074f, 5512.3467f, 35.3637f };
	fLocal_63[247] = -0.0086f;
	fLocal_64[247] = -0.0153f;
	fLocal_65[247] = 0.875f;
	fLocal_66[247] = 0.4838f;
	iLocal_103[247] = 248;
	fLocal_67[247] = 111870f;
	iLocal_153[247] = joaat("minivan");
	Local_127[248 /*3*/] = { -782.3395f, 5478.522f, 34.5592f };
	fLocal_63[248] = 0.0088f;
	fLocal_64[248] = -0.0068f;
	fLocal_65[248] = -0.4877f;
	fLocal_66[248] = 0.8729f;
	iLocal_103[248] = 249;
	fLocal_67[248] = 111936f;
	iLocal_153[248] = joaat("mule");
	Local_127[249 /*3*/] = { -797.4579f, 5469.0874f, 33.8033f };
	fLocal_63[249] = 0.0048f;
	fLocal_64[249] = -0.0049f;
	fLocal_65[249] = -0.447f;
	fLocal_66[249] = 0.8945f;
	iLocal_103[249] = 250;
	fLocal_67[249] = 112134f;
	iLocal_153[249] = joaat("minivan");
	Local_127[250 /*3*/] = { -802.7859f, 5465.8076f, 33.697f };
	fLocal_63[250] = 0.0022f;
	fLocal_64[250] = -0.0034f;
	fLocal_65[250] = -0.463f;
	fLocal_66[250] = 0.8864f;
	iLocal_103[250] = 251;
	fLocal_67[250] = 112530f;
	iLocal_153[250] = joaat("journey");
	Local_127[253 /*3*/] = { -859.1169f, 5432.9985f, 34.5357f };
	fLocal_63[253] = -0.0169f;
	fLocal_64[253] = 0.0056f;
	fLocal_65[253] = -0.5386f;
	fLocal_66[253] = 0.8424f;
	iLocal_103[253] = 254;
	fLocal_67[253] = 113652f;
	iLocal_153[253] = joaat("minivan");
	Local_128[21 /*3*/] = { -860.6396f, 5415.5566f, 34.4756f };
	fLocal_78[21] = 0.0733f;
	fLocal_79[21] = 0.047f;
	fLocal_80[21] = 0.7841f;
	fLocal_81[21] = -0.6145f;
	iLocal_154[21] = joaat("emperor");
	Local_127[255 /*3*/] = { -886.913f, 5421.8223f, 35.2647f };
	fLocal_63[255] = -0.0193f;
	fLocal_64[255] = 0.0078f;
	fLocal_65[255] = -0.5541f;
	fLocal_66[255] = 0.8322f;
	iLocal_103[255] = 256;
	fLocal_67[255] = 114312f;
	iLocal_153[255] = joaat("emperor");
	Local_127[256 /*3*/] = { -902.929f, 5422.261f, 36.246f };
	fLocal_63[256] = -0.0162f;
	fLocal_64[256] = 0.0127f;
	fLocal_65[256] = -0.6064f;
	fLocal_66[256] = 0.7949f;
	iLocal_103[256] = 257;
	fLocal_67[256] = 114708f;
	iLocal_153[256] = joaat("journey");
	Local_127[257 /*3*/] = { -915.9521f, 5418.475f, 36.7077f };
	fLocal_63[257] = -0.0183f;
	fLocal_64[257] = 0.0146f;
	fLocal_65[257] = -0.6257f;
	fLocal_66[257] = 0.7797f;
	iLocal_103[257] = 258;
	fLocal_67[257] = 114972f;
	iLocal_153[257] = joaat("surfer");
	Local_127[258 /*3*/] = { -928.0029f, 5414.97f, 37.9183f };
	fLocal_63[258] = -0.0186f;
	fLocal_64[258] = 0.0139f;
	fLocal_65[258] = -0.6015f;
	fLocal_66[258] = 0.7985f;
	iLocal_103[258] = 259;
	fLocal_67[258] = 115236f;
	iLocal_153[258] = joaat("mule");
	Local_127[259 /*3*/] = { -933.9056f, 5421.649f, 37.2376f };
	fLocal_63[259] = 0.017f;
	fLocal_64[259] = 0.016f;
	fLocal_65[259] = 0.7839f;
	fLocal_66[259] = 0.6205f;
	iLocal_103[259] = 260;
	fLocal_67[259] = 115236f;
	iLocal_153[259] = joaat("emperor");
	Local_127[261 /*3*/] = { -1004.6003f, 5376.787f, 41.1807f };
	fLocal_63[261] = -0.0222f;
	fLocal_64[261] = 0.0058f;
	fLocal_65[261] = -0.4104f;
	fLocal_66[261] = 0.9116f;
	iLocal_103[261] = 262;
	fLocal_67[261] = 117150f;
	iLocal_153[261] = joaat("emperor");
	Local_127[263 /*3*/] = { -1064.3765f, 5337.0894f, 44.8801f };
	fLocal_63[263] = 0.0202f;
	fLocal_64[263] = 0.0325f;
	fLocal_65[263] = 0.8517f;
	fLocal_66[263] = 0.5226f;
	iLocal_103[263] = 264;
	fLocal_67[263] = 118800f;
	iLocal_153[263] = joaat("emperor");
	Local_127[264 /*3*/] = { -1033.5538f, 5346.6406f, 43.3626f };
	fLocal_63[264] = -0.0208f;
	fLocal_64[264] = 0.0066f;
	fLocal_65[264] = -0.3975f;
	fLocal_66[264] = 0.9173f;
	iLocal_103[264] = 265;
	fLocal_67[264] = 119394f;
	iLocal_153[264] = joaat("minivan");
	Local_127[265 /*3*/] = { -1098.0574f, 5324.034f, 47.8281f };
	fLocal_63[265] = 0.0294f;
	fLocal_64[265] = 0.0288f;
	fLocal_65[265] = 0.8094f;
	fLocal_66[265] = 0.5858f;
	iLocal_103[265] = 266;
	fLocal_67[265] = 119592f;
	iLocal_153[265] = joaat("emperor");
	Local_127[268 /*3*/] = { -1146.1438f, 5276.428f, 53.3106f };
	fLocal_63[268] = -0.0174f;
	fLocal_64[268] = 0.0065f;
	fLocal_65[268] = -0.3905f;
	fLocal_66[268] = 0.9204f;
	iLocal_103[268] = 269;
	fLocal_67[268] = 121176f;
	iLocal_153[268] = joaat("mule");
	Local_127[269 /*3*/] = { -1167.2081f, 5261.193f, 53.1992f };
	fLocal_63[269] = 0.0181f;
	fLocal_64[269] = -0.0049f;
	fLocal_65[269] = -0.4946f;
	fLocal_66[269] = 0.8689f;
	iLocal_103[269] = 270;
	fLocal_67[269] = 121770f;
	iLocal_153[269] = joaat("minivan");
	Local_127[270 /*3*/] = { -1181.1008f, 5255.3423f, 52.4125f };
	fLocal_63[270] = 0.0222f;
	fLocal_64[270] = -0.0182f;
	fLocal_65[270] = -0.5681f;
	fLocal_66[270] = 0.8225f;
	iLocal_103[270] = 271;
	fLocal_67[270] = 122166f;
	iLocal_153[270] = joaat("journey");
	Local_127[273 /*3*/] = { -1194.3643f, 5265.0225f, 51.7508f };
	fLocal_63[273] = -0.0139f;
	fLocal_64[273] = -0.0305f;
	fLocal_65[273] = 0.7712f;
	fLocal_66[273] = 0.6357f;
	iLocal_103[273] = 274;
	fLocal_67[273] = 122628f;
	iLocal_153[273] = joaat("minivan");
	Local_127[274 /*3*/] = { -1231.9467f, 5253.2534f, 49.5905f };
	fLocal_63[274] = -0.004f;
	fLocal_64[274] = 0.0105f;
	fLocal_65[274] = 0.7549f;
	fLocal_66[274] = -0.6557f;
	iLocal_103[274] = 275;
	fLocal_67[274] = 123222f;
	iLocal_153[274] = joaat("emperor");
	Local_127[275 /*3*/] = { -1240.9534f, 5255.0864f, 49.8296f };
	fLocal_63[275] = 0.0025f;
	fLocal_64[275] = 0.0004f;
	fLocal_65[275] = 0.7601f;
	fLocal_66[275] = -0.6498f;
	iLocal_103[275] = 276;
	fLocal_67[275] = 123486f;
	iLocal_153[275] = joaat("journey");
	Local_127[276 /*3*/] = { -1243.1129f, 5255.4033f, 49.8544f };
	fLocal_63[276] = -0.0025f;
	fLocal_64[276] = 0.0006f;
	fLocal_65[276] = 0.7863f;
	fLocal_66[276] = -0.6178f;
	iLocal_103[276] = 277;
	fLocal_67[276] = 124014f;
	iLocal_153[276] = joaat("minivan");
	Local_127[281 /*3*/] = { -1395.8094f, 5080.688f, 61.3721f };
	fLocal_63[281] = -0.0031f;
	fLocal_64[281] = -0.0056f;
	fLocal_65[281] = -0.4942f;
	fLocal_66[281] = 0.8693f;
	iLocal_103[281] = 282;
	fLocal_67[281] = 129228f;
	iLocal_153[281] = joaat("mule");
	Local_127[282 /*3*/] = { -1344.0863f, 5116.772f, 60.9809f };
	fLocal_63[282] = 0.0056f;
	fLocal_64[282] = -0.0028f;
	fLocal_65[282] = -0.4235f;
	fLocal_66[282] = 0.9059f;
	iLocal_103[282] = 283;
	fLocal_67[282] = 129426f;
	iLocal_153[282] = joaat("emperor");
	Local_127[283 /*3*/] = { -1410.3035f, 5072.49f, 60.5543f };
	fLocal_63[283] = -0.0072f;
	fLocal_64[283] = -0.0075f;
	fLocal_65[283] = -0.4753f;
	fLocal_66[283] = 0.8798f;
	iLocal_103[283] = 284;
	fLocal_67[283] = 131208f;
	iLocal_153[283] = joaat("emperor");
	Local_127[285 /*3*/] = { -1465.6652f, 5046.791f, 61.7431f };
	fLocal_63[285] = 0.0046f;
	fLocal_64[285] = 0.01f;
	fLocal_65[285] = 0.8994f;
	fLocal_66[285] = 0.4369f;
	iLocal_103[285] = 286;
	fLocal_67[285] = 131934f;
	iLocal_153[285] = joaat("minivan");
	Local_127[287 /*3*/] = { -1526.0546f, 4986.172f, 62.3233f };
	fLocal_63[287] = 0.001f;
	fLocal_64[287] = -0.0075f;
	fLocal_65[287] = 0.9346f;
	fLocal_66[287] = 0.3556f;
	iLocal_103[287] = 288;
	fLocal_67[287] = 133320f;
	iLocal_153[287] = joaat("journey");
	Local_127[289 /*3*/] = { -1522.0673f, 4982.613f, 61.9106f };
	fLocal_63[289] = 0.0017f;
	fLocal_64[289] = -0.0088f;
	fLocal_65[289] = 0.9479f;
	fLocal_66[289] = 0.3184f;
	iLocal_103[289] = 290;
	fLocal_67[289] = 133716f;
	iLocal_153[289] = joaat("emperor");
	Local_128[22 /*3*/] = { -1545.1647f, 4929.5005f, 61.3231f };
	fLocal_78[22] = 0f;
	fLocal_79[22] = 0.0255f;
	fLocal_80[22] = -0.4983f;
	fLocal_81[22] = 0.8666f;
	iLocal_154[22] = joaat("minivan");
	Local_128[23 /*3*/] = { -1533.8358f, 4941.946f, 61.2712f };
	fLocal_78[23] = 0.0113f;
	fLocal_79[23] = -0.0309f;
	fLocal_80[23] = 0.9258f;
	fLocal_81[23] = -0.3765f;
	iLocal_154[23] = joaat("emperor");
	Local_127[294 /*3*/] = { -1586.3225f, 4902.927f, 61.0933f };
	fLocal_63[294] = -0.0001f;
	fLocal_64[294] = -0.0062f;
	fLocal_65[294] = -0.2908f;
	fLocal_66[294] = 0.9568f;
	iLocal_103[294] = 295;
	fLocal_67[294] = 135762f;
	iLocal_153[294] = joaat("journey");
	Local_127[296 /*3*/] = { -1594.7332f, 4892.088f, 60.943f };
	fLocal_63[296] = 0.0014f;
	fLocal_64[296] = -0.0052f;
	fLocal_65[296] = -0.3516f;
	fLocal_66[296] = 0.9361f;
	iLocal_103[296] = 297;
	fLocal_67[296] = 136158f;
	iLocal_153[296] = joaat("emperor");
	Local_127[298 /*3*/] = { -1623.1863f, 4865.9243f, 60.3676f };
	fLocal_63[298] = 0.0022f;
	fLocal_64[298] = -0.0013f;
	fLocal_65[298] = -0.3832f;
	fLocal_66[298] = 0.9236f;
	iLocal_103[298] = 299;
	fLocal_67[298] = 137082f;
	iLocal_153[298] = joaat("emperor");
	Local_127[299 /*3*/] = { -1624.2852f, 4863.7334f, 60.733f };
	fLocal_63[299] = 0.0023f;
	fLocal_64[299] = -0.001f;
	fLocal_65[299] = -0.4036f;
	fLocal_66[299] = 0.9149f;
	iLocal_103[299] = 300;
	fLocal_67[299] = 137412f;
	iLocal_153[299] = joaat("journey");
	Local_127[301 /*3*/] = { -1657.7526f, 4832.572f, 60.5535f };
	fLocal_63[301] = 0.0013f;
	fLocal_64[301] = -0.0017f;
	fLocal_65[301] = -0.4077f;
	fLocal_66[301] = 0.9131f;
	iLocal_103[301] = 302;
	fLocal_67[301] = 138336f;
	iLocal_153[301] = joaat("minivan");
	Local_127[304 /*3*/] = { -1673.6324f, 4818.7017f, 60.5406f };
	fLocal_63[304] = 0.0021f;
	fLocal_64[304] = -0.0057f;
	fLocal_65[304] = -0.4375f;
	fLocal_66[304] = 0.8992f;
	iLocal_103[304] = 305;
	fLocal_67[304] = 139986f;
	iLocal_153[304] = joaat("minivan");
	Local_127[305 /*3*/] = { -1719.6976f, 4782.9854f, 57.8986f };
	fLocal_63[305] = 0.0181f;
	fLocal_64[305] = -0.0128f;
	fLocal_65[305] = -0.4471f;
	fLocal_66[305] = 0.8942f;
	iLocal_103[305] = 306;
	fLocal_67[305] = 140184f;
	iLocal_153[305] = joaat("emperor");
	Local_127[306 /*3*/] = { -1729.2485f, 4775.8354f, 57.803f };
	fLocal_63[306] = 0.0131f;
	fLocal_64[306] = -0.0119f;
	fLocal_65[306] = -0.4648f;
	fLocal_66[306] = 0.8853f;
	iLocal_103[306] = 307;
	fLocal_67[306] = 140778f;
	iLocal_153[306] = joaat("minivan");
	Local_127[308 /*3*/] = { -1761.8721f, 4747.9673f, 56.8266f };
	fLocal_63[308] = -0.0002f;
	fLocal_64[308] = -0.0081f;
	fLocal_65[308] = -0.4103f;
	fLocal_66[308] = 0.9119f;
	iLocal_103[308] = 309;
	fLocal_67[308] = 141306f;
	iLocal_153[308] = joaat("emperor");
	Local_127[309 /*3*/] = { -1771.1117f, 4740.0356f, 56.8407f };
	fLocal_63[309] = -0.0029f;
	fLocal_64[309] = -0.0035f;
	fLocal_65[309] = -0.4186f;
	fLocal_66[309] = 0.9081f;
	iLocal_103[309] = 310;
	fLocal_67[309] = 141570f;
	iLocal_153[309] = joaat("minivan");
	Local_127[310 /*3*/] = { -1771.1819f, 4739.965f, 56.7243f };
	fLocal_63[310] = -0.0029f;
	fLocal_64[310] = -0.0037f;
	fLocal_65[310] = -0.4187f;
	fLocal_66[310] = 0.9081f;
	iLocal_103[310] = 311;
	fLocal_67[310] = 141834f;
	iLocal_153[310] = joaat("emperor");
	Local_127[313 /*3*/] = { -1815.7078f, 4695.482f, 56.7461f };
	fLocal_63[313] = -0.0019f;
	fLocal_64[313] = -0.0041f;
	fLocal_65[313] = -0.3735f;
	fLocal_66[313] = 0.9276f;
	iLocal_103[313] = 314;
	fLocal_67[313] = 142956f;
	iLocal_153[313] = joaat("emperor");
	Local_127[318 /*3*/] = { -1862.8253f, 4649.1343f, 56.8577f };
	fLocal_63[318] = -0.0019f;
	fLocal_64[318] = -0.0041f;
	fLocal_65[318] = -0.3536f;
	fLocal_66[318] = 0.9354f;
	iLocal_103[318] = 319;
	fLocal_67[318] = 144540f;
	iLocal_153[318] = joaat("minivan");
	Local_127[319 /*3*/] = { -1864.9409f, 4646.207f, 56.5935f };
	fLocal_63[319] = -0.0015f;
	fLocal_64[319] = -0.0043f;
	fLocal_65[319] = -0.3406f;
	fLocal_66[319] = 0.9402f;
	iLocal_103[319] = 320;
	fLocal_67[319] = 144738f;
	iLocal_153[319] = joaat("minivan");
	Local_127[323 /*3*/] = { -1909.1554f, 4602.009f, 56.827f };
	fLocal_63[323] = -0.0017f;
	fLocal_64[323] = -0.0009f;
	fLocal_65[323] = -0.3819f;
	fLocal_66[323] = 0.9242f;
	iLocal_103[323] = 324;
	fLocal_67[323] = 146190f;
	iLocal_153[323] = joaat("journey");
	Local_127[329 /*3*/] = { -1984.5195f, 4527.219f, 56.8599f };
	fLocal_63[329] = -0.0017f;
	fLocal_64[329] = -0.0037f;
	fLocal_65[329] = -0.3489f;
	fLocal_66[329] = 0.9372f;
	iLocal_103[329] = 330;
	fLocal_67[329] = 149226f;
	iLocal_153[329] = joaat("minivan");
	Local_127[333 /*3*/] = { -2026.8411f, 4484.115f, 56.8037f };
	fLocal_63[333] = -0.0035f;
	fLocal_64[333] = -0.0029f;
	fLocal_65[333] = -0.4273f;
	fLocal_66[333] = 0.9041f;
	iLocal_103[333] = 334;
	fLocal_67[333] = 151800f;
	iLocal_153[333] = joaat("minivan");
	Local_129[3 /*3*/] = { -526.2304f, 5788.813f, 34.7703f };
	fLocal_72[3] = 0.0075f;
	fLocal_73[3] = 0.0489f;
	fLocal_74[3] = 0.9749f;
	fLocal_75[3] = 0.2171f;
	iLocal_106[3] = 403;
	fLocal_76[3] = 102000f;
	fLocal_77[3] = 1f;
	iLocal_155[3] = joaat("hexer");
	Local_129[4 /*3*/] = { -523.5488f, 5790.636f, 34.7089f };
	fLocal_72[4] = 0.0081f;
	fLocal_73[4] = 0.0484f;
	fLocal_74[4] = 0.9763f;
	fLocal_75[4] = 0.2109f;
	iLocal_106[4] = 404;
	fLocal_76[4] = 102000f;
	fLocal_77[4] = 1f;
	iLocal_155[4] = joaat("hexer");
	Local_129[5 /*3*/] = { -527.1961f, 5790.407f, 34.7552f };
	fLocal_72[5] = 0.0115f;
	fLocal_73[5] = 0.0382f;
	fLocal_74[5] = 0.9777f;
	fLocal_75[5] = 0.206f;
	iLocal_106[5] = 405;
	fLocal_76[5] = 102000f;
	fLocal_77[5] = 1f;
	iLocal_155[5] = joaat("hexer");
}

void func_615(char* sParam0, int iParam1, bool bParam2, bool bParam3)//Position - 0x8317D
{
	struct<3> Var0;
	StringCopy(&cLocal_143, sParam0, 64);
	iLocal_39 = 1;
	iLocal_44 = 0;
	iLocal_110 = 0;
	iLocal_111 = 0;
	iLocal_112 = 0;
	iLocal_113 = iParam1;
	iLocal_114 = 0;
	iLocal_115 = 0;
	iLocal_116 = 0;
	iLocal_120 = 0;
	iLocal_123 = 0;
	iLocal_121 = -1;
	iLocal_122 = -1;
	iLocal_124 = 0;
	iLocal_125 = 0;
	fLocal_98 = 0f;
	fLocal_99 = 0f;
	fLocal_84 = 0f;
	iLocal_45 = 0;
	if (PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()))
	{
		Var0 = { ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true) };
		Local_131.f_0 = (Var0.f_0 - 100f);
		Local_131.f_1 = (Var0.f_1 - 100f);
		Local_131.f_2 = (Var0.f_2 - 100f);
		Local_132.f_0 = (Var0.f_0 + 100f);
		Local_132.f_1 = (Var0.f_1 + 100f);
		Local_132.f_2 = (Var0.f_2 + 100f);
		PATHFIND::SET_ROADS_IN_AREA(Local_131, Local_132, false, false);
		if (bParam2)
		{
			MISC::CLEAR_AREA_OF_VEHICLES(Var0, 500f, false, false, false, false, false, false, 0);
		}
	}
	PED::ADD_RELATIONSHIP_GROUP("rgh_traffic", &iLocal_152);
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
	func_616();
}

void func_616()//Position - 0x832A1
{
	int iVar0;
	iVar0 = 0;
	while (iVar0 < 340)
	{
		iLocal_159[iVar0] = 0;
		Local_127[iVar0 /*3*/] = { 0f, 0f, 0f };
		fLocal_63[iVar0] = 0f;
		fLocal_64[iVar0] = 0f;
		fLocal_65[iVar0] = 0f;
		fLocal_66[iVar0] = 0f;
		iLocal_103[iVar0] = 0;
		fLocal_67[iVar0] = 0f;
		iLocal_104[iVar0] = 0;
		iLocal_153[iVar0] = 0;
		iLocal_105[iVar0] = 0;
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 12)
	{
		iLocal_160[iVar0] = 0;
		iVar0++;
	}
	iLocal_110 = 0;
	iVar0 = 0;
	while (iVar0 < 25)
	{
		iLocal_161[iVar0] = 0;
		Local_128[iVar0 /*3*/] = { 0f, 0f, 0f };
		fLocal_78[iVar0] = 0f;
		fLocal_79[iVar0] = 0f;
		fLocal_80[iVar0] = 0f;
		fLocal_81[iVar0] = 0f;
		iLocal_109[iVar0] = 0;
		iLocal_154[iVar0] = 0;
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 10)
	{
		iLocal_163[iVar0] = 0;
		iVar0++;
	}
	iLocal_112 = 0;
	iVar0 = 0;
	while (iVar0 < 60)
	{
		iLocal_162[iVar0] = 0;
		Local_129[iVar0 /*3*/] = { 0f, 0f, 0f };
		fLocal_72[iVar0] = 0f;
		fLocal_73[iVar0] = 0f;
		fLocal_74[iVar0] = 0f;
		fLocal_75[iVar0] = 0f;
		iLocal_106[iVar0] = 0;
		fLocal_76[iVar0] = 0f;
		iLocal_107[iVar0] = 0;
		iLocal_155[iVar0] = 0;
		iLocal_108[iVar0] = 0;
		iVar0++;
	}
	iLocal_111 = 0;
	iLocal_114 = 0;
	iLocal_117 = 0;
	iLocal_118 = 0;
	iLocal_119 = 0;
}

void func_622(bool bParam0, bool bParam1)//Position - 0x835B8
{
	if (!MISC::IS_STRING_NULL_OR_EMPTY(&cLocal_143))
	{
		iLocal_45 = 0;
		__LIB_15__::func_912();
		PED::REMOVE_RELATIONSHIP_GROUP(iLocal_152);
		PATHFIND::SET_ROADS_BACK_TO_ORIGINAL(-9999f, -9999f, -9999f, 9999f, 9999f, 9999f, 1);
		if (PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()))
		{
			PLAYER::SET_AIR_DRAG_MULTIPLIER_FOR_PLAYERS_VEHICLE(PLAYER::PLAYER_ID(), 1f);
			PLAYER::SET_DISPATCH_COPS_FOR_PLAYER(PLAYER::PLAYER_ID(), true);
			PED::SET_CREATE_RANDOM_COPS(true);
		}
		if (bLocal_61)
		{
			STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(func_635());
		}
		STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(__LIB_15__::func_911());
		STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(__LIB_15__::func_910());
		STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(__LIB_15__::func_909());
		if (!CAM::IS_SCREEN_FADED_OUT() && !bParam0)
		{
			func_631();
			func_630();
			func_627();
		}
		else
		{
			func_623();
			func_616();
		}
		if (bParam1)
		{
			__LIB_14__::func_804(0);
		}
	}
}

void func_623()//Position - 0x83674
{
	func_626();
	func_625();
	func_624();
}

void func_624()//Position - 0x83688
{
	int iVar0;
	int iVar1;
	iVar0 = 0;
	while (iVar0 < 60)
	{
		if (ENTITY::DOES_ENTITY_EXIST(iLocal_162[iVar0]))
		{
			if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_162[iVar0], false))
			{
				if (VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(iLocal_162[iVar0]))
				{
					VEHICLE::STOP_PLAYBACK_RECORDED_VEHICLE(iLocal_162[iVar0]);
				}
				iVar1 = VEHICLE::GET_PED_IN_VEHICLE_SEAT(iLocal_162[iVar0], -1, false);
				if (ENTITY::DOES_ENTITY_EXIST(iVar1) && iVar1 != PLAYER::PLAYER_PED_ID())
				{
					if (ENTITY::IS_ENTITY_A_MISSION_ENTITY(iVar1))
					{
						PED::DELETE_PED(&iVar1);
					}
				}
			}
			if (ENTITY::IS_ENTITY_A_MISSION_ENTITY(iLocal_162[iVar0]))
			{
				VEHICLE::DELETE_VEHICLE(&(iLocal_162[iVar0]));
			}
		}
		iLocal_107[iVar0] = 0;
		if (!bLocal_41 && !bLocal_54)
		{
			if (iLocal_106[iVar0] > 0)
			{
				VEHICLE::REMOVE_VEHICLE_RECORDING(iLocal_106[iVar0], &cLocal_143);
			}
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 60)
	{
		if (!iLocal_155[iVar0] == 0)
		{
			STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(iLocal_155[iVar0]);
		}
		iVar0++;
	}
}

void func_625()//Position - 0x8377F
{
	int iVar0;
	iVar0 = 0;
	while (iVar0 < 25)
	{
		if (ENTITY::DOES_ENTITY_EXIST(iLocal_161[iVar0]))
		{
			if (ENTITY::IS_ENTITY_A_MISSION_ENTITY(iLocal_161[iVar0]))
			{
				VEHICLE::DELETE_VEHICLE(&(iLocal_161[iVar0]));
			}
		}
		iLocal_109[iVar0] = 0;
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 25)
	{
		if (!iLocal_154[iVar0] == 0)
		{
			STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(iLocal_154[iVar0]);
		}
		iVar0++;
	}
	iLocal_115 = 0;
	iLocal_112 = 0;
}

void func_626()//Position - 0x837FC
{
	int iVar0;
	int iVar1;
	iVar0 = 0;
	while (iVar0 < 340)
	{
		if (ENTITY::DOES_ENTITY_EXIST(iLocal_159[iVar0]))
		{
			if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_159[iVar0], false))
			{
				if (VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(iLocal_159[iVar0]))
				{
					VEHICLE::STOP_PLAYBACK_RECORDED_VEHICLE(iLocal_159[iVar0]);
				}
				iVar1 = VEHICLE::GET_PED_IN_VEHICLE_SEAT(iLocal_159[iVar0], -1, false);
				if (ENTITY::DOES_ENTITY_EXIST(iVar1) && iVar1 != PLAYER::PLAYER_PED_ID())
				{
					if (ENTITY::IS_ENTITY_A_MISSION_ENTITY(iVar1))
					{
						PED::DELETE_PED(&iVar1);
					}
				}
			}
			if (ENTITY::IS_ENTITY_A_MISSION_ENTITY(iLocal_159[iVar0]))
			{
				VEHICLE::DELETE_VEHICLE(&(iLocal_159[iVar0]));
			}
		}
		if (!bLocal_41 && !bLocal_54)
		{
			if (iLocal_103[iVar0] > 0)
			{
				VEHICLE::REMOVE_VEHICLE_RECORDING(iLocal_103[iVar0], &cLocal_143);
			}
		}
		iLocal_104[iVar0] = 0;
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 340)
	{
		if (!iLocal_153[iVar0] == 0)
		{
			STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(iLocal_153[iVar0]);
		}
		iVar0++;
	}
	iLocal_114 = 0;
	iLocal_110 = 0;
}

void func_627()//Position - 0x838FD
{
	int iVar0;
	iVar0 = 0;
	while (iVar0 < 60)
	{
		if (ENTITY::DOES_ENTITY_EXIST(iLocal_162[iVar0]))
		{
			if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_162[iVar0], false))
			{
				if (VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(iLocal_162[iVar0]))
				{
					VEHICLE::STOP_PLAYBACK_RECORDED_VEHICLE(iLocal_162[iVar0]);
				}
			}
			func_629(iLocal_162[iVar0]);
			__LIB_15__::func_908(iLocal_162[iVar0]);
		}
		iLocal_107[iVar0] = 0;
		iLocal_108[iVar0] = 0;
		if (!bLocal_41 && !bLocal_54)
		{
			if (iLocal_106[iVar0] > 0)
			{
				VEHICLE::REMOVE_VEHICLE_RECORDING(iLocal_106[iVar0], &cLocal_143);
			}
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 60)
	{
		if (!iLocal_155[iVar0] == 0)
		{
			STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(iLocal_155[iVar0]);
		}
		iVar0++;
	}
	iLocal_116 = 0;
}

void func_629(int iParam0)//Position - 0x839E1
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
				if (bLocal_62)
				{
					PED::SET_PED_FLEE_ATTRIBUTES(iVar1, 65536, true);
					PED::SET_PED_FLEE_ATTRIBUTES(iVar1, 2, false);
				}
				PED::SET_PED_COMBAT_ATTRIBUTES(iVar1, 6, false);
			}
		}
	}
}

void func_630()//Position - 0x83A7B
{
	int iVar0;
	iVar0 = 0;
	while (iVar0 < 25)
	{
		if (ENTITY::DOES_ENTITY_EXIST(iLocal_161[iVar0]))
		{
			if (!ENTITY::IS_ENTITY_DEAD(iLocal_161[iVar0], false))
			{
				ENTITY::SET_ENTITY_COLLISION(iLocal_161[iVar0], true, false);
			}
			__LIB_15__::func_908(iLocal_161[iVar0]);
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 25)
	{
		if (!iLocal_154[iVar0] == 0)
		{
			STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(iLocal_154[iVar0]);
		}
		iVar0++;
	}
	iLocal_115 = 0;
	iLocal_112 = 0;
}

void func_631()//Position - 0x83AFF
{
	int iVar0;
	iVar0 = 0;
	while (iVar0 < 340)
	{
		if (ENTITY::DOES_ENTITY_EXIST(iLocal_159[iVar0]))
		{
			if (!ENTITY::IS_ENTITY_DEAD(iLocal_159[iVar0], false))
			{
				ENTITY::SET_ENTITY_COLLISION(iLocal_159[iVar0], true, false);
			}
			if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_159[iVar0], false))
			{
				if (VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(iLocal_159[iVar0]))
				{
					VEHICLE::STOP_PLAYBACK_RECORDED_VEHICLE(iLocal_159[iVar0]);
				}
			}
			func_629(iLocal_159[iVar0]);
			__LIB_15__::func_908(iLocal_159[iVar0]);
		}
		iLocal_104[iVar0] = 0;
		iLocal_105[iVar0] = 0;
		if (!bLocal_41 && !bLocal_54)
		{
			if (iLocal_103[iVar0] > 0)
			{
				VEHICLE::REMOVE_VEHICLE_RECORDING(iLocal_103[iVar0], &cLocal_143);
			}
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 340)
	{
		if (!iLocal_153[iVar0] == 0)
		{
			STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(iLocal_153[iVar0]);
		}
		iVar0++;
	}
	iLocal_114 = 0;
	iLocal_110 = 0;
}

int func_635()//Position - 0x83C16
{
	if (iLocal_156 == 0)
	{
		return joaat("A_M_Y_Business_01");
	}
	return iLocal_156;
}

void func_640()//Position - 0x83E03
{
	struct<3> Var0;
	struct<3> Var1;
	float fVar2;
	if (func_366())
	{
		PLAYER::SET_MAX_WANTED_LEVEL(0);
		PLAYER::SET_WANTED_LEVEL_MULTIPLIER(0f);
		MISC::ENABLE_DISPATCH_SERVICE(1, false);
		MISC::ENABLE_DISPATCH_SERVICE(2, false);
		MISC::ENABLE_DISPATCH_SERVICE(3, false);
		MISC::ENABLE_DISPATCH_SERVICE(4, false);
		MISC::ENABLE_DISPATCH_SERVICE(5, false);
		if (!ENTITY::DOES_ENTITY_EXIST(iLocal_235))
		{
			func_348(&iLocal_235, joaat("policeb"), Local_215, 147.9465f, -1, 0);
			__LIB_0__::func_679(iLocal_235, 2);
			VEHICLE::SET_VEHICLE_HAS_STRONG_AXLES(iLocal_235, true);
		}
		if (!ENTITY::DOES_ENTITY_EXIST(iLocal_236))
		{
			func_348(&iLocal_236, joaat("policeb"), Local_216, 135.0532f, -1, 0);
			__LIB_0__::func_679(iLocal_236, 3);
			VEHICLE::SET_VEHICLE_HAS_STRONG_AXLES(iLocal_236, true);
		}
		ENTITY::FREEZE_ENTITY_POSITION(iLocal_235, true);
		ENTITY::FREEZE_ENTITY_POSITION(iLocal_236, true);
		STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(joaat("policeb"));
		if (!ENTITY::DOES_ENTITY_EXIST(uLocal_489[2]))
		{
			func_650(&(uLocal_489[2]), 2, Local_3044, fLocal_3045, 0);
			if (!PED::IS_PED_WEARING_HELMET(uLocal_489[2]))
			{
				PED::SET_PED_HELMET_PROP_INDEX(uLocal_489[2], 5, true);
				PED::SET_PED_HELMET_TEXTURE_INDEX(uLocal_489[2], 0);
			}
			while (!func_323(uLocal_489[2], 12, 3, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0))
			{
				func_362(0);
			}
			__LIB_16__::func_888(2);
			PED::SET_PED_RELATIONSHIP_GROUP_HASH(uLocal_489[2], iLocal_255);
			PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(uLocal_489[2], true);
			PED::SET_PED_CONFIG_FLAG(uLocal_489[2], 32, false);
		}
		if (!PED::IS_PED_IN_VEHICLE(uLocal_489[2], iLocal_235, false))
		{
			PED::SET_PED_INTO_VEHICLE(uLocal_489[2], iLocal_235, -1);
		}
		STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(__LIB_0__::func_518(2));
		if (!ENTITY::DOES_ENTITY_EXIST(uLocal_489[0]))
		{
			func_650(&(uLocal_489[0]), 0, Local_3046, fLocal_3047, 0);
			while (!func_323(uLocal_489[0], 12, 4, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0))
			{
				func_362(0);
			}
			__LIB_16__::func_888(0);
			PED::SET_PED_RELATIONSHIP_GROUP_HASH(uLocal_489[0], iLocal_255);
			PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(uLocal_489[0], true);
			PED::SET_PED_CONFIG_FLAG(uLocal_489[0], 32, false);
		}
		if (!PED::IS_PED_IN_VEHICLE(uLocal_489[0], iLocal_236, false))
		{
			PED::SET_PED_INTO_VEHICLE(uLocal_489[0], iLocal_236, -1);
		}
		STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(__LIB_0__::func_518(0));
		__LIB_0__::func_222(&uLocal_312, 1, uLocal_489[0], "MICHAEL", 0, 1);
		__LIB_0__::func_222(&uLocal_312, 2, uLocal_489[2], "TREVOR", 0, 1);
		VEHICLE::SET_VEHICLE_ENGINE_HEALTH(iLocal_232, 1000f);
		VEHICLE::SET_VEHICLE_PETROL_TANK_HEALTH(iLocal_232, 1000f);
		VEHICLE::SET_VEHICLE_ENGINE_HEALTH(iLocal_233, 1000f);
		VEHICLE::SET_VEHICLE_PETROL_TANK_HEALTH(iLocal_233, 1000f);
		VEHICLE::SET_VEHICLE_ENGINE_HEALTH(iLocal_234, 1000f);
		VEHICLE::SET_VEHICLE_PETROL_TANK_HEALTH(iLocal_234, 1000f);
		iLocal_198 = 0;
		CUTSCENE::REQUEST_CUTSCENE("Car_steal_3_mcs_2", 4);
		STREAMING::REQUEST_ANIM_DICT(sLocal_3032);
		func_24(3);
		if (func_365())
		{
			func_24(4);
			MISC::CLEAR_AREA(2716.9924f, 4787.348f, 43.5334f, 1000f, true, false, false, false);
			PED::SET_PED_INTO_VEHICLE(PLAYER::PLAYER_PED_ID(), iLocal_232, -1);
			__LIB_37__::func_920(PLAYER::PLAYER_PED_ID(), 2716.9924f, 4787.348f, 43.5334f, 11.8873f, 1);
			VEHICLE::SET_VEHICLE_ENGINE_ON(iLocal_232, true, true, false);
			CAM::SET_GAMEPLAY_CAM_RELATIVE_HEADING(0f);
			CAM::SET_GAMEPLAY_CAM_RELATIVE_PITCH(-10f, 1f);
		}
	}
	else
	{
		if (CUTSCENE::CAN_REQUEST_ASSETS_FOR_CUTSCENE_ENTITY())
		{
			__LIB_41__::func_49("Michael", func_359(0), 0, 2);
			__LIB_41__::func_49("Trevor", func_359(2), 0, 2);
		}
		if (HUD::IS_PAUSE_MENU_ACTIVE())
		{
			if (HUD::DOES_BLIP_EXIST(iLocal_242))
			{
				HUD::SET_BLIP_COORDS(iLocal_242, ENTITY::GET_ENTITY_COORDS(iLocal_233, true));
			}
			if (HUD::DOES_BLIP_EXIST(iLocal_243))
			{
				HUD::SET_BLIP_COORDS(iLocal_243, ENTITY::GET_ENTITY_COORDS(iLocal_234, true));
			}
		}
		if (!HUD::DOES_BLIP_EXIST(iLocal_242))
		{
			iLocal_242 = HUD::ADD_BLIP_FOR_COORD(ENTITY::GET_ENTITY_COORDS(iLocal_233, true));
			HUD::SET_BLIP_COLOUR(iLocal_242, 3);
			HUD::SET_BLIP_PRIORITY(iLocal_242, 9);
			HUD::SET_BLIP_NAME_FROM_TEXT_FILE(iLocal_242, "S3_BLIPVEH");
		}
		Var0 = { ENTITY::GET_ENTITY_COORDS(iLocal_233, true) };
		Var1 = { HUD::GET_BLIP_COORDS(iLocal_242) };
		fVar2 = (1f + __LIB_0__::func_331((MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true), ENTITY::GET_ENTITY_COORDS(iLocal_233, true), true) / 4f), 0f, 17.5f));
		Var1.f_0 = (Var1.f_0 + ((((Var0.f_0 - Var1.f_0) / fVar2) * 15f) * SYSTEM::TIMESTEP()));
		Var1.f_1 = (Var1.f_1 + ((((Var0.f_1 - Var1.f_1) / fVar2) * 15f) * SYSTEM::TIMESTEP()));
		Var1.f_2 = (Var1.f_2 + ((((Var0.f_2 - Var1.f_2) / fVar2) * 15f) * SYSTEM::TIMESTEP()));
		HUD::SET_BLIP_COORDS(iLocal_242, Var1);
		if (!HUD::DOES_BLIP_EXIST(iLocal_243))
		{
			iLocal_243 = HUD::ADD_BLIP_FOR_COORD(ENTITY::GET_ENTITY_COORDS(iLocal_234, true));
			HUD::SET_BLIP_COLOUR(iLocal_243, 3);
			HUD::SET_BLIP_PRIORITY(iLocal_243, 9);
			HUD::SET_BLIP_NAME_FROM_TEXT_FILE(iLocal_243, "S3_BLIPVEH");
		}
		Var0 = { ENTITY::GET_ENTITY_COORDS(iLocal_234, true) };
		Var1 = { HUD::GET_BLIP_COORDS(iLocal_243) };
		fVar2 = (1f + __LIB_0__::func_331((MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true), ENTITY::GET_ENTITY_COORDS(iLocal_234, true), true) / 4f), 0f, 17.5f));
		Var1.f_0 = (Var1.f_0 + ((((Var0.f_0 - Var1.f_0) / fVar2) * 15f) * SYSTEM::TIMESTEP()));
		Var1.f_1 = (Var1.f_1 + ((((Var0.f_1 - Var1.f_1) / fVar2) * 15f) * SYSTEM::TIMESTEP()));
		Var1.f_2 = (Var1.f_2 + ((((Var0.f_2 - Var1.f_2) / fVar2) * 15f) * SYSTEM::TIMESTEP()));
		HUD::SET_BLIP_COORDS(iLocal_243, Var1);
		switch (iLocal_180)
		{
			case 0:
				PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 75 /*INPUT_VEH_EXIT*/, true);
				if (CUTSCENE::HAS_CUTSCENE_LOADED() && PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), iLocal_232, false))
				{
					if (CAM::DOES_CAM_EXIST(iLocal_248))
					{
						if (CAM::IS_CAM_ACTIVE(iLocal_248))
						{
							CAM::SET_CAM_ACTIVE(iLocal_248, false);
							CAM::RENDER_SCRIPT_CAMS(false, false, 3000, true, false, 0);
						}
					}
					__LIB_0__::func_532(1, 1, 1, 0, 0, 0, 0);
					ENTITY::SET_ENTITY_INVINCIBLE(iLocal_233, true);
					ENTITY::SET_ENTITY_INVINCIBLE(iLocal_234, true);
					ENTITY::SET_ENTITY_INVINCIBLE(iLocal_232, true);
					VEHICLE::SET_VEHICLE_CAN_BE_VISIBLY_DAMAGED(iLocal_232, false);
					VEHICLE::SET_VEHICLE_CAN_BE_VISIBLY_DAMAGED(iLocal_233, false);
					VEHICLE::SET_VEHICLE_CAN_BE_VISIBLY_DAMAGED(iLocal_234, false);
					__LIB_15__::func_894(&iLocal_3054);
					iLocal_3054 = OBJECT::CREATE_OBJECT_NO_OFFSET(joaat("prop_donut_02"), Local_3055, false, false, false);
					if (ENTITY::DOES_ENTITY_EXIST(iLocal_3054))
					{
						if (ENTITY::DOES_ENTITY_EXIST(func_359(0)))
						{
							if (!ENTITY::IS_ENTITY_DEAD(func_359(0), false))
							{
								ENTITY::ATTACH_ENTITY_TO_ENTITY(iLocal_3054, func_359(0), PED::GET_PED_BONE_INDEX(func_359(0), 28422), Local_3056, Local_3057, false, false, false, false, 2, true, 0);
							}
						}
					}
					__LIB_15__::func_894(&iLocal_3058);
					iLocal_3058 = OBJECT::CREATE_OBJECT_NO_OFFSET(joaat("prop_donut_02b"), Local_3059, false, false, false);
					if (ENTITY::DOES_ENTITY_EXIST(iLocal_3058))
					{
						if (ENTITY::DOES_ENTITY_EXIST(func_359(2)))
						{
							if (!ENTITY::IS_ENTITY_DEAD(func_359(2), false))
							{
								ENTITY::ATTACH_ENTITY_TO_ENTITY(iLocal_3058, func_359(2), PED::GET_PED_BONE_INDEX(func_359(2), 28422), Local_3060, Local_3061, false, false, false, false, 2, true, 0);
							}
						}
					}
					__LIB_15__::func_894(&iLocal_3062);
					iLocal_3062 = OBJECT::CREATE_OBJECT_NO_OFFSET(joaat("prop_player_phone_01"), Local_3063, false, false, false);
					if (ENTITY::DOES_ENTITY_EXIST(iLocal_3062))
					{
						if (ENTITY::DOES_ENTITY_EXIST(func_359(0)))
						{
							if (!ENTITY::IS_ENTITY_DEAD(func_359(0), false))
							{
								ENTITY::ATTACH_ENTITY_TO_ENTITY(iLocal_3062, func_359(0), PED::GET_PED_BONE_INDEX(func_359(0), 60309), Local_3064, Local_3065, false, false, false, false, 2, true, 0);
							}
						}
					}
					func_350(PLAYER::PLAYER_ID(), 0, 0);
					if (ENTITY::DOES_ENTITY_EXIST(PLAYER::PLAYER_PED_ID()))
					{
						if (!ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID(), false))
						{
							PED::SET_PED_CONFIG_FLAG(PLAYER::PLAYER_PED_ID(), 243, true);
						}
					}
					if (!ENTITY::IS_ENTITY_DEAD(func_359(1), false) && !ENTITY::IS_ENTITY_DEAD(iLocal_232, false))
					{
						TASK::CLEAR_PED_TASKS(func_359(1));
						VEHICLE::SET_VEHICLE_FORWARD_SPEED(iLocal_232, ENTITY::GET_ENTITY_SPEED(iLocal_232));
						VEHICLE::SET_VEHICLE_ENGINE_ON(iLocal_232, true, true, false);
						TASK::TASK_VEHICLE_DRIVE_TO_COORD(func_359(1), iLocal_232, 2602.3f, 5299.4f, 44.4f, 200f, 0, 0, 786599, 5f, 2f);
						PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 75 /*INPUT_VEH_EXIT*/, true);
						__LIB_0__::func_222(&uLocal_312, 1, func_359(0), "MICHAEL", 0, 1);
						__LIB_0__::func_222(&uLocal_312, 3, func_359(1), "FRANKLIN", 0, 1);
						__LIB_31__::func_805(&uLocal_312, 0, "CST3AUD", "CST3_2secs", 8, 1, 0, 0, 0);
					}
					iLocal_548 = 1;
					if (CAM::IS_SCREEN_FADED_OUT())
					{
						CAM::DO_SCREEN_FADE_IN(500);
					}
					STREAMING::PREFETCH_SRL(sLocal_3033);
					STREAMING::SET_SRL_READAHEAD_TIMES(3, 3, 3, 3);
					STREAMING::SET_SRL_FORCE_PRESTREAM(2);
					func_351();
				}
				break;
			case 1:
				VEHICLE::REQUEST_VEHICLE_RECORDING(600, "ALuberSetup");
				VEHICLE::REQUEST_VEHICLE_ASSET(joaat("policeb"), 15);
				if ((!ENTITY::IS_ENTITY_IN_ANGLED_AREA(iLocal_232, 2751.026f, 4623.2163f, 33.91202f, 2621.143f, 5207.859f, 63.722816f, 40f, false, true, 0) && !ENTITY::IS_ENTITY_IN_ANGLED_AREA(iLocal_232, 2624.5854f, 5179.3633f, 33.77198f, 2512.1057f, 5542.4507f, 63.772625f, 40f, false, true, 0)) && !ENTITY::IS_ENTITY_IN_ANGLED_AREA(iLocal_232, 2742.8477f, 4658.2837f, 33.534836f, 2804.2122f, 4427.761f, 66.249695f, 40f, false, true, 0))
				{
					iLocal_480 = 15;
					func_1();
				}
				if ((((SYSTEM::TIMERA() > 5000 && VEHICLE::HAS_VEHICLE_RECORDING_BEEN_LOADED(600, "ALuberSetup")) && VEHICLE::HAS_VEHICLE_ASSET_LOADED(joaat("policeb"))) && PED::HAVE_ALL_STREAMING_REQUESTS_COMPLETED(func_359(0))) && PED::HAVE_ALL_STREAMING_REQUESTS_COMPLETED(func_359(2)))
				{
					func_479(2, "stageChase", 0, 0, func_359(1), 1);
					if (!AUDIO::IS_AUDIO_SCENE_ACTIVE("CAR_1_FRANKLIN_CALLS_MICHAEL"))
					{
						AUDIO::START_AUDIO_SCENE("CAR_1_FRANKLIN_CALLS_MICHAEL");
					}
					if (!iLocal_195)
					{
						RECORDING::REPLAY_START_EVENT(4);
						iLocal_195 = 1;
					}
					if (!func_897("SET_CAR_HIGH_SPEED_BUMP_SEVERITY_MULTIPLIER"))
					{
						VEHICLE::SET_CAR_HIGH_SPEED_BUMP_SEVERITY_MULTIPLIER(0f);
						func_894("SET_CAR_HIGH_SPEED_BUMP_SEVERITY_MULTIPLIER", 1);
					}
					if (CAM::GET_CAM_VIEW_MODE_FOR_CONTEXT(1) == 4)
					{
						func_649(&uLocal_294, func_359(0), 0, 2f, (CUTSCENE::GET_CUTSCENE_TOTAL_DURATION() - SYSTEM::ROUND((3.27493f * 1000f))), (CUTSCENE::GET_CUTSCENE_TOTAL_DURATION() - SYSTEM::ROUND((3.27493f * 1000f))), ((CUTSCENE::GET_CUTSCENE_TOTAL_DURATION() - SYSTEM::ROUND((3.27493f * 1000f))) - 300), ((CUTSCENE::GET_CUTSCENE_TOTAL_DURATION() - SYSTEM::ROUND((3.27493f * 1000f))) / 3) * 2, 0.2f);
					}
					func_351();
				}
				break;
			case 2:
				AUDIO::LOAD_STREAM("CAR_STEAL_1_PASSBY", "CAR_STEAL_1_SOUNDSET");
				if (CAM::GET_CAM_VIEW_MODE_FOR_CONTEXT(1) == 4)
				{
					if (CUTSCENE::IS_CUTSCENE_PLAYING())
					{
						if (!func_897("PushInMichael"))
						{
							if (CUTSCENE::GET_CUTSCENE_TIME() > SYSTEM::ROUND((3.27493f * 1000f)))
							{
								CAM::BYPASS_CUTSCENE_CAM_RENDERING_THIS_UPDATE();
								if (__LIB_15__::func_966(&uLocal_294, 0, 1, 1, 0, 1, 0))
								{
									func_894("PushInMichael", 1);
								}
							}
						}
					}
				}
				if (CUTSCENE::IS_CUTSCENE_PLAYING())
				{
					if (!func_897("HereTheyCome"))
					{
						if (CUTSCENE::GET_CUTSCENE_TIME() > SYSTEM::ROUND((21.285322f * 1000f)))
						{
							func_24(5);
							func_645(6);
							func_894("HereTheyCome", 1);
						}
					}
				}
				if (func_643(&uLocal_549, &Local_1790))
				{
					if (!PED::IS_PED_IN_VEHICLE(uLocal_489[2], iLocal_235, false))
					{
						PED::SET_PED_INTO_VEHICLE(uLocal_489[2], iLocal_235, -1);
					}
					PED::FORCE_PED_AI_AND_ANIMATION_UPDATE(uLocal_489[2], false, false);
					if (!PED::IS_PED_WEARING_HELMET(uLocal_489[2]))
					{
						PED::SET_PED_HELMET_PROP_INDEX(uLocal_489[2], 5, true);
						PED::SET_PED_HELMET_TEXTURE_INDEX(uLocal_489[2], 0);
					}
					PED::GIVE_PED_HELMET(uLocal_489[2], true, 16384, -1);
					if (!PED::IS_PED_IN_VEHICLE(func_359(0), iLocal_236, false))
					{
						PED::SET_PED_INTO_VEHICLE(func_359(0), iLocal_236, -1);
					}
					if (!PED::IS_PED_WEARING_HELMET(PLAYER::PLAYER_PED_ID()))
					{
						PED::SET_PED_HELMET_PROP_INDEX(PLAYER::PLAYER_PED_ID(), 4, true);
						PED::SET_PED_HELMET_TEXTURE_INDEX(PLAYER::PLAYER_PED_ID(), 0);
					}
					PED::GIVE_PED_HELMET(PLAYER::PLAYER_PED_ID(), true, 16384, -1);
					func_323(func_359(0), 12, 4, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
					__LIB_16__::func_888(0);
					VEHICLE::SET_VEHICLE_ENGINE_ON(iLocal_235, true, true, false);
					if (func_755(500, sLocal_221))
					{
						VEHICLE::START_PLAYBACK_RECORDED_VEHICLE(iLocal_235, 500, sLocal_221, true);
						VEHICLE::SET_PLAYBACK_SPEED(iLocal_235, 0f);
						VEHICLE::FORCE_PLAYBACK_RECORDED_VEHICLE_UPDATE(iLocal_235, false);
					}
					__LIB_15__::func_889(iLocal_236, 2686.8625f, 5131.9277f, 43.8426f, 150.224f);
					ENTITY::SET_ENTITY_ROTATION(iLocal_236, 0.541f, -9.993f, 150.224f, 2, true);
					PED::FORCE_PED_AI_AND_ANIMATION_UPDATE(func_359(0), true, false);
					VEHICLE::SET_VEHICLE_ENGINE_ON(iLocal_236, true, true, false);
					PHYSICS::ACTIVATE_PHYSICS(iLocal_236);
					if (CAM::GET_CAM_VIEW_MODE_FOR_CONTEXT(1) == 4)
					{
						CAM::RENDER_SCRIPT_CAMS(false, false, 3000, true, false, 0);
						__LIB_15__::func_959(&uLocal_294);
					}
					__LIB_0__::func_532(0, 1, 1, 0, 0, 0, 0);
					STREAMING::REMOVE_ANIM_DICT(sLocal_3032);
					func_37();
				}
				PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 71 /*INPUT_VEH_ACCELERATE*/, true);
				PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 72 /*INPUT_VEH_BRAKE*/, true);
				PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 76 /*INPUT_VEH_HANDBRAKE*/, true);
				PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 73 /*INPUT_VEH_DUCK*/, true);
				PAD::DISABLE_CONTROL_ACTION(0 /*PLAYER_CONTROL*/, 59 /*INPUT_VEH_MOVE_LR*/, true);
				break;
			}
	}
	if (func_36())
	{
		if (func_897("SET_CAR_HIGH_SPEED_BUMP_SEVERITY_MULTIPLIER"))
		{
			VEHICLE::SET_CAR_HIGH_SPEED_BUMP_SEVERITY_MULTIPLIER(1f);
			func_894("SET_CAR_HIGH_SPEED_BUMP_SEVERITY_MULTIPLIER", 0);
		}
		CUTSCENE::REMOVE_CUTSCENE();
		while (CUTSCENE::HAS_CUTSCENE_LOADED())
		{
			func_362(0);
		}
		if (iLocal_195)
		{
			RECORDING::REPLAY_STOP_EVENT();
			iLocal_195 = 0;
		}
		if (AUDIO::IS_AUDIO_SCENE_ACTIVE("CAR_1_RACE_MAIN"))
		{
			AUDIO::STOP_AUDIO_SCENE("CAR_1_RACE_MAIN");
		}
		if (AUDIO::IS_AUDIO_SCENE_ACTIVE("CAR_1_FRANKLIN_CALLS_MICHAEL"))
		{
			AUDIO::STOP_AUDIO_SCENE("CAR_1_FRANKLIN_CALLS_MICHAEL");
		}
		if (ENTITY::DOES_ENTITY_EXIST(func_359(0)))
		{
			if (!ENTITY::IS_ENTITY_DEAD(func_359(0), false))
			{
				PED::SET_PED_CONFIG_FLAG(func_359(0), 243, false);
			}
		}
		if (ENTITY::DOES_ENTITY_EXIST(func_359(2)))
		{
			if (!ENTITY::IS_ENTITY_DEAD(func_359(2), false))
			{
				PED::SET_PED_CONFIG_FLAG(func_359(2), 243, false);
			}
		}
		if (ENTITY::DOES_ENTITY_EXIST(func_359(1)))
		{
			if (!ENTITY::IS_ENTITY_DEAD(func_359(1), false))
			{
				PED::SET_PED_CONFIG_FLAG(func_359(1), 243, false);
			}
		}
		STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(joaat("prop_player_phone_01"));
		STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(joaat("prop_donut_02"));
		STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(joaat("prop_donut_02b"));
		ENTITY::SET_ENTITY_VISIBLE(iLocal_232, true, false);
		ENTITY::SET_ENTITY_VISIBLE(iLocal_233, true, false);
		ENTITY::SET_ENTITY_VISIBLE(iLocal_234, true, false);
		ENTITY::FREEZE_ENTITY_POSITION(iLocal_235, false);
		ENTITY::FREEZE_ENTITY_POSITION(iLocal_236, false);
		__LIB_13__::func_808(&iLocal_242);
		__LIB_13__::func_808(&iLocal_243);
		__LIB_15__::func_894(&iLocal_3062);
		PATHFIND::SET_ROADS_BACK_TO_ORIGINAL(Vector(56.0588f, 4597.9775f, -1928.3759f) - Vector(1000f, 1000f, 1000f), Vector(56.0588f, 4597.9775f, -1928.3759f) + Vector(1000f, 1000f, 1000f), 1);
		CAM::SET_GAMEPLAY_CAM_RELATIVE_HEADING(0f);
		CAM::SET_GAMEPLAY_CAM_RELATIVE_PITCH(-10f, 1f);
		iLocal_479++;
	}
}

int func_643(var uParam0, var uParam1)//Position - 0x84C1D
{
	int iVar0;
	float fVar1;
	struct<3> Var2;
	struct<3> Var3;
	Var2 = { 2683.8f, 5131.16f, 43.901f };
	Var3 = { 0f, 0f, -4.68f };
	VEHICLE::SET_VEHICLE_DENSITY_MULTIPLIER_THIS_FRAME(0f);
	PED::SET_PED_DENSITY_MULTIPLIER_THIS_FRAME(0f);
	GRAPHICS::RESET_ADAPTATION(6);
	switch (iLocal_548)
	{
		case 1:
			STREAMING::SET_GAME_PAUSES_FOR_STREAMING(false);
			CAM::DESTROY_ALL_CAMS(false);
			func_644(uParam0, &iLocal_232, &iLocal_236);
			__LIB_16__::func_29(uParam0);
			CAM::SET_CAM_ACTIVE(uParam0->f_1, true);
			CAM::RENDER_SCRIPT_CAMS(true, false, 3000, true, false, 0);
			MISC::CLEAR_AREA(2716.9924f, 4787.348f, 43.5334f, 1000f, true, false, false, false);
			if (ENTITY::DOES_ENTITY_EXIST(iLocal_232))
			{
				if (!ENTITY::IS_ENTITY_DEAD(iLocal_232, false))
				{
					VEHICLE::START_PLAYBACK_RECORDED_VEHICLE(iLocal_232, 600, "ALuberSetup", true);
					VEHICLE::SKIP_TIME_IN_PLAYBACK_RECORDED_VEHICLE(iLocal_232, fLocal_3068);
					VEHICLE::FORCE_PLAYBACK_RECORDED_VEHICLE_UPDATE(iLocal_232, true);
				}
			}
			STREAMING::BEGIN_SRL();
			fLocal_3034 = -9999f;
			__LIB_0__::func_203(1, 0);
			if (ENTITY::DOES_ENTITY_EXIST(PLAYER::PLAYER_PED_ID()))
			{
				if (!ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID(), false))
				{
					AUDIO::STOP_PED_RINGTONE(PLAYER::PLAYER_PED_ID());
					MISC::CLEAR_BIT(&Global_8136, 27);
				}
			}
			iLocal_3072 = 0;
			iLocal_3073 = 0;
			iLocal_3078 = 0;
			iLocal_3079 = 0;
			iLocal_3067 = 0;
			iLocal_548 = 2;
			break;
		case 2:
			STREAMING::OVERRIDE_LODSCALE_THIS_FRAME(1f);
			fLocal_3034 = (fLocal_3034 + (MISC::GET_FRAME_TIME() * 1000f));
			if (fLocal_3034 < 0f)
			{
				fLocal_3034 = 0f;
			}
			STREAMING::SET_SRL_TIME(fLocal_3034);
			if (CAM::IS_CAM_ACTIVE(uParam0->f_1))
			{
				iVar0 = __LIB_32__::func_30(uParam0);
				fVar1 = CAM::GET_CAM_SPLINE_PHASE(uParam0->f_1);
				if (iLocal_3072 == 0)
				{
					if (fVar1 >= fLocal_3080)
					{
						iLocal_3069 = AUDIO::GET_SOUND_ID();
						AUDIO::PLAY_SOUND_FRONTEND(iLocal_3069, "Hit_Out", "PLAYER_SWITCH_CUSTOM_SOUNDSET", true);
						iLocal_3072 = 1;
					}
				}
				if (iLocal_3073 == 0)
				{
					if (fVar1 >= fLocal_3081)
					{
						AUDIO::STOP_SOUND(iLocal_3069);
						iLocal_3073 = 1;
					}
				}
				if (iLocal_3074 == 0)
				{
					if (fVar1 >= fLocal_3082)
					{
						iLocal_3070 = AUDIO::GET_SOUND_ID();
						AUDIO::PLAY_SOUND_FRONTEND(iLocal_3070, "Short_Transition_In", "PLAYER_SWITCH_CUSTOM_SOUNDSET", true);
						iLocal_3074 = 1;
					}
				}
				if (iLocal_3075 == 0)
				{
					if (fVar1 >= fLocal_3083)
					{
						AUDIO::STOP_SOUND(iLocal_3070);
						iLocal_3075 = 1;
					}
				}
				if (!iLocal_3078)
				{
					if (fVar1 >= fLocal_3076)
					{
						GRAPHICS::ANIMPOSTFX_PLAY("SwitchShortFranklinIn", 0, false);
						iLocal_3078 = 1;
					}
				}
				if (!iLocal_3079)
				{
					if (fVar1 >= fLocal_3077)
					{
						GRAPHICS::ANIMPOSTFX_PLAY("SwitchShortMichaelMid", 0, false);
						iLocal_3079 = 1;
					}
				}
				if (!iLocal_3067)
				{
					if (iVar0 > 0)
					{
						if (!ENTITY::IS_ENTITY_DEAD(func_359(0), false) && !ENTITY::IS_ENTITY_DEAD(func_359(2), false))
						{
							iLocal_3036 = PED::CREATE_SYNCHRONIZED_SCENE(Var2, Var3, 2);
							TASK::TASK_SYNCHRONIZED_SCENE(func_359(0), iLocal_3036, sLocal_3030, "byBike_idle_Mic", 1000f, -1000f, 4, 0, 1000f, 2);
							TASK::TASK_SYNCHRONIZED_SCENE(func_359(2), iLocal_3036, sLocal_3030, "byBike_idle_Trev", 1000f, -1000f, 4, 0, 1000f, 2);
							PED::SET_SYNCHRONIZED_SCENE_LOOPED(iLocal_3036, true);
							if (ENTITY::DOES_ENTITY_EXIST(iLocal_235))
							{
								if (!ENTITY::IS_ENTITY_DEAD(iLocal_235, false))
								{
									ENTITY::SET_ENTITY_COORDS(iLocal_235, Local_215, true, false, false, true);
									ENTITY::SET_ENTITY_HEADING(iLocal_235, 147.9465f);
									VEHICLE::SET_VEHICLE_ON_GROUND_PROPERLY(iLocal_235, 5f);
									ENTITY::FORCE_ENTITY_AI_AND_ANIMATION_UPDATE(iLocal_235);
								}
							}
							if (ENTITY::DOES_ENTITY_EXIST(iLocal_236))
							{
								if (!ENTITY::IS_ENTITY_DEAD(iLocal_236, false))
								{
									ENTITY::SET_ENTITY_COORDS(iLocal_236, Local_216, true, false, false, true);
									ENTITY::SET_ENTITY_HEADING(iLocal_236, 135.0532f);
									VEHICLE::SET_VEHICLE_ON_GROUND_PROPERLY(iLocal_236, 5f);
									ENTITY::FORCE_ENTITY_AI_AND_ANIMATION_UPDATE(iLocal_236);
								}
							}
						}
						iLocal_3067 = 1;
					}
				}
				if (fVar1 >= 1f)
				{
					STREAMING::END_SRL();
					iLocal_548 = 3;
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
		case 3:
			if (!CUTSCENE::HAS_CUTSCENE_LOADED())
			{
			}
			AUDIO::STOP_SOUND(iLocal_3071);
			if (AUDIO::IS_AUDIO_SCENE_ACTIVE("CAR_1_RACE_MAIN"))
			{
				AUDIO::STOP_AUDIO_SCENE("CAR_1_RACE_MAIN");
			}
			if (AUDIO::IS_AUDIO_SCENE_ACTIVE("CAR_1_FRANKLIN_CALLS_MICHAEL"))
			{
				AUDIO::STOP_AUDIO_SCENE("CAR_1_FRANKLIN_CALLS_MICHAEL");
			}
			ENTITY::FREEZE_ENTITY_POSITION(iLocal_235, false);
			ENTITY::FREEZE_ENTITY_POSITION(iLocal_236, false);
			CUTSCENE::REGISTER_ENTITY_FOR_CUTSCENE(func_359(2), "Trevor", 0, 0, 0);
			CUTSCENE::REGISTER_ENTITY_FOR_CUTSCENE(func_359(0), "Michael", 0, 0, 0);
			CUTSCENE::REGISTER_ENTITY_FOR_CUTSCENE(iLocal_235, "Trevors_police_bike", 0, 0, 0);
			CUTSCENE::REGISTER_ENTITY_FOR_CUTSCENE(iLocal_236, "Michaels_Police_bike", 0, 0, 0);
			__LIB_0__::func_532(1, 1, 1, 0, 0, 0, 0);
			if (__LIB_15__::func_944() != 0)
			{
				func_980(&uLocal_489, 0);
				func_956(&uLocal_489, 1, 1, 1);
				CAM::SET_GAMEPLAY_CAM_FOLLOW_PED_THIS_UPDATE(uLocal_489[1]);
			}
			STREAMING::SET_GAME_PAUSES_FOR_STREAMING(true);
			CUTSCENE::START_CUTSCENE(0);
			func_940();
			__LIB_0__::func_203(0, 0);
			iLocal_548 = 4;
			break;
		case 4:
			if (CUTSCENE::IS_CUTSCENE_PLAYING())
			{
				if (CAM::DOES_CAM_EXIST(uParam0->f_1))
				{
					if (PED::IS_SYNCHRONIZED_SCENE_RUNNING(iLocal_3036))
					{
						PED::DETACH_SYNCHRONIZED_SCENE(iLocal_3036);
					}
					MISC::SET_TIME_SCALE(1f);
					CAM::RENDER_SCRIPT_CAMS(false, false, 3000, true, false, 0);
					CAM::DESTROY_CAM(uParam0->f_1, false);
					VEHICLE::REMOVE_VEHICLE_RECORDING(600, "ALuberSetup");
					if (ENTITY::DOES_ENTITY_EXIST(iLocal_3062))
					{
						ENTITY::DETACH_ENTITY(iLocal_3062, true, true);
						__LIB_15__::func_894(&iLocal_3062);
					}
					if (ENTITY::DOES_ENTITY_EXIST(iLocal_3054))
					{
						ENTITY::DETACH_ENTITY(iLocal_3054, true, true);
						__LIB_15__::func_894(&iLocal_3054);
					}
					if (ENTITY::DOES_ENTITY_EXIST(iLocal_3058))
					{
						ENTITY::DETACH_ENTITY(iLocal_3058, true, true);
						__LIB_15__::func_894(&iLocal_3058);
					}
				}
				iLocal_548 = 5;
			}
			break;
		case 5:
			if (CUTSCENE::IS_CUTSCENE_PLAYING())
			{
				return 0;
			}
			else
			{
				if (CAM::GET_CAM_VIEW_MODE_FOR_CONTEXT(1) != 4 || CAM::GET_CAM_VIEW_MODE_FOR_CONTEXT(2) != 4)
				{
					func_613(uParam1, &iLocal_236);
					__LIB_16__::func_29(uParam1);
					CAM::SET_CAM_ACTIVE(uParam1->f_1, true);
					CAM::RENDER_SCRIPT_CAMS(true, false, 3000, true, false, 0);
				}
				__LIB_15__::func_894(&iLocal_3054);
				iLocal_3054 = OBJECT::CREATE_OBJECT_NO_OFFSET(joaat("prop_donut_02b"), 2683.8784f, 5130.149f, 43.85238f, false, false, false);
				if (ENTITY::DOES_ENTITY_EXIST(iLocal_3054))
				{
					OBJECT::PLACE_OBJECT_ON_GROUND_PROPERLY(iLocal_3054);
				}
				__LIB_15__::func_894(&iLocal_3058);
				iLocal_3058 = OBJECT::CREATE_OBJECT_NO_OFFSET(joaat("prop_donut_02b"), 2683.2903f, 5128.5923f, 43.85796f, false, false, false);
				if (ENTITY::DOES_ENTITY_EXIST(iLocal_3058))
				{
					OBJECT::PLACE_OBJECT_ON_GROUND_PROPERLY(iLocal_3058);
				}
				SYSTEM::SETTIMERA(0);
				iLocal_548 = 0;
				return 1;
			}
		case 6:
			if (__LIB_15__::func_944() != 0)
			{
				func_980(&uLocal_489, 0);
				func_956(&uLocal_489, 1, 0, 0);
			}
			SYSTEM::SETTIMERA(0);
			iLocal_548 = 7;
			break;
		case 7:
			iVar0 = __LIB_32__::func_30(uParam1);
			if (SYSTEM::TIMERA() > iLocal_3043)
			{
				iLocal_548 = 8;
			}
			break;
		case 8:
			if (CAM::IS_CAM_ACTIVE(uParam1->f_1))
			{
				iVar0 = __LIB_32__::func_30(uParam1);
				SYSTEM::SETTIMERA(0);
				iLocal_548 = 0;
				return 1;
			}
			break;
	}
	return 0;
}

void func_644(var uParam0, int iParam1, int iParam2)//Position - 0x8524E
{
	if (!*uParam0)
	{
		uParam0->f_10[0 /*57*/].f_2 = 0;
		uParam0->f_10[0 /*57*/].f_3 = -1;
		uParam0->f_10[0 /*57*/].f_4 = 0;
		uParam0->f_10[0 /*57*/].f_5 = 0;
		uParam0->f_10[0 /*57*/].f_6 = { -2.3643f, -0.5889f, 0.4792f };
		uParam0->f_10[0 /*57*/].f_13 = { 0f, 0f, 0f };
		uParam0->f_10[0 /*57*/].f_12 = 0f;
		uParam0->f_10[0 /*57*/].f_16 = 0f;
		uParam0->f_10[0 /*57*/].f_17 = 0;
		uParam0->f_10[0 /*57*/].f_9 = { 0.0183f, 0.0447f, 0.3025f };
		uParam0->f_10[0 /*57*/].f_18 = 1;
		uParam0->f_10[0 /*57*/].f_19 = 0;
		uParam0->f_10[0 /*57*/].f_20 = 0;
		uParam0->f_10[0 /*57*/].f_21 = 40f;
		uParam0->f_10[0 /*57*/].f_50 = 0;
		uParam0->f_10[0 /*57*/].f_51 = 0f;
		uParam0->f_10[0 /*57*/].f_52 = 0f;
		uParam0->f_10[0 /*57*/].f_22 = 0f;
		uParam0->f_10[0 /*57*/].f_53 = 2;
		uParam0->f_10[0 /*57*/].f_23 = 1f;
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
		uParam0->f_10[0 /*57*/].f_45 = 0;
		uParam0->f_10[0 /*57*/].f_46 = 0;
		uParam0->f_10[0 /*57*/].f_47 = 0f;
		uParam0->f_10[0 /*57*/].f_47.f_1 = 0f;
		uParam0->f_10[0 /*57*/].f_47.f_2 = 0f;
		uParam0->f_10[1 /*57*/].f_2 = 0;
		uParam0->f_10[1 /*57*/].f_3 = -1;
		uParam0->f_10[1 /*57*/].f_4 = 0;
		uParam0->f_10[1 /*57*/].f_5 = 2900;
		uParam0->f_10[1 /*57*/].f_6 = { -1.9817f, -0.5034f, 0.4696f };
		uParam0->f_10[1 /*57*/].f_13 = { 0f, 0f, 0f };
		uParam0->f_10[1 /*57*/].f_12 = 0f;
		uParam0->f_10[1 /*57*/].f_16 = 0f;
		uParam0->f_10[1 /*57*/].f_17 = 0;
		uParam0->f_10[1 /*57*/].f_9 = { 0.0203f, 0.0344f, 0.2803f };
		uParam0->f_10[1 /*57*/].f_18 = 1;
		uParam0->f_10[1 /*57*/].f_19 = 0;
		uParam0->f_10[1 /*57*/].f_20 = 0;
		uParam0->f_10[1 /*57*/].f_21 = 40f;
		uParam0->f_10[1 /*57*/].f_50 = 0;
		uParam0->f_10[1 /*57*/].f_51 = 0f;
		uParam0->f_10[1 /*57*/].f_52 = 0f;
		uParam0->f_10[1 /*57*/].f_22 = 0f;
		uParam0->f_10[1 /*57*/].f_53 = 2;
		uParam0->f_10[1 /*57*/].f_23 = 1f;
		uParam0->f_10[1 /*57*/].f_28 = 2;
		uParam0->f_10[1 /*57*/].f_29 = 1f;
		uParam0->f_10[1 /*57*/].f_32 = 0f;
		uParam0->f_10[1 /*57*/].f_30 = 1;
		uParam0->f_10[1 /*57*/].f_31 = 0;
		uParam0->f_10[1 /*57*/].f_33 = 1f;
		uParam0->f_10[1 /*57*/].f_34 = 0;
		uParam0->f_10[1 /*57*/].f_35 = 0f;
		uParam0->f_10[1 /*57*/].f_36 = 0;
		uParam0->f_10[1 /*57*/].f_37 = 0;
		uParam0->f_10[1 /*57*/].f_39 = 0f;
		uParam0->f_10[1 /*57*/].f_40 = 0f;
		uParam0->f_10[1 /*57*/].f_41 = 0;
		uParam0->f_10[1 /*57*/].f_42 = 0;
		uParam0->f_10[1 /*57*/].f_43 = 0;
		uParam0->f_10[1 /*57*/].f_38 = 0f;
		uParam0->f_10[1 /*57*/].f_45 = 0;
		uParam0->f_10[1 /*57*/].f_46 = 0;
		uParam0->f_10[1 /*57*/].f_47 = 0f;
		uParam0->f_10[1 /*57*/].f_47.f_1 = 0f;
		uParam0->f_10[1 /*57*/].f_47.f_2 = 0f;
		uParam0->f_10[2 /*57*/].f_2 = 0;
		uParam0->f_10[2 /*57*/].f_3 = -1;
		uParam0->f_10[2 /*57*/].f_4 = 0;
		uParam0->f_10[2 /*57*/].f_5 = 600;
		uParam0->f_10[2 /*57*/].f_6 = { -7.6252f, 24.0532f, 0.344f };
		uParam0->f_10[2 /*57*/].f_13 = { 0f, 0f, 0f };
		uParam0->f_10[2 /*57*/].f_12 = 0f;
		uParam0->f_10[2 /*57*/].f_16 = 0f;
		uParam0->f_10[2 /*57*/].f_17 = 0;
		uParam0->f_10[2 /*57*/].f_9 = { -4.9335f, 0f, -72.5827f };
		uParam0->f_10[2 /*57*/].f_18 = 0;
		uParam0->f_10[2 /*57*/].f_19 = 0;
		uParam0->f_10[2 /*57*/].f_20 = 0;
		uParam0->f_10[2 /*57*/].f_21 = 40f;
		uParam0->f_10[2 /*57*/].f_50 = 0;
		uParam0->f_10[2 /*57*/].f_51 = 0f;
		uParam0->f_10[2 /*57*/].f_52 = 0f;
		uParam0->f_10[2 /*57*/].f_22 = 1f;
		uParam0->f_10[2 /*57*/].f_53 = 2;
		uParam0->f_10[2 /*57*/].f_23 = 1f;
		uParam0->f_10[2 /*57*/].f_28 = 0;
		uParam0->f_10[2 /*57*/].f_29 = 0f;
		uParam0->f_10[2 /*57*/].f_32 = 0f;
		uParam0->f_10[2 /*57*/].f_30 = 1;
		uParam0->f_10[2 /*57*/].f_31 = 0;
		uParam0->f_10[2 /*57*/].f_33 = 1f;
		uParam0->f_10[2 /*57*/].f_34 = 0;
		uParam0->f_10[2 /*57*/].f_35 = 0f;
		uParam0->f_10[2 /*57*/].f_36 = 0;
		uParam0->f_10[2 /*57*/].f_37 = 0;
		uParam0->f_10[2 /*57*/].f_39 = 0f;
		uParam0->f_10[2 /*57*/].f_40 = 0f;
		uParam0->f_10[2 /*57*/].f_41 = 0;
		uParam0->f_10[2 /*57*/].f_42 = 0;
		uParam0->f_10[2 /*57*/].f_43 = 0;
		uParam0->f_10[2 /*57*/].f_38 = 0f;
		uParam0->f_10[2 /*57*/].f_45 = 0;
		uParam0->f_10[2 /*57*/].f_46 = 0;
		uParam0->f_10[2 /*57*/].f_47 = 0f;
		uParam0->f_10[2 /*57*/].f_47.f_1 = 0f;
		uParam0->f_10[2 /*57*/].f_47.f_2 = 0f;
		uParam0->f_10[3 /*57*/].f_54 = 1;
		uParam0->f_10[4 /*57*/].f_2 = 0;
		uParam0->f_10[4 /*57*/].f_3 = -1;
		uParam0->f_10[4 /*57*/].f_4 = 0;
		uParam0->f_10[4 /*57*/].f_5 = 0;
		uParam0->f_10[4 /*57*/].f_6 = { 2.7024f, -65.6113f, 3.9747f };
		uParam0->f_10[4 /*57*/].f_13 = { 0f, 0f, 0f };
		uParam0->f_10[4 /*57*/].f_12 = 0f;
		uParam0->f_10[4 /*57*/].f_16 = 0f;
		uParam0->f_10[4 /*57*/].f_17 = 0;
		uParam0->f_10[4 /*57*/].f_9 = { -2.9265f, 0.0274f, 3.5865f };
		uParam0->f_10[4 /*57*/].f_18 = 0;
		uParam0->f_10[4 /*57*/].f_19 = 0;
		uParam0->f_10[4 /*57*/].f_20 = 0;
		uParam0->f_10[4 /*57*/].f_21 = 30f;
		uParam0->f_10[4 /*57*/].f_50 = 0;
		uParam0->f_10[4 /*57*/].f_51 = 2f;
		uParam0->f_10[4 /*57*/].f_52 = 0f;
		uParam0->f_10[4 /*57*/].f_22 = 1f;
		uParam0->f_10[4 /*57*/].f_53 = 0;
		uParam0->f_10[4 /*57*/].f_23 = 0f;
		uParam0->f_10[4 /*57*/].f_28 = 1;
		uParam0->f_10[4 /*57*/].f_29 = 1f;
		uParam0->f_10[4 /*57*/].f_32 = 0f;
		uParam0->f_10[4 /*57*/].f_30 = 1;
		uParam0->f_10[4 /*57*/].f_31 = 0;
		uParam0->f_10[4 /*57*/].f_33 = 1f;
		uParam0->f_10[4 /*57*/].f_34 = 1;
		uParam0->f_10[4 /*57*/].f_35 = 1f;
		uParam0->f_10[4 /*57*/].f_36 = 0;
		uParam0->f_10[4 /*57*/].f_37 = 0;
		uParam0->f_10[4 /*57*/].f_39 = 0f;
		uParam0->f_10[4 /*57*/].f_40 = 0f;
		uParam0->f_10[4 /*57*/].f_41 = 0;
		uParam0->f_10[4 /*57*/].f_42 = 0;
		uParam0->f_10[4 /*57*/].f_43 = 0;
		uParam0->f_10[4 /*57*/].f_38 = 0f;
		uParam0->f_10[4 /*57*/].f_45 = 0;
		uParam0->f_10[4 /*57*/].f_46 = 0;
		uParam0->f_10[4 /*57*/].f_47 = 0f;
		uParam0->f_10[4 /*57*/].f_47.f_1 = 0f;
		uParam0->f_10[4 /*57*/].f_47.f_2 = 0f;
		uParam0->f_10[5 /*57*/].f_2 = 0;
		uParam0->f_10[5 /*57*/].f_3 = -1;
		uParam0->f_10[5 /*57*/].f_4 = 0;
		uParam0->f_10[5 /*57*/].f_5 = 600;
		uParam0->f_10[5 /*57*/].f_6 = { -0.8088f, -7.2793f, 0.979f };
		uParam0->f_10[5 /*57*/].f_13 = { 0f, 0f, 0f };
		uParam0->f_10[5 /*57*/].f_12 = 0f;
		uParam0->f_10[5 /*57*/].f_16 = 0f;
		uParam0->f_10[5 /*57*/].f_17 = 0;
		uParam0->f_10[5 /*57*/].f_9 = { 1.181f, 0.6552f, 0.4279f };
		uParam0->f_10[5 /*57*/].f_18 = 1;
		uParam0->f_10[5 /*57*/].f_19 = 1;
		uParam0->f_10[5 /*57*/].f_20 = 0;
		uParam0->f_10[5 /*57*/].f_21 = 30f;
		uParam0->f_10[5 /*57*/].f_50 = 0;
		uParam0->f_10[5 /*57*/].f_51 = 0f;
		uParam0->f_10[5 /*57*/].f_52 = 0f;
		uParam0->f_10[5 /*57*/].f_22 = 0f;
		uParam0->f_10[5 /*57*/].f_53 = 0;
		uParam0->f_10[5 /*57*/].f_23 = 0f;
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
		uParam0->f_10[5 /*57*/].f_45 = 0;
		uParam0->f_10[5 /*57*/].f_46 = 0;
		uParam0->f_10[5 /*57*/].f_47 = 0f;
		uParam0->f_10[5 /*57*/].f_47.f_1 = 0f;
		uParam0->f_10[5 /*57*/].f_47.f_2 = 0f;
		uParam0->f_10[6 /*57*/].f_2 = 0;
		uParam0->f_10[6 /*57*/].f_3 = -1;
		uParam0->f_10[6 /*57*/].f_4 = 0;
		uParam0->f_10[6 /*57*/].f_5 = 900;
		uParam0->f_10[6 /*57*/].f_6 = { -0.856f, -6.5132f, 0.9411f };
		uParam0->f_10[6 /*57*/].f_13 = { 0f, 0f, 0f };
		uParam0->f_10[6 /*57*/].f_12 = 0f;
		uParam0->f_10[6 /*57*/].f_16 = 0f;
		uParam0->f_10[6 /*57*/].f_17 = 0;
		uParam0->f_10[6 /*57*/].f_9 = { 1.181f, 0.653f, 0.427f };
		uParam0->f_10[6 /*57*/].f_18 = 1;
		uParam0->f_10[6 /*57*/].f_19 = 1;
		uParam0->f_10[6 /*57*/].f_20 = 0;
		uParam0->f_10[6 /*57*/].f_21 = 30f;
		uParam0->f_10[6 /*57*/].f_50 = 0;
		uParam0->f_10[6 /*57*/].f_51 = 0f;
		uParam0->f_10[6 /*57*/].f_52 = 0f;
		uParam0->f_10[6 /*57*/].f_22 = 0f;
		uParam0->f_10[6 /*57*/].f_53 = 0;
		uParam0->f_10[6 /*57*/].f_23 = 0f;
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
		uParam0->f_1217 = 7;
		uParam0->f_1218 = 3;
		uParam0->f_2 = 0;
		uParam0->f_3 = 0;
		uParam0->f_1219 = 0;
		uParam0->f_1221 = "thisSwitchCam";
		uParam0->f_1220 = "CameraInfo_CarSteal_CarToBike.txt";
		uParam0->f_1225 = "CameraInfo_CarSteal_CarToBike.xml";
		*uParam0 = 1;
	}
	uParam0->f_4[0] = *iParam1;
	uParam0->f_4[1] = *iParam2;
}

void func_645(int iParam0)//Position - 0x85D61
{
	iLocal_487 = iParam0;
	func_873();
}

void func_649(var uParam0, int iParam1, int iParam2, float fParam3, int iParam4, int iParam5, int iParam6, var uParam7, float fParam8)//Position - 0x86139
{
	uParam0->f_5 = iParam1;
	uParam0->f_6 = iParam2;
	uParam0->f_12 = fParam3;
	uParam0->f_14 = iParam4;
	uParam0->f_15 = iParam5;
	uParam0->f_16 = iParam6;
	uParam0->f_17 = uParam7;
	uParam0->f_13 = fParam8;
}

void func_650(int* iParam0, bool bParam1, struct<3> Param2, float fParam3, int iParam4)//Position - 0x86171
{
	if (!ENTITY::DOES_ENTITY_EXIST(*iParam0))
	{
		while (!func_651(iParam0, bParam1, Param2, fParam3, 1, 0, 0))
		{
			SYSTEM::WAIT(0);
		}
		if (iParam4 == 1)
		{
			PED::SET_PED_DEFAULT_COMPONENT_VARIATION(*iParam0);
		}
	}
}

int func_651(int* iParam0, bool bParam1, struct<3> Param2, float fParam3, bool bParam4, bool bParam5, bool bParam6)//Position - 0x861AE
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
			func_39(*iParam0);
			__LIB_13__::func_777(*iParam0, 1, 0);
			__LIB_13__::func_763(*iParam0);
			__LIB_13__::func_762(*iParam0);
			func_653(*iParam0, bParam6);
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

int func_653(int iParam0, bool bParam1)//Position - 0x862C6
{
	bool bVar0;
	bool bVar1;
	bVar0 = __LIB_0__::func_650(iParam0);
	if (__LIB_0__::func_473(bVar0))
	{
		__LIB_0__::func_472(bVar0, 0);
		func_323(iParam0, 12, 0, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
		func_657(iParam0, 1);
		return 1;
	}
	if (!bParam1)
	{
		if (__LIB_0__::func_512(iParam0))
		{
			__LIB_0__::func_472(bVar0, 0);
			func_323(iParam0, 12, 0, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
			func_657(iParam0, 1);
			return 1;
		}
	}
	bVar1 = false;
	switch (bVar0)
	{
		case 0:
			if (Global_113386.f_9085_FLOW_STRUCT_isGameflowActive.f_99_MF_CONTROLS_STRUCT.f_58[120] && !Global_113386.f_9085_FLOW_STRUCT_isGameflowActive.f_99_MF_CONTROLS_STRUCT.f_58[122])
			{
				func_323(iParam0, 12, 0, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
				Global_113386.f_9085_FLOW_STRUCT_isGameflowActive.f_99_MF_CONTROLS_STRUCT.f_58[121] = 1;
				return 1;
			}
			if (Global_113386.f_9085_FLOW_STRUCT_isGameflowActive.f_99_MF_CONTROLS_STRUCT.f_58[123])
			{
				Global_113386.f_9085_FLOW_STRUCT_isGameflowActive.f_99_MF_CONTROLS_STRUCT.f_58[123] = 0;
				if (!PED::IS_PED_INJURED(iParam0))
				{
					if (func_133(iParam0, 3, 169))
					{
						func_323(iParam0, 3, 85, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
						return 1;
					}
				}
			}
			if (func_133(iParam0, 12, 6))
			{
				func_323(iParam0, 12, 0, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
				return 1;
			}
			if (func_133(iParam0, 12, 17))
			{
				if (!__LIB_15__::func_951(ENTITY::GET_ENTITY_MODEL(iParam0), 12, 17))
				{
					func_323(iParam0, 12, 0, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
					return 1;
				}
			}
			if (func_133(iParam0, 12, 20))
			{
				if (!__LIB_15__::func_951(ENTITY::GET_ENTITY_MODEL(iParam0), 12, 20))
				{
					func_323(iParam0, 12, 0, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
					return 1;
				}
			}
			if (func_133(iParam0, 12, 21))
			{
				if (!__LIB_15__::func_951(ENTITY::GET_ENTITY_MODEL(iParam0), 12, 21))
				{
					func_323(iParam0, 12, 0, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
					return 1;
				}
			}
			if (func_133(iParam0, 12, 22))
			{
				if (!__LIB_15__::func_951(ENTITY::GET_ENTITY_MODEL(iParam0), 12, 22))
				{
					func_323(iParam0, 12, 0, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
					return 1;
				}
			}
			if (func_133(iParam0, 12, 11))
			{
				func_323(iParam0, 12, 0, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
				return 1;
			}
			if (func_133(iParam0, 12, 10))
			{
				func_323(iParam0, 12, 0, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
				return 1;
			}
			if (func_133(iParam0, 12, 50))
			{
				func_323(iParam0, 12, 0, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
				return 1;
			}
			if (func_133(iParam0, 14, 59))
			{
				func_323(iParam0, 14, 1, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
				bVar1 = true;
			}
			if (func_133(iParam0, 8, 22))
			{
				func_323(iParam0, 8, 0, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
				bVar1 = true;
			}
			if (bVar1)
			{
				return 1;
			}
			if (func_133(iParam0, 12, 14))
			{
				func_323(iParam0, 12, 0, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
				return 1;
			}
			break;
		case 1:
			if (func_133(iParam0, 12, 13))
			{
				if (!__LIB_15__::func_951(ENTITY::GET_ENTITY_MODEL(iParam0), 12, 13))
				{
					func_323(iParam0, 12, 0, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
					return 1;
				}
			}
			if (func_133(iParam0, 12, 14))
			{
				if (!__LIB_15__::func_951(ENTITY::GET_ENTITY_MODEL(iParam0), 12, 14))
				{
					func_323(iParam0, 12, 0, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
					return 1;
				}
			}
			if (func_133(iParam0, 12, 15))
			{
				if (!__LIB_15__::func_951(ENTITY::GET_ENTITY_MODEL(iParam0), 12, 15))
				{
					func_323(iParam0, 12, 0, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
					return 1;
				}
			}
			if (func_133(iParam0, 12, 4))
			{
				func_323(iParam0, 12, 0, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
				return 1;
			}
			if (func_133(iParam0, 12, 3))
			{
				func_323(iParam0, 12, 0, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
				return 1;
			}
			if (func_133(iParam0, 14, 82))
			{
				func_323(iParam0, 14, 1, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
				bVar1 = true;
			}
			if (func_133(iParam0, 8, 76))
			{
				func_323(iParam0, 8, 26, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
				bVar1 = true;
			}
			if (bVar1)
			{
				return 1;
			}
			if (func_133(iParam0, 12, 1))
			{
				func_323(iParam0, 12, 0, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
				return 1;
			}
			break;
		case 2:
			if (func_133(iParam0, 12, 12))
			{
				func_323(iParam0, 12, 0, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
				return 1;
			}
			if (func_133(iParam0, 12, 15))
			{
				func_323(iParam0, 12, 0, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
				return 1;
			}
			if (!bParam1)
			{
				if (func_133(iParam0, 3, 71))
				{
					func_323(iParam0, 12, 0, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
					return 1;
				}
			}
			if (func_133(iParam0, 12, 17))
			{
				if (!__LIB_15__::func_951(ENTITY::GET_ENTITY_MODEL(iParam0), 12, 17))
				{
					func_323(iParam0, 12, 0, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
					return 1;
				}
			}
			if (func_133(iParam0, 12, 18))
			{
				if (!__LIB_15__::func_951(ENTITY::GET_ENTITY_MODEL(iParam0), 12, 18))
				{
					func_323(iParam0, 12, 0, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
					return 1;
				}
			}
			if (func_133(iParam0, 12, 19))
			{
				if (!__LIB_15__::func_951(ENTITY::GET_ENTITY_MODEL(iParam0), 12, 19))
				{
					func_323(iParam0, 12, 0, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
					return 1;
				}
			}
			if (func_133(iParam0, 12, 7))
			{
				func_323(iParam0, 12, 0, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
				return 1;
			}
			if (func_133(iParam0, 12, 6))
			{
				func_323(iParam0, 12, 0, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
				return 1;
			}
			if (func_133(iParam0, 14, 88))
			{
				func_323(iParam0, 14, 1, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
				bVar1 = true;
			}
			if (func_133(iParam0, 8, 17))
			{
				func_323(iParam0, 8, 15, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
				bVar1 = true;
			}
			if (bVar1)
			{
				return 1;
			}
			if (func_133(iParam0, 12, 11))
			{
				func_323(iParam0, 12, 0, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
				return 1;
			}
			break;
	}
	return 0;
}

void func_657(int iParam0, int iParam1)//Position - 0x86A57
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
				iVar1 = func_126(iParam0, 4, -1);
				if (iVar1 == 93)
				{
					__LIB_0__::func_414(bVar0);
					func_141(iParam0, &(Global_113386.f_2363.f_539[bVar0 /*65*/]), 0, 0, 1, 0);
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

void func_678()//Position - 0x881B1
{
	int iVar0;
	int iVar1;
	struct<3> Var2;
	struct<3> Var3;
	struct<3> Var4;
	struct<3> Var5;
	float fVar6;
	if (func_366())
	{
		func_479(1, "stageRace", 0, 0, func_359(1), 1);
		PLAYER::SET_MAX_WANTED_LEVEL(0);
		PLAYER::SET_WANTED_LEVEL_MULTIPLIER(0f);
		MISC::ENABLE_DISPATCH_SERVICE(1, false);
		MISC::ENABLE_DISPATCH_SERVICE(2, false);
		MISC::ENABLE_DISPATCH_SERVICE(3, false);
		MISC::ENABLE_DISPATCH_SERVICE(4, false);
		MISC::ENABLE_DISPATCH_SERVICE(5, false);
		func_350(PLAYER::PLAYER_ID(), 0, 0);
		fLocal_223 = 1f;
		func_615(sLocal_220, 500, 1, 1);
		func_685();
		VEHICLE::SET_VEHICLE_STRONG(iLocal_232, true);
		VEHICLE::SET_VEHICLE_STRONG(iLocal_233, true);
		VEHICLE::SET_VEHICLE_STRONG(iLocal_234, true);
		VEHICLE::SET_VEHICLE_DOORS_SHUT(iLocal_232, true);
		VEHICLE::SET_VEHICLE_DOORS_SHUT(iLocal_233, true);
		VEHICLE::SET_VEHICLE_DOORS_SHUT(iLocal_234, true);
		ENTITY::SET_ENTITY_COLLISION(iLocal_232, true, false);
		ENTITY::SET_ENTITY_COLLISION(iLocal_233, true, false);
		ENTITY::SET_ENTITY_COLLISION(iLocal_234, true, false);
		VEHICLE::SET_VEHICLE_IS_RACING(iLocal_232, true);
		VEHICLE::SET_VEHICLE_IS_RACING(iLocal_233, true);
		VEHICLE::SET_VEHICLE_IS_RACING(iLocal_234, true);
		if (ENTITY::DOES_ENTITY_EXIST(iLocal_226))
		{
			if (!PED::IS_PED_IN_VEHICLE(iLocal_226, iLocal_233, false))
			{
				PED::SET_PED_INTO_VEHICLE(iLocal_226, iLocal_233, -1);
			}
			PED::SET_DRIVER_RACING_MODIFIER(iLocal_226, 1f);
		}
		if (ENTITY::DOES_ENTITY_EXIST(iLocal_227))
		{
			if (!PED::IS_PED_IN_VEHICLE(iLocal_227, iLocal_234, false))
			{
				PED::SET_PED_INTO_VEHICLE(iLocal_227, iLocal_234, -1);
			}
			PED::SET_DRIVER_RACING_MODIFIER(iLocal_227, 1f);
		}
		AUDIO::ADD_ENTITY_TO_AUDIO_MIX_GROUP(iLocal_233, "CAR_1_RACERS", 0f);
		AUDIO::ADD_ENTITY_TO_AUDIO_MIX_GROUP(iLocal_234, "CAR_1_RACERS", 0f);
		if (!AUDIO::IS_AUDIO_SCENE_ACTIVE("CAR_1_RACE_MAIN"))
		{
			AUDIO::START_AUDIO_SCENE("CAR_1_RACE_MAIN");
		}
		func_475("S3_RACE", 7500, 1);
		if (!CAM::DOES_CAM_EXIST(iLocal_248))
		{
			iLocal_248 = CAM::CREATE_CAM("DEFAULT_SCRIPTED_CAMERA", false);
		}
		iLocal_198 = 1;
		bLocal_208 = false;
		func_24(1);
		if (func_365())
		{
			if (!PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), iLocal_232, false))
			{
				PED::SET_PED_INTO_VEHICLE(PLAYER::PLAYER_PED_ID(), iLocal_232, -1);
			}
			if (!PED::IS_PED_IN_VEHICLE(iLocal_226, iLocal_233, false))
			{
				PED::SET_PED_INTO_VEHICLE(iLocal_226, iLocal_233, -1);
			}
			if (!PED::IS_PED_IN_VEHICLE(iLocal_227, iLocal_234, false))
			{
				PED::SET_PED_INTO_VEHICLE(iLocal_227, iLocal_234, -1);
			}
			__LIB_15__::func_889(iLocal_232, 2571.3267f, 360.4416f, 107.457f, 359.7253f);
			__LIB_15__::func_889(iLocal_233, Local_213, 0f);
			__LIB_15__::func_889(iLocal_234, Local_214, -1.3639f);
			if (!bLocal_201)
			{
				func_361(2570.5767f, 364.8711f, 107.4569f, 50f);
			}
			iVar0 = MISC::GET_GAME_TIMER() + 5000;
			while (!AUDIO::REQUEST_SCRIPT_AUDIO_BANK("RACE_IGNITIONS", false, -1) && MISC::GET_GAME_TIMER() < iVar0)
			{
				func_362(0);
			}
			AUDIO::PLAY_SOUND_FROM_ENTITY(-1, "CAR_STEAL_1_IGNITIONS", iLocal_233, "CAR_STEAL_1_SOUNDSET", false, 0);
			CAM::SET_GAMEPLAY_CAM_RELATIVE_HEADING(0f);
			CAM::SET_GAMEPLAY_CAM_RELATIVE_PITCH(-10f, 1f);
			VEHICLE::SET_VEHICLE_ON_GROUND_PROPERLY(iLocal_232, 5f);
			PHYSICS::ACTIVATE_PHYSICS(iLocal_232);
			VEHICLE::START_PLAYBACK_RECORDED_VEHICLE(iLocal_233, 500, sLocal_220, true);
			VEHICLE::SET_PLAYBACK_SPEED(iLocal_233, 0f);
			VEHICLE::FORCE_PLAYBACK_RECORDED_VEHICLE_UPDATE(iLocal_233, true);
			VEHICLE::START_PLAYBACK_RECORDED_VEHICLE(iLocal_234, 501, sLocal_220, true);
			VEHICLE::SET_PLAYBACK_SPEED(iLocal_234, 0f);
			VEHICLE::FORCE_PLAYBACK_RECORDED_VEHICLE_UPDATE(iLocal_234, true);
			if (__LIB_0__::func_323())
			{
				func_24(2);
			}
			func_362(500);
			if (CAM::IS_SCREEN_FADED_OUT())
			{
				CAM::DO_SCREEN_FADE_IN(500);
			}
		}
	}
	else
	{
		__LIB_17__::func_71(&uLocal_282, iLocal_233, "S3_HELP2", 0, 1, 1, 1);
		RECORDING::REPLAY_DISABLE_CAMERA_MOVEMENT_THIS_FRAME();
		if (CAM::IS_GAMEPLAY_HINT_ACTIVE())
		{
			if (!AUDIO::IS_AUDIO_SCENE_ACTIVE("CAR_1_RACE_CARS_FOCUS_CAM"))
			{
				AUDIO::START_AUDIO_SCENE("CAR_1_RACE_CARS_FOCUS_CAM");
			}
		}
		else if (AUDIO::IS_AUDIO_SCENE_ACTIVE("CAR_1_RACE_CARS_FOCUS_CAM"))
		{
			AUDIO::STOP_AUDIO_SCENE("CAR_1_RACE_CARS_FOCUS_CAM");
		}
		switch (iLocal_180)
		{
			case 0:
				VEHICLE::SET_VEHICLE_ENGINE_ON(iLocal_232, true, true, false);
				VEHICLE::SET_VEHICLE_ENGINE_ON(iLocal_233, true, false, false);
				VEHICLE::SET_VEHICLE_ENGINE_ON(iLocal_234, true, false, false);
				if (!VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(iLocal_233))
				{
					VEHICLE::START_PLAYBACK_RECORDED_VEHICLE(iLocal_233, 500, sLocal_220, true);
				}
				else
				{
					VEHICLE::SET_PLAYBACK_SPEED(iLocal_233, 1f);
				}
				if (!VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(iLocal_234))
				{
					VEHICLE::START_PLAYBACK_RECORDED_VEHICLE(iLocal_234, 501, sLocal_220, true);
				}
				else
				{
					VEHICLE::SET_PLAYBACK_SPEED(iLocal_234, 1f);
				}
				func_351();
				break;
		}
		if (SYSTEM::TIMERA() >= 500)
		{
			if (!func_684())
			{
				func_350(PLAYER::PLAYER_ID(), 1, 0);
			}
		}
		if (PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), iLocal_232, false))
		{
			if (HUD::DOES_BLIP_EXIST(iLocal_241))
			{
				HUD::CLEAR_PRINTS();
				func_475("S3_RACE", 7500, 1);
				HUD::REMOVE_BLIP(&iLocal_241);
			}
		}
		else
		{
			if (__LIB_0__::func_1("S3_HELP1"))
			{
				HUD::CLEAR_HELP(true);
			}
			if (!HUD::DOES_BLIP_EXIST(iLocal_241))
			{
				HUD::CLEAR_PRINTS();
				func_475("CMN_GENGETIN" /* GXT: ~s~Get in the ~b~car. */, 7500, 1);
				__LIB_13__::func_808(&iLocal_242);
				__LIB_13__::func_808(&iLocal_243);
				iLocal_241 = HUD::ADD_BLIP_FOR_ENTITY(iLocal_232);
				HUD::SET_BLIP_AS_FRIENDLY(iLocal_241, true);
			}
		}
		if ((MISC::GET_GAME_TIMER() - iLocal_3259) > 200)
		{
			iVar1 = VEHICLE::GET_CLOSEST_VEHICLE(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true), 10f, 0, __LIB_15__::func_916());
			iLocal_3259 = MISC::GET_GAME_TIMER();
		}
		func_682(iVar1);
		if (VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(iLocal_233))
		{
			if (ENTITY::DOES_ENTITY_EXIST(iLocal_162[1]))
			{
				if (!ENTITY::DOES_ENTITY_EXIST(uLocal_239[0]))
				{
					func_348(&(uLocal_239[0]), joaat("trailers2"), VEHICLE::GET_POSITION_OF_VEHICLE_RECORDING_ID_AT_TIME(VEHICLE::GET_VEHICLE_RECORDING_ID(401, "ALubersetup"), 0f), 0f, -1, 0);
					ENTITY::SET_ENTITY_ROTATION(uLocal_239[0], VEHICLE::GET_ROTATION_OF_VEHICLE_RECORDING_ID_AT_TIME(VEHICLE::GET_VEHICLE_RECORDING_ID(401, "ALubersetup"), 0f), 2, true);
					ENTITY::SET_ENTITY_NO_COLLISION_ENTITY(uLocal_239[0], iLocal_162[1], false);
				}
			}
			if (ENTITY::DOES_ENTITY_EXIST(uLocal_239[0]))
			{
				if (!ENTITY::IS_ENTITY_DEAD(uLocal_239[0], false))
				{
					if (ENTITY::DOES_ENTITY_EXIST(iLocal_162[1]))
					{
						if (!ENTITY::IS_ENTITY_DEAD(iLocal_162[1], false))
						{
							if (VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(iLocal_162[1]))
							{
								if (!VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(uLocal_239[0]))
								{
									VEHICLE::START_PLAYBACK_RECORDED_VEHICLE(uLocal_239[0], 401, "ALubersetup", true);
								}
							}
							if (VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(uLocal_239[0]))
							{
								if (VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(iLocal_162[1]))
								{
									__LIB_17__::func_84(&(uLocal_239[0]), VEHICLE::GET_TIME_POSITION_IN_RECORDING(iLocal_162[1]));
								}
							}
							else if (!VEHICLE::IS_VEHICLE_ATTACHED_TO_TRAILER(iLocal_162[1]))
							{
								VEHICLE::ATTACH_VEHICLE_TO_TRAILER(iLocal_162[1], uLocal_239[0], 1f);
							}
						}
					}
				}
			}
			if (ENTITY::DOES_ENTITY_EXIST(iLocal_162[2]))
			{
				if (!ENTITY::DOES_ENTITY_EXIST(uLocal_239[1]))
				{
					func_348(&(uLocal_239[1]), joaat("trailers"), VEHICLE::GET_POSITION_OF_VEHICLE_RECORDING_ID_AT_TIME(VEHICLE::GET_VEHICLE_RECORDING_ID(403, "ALubersetup"), 0f), 0f, -1, 0);
					ENTITY::SET_ENTITY_ROTATION(uLocal_239[1], VEHICLE::GET_ROTATION_OF_VEHICLE_RECORDING_ID_AT_TIME(VEHICLE::GET_VEHICLE_RECORDING_ID(403, "ALubersetup"), 0f), 2, true);
					ENTITY::SET_ENTITY_NO_COLLISION_ENTITY(uLocal_239[1], iLocal_162[2], false);
				}
			}
			if (ENTITY::DOES_ENTITY_EXIST(uLocal_239[1]))
			{
				if (!ENTITY::IS_ENTITY_DEAD(uLocal_239[1], false))
				{
					if (ENTITY::DOES_ENTITY_EXIST(iLocal_162[2]))
					{
						if (!ENTITY::IS_ENTITY_DEAD(iLocal_162[2], false))
						{
							if (VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(iLocal_162[2]))
							{
								if (!VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(uLocal_239[1]))
								{
									VEHICLE::START_PLAYBACK_RECORDED_VEHICLE(uLocal_239[1], 403, "ALubersetup", true);
								}
							}
							if (VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(uLocal_239[1]))
							{
								if (VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(iLocal_162[2]))
								{
									__LIB_17__::func_84(&(uLocal_239[1]), VEHICLE::GET_TIME_POSITION_IN_RECORDING(iLocal_162[2]));
								}
							}
							else if (!VEHICLE::IS_VEHICLE_ATTACHED_TO_TRAILER(iLocal_162[2]))
							{
								VEHICLE::ATTACH_VEHICLE_TO_TRAILER(iLocal_162[2], uLocal_239[1], 1f);
							}
						}
					}
				}
			}
			if (ENTITY::DOES_ENTITY_EXIST(uLocal_239[0]) && ENTITY::DOES_ENTITY_EXIST(uLocal_239[1]))
			{
				if (!func_897("BetweenTrucks"))
				{
					if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), ENTITY::GET_ENTITY_COORDS(uLocal_239[0], false) - Vector(5f, 0f, 0f), ENTITY::GET_ENTITY_COORDS(uLocal_239[1], false) + Vector(5f, 0f, 0f), 8f, false, true, 0))
					{
						__LIB_0__::func_630(111);
						RECORDING::REPLAY_RECORD_BACK_FOR_TIME(3f, 5f, 4);
						if (ENTITY::DOES_ENTITY_EXIST(iLocal_162[2]))
						{
							AUDIO::PLAY_SOUND_FROM_ENTITY(-1, "TRUCK_HORN", iLocal_162[2], "CAR_STEAL_1_SOUNDSET", false, 0);
						}
						if (!iLocal_195)
						{
							RECORDING::REPLAY_START_EVENT(3);
							iLocal_195 = 1;
						}
						func_894("BetweenTrucks", 1);
					}
				}
				else if (!func_897("BetweenBuses"))
				{
					if (iLocal_195)
					{
						if (!ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), ENTITY::GET_ENTITY_COORDS(uLocal_239[0], false) - Vector(5f, 0f, 0f), ENTITY::GET_ENTITY_COORDS(uLocal_239[1], false) + Vector(5f, 0f, 0f), 8f, false, true, 0))
						{
							RECORDING::REPLAY_STOP_EVENT();
							iLocal_195 = 0;
						}
					}
				}
			}
			if (ENTITY::DOES_ENTITY_EXIST(iLocal_162[3]) && ENTITY::DOES_ENTITY_EXIST(iLocal_162[4]))
			{
				if (!func_897("BetweenBuses"))
				{
					if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), ENTITY::GET_ENTITY_COORDS(iLocal_162[3], false) - Vector(5f, 0f, 0f), ENTITY::GET_ENTITY_COORDS(iLocal_162[4], false) + Vector(5f, 0f, 0f), 8f, false, true, 0))
					{
						__LIB_0__::func_630(112);
						AUDIO::PLAY_SOUND_FROM_ENTITY(-1, "BUS_HORN", iLocal_162[3], "CAR_STEAL_1_SOUNDSET", false, 0);
						RECORDING::REPLAY_RECORD_BACK_FOR_TIME(3f, 5f, 4);
						if (!iLocal_195)
						{
							RECORDING::REPLAY_START_EVENT(3);
							iLocal_195 = 1;
						}
						func_894("BetweenBuses", 1);
					}
				}
				else if (iLocal_195)
				{
					if (!ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), ENTITY::GET_ENTITY_COORDS(iLocal_162[3], false) - Vector(5f, 0f, 0f), ENTITY::GET_ENTITY_COORDS(iLocal_162[4], false) + Vector(5f, 0f, 0f), 8f, false, true, 0))
					{
						RECORDING::REPLAY_STOP_EVENT();
						iLocal_195 = 0;
					}
				}
			}
			if (((((ENTITY::DOES_ENTITY_EXIST(iLocal_159[5]) && !ENTITY::IS_ENTITY_DEAD(iLocal_159[5], false)) && ENTITY::DOES_ENTITY_EXIST(iLocal_159[6])) && !ENTITY::IS_ENTITY_DEAD(iLocal_159[6], false)) && ENTITY::DOES_ENTITY_EXIST(iLocal_159[7])) && !ENTITY::IS_ENTITY_DEAD(iLocal_159[7], false))
			{
				if (!func_897("CAR_1_RACE_SKIDDING_CARS"))
				{
					if ((MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(iLocal_159[5], true), ENTITY::GET_ENTITY_COORDS(iLocal_232, true), true) < 20f || MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(iLocal_159[6], true), ENTITY::GET_ENTITY_COORDS(iLocal_232, true), true) < 20f) || MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(iLocal_159[7], true), ENTITY::GET_ENTITY_COORDS(iLocal_232, true), true) < 20f)
					{
						if (!AUDIO::IS_AUDIO_SCENE_ACTIVE("CAR_1_RACE_SKIDDING_CARS"))
						{
							AUDIO::START_AUDIO_SCENE("CAR_1_RACE_SKIDDING_CARS");
						}
						RECORDING::REPLAY_RECORD_BACK_FOR_TIME(3f, 5f, 4);
						func_894("CAR_1_RACE_SKIDDING_CARS", 1);
					}
				}
				else
				{
					if (!func_897("CAR_1_BRAKING_CARS_1"))
					{
						if (MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(iLocal_159[5], true), ENTITY::GET_ENTITY_COORDS(iLocal_232, true), true) < 20f)
						{
							AUDIO::ADD_ENTITY_TO_AUDIO_MIX_GROUP(iLocal_159[5], "CAR_1_SKIDDING_CARS_GROUP", 0f);
							RECORDING::REPLAY_RECORD_BACK_FOR_TIME(3f, 5f, 4);
							func_894("CAR_1_BRAKING_CARS_1", 1);
						}
					}
					else if (ENTITY::GET_ENTITY_SPEED(iLocal_159[5]) < 1f)
					{
						AUDIO::REMOVE_ENTITY_FROM_AUDIO_MIX_GROUP(iLocal_159[5], 0f);
					}
					if (!func_897("CAR_1_BRAKING_CARS_2"))
					{
						if (MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(iLocal_159[6], true), ENTITY::GET_ENTITY_COORDS(iLocal_232, true), true) < 20f)
						{
							AUDIO::ADD_ENTITY_TO_AUDIO_MIX_GROUP(iLocal_159[6], "CAR_1_SKIDDING_CARS_GROUP", 0f);
							RECORDING::REPLAY_RECORD_BACK_FOR_TIME(3f, 5f, 4);
							func_894("CAR_1_BRAKING_CARS_2", 1);
						}
					}
					else if (ENTITY::GET_ENTITY_SPEED(iLocal_159[6]) < 1f)
					{
						AUDIO::REMOVE_ENTITY_FROM_AUDIO_MIX_GROUP(iLocal_159[6], 0f);
					}
					if (!func_897("CAR_1_BRAKING_CARS_3"))
					{
						if (MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(iLocal_159[7], true), ENTITY::GET_ENTITY_COORDS(iLocal_232, true), true) < 20f)
						{
							AUDIO::ADD_ENTITY_TO_AUDIO_MIX_GROUP(iLocal_159[7], "CAR_1_SKIDDING_CARS_GROUP", 0f);
							RECORDING::REPLAY_RECORD_BACK_FOR_TIME(3f, 5f, 4);
							func_894("CAR_1_BRAKING_CARS_3", 1);
						}
					}
					else if (ENTITY::GET_ENTITY_SPEED(iLocal_159[7]) < 1f)
					{
						AUDIO::REMOVE_ENTITY_FROM_AUDIO_MIX_GROUP(iLocal_159[7], 0f);
					}
					if ((func_897("CAR_1_BRAKING_CARS_1") && func_897("CAR_1_BRAKING_CARS_2")) && func_897("CAR_1_BRAKING_CARS_3"))
					{
						if (AUDIO::IS_AUDIO_SCENE_ACTIVE("CAR_1_RACE_SKIDDING_CARS"))
						{
							AUDIO::STOP_AUDIO_SCENE("CAR_1_RACE_SKIDDING_CARS");
						}
					}
				}
			}
			if (VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(iLocal_233))
			{
				if (VEHICLE::GET_TIME_POSITION_IN_RECORDING(iLocal_233) > 100000f)
				{
					if (!ENTITY::DOES_ENTITY_EXIST(iLocal_235))
					{
						if (func_869(joaat("policeb")))
						{
							func_348(&iLocal_235, joaat("policeb"), Local_215, 147.9465f, -1, 0);
							__LIB_0__::func_679(iLocal_235, 2);
							VEHICLE::SET_VEHICLE_HAS_STRONG_AXLES(iLocal_235, true);
						}
					}
					else if (!ENTITY::DOES_ENTITY_EXIST(uLocal_489[2]))
					{
						if (func_869(__LIB_0__::func_518(2)))
						{
							func_650(&(uLocal_489[2]), 2, Local_3044, fLocal_3045, 0);
							if (!PED::IS_PED_WEARING_HELMET(uLocal_489[2]))
							{
								PED::SET_PED_HELMET_PROP_INDEX(uLocal_489[2], 5, true);
								PED::SET_PED_HELMET_TEXTURE_INDEX(uLocal_489[2], 0);
							}
							func_323(uLocal_489[2], 12, 3, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
							__LIB_16__::func_888(2);
							PED::SET_PED_RELATIONSHIP_GROUP_HASH(uLocal_489[2], iLocal_255);
							PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(uLocal_489[2], true);
							PED::SET_PED_CONFIG_FLAG(uLocal_489[2], 32, false);
						}
					}
					else if (!PED::IS_PED_IN_VEHICLE(uLocal_489[2], iLocal_235, false))
					{
						PED::SET_PED_INTO_VEHICLE(uLocal_489[2], iLocal_235, -1);
					}
					if (!ENTITY::DOES_ENTITY_EXIST(iLocal_236))
					{
						if (func_869(joaat("policeb")))
						{
							func_348(&iLocal_236, joaat("policeb"), Local_216, 135.0532f, -1, 0);
							__LIB_0__::func_679(iLocal_236, 3);
							VEHICLE::SET_VEHICLE_HAS_STRONG_AXLES(iLocal_236, true);
						}
					}
					else if (!ENTITY::DOES_ENTITY_EXIST(uLocal_489[0]))
					{
						if (func_869(__LIB_0__::func_518(0)))
						{
							func_650(&(uLocal_489[0]), 0, Local_3046, fLocal_3047, 0);
							func_323(uLocal_489[0], 12, 4, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0);
							__LIB_16__::func_888(0);
							PED::SET_PED_RELATIONSHIP_GROUP_HASH(uLocal_489[0], iLocal_255);
							PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(uLocal_489[0], true);
							PED::SET_PED_CONFIG_FLAG(uLocal_489[0], 32, false);
						}
					}
					else if (!PED::IS_PED_IN_VEHICLE(uLocal_489[0], iLocal_236, false))
					{
						PED::SET_PED_INTO_VEHICLE(uLocal_489[0], iLocal_236, -1);
					}
				}
			}
			if (ENTITY::DOES_ENTITY_EXIST(uLocal_489[2]) && ENTITY::DOES_ENTITY_EXIST(uLocal_489[0]))
			{
				if (MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true), ENTITY::GET_ENTITY_COORDS(uLocal_489[2], true), true) < 100f)
				{
					CUTSCENE::REQUEST_CUTSCENE("Car_steal_3_mcs_2", 8);
					STREAMING::REQUEST_ANIM_DICT(sLocal_3032);
					if (CUTSCENE::CAN_REQUEST_ASSETS_FOR_CUTSCENE_ENTITY())
					{
						__LIB_41__::func_49("Michael", func_359(0), 0, 2);
						__LIB_41__::func_49("Trevor", func_359(2), 0, 2);
					}
				}
			}
			if (!func_897("S3_OVER"))
			{
				if (!bLocal_208)
				{
					if (VEHICLE::GET_TIME_POSITION_IN_RECORDING(iLocal_233) > 23000f)
					{
						if (!PLAYER::IS_SPECIAL_ABILITY_ACTIVE(PLAYER::PLAYER_ID(), 0))
						{
							if (PAD::IS_USING_KEYBOARD_AND_MOUSE(0 /*PLAYER_CONTROL*/))
							{
								func_450("S3_OVER_KM", 1, 12000);
							}
							else
							{
								func_450("S3_OVER", 1, 12000);
							}
						}
						else
						{
							func_894("S3_OVER", 1);
						}
					}
				}
			}
			if (PLAYER::IS_SPECIAL_ABILITY_ACTIVE(PLAYER::PLAYER_ID(), 0))
			{
				if (__LIB_0__::func_1("S3_OVER"))
				{
					HUD::CLEAR_HELP(true);
				}
				if (MISC::IS_PC_VERSION())
				{
					if (__LIB_0__::func_1("S3_OVER_KM"))
					{
						HUD::CLEAR_HELP(true);
					}
				}
			}
		}
		if ((VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(iLocal_234) && VEHICLE::GET_TIME_POSITION_IN_RECORDING(iLocal_234) > (86000f - 3000f)) || VEHICLE::IS_PLAYBACK_USING_AI_GOING_ON_FOR_VEHICLE(iLocal_234))
		{
			ENTITY::SET_ENTITY_LOAD_COLLISION_FLAG(iLocal_234, true, 1);
		}
		if ((VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(iLocal_233) && VEHICLE::GET_TIME_POSITION_IN_RECORDING(iLocal_233) > (102000f - 3000f)) || VEHICLE::IS_PLAYBACK_USING_AI_GOING_ON_FOR_VEHICLE(iLocal_233))
		{
			ENTITY::SET_ENTITY_LOAD_COLLISION_FLAG(iLocal_233, true, 1);
		}
		if (TASK::GET_SCRIPT_TASK_STATUS(iLocal_226, joaat("SCRIPT_TASK_VEHICLE_MISSION")) == 1)
		{
			if (ENTITY::IS_ENTITY_ON_SCREEN(iLocal_233))
			{
				iLocal_186[1] = MISC::GET_GAME_TIMER() + 1500;
			}
			else if (MISC::GET_GAME_TIMER() > iLocal_186[1] && MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true), ENTITY::GET_ENTITY_COORDS(iLocal_233, true), true) > (30f - (VEHICLE::GET_VEHICLE_ESTIMATED_MAX_SPEED(PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false)) / 5f)))
			{
				if (MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(iLocal_233, true), 2391.1492f, 5804.0825f, 45.1577f, true) > MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true), 2391.1492f, 5804.0825f, 45.1577f, true))
				{
					Var2 = { VEHICLE::GET_POSITION_OF_VEHICLE_RECORDING_AT_TIME(500, (__LIB_15__::func_915(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true), 500, sLocal_220, 10) - 1000f), sLocal_220) };
					if (!CAM::IS_SPHERE_VISIBLE(Var2, 5f))
					{
						MISC::CLEAR_AREA(Var2, 5f, true, false, false, false);
						__LIB_15__::func_889(iLocal_233, Var2, __LIB_15__::func_914(VEHICLE::GET_ROTATION_OF_VEHICLE_RECORDING_AT_TIME(500, (__LIB_15__::func_915(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true), 500, sLocal_220, 10) - 1000f), sLocal_220)));
						VEHICLE::SET_VEHICLE_FORWARD_SPEED(iLocal_233, ENTITY::GET_ENTITY_SPEED(iLocal_232));
						VEHICLE::SET_VEHICLE_ENGINE_ON(iLocal_233, true, true, false);
						iLocal_186[1] = (MISC::GET_GAME_TIMER() + (3000 - __LIB_0__::func_340(SYSTEM::ROUND((VEHICLE::GET_VEHICLE_ESTIMATED_MAX_SPEED(PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false)) * VEHICLE::GET_VEHICLE_ESTIMATED_MAX_SPEED(PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false)))), 0, 1500)));
					}
				}
			}
		}
		if (TASK::GET_SCRIPT_TASK_STATUS(iLocal_227, joaat("SCRIPT_TASK_VEHICLE_MISSION")) == 1)
		{
			if (ENTITY::IS_ENTITY_ON_SCREEN(iLocal_234))
			{
				iLocal_186[2] = MISC::GET_GAME_TIMER() + 1500;
			}
			else if (MISC::GET_GAME_TIMER() > iLocal_186[2] && MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true), ENTITY::GET_ENTITY_COORDS(iLocal_234, true), true) > (30f - (VEHICLE::GET_VEHICLE_ESTIMATED_MAX_SPEED(PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false)) / 5f)))
			{
				if (MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(iLocal_234, true), 2391.1492f, 5804.0825f, 45.1577f, true) > MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true), 2391.1492f, 5804.0825f, 45.1577f, true))
				{
					Var3 = { VEHICLE::GET_POSITION_OF_VEHICLE_RECORDING_AT_TIME(501, (__LIB_15__::func_915(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true), 501, sLocal_220, 10) - 1000f), sLocal_220) };
					if (!CAM::IS_SPHERE_VISIBLE(Var3, 5f))
					{
						MISC::CLEAR_AREA(Var3, 5f, true, false, false, false);
						__LIB_15__::func_889(iLocal_234, Var3, __LIB_15__::func_914(VEHICLE::GET_ROTATION_OF_VEHICLE_RECORDING_AT_TIME(501, (__LIB_15__::func_915(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true), 501, sLocal_220, 10) - 1000f), sLocal_220)));
						VEHICLE::SET_VEHICLE_FORWARD_SPEED(iLocal_234, ENTITY::GET_ENTITY_SPEED(iLocal_232));
						VEHICLE::SET_VEHICLE_ENGINE_ON(iLocal_234, true, true, false);
						iLocal_186[2] = (MISC::GET_GAME_TIMER() + (3000 - __LIB_0__::func_340(SYSTEM::ROUND((VEHICLE::GET_VEHICLE_ESTIMATED_MAX_SPEED(PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false)) * VEHICLE::GET_VEHICLE_ESTIMATED_MAX_SPEED(PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false)))), 0, 1500)));
					}
				}
			}
		}
		if (PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), iLocal_232, false))
		{
			if (HUD::IS_PAUSE_MENU_ACTIVE())
			{
				if (HUD::DOES_BLIP_EXIST(iLocal_242))
				{
					HUD::SET_BLIP_COORDS(iLocal_242, ENTITY::GET_ENTITY_COORDS(iLocal_233, true));
				}
				if (HUD::DOES_BLIP_EXIST(iLocal_243))
				{
					HUD::SET_BLIP_COORDS(iLocal_243, ENTITY::GET_ENTITY_COORDS(iLocal_234, true));
				}
			}
			if (!HUD::DOES_BLIP_EXIST(iLocal_242))
			{
				iLocal_242 = HUD::ADD_BLIP_FOR_COORD(ENTITY::GET_ENTITY_COORDS(iLocal_233, true));
				HUD::SET_BLIP_COLOUR(iLocal_242, 3);
				HUD::SET_BLIP_PRIORITY(iLocal_242, 9);
				HUD::SET_BLIP_NAME_FROM_TEXT_FILE(iLocal_242, "S3_BLIPVEH");
			}
			Var4 = { ENTITY::GET_ENTITY_COORDS(iLocal_233, true) };
			Var5 = { HUD::GET_BLIP_COORDS(iLocal_242) };
			fVar6 = (1f + __LIB_0__::func_331((MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true), ENTITY::GET_ENTITY_COORDS(iLocal_233, true), true) / 4f), 0f, 17.5f));
			Var5.f_0 = (Var5.f_0 + ((((Var4.f_0 - Var5.f_0) / fVar6) * 15f) * SYSTEM::TIMESTEP()));
			Var5.f_1 = (Var5.f_1 + ((((Var4.f_1 - Var5.f_1) / fVar6) * 15f) * SYSTEM::TIMESTEP()));
			Var5.f_2 = (Var5.f_2 + ((((Var4.f_2 - Var5.f_2) / fVar6) * 15f) * SYSTEM::TIMESTEP()));
			HUD::SET_BLIP_COORDS(iLocal_242, Var5);
			if (!HUD::DOES_BLIP_EXIST(iLocal_243))
			{
				iLocal_243 = HUD::ADD_BLIP_FOR_COORD(ENTITY::GET_ENTITY_COORDS(iLocal_234, true));
				HUD::SET_BLIP_COLOUR(iLocal_243, 3);
				HUD::SET_BLIP_PRIORITY(iLocal_243, 9);
				HUD::SET_BLIP_NAME_FROM_TEXT_FILE(iLocal_243, "S3_BLIPVEH");
			}
			Var4 = { ENTITY::GET_ENTITY_COORDS(iLocal_234, true) };
			Var5 = { HUD::GET_BLIP_COORDS(iLocal_243) };
			fVar6 = (1f + __LIB_0__::func_331((MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true), ENTITY::GET_ENTITY_COORDS(iLocal_234, true), true) / 4f), 0f, 17.5f));
			Var5.f_0 = (Var5.f_0 + ((((Var4.f_0 - Var5.f_0) / fVar6) * 15f) * SYSTEM::TIMESTEP()));
			Var5.f_1 = (Var5.f_1 + ((((Var4.f_1 - Var5.f_1) / fVar6) * 15f) * SYSTEM::TIMESTEP()));
			Var5.f_2 = (Var5.f_2 + ((((Var4.f_2 - Var5.f_2) / fVar6) * 15f) * SYSTEM::TIMESTEP()));
			HUD::SET_BLIP_COORDS(iLocal_243, Var5);
		}
		else
		{
			__LIB_13__::func_808(&iLocal_242);
			__LIB_13__::func_808(&iLocal_243);
		}
		PATHFIND::REQUEST_PATH_NODES_IN_AREA_THIS_FRAME(1651.7878f, 3131.1892f, 3216.7893f, 6348.1943f);
		if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), 2479.381f, 4728.353f, 23.323929f, 3015.3823f, 4846.076f, 153.63016f, 450f, false, true, 0) && PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), iLocal_232, false))
		{
			if (__LIB_0__::func_494(1, 0, 1))
			{
				func_37();
			}
		}
	}
	if (func_36())
	{
		__LIB_0__::func_345(&uLocal_282, 0, 0);
		if (AUDIO::IS_AUDIO_SCENE_ACTIVE("CAR_1_RACE_SKIDDING_CARS"))
		{
			AUDIO::STOP_AUDIO_SCENE("CAR_1_RACE_SKIDDING_CARS");
		}
		if (AUDIO::IS_AUDIO_SCENE_ACTIVE("CAR_1_RACE_CARS_FOCUS_CAM"))
		{
			AUDIO::STOP_AUDIO_SCENE("CAR_1_RACE_CARS_FOCUS_CAM");
		}
		ENTITY::SET_ENTITY_LOAD_COLLISION_FLAG(iLocal_233, false, 1);
		ENTITY::SET_ENTITY_LOAD_COLLISION_FLAG(iLocal_234, false, 1);
		STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(joaat("trailers"));
		STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(joaat("trailers2"));
		__LIB_15__::func_887(&(uLocal_239[0]));
		__LIB_15__::func_887(&(uLocal_239[1]));
		RECORDING::REPLAY_RECORD_BACK_FOR_TIME(10f, 0f, 4);
		iLocal_479++;
	}
}

void func_682(int iParam0)//Position - 0x897C6
{
	int iVar0;
	int iVar1;
	if ((MISC::GET_GAME_TIMER() - iLocal_3258) > 2000)
	{
		if (iParam0 != iLocal_233 && iParam0 != iLocal_234)
		{
			if (VEHICLE::IS_VEHICLE_DRIVEABLE(iParam0, false))
			{
				iVar0 = VEHICLE::GET_PED_IN_VEHICLE_SEAT(iParam0, -1, false);
				if (!PED::IS_PED_INJURED(iVar0))
				{
					iVar1 = MISC::GET_RANDOM_INT_IN_RANGE(0, 3);
					if (iVar1 == 0)
					{
						VEHICLE::START_VEHICLE_HORN(iParam0, 2000, 0, false);
					}
					else if (iVar1 == 1)
					{
						__LIB_0__::func_640(iVar0, "GENERIC_CURSE_HIGH", 6);
					}
					else if (iVar1 == 2)
					{
						VEHICLE::START_VEHICLE_HORN(iParam0, 2000, 0, false);
						__LIB_0__::func_640(iVar0, "GENERIC_CURSE_HIGH", 6);
					}
					iLocal_3258 = MISC::GET_GAME_TIMER();
				}
			}
		}
	}
}

int func_684()//Position - 0x8986E
{
	if (bLocal_547)
	{
		return 1;
	}
	return 0;
}

void func_685()//Position - 0x89881
{
	Local_127[0 /*3*/] = { 2531.8367f, 567.2463f, 111.271f };
	fLocal_63[0] = 0.0104f;
	fLocal_64[0] = 0.0256f;
	fLocal_65[0] = 0.9981f;
	fLocal_66[0] = -0.0547f;
	iLocal_103[0] = 1;
	fLocal_67[0] = 3432f;
	iLocal_153[0] = joaat("mule");
	Local_127[1 /*3*/] = { 2528.3938f, 602.4405f, 108.8434f };
	fLocal_63[1] = 0.0095f;
	fLocal_64[1] = 0.0302f;
	fLocal_65[1] = 0.996f;
	fLocal_66[1] = -0.0832f;
	iLocal_103[1] = 2;
	fLocal_67[1] = 4884f;
	iLocal_153[1] = joaat("minivan");
	Local_127[2 /*3*/] = { 2523.923f, 590.3826f, 109.196f };
	fLocal_63[2] = -0.018f;
	fLocal_64[2] = 0.028f;
	fLocal_65[2] = 0.9992f;
	fLocal_66[2] = -0.0234f;
	iLocal_103[2] = 3;
	fLocal_67[2] = 5214f;
	iLocal_153[2] = joaat("minivan");
	Local_127[3 /*3*/] = { 2518.8372f, 628.9053f, 107.6059f };
	fLocal_63[3] = -0.0193f;
	fLocal_64[3] = 0.03f;
	fLocal_65[3] = 0.9973f;
	fLocal_66[3] = -0.0645f;
	iLocal_103[3] = 4;
	fLocal_67[3] = 5676f;
	iLocal_153[3] = joaat("mule");
	Local_127[4 /*3*/] = { 2517.6628f, 641.6564f, 106.3506f };
	fLocal_63[4] = -0.0138f;
	fLocal_64[4] = 0.0317f;
	fLocal_65[4] = 0.9955f;
	fLocal_66[4] = -0.0884f;
	iLocal_103[4] = 5;
	fLocal_67[4] = 7194f;
	iLocal_153[4] = joaat("minivan");
	Local_127[5 /*3*/] = { 2511.8474f, 706.9466f, 102.3872f };
	fLocal_63[5] = 0.0098f;
	fLocal_64[5] = 0.0355f;
	fLocal_65[5] = 0.9951f;
	fLocal_66[5] = -0.0922f;
	iLocal_103[5] = 6;
	fLocal_67[5] = 8118f;
	iLocal_153[5] = joaat("mule");
	Local_127[6 /*3*/] = { 2500.542f, 736.9729f, 99.4502f };
	fLocal_63[6] = -0.0158f;
	fLocal_64[6] = 0.034f;
	fLocal_65[6] = 0.9966f;
	fLocal_66[6] = -0.0739f;
	iLocal_103[6] = 7;
	fLocal_67[6] = 8910f;
	iLocal_153[6] = joaat("emperor");
	Local_127[7 /*3*/] = { 2504.5508f, 746.0255f, 99.1176f };
	fLocal_63[7] = 0.0095f;
	fLocal_64[7] = 0.0367f;
	fLocal_65[7] = 0.9902f;
	fLocal_66[7] = -0.1342f;
	iLocal_103[7] = 8;
	fLocal_67[7] = 9240f;
	iLocal_153[7] = joaat("minivan");
	Local_127[8 /*3*/] = { 2490.1902f, 789.2353f, 96.4467f };
	fLocal_63[8] = -0.0208f;
	fLocal_64[8] = 0.0316f;
	fLocal_65[8] = 0.994f;
	fLocal_66[8] = -0.1028f;
	iLocal_103[8] = 9;
	fLocal_67[8] = 10164f;
	iLocal_153[8] = joaat("mule");
	Local_127[9 /*3*/] = { 2488.1423f, 798.9224f, 95.2954f };
	fLocal_63[9] = -0.021f;
	fLocal_64[9] = 0.0298f;
	fLocal_65[9] = 0.9967f;
	fLocal_66[9] = -0.0728f;
	iLocal_103[9] = 10;
	fLocal_67[9] = 10362f;
	iLocal_153[9] = joaat("minivan");
	Local_127[10 /*3*/] = { 2487.1033f, 803.4872f, 95.1668f };
	fLocal_63[10] = -0.0199f;
	fLocal_64[10] = 0.0299f;
	fLocal_65[10] = 0.9966f;
	fLocal_66[10] = -0.0736f;
	iLocal_103[10] = 11;
	fLocal_67[10] = 10890f;
	iLocal_153[10] = joaat("minivan");
	Local_127[11 /*3*/] = { 2474.4858f, 851.2122f, 92.7213f };
	fLocal_63[11] = -0.0209f;
	fLocal_64[11] = 0.0219f;
	fLocal_65[11] = 0.9875f;
	fLocal_66[11] = -0.1549f;
	iLocal_103[11] = 12;
	fLocal_67[11] = 11616f;
	iLocal_153[11] = joaat("mule");
	Local_127[12 /*3*/] = { 2471.3564f, 860.8902f, 91.7206f };
	fLocal_63[12] = -0.0232f;
	fLocal_64[12] = 0.0194f;
	fLocal_65[12] = 0.9796f;
	fLocal_66[12] = -0.1984f;
	iLocal_103[12] = 13;
	fLocal_67[12] = 11946f;
	iLocal_153[12] = joaat("minivan");
	Local_127[13 /*3*/] = { 2462.596f, 902.452f, 89.8936f };
	fLocal_63[13] = 0.0072f;
	fLocal_64[13] = 0.0228f;
	fLocal_65[13] = 0.9802f;
	fLocal_66[13] = -0.1965f;
	iLocal_103[13] = 14;
	fLocal_67[13] = 12738f;
	iLocal_153[13] = joaat("minivan");
	Local_127[14 /*3*/] = { 2456.2698f, 917.0245f, 89.0053f };
	fLocal_63[14] = 0.0082f;
	fLocal_64[14] = 0.0213f;
	fLocal_65[14] = 0.969f;
	fLocal_66[14] = -0.2462f;
	iLocal_103[14] = 15;
	fLocal_67[14] = 13068f;
	iLocal_153[14] = joaat("emperor");
	Local_127[15 /*3*/] = { 2479.744f, 924.9675f, 86.5518f };
	fLocal_63[15] = 0.0025f;
	fLocal_64[15] = -0.0175f;
	fLocal_65[15] = 0.2824f;
	fLocal_66[15] = 0.9591f;
	iLocal_103[15] = 16;
	fLocal_67[15] = 13068f;
	iLocal_153[15] = joaat("minivan");
	Local_127[16 /*3*/] = { 2442.2642f, 946.6888f, 88.5245f };
	fLocal_63[16] = 0.0092f;
	fLocal_64[16] = 0.0222f;
	fLocal_65[16] = 0.9713f;
	fLocal_66[16] = -0.2368f;
	iLocal_103[16] = 17;
	fLocal_67[16] = 13662f;
	iLocal_153[16] = joaat("mule");
	Local_127[17 /*3*/] = { 2450.368f, 964.5439f, 85.8815f };
	fLocal_63[17] = 0.001f;
	fLocal_64[17] = -0.0181f;
	fLocal_65[17] = 0.3259f;
	fLocal_66[17] = 0.9452f;
	iLocal_103[17] = 18;
	fLocal_67[17] = 13992f;
	iLocal_153[17] = joaat("minivan");
	Local_127[18 /*3*/] = { 2430.6428f, 968.1787f, 87.0446f };
	fLocal_63[18] = 0.0072f;
	fLocal_64[18] = 0.0228f;
	fLocal_65[18] = 0.9626f;
	fLocal_66[18] = -0.2698f;
	iLocal_103[18] = 19;
	fLocal_67[18] = 14190f;
	iLocal_153[18] = joaat("minivan");
	Local_127[19 /*3*/] = { 2428.4163f, 971.8596f, 86.6286f };
	fLocal_63[19] = 0.0082f;
	fLocal_64[19] = 0.0227f;
	fLocal_65[19] = 0.974f;
	fLocal_66[19] = -0.2251f;
	iLocal_103[19] = 20;
	fLocal_67[19] = 14454f;
	iLocal_153[19] = joaat("emperor");
	Local_127[20 /*3*/] = { 2425.7302f, 1005.2106f, 85.5479f };
	fLocal_63[20] = -0.013f;
	fLocal_64[20] = -0.0026f;
	fLocal_65[20] = 0.339f;
	fLocal_66[20] = 0.9407f;
	iLocal_103[20] = 21;
	fLocal_67[20] = 14916f;
	iLocal_153[20] = joaat("minivan");
	Local_127[21 /*3*/] = { 2404.2795f, 1007.8649f, 85.5689f };
	fLocal_63[21] = -0.0026f;
	fLocal_64[21] = 0.0243f;
	fLocal_65[21] = 0.9489f;
	fLocal_66[21] = -0.3145f;
	iLocal_103[21] = 22;
	fLocal_67[21] = 15114f;
	iLocal_153[21] = joaat("mule");
	Local_127[22 /*3*/] = { 2381.6492f, 1026.7485f, 83.5159f };
	fLocal_63[22] = -0.0257f;
	fLocal_64[22] = 0.019f;
	fLocal_65[22] = 0.9447f;
	fLocal_66[22] = -0.3263f;
	iLocal_103[22] = 23;
	fLocal_67[22] = 15708f;
	iLocal_153[22] = joaat("minivan");
	Local_127[25 /*3*/] = { 2357.725f, 1055.238f, 81.2879f };
	fLocal_63[25] = -0.0317f;
	fLocal_64[25] = 0.0111f;
	fLocal_65[25] = 0.9215f;
	fLocal_66[25] = -0.3869f;
	iLocal_103[25] = 26;
	fLocal_67[25] = 16434f;
	iLocal_153[25] = joaat("emperor");
	Local_127[27 /*3*/] = { 2353.7114f, 1066.8109f, 80.6639f };
	fLocal_63[27] = 0.0105f;
	fLocal_64[27] = 0.0261f;
	fLocal_65[27] = 0.9482f;
	fLocal_66[27] = -0.3164f;
	iLocal_103[27] = 28;
	fLocal_67[27] = 16962f;
	iLocal_153[27] = joaat("asterope");
	Local_127[29 /*3*/] = { 2322.847f, 1102.305f, 79.378f };
	fLocal_63[29] = 0.0049f;
	fLocal_64[29] = 0.0175f;
	fLocal_65[29] = 0.9272f;
	fLocal_66[29] = -0.3742f;
	iLocal_103[29] = 30;
	fLocal_67[29] = 17688f;
	iLocal_153[29] = joaat("minivan");
	Local_127[31 /*3*/] = { 2382.2473f, 1099.5322f, 69.9259f };
	fLocal_63[31] = -0.0722f;
	fLocal_64[31] = -0.0345f;
	fLocal_65[31] = 0.3048f;
	fLocal_66[31] = 0.949f;
	iLocal_103[31] = 32;
	fLocal_67[31] = 18282f;
	iLocal_153[31] = joaat("minivan");
	Local_127[35 /*3*/] = { 2296.1975f, 1131.9489f, 78.3355f };
	fLocal_63[35] = 0.0125f;
	fLocal_64[35] = 0.0162f;
	fLocal_65[35] = 0.9365f;
	fLocal_66[35] = -0.35f;
	iLocal_103[35] = 36;
	fLocal_67[35] = 19602f;
	iLocal_153[35] = joaat("minivan");
	Local_127[36 /*3*/] = { 2260.124f, 1173.1749f, 77.3797f };
	fLocal_63[36] = 0.0113f;
	fLocal_64[36] = 0.0126f;
	fLocal_65[36] = 0.9313f;
	fLocal_66[36] = -0.3639f;
	iLocal_103[36] = 37;
	fLocal_67[36] = 19602f;
	iLocal_153[36] = joaat("minivan");
	Local_127[37 /*3*/] = { 2254.7627f, 1178.7247f, 76.9189f };
	fLocal_63[37] = 0.012f;
	fLocal_64[37] = 0.0128f;
	fLocal_65[37] = 0.9249f;
	fLocal_66[37] = -0.3797f;
	iLocal_103[37] = 38;
	fLocal_67[37] = 20196f;
	iLocal_153[37] = joaat("asterope");
	Local_127[40 /*3*/] = { 2254.0083f, 1178.5549f, 77.0527f };
	fLocal_63[40] = 0.0076f;
	fLocal_64[40] = 0.0111f;
	fLocal_65[40] = 0.9422f;
	fLocal_66[40] = -0.3348f;
	iLocal_103[40] = 41;
	fLocal_67[40] = 21186f;
	iLocal_153[40] = joaat("emperor");
	Local_127[41 /*3*/] = { 2191.6226f, 1245.793f, 75.92f };
	fLocal_63[41] = -0.0131f;
	fLocal_64[41] = 0.0023f;
	fLocal_65[41] = 0.944f;
	fLocal_66[41] = -0.3296f;
	iLocal_103[41] = 42;
	fLocal_67[41] = 21648f;
	iLocal_153[41] = joaat("asterope");
	Local_127[42 /*3*/] = { 2186.247f, 1285.219f, 75.6404f };
	fLocal_63[42] = -0.007f;
	fLocal_64[42] = 0.0073f;
	fLocal_65[42] = 0.3289f;
	fLocal_66[42] = 0.9443f;
	iLocal_103[42] = 43;
	fLocal_67[42] = 22176f;
	iLocal_153[42] = joaat("minivan");
	Local_127[43 /*3*/] = { 2177.3938f, 1287.1149f, 75.2953f };
	fLocal_63[43] = 0.002f;
	fLocal_64[43] = -0.0179f;
	fLocal_65[43] = 0.3596f;
	fLocal_66[43] = 0.9329f;
	iLocal_103[43] = 44;
	fLocal_67[43] = 22440f;
	iLocal_153[43] = joaat("emperor");
	Local_127[45 /*3*/] = { 2168.6582f, 1284.1532f, 76.0682f };
	fLocal_63[45] = 0.0078f;
	fLocal_64[45] = 0.0062f;
	fLocal_65[45] = 0.9487f;
	fLocal_66[45] = -0.3161f;
	iLocal_103[45] = 46;
	fLocal_67[45] = 22836f;
	iLocal_153[45] = joaat("mule");
	Local_127[46 /*3*/] = { 2159.5466f, 1320.8896f, 75.0434f };
	fLocal_63[46] = -0.0036f;
	fLocal_64[46] = 0.0046f;
	fLocal_65[46] = 0.2774f;
	fLocal_66[46] = 0.9607f;
	iLocal_103[46] = 47;
	fLocal_67[46] = 23034f;
	iLocal_153[46] = joaat("asterope");
	Local_127[47 /*3*/] = { 2155.5037f, 1317.0106f, 75.368f };
	fLocal_63[47] = 0.0021f;
	fLocal_64[47] = -0.015f;
	fLocal_65[47] = 0.268f;
	fLocal_66[47] = 0.9633f;
	iLocal_103[47] = 48;
	fLocal_67[47] = 23232f;
	iLocal_153[47] = joaat("minivan");
	Local_127[48 /*3*/] = { 2125.9438f, 1334.538f, 75.2456f };
	fLocal_63[48] = -0.017f;
	fLocal_64[48] = -0.004f;
	fLocal_65[48] = 0.9526f;
	fLocal_66[48] = -0.3038f;
	iLocal_103[48] = 49;
	fLocal_67[48] = 23694f;
	iLocal_153[48] = joaat("minivan");
	Local_127[49 /*3*/] = { 2118.6013f, 1355.4376f, 74.9437f };
	fLocal_63[49] = 0.0123f;
	fLocal_64[49] = 0.0044f;
	fLocal_65[49] = 0.9453f;
	fLocal_66[49] = -0.326f;
	iLocal_103[49] = 50;
	fLocal_67[49] = 24024f;
	iLocal_153[49] = joaat("minivan");
	Local_127[50 /*3*/] = { 2111.5498f, 1365.316f, 74.9957f };
	fLocal_63[50] = 0.0127f;
	fLocal_64[50] = 0.003f;
	fLocal_65[50] = 0.9686f;
	fLocal_66[50] = -0.2483f;
	iLocal_103[50] = 51;
	fLocal_67[50] = 24288f;
	iLocal_153[50] = joaat("emperor");
	Local_127[52 /*3*/] = { 2114.0325f, 1361.7507f, 74.952f };
	fLocal_63[52] = 0.0198f;
	fLocal_64[52] = 0.0097f;
	fLocal_65[52] = 0.9551f;
	fLocal_66[52] = -0.2954f;
	iLocal_103[52] = 53;
	fLocal_67[52] = 25476f;
	iLocal_153[52] = joaat("minivan");
	Local_127[53 /*3*/] = { 2094.2156f, 1411.4084f, 75.2758f };
	fLocal_63[53] = 0.0052f;
	fLocal_64[53] = -0.0165f;
	fLocal_65[53] = 0.2652f;
	fLocal_66[53] = 0.964f;
	iLocal_103[53] = 54;
	fLocal_67[53] = 25608f;
	iLocal_153[53] = joaat("minivan");
	Local_127[54 /*3*/] = { 2078.2864f, 1449.0529f, 74.9826f };
	fLocal_63[54] = -0.0015f;
	fLocal_64[54] = 0.0112f;
	fLocal_65[54] = 0.2564f;
	fLocal_66[54] = 0.9665f;
	iLocal_103[54] = 55;
	fLocal_67[54] = 26466f;
	iLocal_153[54] = joaat("asterope");
	Local_127[55 /*3*/] = { 2070.5757f, 1419.4891f, 75.2672f };
	fLocal_63[55] = -0.0106f;
	fLocal_64[55] = -0.0032f;
	fLocal_65[55] = 0.9545f;
	fLocal_66[55] = -0.2979f;
	iLocal_103[55] = 56;
	fLocal_67[55] = 26664f;
	iLocal_153[55] = joaat("asterope");
	Local_127[56 /*3*/] = { 2074.4333f, 1445.0652f, 75.0597f };
	fLocal_63[56] = 0.0051f;
	fLocal_64[56] = -0.0166f;
	fLocal_65[56] = 0.2513f;
	fLocal_66[56] = 0.9677f;
	iLocal_103[56] = 57;
	fLocal_67[56] = 26730f;
	iLocal_153[56] = joaat("emperor");
	Local_127[57 /*3*/] = { 2034.1135f, 1491.6438f, 75.418f };
	fLocal_63[57] = -0.0116f;
	fLocal_64[57] = -0.0029f;
	fLocal_65[57] = 0.9807f;
	fLocal_66[57] = -0.1953f;
	iLocal_103[57] = 58;
	fLocal_67[57] = 27192f;
	iLocal_153[57] = joaat("minivan");
	Local_127[58 /*3*/] = { 2031.2903f, 1498.9364f, 75.1537f };
	fLocal_63[58] = -0.0155f;
	fLocal_64[58] = -0.0053f;
	fLocal_65[58] = 0.9681f;
	fLocal_66[58] = -0.2499f;
	iLocal_103[58] = 59;
	fLocal_67[58] = 27456f;
	iLocal_153[58] = joaat("minivan");
	Local_127[60 /*3*/] = { 2039.6882f, 1528.8265f, 75.42f };
	fLocal_63[60] = -0.0045f;
	fLocal_64[60] = -0.0085f;
	fLocal_65[60] = 0.203f;
	fLocal_66[60] = 0.9791f;
	iLocal_103[60] = 61;
	fLocal_67[60] = 27984f;
	iLocal_153[60] = joaat("minivan");
	Local_127[61 /*3*/] = { 2017.7032f, 1529.8983f, 75.0193f };
	fLocal_63[61] = 0.0036f;
	fLocal_64[61] = 0.0035f;
	fLocal_65[61] = 0.9739f;
	fLocal_66[61] = -0.2269f;
	iLocal_103[61] = 62;
	fLocal_67[61] = 28050f;
	iLocal_153[61] = joaat("emperor");
	Local_127[62 /*3*/] = { 2039.0934f, 1530.857f, 75.1213f };
	fLocal_63[62] = -0.0058f;
	fLocal_64[62] = -0.0118f;
	fLocal_65[62] = 0.1708f;
	fLocal_66[62] = 0.9852f;
	iLocal_103[62] = 63;
	fLocal_67[62] = 28512f;
	iLocal_153[62] = joaat("minivan");
	Local_127[63 /*3*/] = { 2003.0155f, 1606.651f, 73.644f };
	fLocal_63[63] = -0.018f;
	fLocal_64[63] = -0.0027f;
	fLocal_65[63] = 0.1751f;
	fLocal_66[63] = 0.9844f;
	iLocal_103[63] = 64;
	fLocal_67[63] = 29502f;
	iLocal_153[63] = joaat("minivan");
	Local_127[64 /*3*/] = { 2007.3918f, 1610.4432f, 73.2368f };
	fLocal_63[64] = -0.0188f;
	fLocal_64[64] = -0.0044f;
	fLocal_65[64] = 0.1347f;
	fLocal_66[64] = 0.9907f;
	iLocal_103[64] = 65;
	fLocal_67[64] = 29832f;
	iLocal_153[64] = joaat("asterope");
	Local_127[65 /*3*/] = { 1961.8286f, 1653.6876f, 72.4539f };
	fLocal_63[65] = -0.0041f;
	fLocal_64[65] = 0.0207f;
	fLocal_65[65] = 0.9811f;
	fLocal_66[65] = -0.1924f;
	iLocal_103[65] = 66;
	fLocal_67[65] = 30756f;
	iLocal_153[65] = joaat("minivan");
	Local_127[66 /*3*/] = { 1979.6003f, 1672.9697f, 70.8238f };
	fLocal_63[66] = -0.0266f;
	fLocal_64[66] = -0.0043f;
	fLocal_65[66] = 0.1589f;
	fLocal_66[66] = 0.9869f;
	iLocal_103[66] = 67;
	fLocal_67[66] = 30954f;
	iLocal_153[66] = joaat("mule");
	Local_127[68 /*3*/] = { 1946.9937f, 1689.0887f, 70.3624f };
	fLocal_63[68] = -0.0058f;
	fLocal_64[68] = 0.0249f;
	fLocal_65[68] = 0.9723f;
	fLocal_66[68] = -0.2323f;
	iLocal_103[68] = 69;
	fLocal_67[68] = 31548f;
	iLocal_153[68] = joaat("minivan");
	Local_127[69 /*3*/] = { 1934.688f, 1715.0862f, 68.7313f };
	fLocal_63[69] = -0.004f;
	fLocal_64[69] = 0.0275f;
	fLocal_65[69] = 0.985f;
	fLocal_66[69] = -0.1705f;
	iLocal_103[69] = 70;
	fLocal_67[69] = 32142f;
	iLocal_153[69] = joaat("asterope");
	Local_127[70 /*3*/] = { 1957.8663f, 1743.5569f, 66.1376f };
	fLocal_63[70] = -0.0282f;
	fLocal_64[70] = -0.0039f;
	fLocal_65[70] = 0.1453f;
	fLocal_66[70] = 0.989f;
	iLocal_103[70] = 71;
	fLocal_67[70] = 32472f;
	iLocal_153[70] = joaat("minivan");
	Local_127[71 /*3*/] = { 1925.9292f, 1749.324f, 67.6292f };
	fLocal_63[71] = -0.0055f;
	fLocal_64[71] = 0.0275f;
	fLocal_65[71] = 0.9804f;
	fLocal_66[71] = -0.1948f;
	iLocal_103[71] = 72;
	fLocal_67[71] = 32736f;
	iLocal_153[71] = joaat("mule");
	Local_127[72 /*3*/] = { 1952.072f, 1761.2147f, 64.832f };
	fLocal_63[72] = -0.027f;
	fLocal_64[72] = -0.0033f;
	fLocal_65[72] = 0.1259f;
	fLocal_66[72] = 0.9917f;
	iLocal_103[72] = 73;
	fLocal_67[72] = 32802f;
	iLocal_153[72] = joaat("minivan");
	Local_127[73 /*3*/] = { 1918.1613f, 1753.964f, 66.4773f };
	fLocal_63[73] = -0.0044f;
	fLocal_64[73] = 0.0278f;
	fLocal_65[73] = 0.9868f;
	fLocal_66[73] = -0.1597f;
	iLocal_103[73] = 74;
	fLocal_67[73] = 32934f;
	iLocal_153[73] = joaat("emperor");
	Local_127[75 /*3*/] = { 1939.9493f, 1804.6766f, 62.5258f };
	fLocal_63[75] = -0.0236f;
	fLocal_64[75] = -0.0021f;
	fLocal_65[75] = 0.0882f;
	fLocal_66[75] = 0.9958f;
	iLocal_103[75] = 76;
	fLocal_67[75] = 33726f;
	iLocal_153[75] = joaat("emperor");
	Local_127[77 /*3*/] = { 1910.1921f, 1924.5275f, 57.8338f };
	fLocal_63[77] = -0.0158f;
	fLocal_64[77] = -0.0019f;
	fLocal_65[77] = 0.1139f;
	fLocal_66[77] = 0.9934f;
	iLocal_103[77] = 78;
	fLocal_67[77] = 35970f;
	iLocal_153[77] = joaat("asterope");
	Local_127[79 /*3*/] = { 1906.6332f, 1942.2339f, 57.3684f };
	fLocal_63[79] = -0.0149f;
	fLocal_64[79] = -0.0021f;
	fLocal_65[79] = 0.1458f;
	fLocal_66[79] = 0.9892f;
	iLocal_103[79] = 80;
	fLocal_67[79] = 36696f;
	iLocal_153[79] = joaat("minivan");
	Local_127[80 /*3*/] = { 1838.2122f, 1987.831f, 56.5357f };
	fLocal_63[80] = -0.001f;
	fLocal_64[80] = 0.0096f;
	fLocal_65[80] = 0.9949f;
	fLocal_66[80] = -0.1009f;
	iLocal_103[80] = 81;
	fLocal_67[80] = 37620f;
	iLocal_153[80] = joaat("emperor");
	Local_127[82 /*3*/] = { 1893.2684f, 2037.745f, 55.7725f };
	fLocal_63[82] = -0.009f;
	fLocal_64[82] = -0.0005f;
	fLocal_65[82] = 0.0559f;
	fLocal_66[82] = 0.9984f;
	iLocal_103[82] = 83;
	fLocal_67[82] = 38082f;
	iLocal_153[82] = joaat("mule");
	Local_127[85 /*3*/] = { 1875.6396f, 2133.1733f, 53.9558f };
	fLocal_63[85] = -0.0011f;
	fLocal_64[85] = -0.0002f;
	fLocal_65[85] = 0.0396f;
	fLocal_66[85] = 0.9992f;
	iLocal_103[85] = 86;
	fLocal_67[85] = 39864f;
	iLocal_153[85] = joaat("asterope");
	Local_127[87 /*3*/] = { 1836.6387f, 2125.5872f, 70.6828f };
	fLocal_63[87] = -0.0345f;
	fLocal_64[87] = -0.0056f;
	fLocal_65[87] = -0.0538f;
	fLocal_66[87] = 0.9979f;
	iLocal_103[87] = 88;
	fLocal_67[87] = 40260f;
	iLocal_153[87] = joaat("mule");
	Local_127[88 /*3*/] = { 1837.8618f, 2177.1838f, 66.247f };
	fLocal_63[88] = -0.0378f;
	fLocal_64[88] = 0.003f;
	fLocal_65[88] = -0.0833f;
	fLocal_66[88] = 0.9958f;
	iLocal_103[88] = 89;
	fLocal_67[88] = 40920f;
	iLocal_153[88] = joaat("asterope");
	Local_127[89 /*3*/] = { 1843.8552f, 2182.2559f, 65.5808f };
	fLocal_63[89] = -0.0391f;
	fLocal_64[89] = 0.0042f;
	fLocal_65[89] = -0.1129f;
	fLocal_66[89] = 0.9928f;
	iLocal_103[89] = 90;
	fLocal_67[89] = 41118f;
	iLocal_153[89] = joaat("emperor");
	Local_127[90 /*3*/] = { 1846.6605f, 2198.628f, 64.5254f };
	fLocal_63[90] = -0.0382f;
	fLocal_64[90] = 0.0036f;
	fLocal_65[90] = -0.1322f;
	fLocal_66[90] = 0.9905f;
	iLocal_103[90] = 91;
	fLocal_67[90] = 41316f;
	iLocal_153[90] = joaat("minivan");
	Local_127[91 /*3*/] = { 1877.0269f, 2216.1968f, 54.8171f };
	fLocal_63[91] = -0.0001f;
	fLocal_64[91] = 0f;
	fLocal_65[91] = -0.0436f;
	fLocal_66[91] = 0.9991f;
	iLocal_103[91] = 92;
	fLocal_67[91] = 41382f;
	iLocal_153[91] = joaat("mule");
	Local_127[93 /*3*/] = { 1878.1968f, 2232.2417f, 54.0437f };
	fLocal_63[93] = 0f;
	fLocal_64[93] = 0f;
	fLocal_65[93] = -0.01f;
	fLocal_66[93] = 0.9999f;
	iLocal_103[93] = 94;
	fLocal_67[93] = 42108f;
	iLocal_153[93] = joaat("minivan");
	Local_127[94 /*3*/] = { 1866.3765f, 2284.5105f, 58.3637f };
	fLocal_63[94] = -0.0299f;
	fLocal_64[94] = 0.0084f;
	fLocal_65[94] = -0.09f;
	fLocal_66[94] = 0.9955f;
	iLocal_103[94] = 95;
	fLocal_67[94] = 42702f;
	iLocal_153[94] = joaat("minivan");
	Local_127[95 /*3*/] = { 1859.9976f, 2279.6716f, 58.5171f };
	fLocal_63[95] = -0.0314f;
	fLocal_64[95] = -0.0016f;
	fLocal_65[95] = -0.0917f;
	fLocal_66[95] = 0.9953f;
	iLocal_103[95] = 96;
	fLocal_67[95] = 43098f;
	iLocal_153[95] = joaat("emperor");
	Local_127[96 /*3*/] = { 1889.9025f, 2301.9653f, 54.3177f };
	fLocal_63[96] = 0f;
	fLocal_64[96] = 0f;
	fLocal_65[96] = -0.0948f;
	fLocal_66[96] = 0.9955f;
	iLocal_103[96] = 97;
	fLocal_67[96] = 43494f;
	iLocal_153[96] = joaat("minivan");
	Local_127[98 /*3*/] = { 1914.8075f, 2371.75f, 54.0472f };
	fLocal_63[98] = 0f;
	fLocal_64[98] = -0.0002f;
	fLocal_65[98] = -0.1181f;
	fLocal_66[98] = 0.993f;
	iLocal_103[98] = 99;
	fLocal_67[98] = 44550f;
	iLocal_153[98] = joaat("minivan");
	Local_127[99 /*3*/] = { 1919.3309f, 2385.4546f, 54.0774f };
	fLocal_63[99] = -0.0003f;
	fLocal_64[99] = 0.0002f;
	fLocal_65[99] = -0.1213f;
	fLocal_66[99] = 0.9926f;
	iLocal_103[99] = 100;
	fLocal_67[99] = 45012f;
	iLocal_153[99] = joaat("emperor");
	Local_127[100 /*3*/] = { 1881.0796f, 2420.8135f, 53.937f };
	fLocal_63[100] = -0.0009f;
	fLocal_64[100] = -0.0044f;
	fLocal_65[100] = 0.9667f;
	fLocal_66[100] = 0.256f;
	iLocal_103[100] = 101;
	fLocal_67[100] = 45606f;
	iLocal_153[100] = joaat("asterope");
	Local_127[101 /*3*/] = { 1942.5637f, 2449.5076f, 53.9608f };
	fLocal_63[101] = 0f;
	fLocal_64[101] = 0f;
	fLocal_65[101] = -0.2572f;
	fLocal_66[101] = 0.9664f;
	iLocal_103[101] = 102;
	fLocal_67[101] = 45936f;
	iLocal_153[101] = joaat("asterope");
	Local_127[102 /*3*/] = { 1919.2661f, 2471.769f, 55.0404f };
	fLocal_63[102] = -0.0002f;
	fLocal_64[102] = -0.0007f;
	fLocal_65[102] = 0.9583f;
	fLocal_66[102] = 0.2858f;
	iLocal_103[102] = 103;
	fLocal_67[102] = 46332f;
	iLocal_153[102] = joaat("mule");
	Local_127[103 /*3*/] = { 1959.335f, 2493.466f, 54.0472f };
	fLocal_63[103] = 0f;
	fLocal_64[103] = -0.0002f;
	fLocal_65[103] = -0.2531f;
	fLocal_66[103] = 0.9674f;
	iLocal_103[103] = 104;
	fLocal_67[103] = 46860f;
	iLocal_153[103] = joaat("minivan");
	Local_127[104 /*3*/] = { 1922.3114f, 2504.7466f, 54.315f };
	fLocal_63[104] = 0.0003f;
	fLocal_64[104] = -0.0003f;
	fLocal_65[104] = 0.9483f;
	fLocal_66[104] = 0.3174f;
	iLocal_103[104] = 105;
	fLocal_67[104] = 46926f;
	iLocal_153[104] = joaat("minivan");
	Local_127[105 /*3*/] = { 1923.5302f, 2514.6523f, 54.2393f };
	fLocal_63[105] = -0.0009f;
	fLocal_64[105] = -0.0014f;
	fLocal_65[105] = 0.9517f;
	fLocal_66[105] = 0.3071f;
	iLocal_103[105] = 106;
	fLocal_67[105] = 47124f;
	iLocal_153[105] = joaat("asterope");
	Local_127[106 /*3*/] = { 1973.2681f, 2514.6934f, 54.3217f };
	fLocal_63[106] = 0.0003f;
	fLocal_64[106] = -0.0001f;
	fLocal_65[106] = -0.3002f;
	fLocal_66[106] = 0.9539f;
	iLocal_103[106] = 107;
	fLocal_67[106] = 47322f;
	iLocal_153[106] = joaat("minivan");
	Local_127[107 /*3*/] = { 1980.1942f, 2510.0784f, 54.7849f };
	fLocal_63[107] = -0.0006f;
	fLocal_64[107] = 0f;
	fLocal_65[107] = -0.3186f;
	fLocal_66[107] = 0.9479f;
	iLocal_103[107] = 108;
	fLocal_67[107] = 47586f;
	iLocal_153[107] = joaat("mule");
	Local_127[108 /*3*/] = { 1927.3007f, 2511.6277f, 54.0738f };
	fLocal_63[108] = -0.0006f;
	fLocal_64[108] = -0.0019f;
	fLocal_65[108] = 0.9542f;
	fLocal_66[108] = 0.2992f;
	iLocal_103[108] = 109;
	fLocal_67[108] = 47718f;
	iLocal_153[108] = joaat("emperor");
	Local_127[109 /*3*/] = { 1978.6078f, 2570.125f, 54.0438f };
	fLocal_63[109] = 0.0003f;
	fLocal_64[109] = 0.0009f;
	fLocal_65[109] = 0.9199f;
	fLocal_66[109] = 0.3921f;
	iLocal_103[109] = 110;
	fLocal_67[109] = 48444f;
	iLocal_153[109] = joaat("emperor");
	Local_127[110 /*3*/] = { 1978.6371f, 2577.6123f, 54.2875f };
	fLocal_63[110] = 0.0017f;
	fLocal_64[110] = 0.0005f;
	fLocal_65[110] = 0.9266f;
	fLocal_66[110] = 0.3761f;
	iLocal_103[110] = 111;
	fLocal_67[110] = 48510f;
	iLocal_153[110] = joaat("minivan");
	Local_127[111 /*3*/] = { 2025.8209f, 2557.657f, 54.3789f };
	fLocal_63[111] = -0.0047f;
	fLocal_64[111] = -0.0141f;
	fLocal_65[111] = -0.3716f;
	fLocal_66[111] = 0.9283f;
	iLocal_103[111] = 112;
	fLocal_67[111] = 48708f;
	iLocal_153[111] = joaat("minivan");
	Local_127[112 /*3*/] = { 2044.8674f, 2576.521f, 53.6568f };
	fLocal_63[112] = -0.0123f;
	fLocal_64[112] = 0.0049f;
	fLocal_65[112] = -0.4343f;
	fLocal_66[112] = 0.9007f;
	iLocal_103[112] = 113;
	fLocal_67[112] = 49104f;
	iLocal_153[112] = joaat("asterope");
	Local_127[113 /*3*/] = { 2035.2405f, 2575.0334f, 53.956f };
	fLocal_63[113] = -0.0042f;
	fLocal_64[113] = 0.0054f;
	fLocal_65[113] = -0.3938f;
	fLocal_66[113] = 0.9192f;
	iLocal_103[113] = 114;
	fLocal_67[113] = 49302f;
	iLocal_153[113] = joaat("minivan");
	Local_127[114 /*3*/] = { 2034.0126f, 2613.8088f, 53.9144f };
	fLocal_63[114] = -0.0026f;
	fLocal_64[114] = 0.0158f;
	fLocal_65[114] = 0.912f;
	fLocal_66[114] = 0.41f;
	iLocal_103[114] = 115;
	fLocal_67[114] = 49632f;
	iLocal_153[114] = joaat("mule");
	Local_127[115 /*3*/] = { 2082.613f, 2618.1206f, 52.2736f };
	fLocal_63[115] = -0.015f;
	fLocal_64[115] = 0.0061f;
	fLocal_65[115] = -0.4216f;
	fLocal_66[115] = 0.9066f;
	iLocal_103[115] = 116;
	fLocal_67[115] = 50226f;
	iLocal_153[115] = joaat("minivan");
	Local_127[116 /*3*/] = { 2074.0278f, 2642.633f, 51.7169f };
	fLocal_63[116] = 0.0077f;
	fLocal_64[116] = 0.0159f;
	fLocal_65[116] = 0.9037f;
	fLocal_66[116] = 0.4278f;
	iLocal_103[116] = 117;
	fLocal_67[116] = 50556f;
	iLocal_153[116] = joaat("emperor");
	Local_127[117 /*3*/] = { 2100.8926f, 2629.0205f, 51.335f };
	fLocal_63[117] = -0.0147f;
	fLocal_64[117] = 0.0073f;
	fLocal_65[117] = -0.2968f;
	fLocal_66[117] = 0.9548f;
	iLocal_103[117] = 118;
	fLocal_67[117] = 51150f;
	iLocal_153[117] = joaat("minivan");
	Local_127[118 /*3*/] = { 2102.9087f, 2675.5833f, 50.9682f };
	fLocal_63[118] = 0.0123f;
	fLocal_64[118] = 0.0138f;
	fLocal_65[118] = 0.9176f;
	fLocal_66[118] = 0.397f;
	iLocal_103[118] = 119;
	fLocal_67[118] = 51348f;
	iLocal_153[118] = joaat("mule");
	Local_127[119 /*3*/] = { 2096.3523f, 2662.0562f, 50.7263f };
	fLocal_63[119] = 0.006f;
	fLocal_64[119] = 0.0159f;
	fLocal_65[119] = 0.9315f;
	fLocal_66[119] = 0.3634f;
	iLocal_103[119] = 120;
	fLocal_67[119] = 51546f;
	iLocal_153[119] = joaat("asterope");
	Local_127[120 /*3*/] = { 2139.484f, 2709.6846f, 48.5264f };
	fLocal_63[120] = 0.0083f;
	fLocal_64[120] = 0.0169f;
	fLocal_65[120] = 0.9252f;
	fLocal_66[120] = 0.379f;
	iLocal_103[120] = 121;
	fLocal_67[120] = 52338f;
	iLocal_153[120] = joaat("asterope");
	Local_127[121 /*3*/] = { 2158.1047f, 2682.1785f, 48.5176f };
	fLocal_63[121] = -0.0233f;
	fLocal_64[121] = -0.0056f;
	fLocal_65[121] = -0.4217f;
	fLocal_66[121] = 0.9064f;
	iLocal_103[121] = 122;
	fLocal_67[121] = 52338f;
	iLocal_153[121] = joaat("emperor");
	Local_127[122 /*3*/] = { 2150.6326f, 2676.2463f, 49.1083f };
	fLocal_63[122] = -0.0175f;
	fLocal_64[122] = 0.0035f;
	fLocal_65[122] = -0.3898f;
	fLocal_66[122] = 0.9207f;
	iLocal_103[122] = 123;
	fLocal_67[122] = 52536f;
	iLocal_153[122] = joaat("minivan");
	Local_127[123 /*3*/] = { 2157.3115f, 2720.8997f, 47.7763f };
	fLocal_63[123] = 0.0129f;
	fLocal_64[123] = 0.0152f;
	fLocal_65[123] = 0.9163f;
	fLocal_66[123] = 0.4f;
	iLocal_103[123] = 124;
	fLocal_67[123] = 52668f;
	iLocal_153[123] = joaat("minivan");
	Local_127[124 /*3*/] = { 2161.8943f, 2732.978f, 47.1336f };
	fLocal_63[124] = 0.004f;
	fLocal_64[124] = 0.019f;
	fLocal_65[124] = 0.9056f;
	fLocal_66[124] = 0.4237f;
	iLocal_103[124] = 125;
	fLocal_67[124] = 52998f;
	iLocal_153[124] = joaat("asterope");
	Local_127[125 /*3*/] = { 2165.2139f, 2735.3638f, 46.9517f };
	fLocal_63[125] = 0.0054f;
	fLocal_64[125] = 0.019f;
	fLocal_65[125] = 0.9231f;
	fLocal_66[125] = 0.3839f;
	iLocal_103[125] = 126;
	fLocal_67[125] = 53328f;
	iLocal_153[125] = joaat("emperor");
	Local_127[126 /*3*/] = { 2168.5723f, 2731.146f, 47.171f };
	fLocal_63[126] = 0.016f;
	fLocal_64[126] = 0.0146f;
	fLocal_65[126] = 0.9366f;
	fLocal_66[126] = 0.3497f;
	iLocal_103[126] = 127;
	fLocal_67[126] = 53460f;
	iLocal_153[126] = joaat("minivan");
	Local_127[128 /*3*/] = { 2204.3203f, 2729.65f, 46.0701f };
	fLocal_63[128] = -0.0151f;
	fLocal_64[128] = 0.0134f;
	fLocal_65[128] = -0.4697f;
	fLocal_66[128] = 0.8826f;
	iLocal_103[128] = 129;
	fLocal_67[128] = 53856f;
	iLocal_153[128] = joaat("asterope");
	Local_127[129 /*3*/] = { 2223.9238f, 2745.0034f, 44.8964f };
	fLocal_63[129] = -0.0148f;
	fLocal_64[129] = 0.0123f;
	fLocal_65[129] = -0.4397f;
	fLocal_66[129] = 0.898f;
	iLocal_103[129] = 130;
	fLocal_67[129] = 54252f;
	iLocal_153[129] = joaat("minivan");
	Local_127[130 /*3*/] = { 2235.4163f, 2785.0027f, 43.919f };
	fLocal_63[130] = 0.0114f;
	fLocal_64[130] = 0.0146f;
	fLocal_65[130] = 0.9048f;
	fLocal_66[130] = 0.4254f;
	iLocal_103[130] = 131;
	fLocal_67[130] = 54516f;
	iLocal_153[130] = joaat("minivan");
	Local_127[132 /*3*/] = { 2245.4656f, 2799.805f, 43.1371f };
	fLocal_63[132] = 0.0068f;
	fLocal_64[132] = 0.0152f;
	fLocal_65[132] = 0.9105f;
	fLocal_66[132] = 0.4132f;
	iLocal_103[132] = 133;
	fLocal_67[132] = 54912f;
	iLocal_153[132] = joaat("asterope");
	Local_127[133 /*3*/] = { 2266.8672f, 2784.885f, 42.9903f };
	fLocal_63[133] = -0.0177f;
	fLocal_64[133] = 0.0036f;
	fLocal_65[133] = -0.4714f;
	fLocal_66[133] = 0.8817f;
	iLocal_103[133] = 134;
	fLocal_67[133] = 55374f;
	iLocal_153[133] = joaat("asterope");
	Local_127[134 /*3*/] = { 2283.884f, 2797.6458f, 42.0955f };
	fLocal_63[134] = -0.0178f;
	fLocal_64[134] = -0.0002f;
	fLocal_65[134] = -0.4409f;
	fLocal_66[134] = 0.8974f;
	iLocal_103[134] = 135;
	fLocal_67[134] = 55506f;
	iLocal_153[134] = joaat("emperor");
	Local_127[135 /*3*/] = { 2266.4207f, 2815.703f, 42.4122f };
	fLocal_63[135] = 0.0006f;
	fLocal_64[135] = 0.016f;
	fLocal_65[135] = 0.8986f;
	fLocal_66[135] = 0.4385f;
	iLocal_103[135] = 136;
	fLocal_67[135] = 55638f;
	iLocal_153[135] = joaat("minivan");
	Local_127[136 /*3*/] = { 2278.1692f, 2793.7195f, 42.5558f };
	fLocal_63[136] = -0.0181f;
	fLocal_64[136] = -0.0022f;
	fLocal_65[136] = -0.4076f;
	fLocal_66[136] = 0.913f;
	iLocal_103[136] = 137;
	fLocal_67[136] = 55770f;
	iLocal_153[136] = joaat("minivan");
	Local_127[137 /*3*/] = { 2288.3352f, 2826.1553f, 41.7135f };
	fLocal_63[137] = 0.0093f;
	fLocal_64[137] = 0.0108f;
	fLocal_65[137] = 0.879f;
	fLocal_66[137] = 0.4765f;
	iLocal_103[137] = 138;
	fLocal_67[137] = 55968f;
	iLocal_153[137] = joaat("minivan");
	Local_127[138 /*3*/] = { 2307.5479f, 2840.0693f, 40.9374f };
	fLocal_63[138] = 0.0082f;
	fLocal_64[138] = 0.0077f;
	fLocal_65[138] = 0.9129f;
	fLocal_66[138] = 0.4081f;
	iLocal_103[138] = 139;
	fLocal_67[138] = 56364f;
	iLocal_153[138] = joaat("asterope");
	Local_127[139 /*3*/] = { 2347.161f, 2876.9775f, 40.2483f };
	fLocal_63[139] = -0.0009f;
	fLocal_64[139] = 0.0054f;
	fLocal_65[139] = 0.9061f;
	fLocal_66[139] = 0.4231f;
	iLocal_103[139] = 140;
	fLocal_67[139] = 57420f;
	iLocal_153[139] = joaat("minivan");
	Local_127[140 /*3*/] = { 2353.2888f, 2843.3313f, 40.1427f };
	fLocal_63[140] = -0.0013f;
	fLocal_64[140] = 0.013f;
	fLocal_65[140] = -0.4505f;
	fLocal_66[140] = 0.8927f;
	iLocal_103[140] = 141;
	fLocal_67[140] = 57420f;
	iLocal_153[140] = joaat("emperor");
	Local_127[141 /*3*/] = { 2345.499f, 2845.3132f, 40.196f };
	fLocal_63[141] = -0.0105f;
	fLocal_64[141] = -0.0046f;
	fLocal_65[141] = -0.4457f;
	fLocal_66[141] = 0.8951f;
	iLocal_103[141] = 142;
	fLocal_67[141] = 58080f;
	iLocal_153[141] = joaat("minivan");
	Local_127[142 /*3*/] = { 2393.79f, 2875.586f, 39.6648f };
	fLocal_63[142] = 0.0016f;
	fLocal_64[142] = 0.0069f;
	fLocal_65[142] = -0.4279f;
	fLocal_66[142] = 0.9038f;
	iLocal_103[142] = 143;
	fLocal_67[142] = 58146f;
	iLocal_153[142] = joaat("minivan");
	Local_127[143 /*3*/] = { 2376.0623f, 2899.5327f, 39.7828f };
	fLocal_63[143] = -0.0036f;
	fLocal_64[143] = 0.0024f;
	fLocal_65[143] = 0.9093f;
	fLocal_66[143] = 0.416f;
	iLocal_103[143] = 144;
	fLocal_67[143] = 58212f;
	iLocal_153[143] = joaat("emperor");
	Local_127[144 /*3*/] = { 2431.8914f, 2860.4575f, 48.4824f };
	fLocal_63[144] = 0.0078f;
	fLocal_64[144] = 0.004f;
	fLocal_65[144] = -0.4613f;
	fLocal_66[144] = 0.8872f;
	iLocal_103[144] = 145;
	fLocal_67[144] = 58476f;
	iLocal_153[144] = joaat("emperor");
	Local_127[145 /*3*/] = { 2437.6814f, 2853.6606f, 48.6681f };
	fLocal_63[145] = -0.0023f;
	fLocal_64[145] = 0.0016f;
	fLocal_65[145] = 0.753f;
	fLocal_66[145] = -0.6581f;
	iLocal_103[145] = 146;
	fLocal_67[145] = 58542f;
	iLocal_153[145] = joaat("minivan");
	Local_127[148 /*3*/] = { 2423.1223f, 2899.488f, 39.7634f };
	fLocal_63[148] = 0.0048f;
	fLocal_64[148] = 0.007f;
	fLocal_65[148] = -0.3871f;
	fLocal_66[148] = 0.922f;
	iLocal_103[148] = 149;
	fLocal_67[148] = 59334f;
	iLocal_153[148] = joaat("minivan");
	Local_127[149 /*3*/] = { 2443.4436f, 2922.7126f, 40.1022f };
	fLocal_63[149] = -0.0115f;
	fLocal_64[149] = -0.0064f;
	fLocal_65[149] = -0.3552f;
	fLocal_66[149] = 0.9347f;
	iLocal_103[149] = 150;
	fLocal_67[149] = 59598f;
	iLocal_153[149] = joaat("asterope");
	Local_127[150 /*3*/] = { 2461.1191f, 2971.092f, 40.4965f };
	fLocal_63[150] = -0.0027f;
	fLocal_64[150] = -0.0056f;
	fLocal_65[150] = 0.9087f;
	fLocal_66[150] = 0.4173f;
	iLocal_103[150] = 151;
	fLocal_67[150] = 60192f;
	iLocal_153[150] = joaat("asterope");
	Local_127[152 /*3*/] = { 2478.9807f, 2986.5122f, 40.8035f };
	fLocal_63[152] = -0.0028f;
	fLocal_64[152] = -0.006f;
	fLocal_65[152] = 0.9128f;
	fLocal_66[152] = 0.4083f;
	iLocal_103[152] = 153;
	fLocal_67[152] = 60786f;
	iLocal_153[152] = joaat("asterope");
	Local_127[153 /*3*/] = { 2526.046f, 2987.5046f, 41.3395f };
	fLocal_63[153] = 0.0115f;
	fLocal_64[153] = -0.0008f;
	fLocal_65[153] = -0.4057f;
	fLocal_66[153] = 0.9139f;
	iLocal_103[153] = 154;
	fLocal_67[153] = 61380f;
	iLocal_153[153] = joaat("asterope");
	Local_127[154 /*3*/] = { 2541.4512f, 3001.8245f, 41.8341f };
	fLocal_63[154] = 0.016f;
	fLocal_64[154] = -0.0028f;
	fLocal_65[154] = -0.4384f;
	fLocal_66[154] = 0.8986f;
	iLocal_103[154] = 155;
	fLocal_67[154] = 61710f;
	iLocal_153[154] = joaat("minivan");
	Local_127[156 /*3*/] = { 2488.6902f, 2995.3376f, 40.9617f };
	fLocal_63[156] = -0.0026f;
	fLocal_64[156] = -0.006f;
	fLocal_65[156] = 0.9098f;
	fLocal_66[156] = 0.4149f;
	iLocal_103[156] = 157;
	fLocal_67[156] = 61974f;
	iLocal_153[156] = joaat("asterope");
	Local_127[158 /*3*/] = { 2592.3665f, 3056.7212f, 45.2098f };
	fLocal_63[158] = 0.0221f;
	fLocal_64[158] = -0.0095f;
	fLocal_65[158] = -0.3915f;
	fLocal_66[158] = 0.9199f;
	iLocal_103[158] = 159;
	fLocal_67[158] = 63096f;
	iLocal_153[158] = joaat("minivan");
	Local_127[159 /*3*/] = { 2622.8523f, 3091.0662f, 47.3566f };
	fLocal_63[159] = 0.0239f;
	fLocal_64[159] = -0.0086f;
	fLocal_65[159] = -0.3428f;
	fLocal_66[159] = 0.9391f;
	iLocal_103[159] = 160;
	fLocal_67[159] = 64020f;
	iLocal_153[159] = joaat("asterope");
	Local_127[160 /*3*/] = { 2610.3125f, 3112.6821f, 47.6941f };
	fLocal_63[160] = -0.0083f;
	fLocal_64[160] = -0.0242f;
	fLocal_65[160] = 0.9453f;
	fLocal_66[160] = 0.3251f;
	iLocal_103[160] = 161;
	fLocal_67[160] = 64152f;
	iLocal_153[160] = joaat("emperor");
	Local_127[161 /*3*/] = { 2646.1172f, 3116.8943f, 49.0079f };
	fLocal_63[161] = 0.0228f;
	fLocal_64[161] = -0.0081f;
	fLocal_65[161] = -0.3662f;
	fLocal_66[161] = 0.9302f;
	iLocal_103[161] = 162;
	fLocal_67[161] = 64680f;
	iLocal_153[161] = joaat("minivan");
	Local_127[162 /*3*/] = { 2637.1482f, 3137.2964f, 49.773f };
	fLocal_63[162] = -0.0085f;
	fLocal_64[162] = -0.0225f;
	fLocal_65[162] = 0.947f;
	fLocal_66[162] = 0.3205f;
	iLocal_103[162] = 163;
	fLocal_67[162] = 64878f;
	iLocal_153[162] = joaat("minivan");
	Local_127[165 /*3*/] = { 2665.6265f, 3175.402f, 51.7303f };
	fLocal_63[165] = -0.006f;
	fLocal_64[165] = -0.0194f;
	fLocal_65[165] = 0.9567f;
	fLocal_66[165] = 0.2902f;
	iLocal_103[165] = 166;
	fLocal_67[165] = 65934f;
	iLocal_153[165] = joaat("asterope");
	Local_127[166 /*3*/] = { 2668.3545f, 3180.0718f, 51.9595f };
	fLocal_63[166] = -0.0054f;
	fLocal_64[166] = -0.0191f;
	fLocal_65[166] = 0.9583f;
	fLocal_66[166] = 0.285f;
	iLocal_103[166] = 167;
	fLocal_67[166] = 66396f;
	iLocal_153[166] = joaat("asterope");
	Local_127[167 /*3*/] = { 2704.1785f, 3199.5823f, 53.4408f };
	fLocal_63[167] = 0.0155f;
	fLocal_64[167] = -0.0043f;
	fLocal_65[167] = -0.2745f;
	fLocal_66[167] = 0.9615f;
	iLocal_103[167] = 168;
	fLocal_67[167] = 66792f;
	iLocal_153[167] = joaat("minivan");
	Local_127[168 /*3*/] = { 2696.931f, 3187.343f, 52.7233f };
	fLocal_63[168] = 0.0165f;
	fLocal_64[168] = -0.0042f;
	fLocal_65[168] = -0.2499f;
	fLocal_66[168] = 0.9681f;
	iLocal_103[168] = 169;
	fLocal_67[168] = 66990f;
	iLocal_153[168] = joaat("emperor");
	Local_127[169 /*3*/] = { 2745.0408f, 3260.3135f, 55.039f };
	fLocal_63[169] = 0.0089f;
	fLocal_64[169] = 0.0007f;
	fLocal_65[169] = -0.2473f;
	fLocal_66[169] = 0.9689f;
	iLocal_103[169] = 170;
	fLocal_67[169] = 68112f;
	iLocal_153[169] = joaat("asterope");
	Local_127[170 /*3*/] = { 2766.009f, 3302.2466f, 55.506f };
	fLocal_63[170] = 0.0044f;
	fLocal_64[170] = -0.001f;
	fLocal_65[170] = -0.1799f;
	fLocal_66[170] = 0.9837f;
	iLocal_103[170] = 171;
	fLocal_67[170] = 69234f;
	iLocal_153[170] = joaat("minivan");
	Local_127[171 /*3*/] = { 2773.7832f, 3320.9487f, 55.8819f };
	fLocal_63[171] = 0.0016f;
	fLocal_64[171] = -0.0002f;
	fLocal_65[171] = -0.2109f;
	fLocal_66[171] = 0.9775f;
	iLocal_103[171] = 172;
	fLocal_67[171] = 69498f;
	iLocal_153[171] = joaat("minivan");
	Local_127[174 /*3*/] = { 2806.5112f, 3409.5461f, 55.3729f };
	fLocal_63[174] = -0.0039f;
	fLocal_64[174] = 0.0009f;
	fLocal_65[174] = -0.2034f;
	fLocal_66[174] = 0.9791f;
	iLocal_103[174] = 175;
	fLocal_67[174] = 71412f;
	iLocal_153[174] = joaat("asterope");
	Local_127[176 /*3*/] = { 2812.2185f, 3421.841f, 55.2114f };
	fLocal_63[176] = -0.004f;
	fLocal_64[176] = 0.0008f;
	fLocal_65[176] = -0.1992f;
	fLocal_66[176] = 0.9799f;
	iLocal_103[176] = 177;
	fLocal_67[176] = 71676f;
	iLocal_153[176] = joaat("emperor");
	Local_127[177 /*3*/] = { 2789.7988f, 3433.5957f, 55.2778f };
	fLocal_63[177] = 0.0014f;
	fLocal_64[177] = 0.0052f;
	fLocal_65[177] = 0.9741f;
	fLocal_66[177] = 0.2262f;
	iLocal_103[177] = 178;
	fLocal_67[177] = 71742f;
	iLocal_153[177] = joaat("asterope");
	Local_127[178 /*3*/] = { 2821.1392f, 3430.965f, 55.0884f };
	fLocal_63[178] = -0.0039f;
	fLocal_64[178] = 0.0004f;
	fLocal_65[178] = -0.1594f;
	fLocal_66[178] = 0.9872f;
	iLocal_103[178] = 179;
	fLocal_67[178] = 71940f;
	iLocal_153[178] = joaat("minivan");
	Local_127[179 /*3*/] = { 2814.321f, 3478.4307f, 54.8139f };
	fLocal_63[179] = 0.0019f;
	fLocal_64[179] = 0.0068f;
	fLocal_65[179] = 0.9771f;
	fLocal_66[179] = 0.2126f;
	iLocal_103[179] = 180;
	fLocal_67[179] = 72798f;
	iLocal_153[179] = joaat("minivan");
	Local_127[180 /*3*/] = { 2803.9612f, 3466.078f, 54.7513f };
	fLocal_63[180] = 0.0016f;
	fLocal_64[180] = 0.0066f;
	fLocal_65[180] = 0.9723f;
	fLocal_66[180] = 0.2335f;
	iLocal_103[180] = 181;
	fLocal_67[180] = 73128f;
	iLocal_153[180] = joaat("minivan");
	Local_127[181 /*3*/] = { 2847.736f, 3505.2705f, 54.2615f };
	fLocal_63[181] = -0.0076f;
	fLocal_64[181] = 0.0013f;
	fLocal_65[181] = -0.1921f;
	fLocal_66[181] = 0.9814f;
	iLocal_103[181] = 182;
	fLocal_67[181] = 73854f;
	iLocal_153[181] = joaat("minivan");
	Local_127[183 /*3*/] = { 2877.022f, 3588.1187f, 52.803f };
	fLocal_63[183] = -0.0076f;
	fLocal_64[183] = 0.0011f;
	fLocal_65[183] = -0.1616f;
	fLocal_66[183] = 0.9868f;
	iLocal_103[183] = 184;
	fLocal_67[183] = 75240f;
	iLocal_153[183] = joaat("minivan");
	Local_127[184 /*3*/] = { 2879.7188f, 3577.6648f, 52.7755f };
	fLocal_63[184] = -0.0077f;
	fLocal_64[184] = 0.0015f;
	fLocal_65[184] = -0.1889f;
	fLocal_66[184] = 0.982f;
	iLocal_103[184] = 185;
	fLocal_67[184] = 75570f;
	iLocal_153[184] = joaat("asterope");
	Local_127[185 /*3*/] = { 2865.0088f, 3612.8206f, 52.2994f };
	fLocal_63[185] = 0.0008f;
	fLocal_64[185] = 0.0041f;
	fLocal_65[185] = 0.9899f;
	fLocal_66[185] = 0.1414f;
	iLocal_103[185] = 186;
	fLocal_67[185] = 75636f;
	iLocal_153[185] = joaat("asterope");
	Local_127[186 /*3*/] = { 2858.7224f, 3611.3376f, 52.533f };
	fLocal_63[186] = -0.0042f;
	fLocal_64[186] = 0.0082f;
	fLocal_65[186] = 0.9904f;
	fLocal_66[186] = 0.1376f;
	iLocal_103[186] = 187;
	fLocal_67[186] = 75768f;
	iLocal_153[186] = joaat("minivan");
	Local_127[188 /*3*/] = { 2871.3333f, 3659.2446f, 52.2244f };
	fLocal_63[188] = 0.0001f;
	fLocal_64[188] = 0f;
	fLocal_65[188] = 0.989f;
	fLocal_66[188] = 0.148f;
	iLocal_103[188] = 189;
	fLocal_67[188] = 76626f;
	iLocal_153[188] = joaat("asterope");
	Local_127[189 /*3*/] = { 2875.5686f, 3652.1323f, 52.2426f };
	fLocal_63[189] = 0.0002f;
	fLocal_64[189] = 0f;
	fLocal_65[189] = 0.9862f;
	fLocal_66[189] = 0.1656f;
	iLocal_103[189] = 190;
	fLocal_67[189] = 76890f;
	iLocal_153[189] = joaat("asterope");
	Local_127[190 /*3*/] = { 2905.482f, 3668.8877f, 52.2389f };
	fLocal_63[190] = 0f;
	fLocal_64[190] = 0f;
	fLocal_65[190] = -0.1334f;
	fLocal_66[190] = 0.9911f;
	iLocal_103[190] = 191;
	fLocal_67[190] = 76956f;
	iLocal_153[190] = joaat("asterope");
	Local_127[195 /*3*/] = { 2903.8784f, 3758.2183f, 52.416f };
	fLocal_63[195] = 0.0001f;
	fLocal_64[195] = 0.0004f;
	fLocal_65[195] = 0.9907f;
	fLocal_66[195] = 0.1359f;
	iLocal_103[195] = 196;
	fLocal_67[195] = 78936f;
	iLocal_153[195] = joaat("minivan");
	Local_127[196 /*3*/] = { 2921.532f, 3747.8635f, 52.4151f };
	fLocal_63[196] = -0.0004f;
	fLocal_64[196] = 0.0014f;
	fLocal_65[196] = -0.1704f;
	fLocal_66[196] = 0.9854f;
	iLocal_103[196] = 197;
	fLocal_67[196] = 79068f;
	iLocal_153[196] = joaat("minivan");
	Local_127[198 /*3*/] = { 2910.4014f, 3810.9268f, 52.1188f };
	fLocal_63[198] = 0.0001f;
	fLocal_64[198] = 0.0013f;
	fLocal_65[198] = 0.9992f;
	fLocal_66[198] = 0.0405f;
	iLocal_103[198] = 199;
	fLocal_67[198] = 79794f;
	iLocal_153[198] = joaat("minivan");
	Local_127[199 /*3*/] = { 2916.3674f, 3820.1096f, 52.1236f };
	fLocal_63[199] = -0.0001f;
	fLocal_64[199] = 0.0021f;
	fLocal_65[199] = 0.9999f;
	fLocal_66[199] = 0.016f;
	iLocal_103[199] = 200;
	fLocal_67[199] = 80124f;
	iLocal_153[199] = joaat("emperor");
	Local_127[200 /*3*/] = { 2942.5574f, 3832.198f, 52.3031f };
	fLocal_63[200] = -0.0019f;
	fLocal_64[200] = 0.0001f;
	fLocal_65[200] = -0.0657f;
	fLocal_66[200] = 0.9978f;
	iLocal_103[200] = 201;
	fLocal_67[200] = 81444f;
	iLocal_153[200] = joaat("minivan");
	Local_127[201 /*3*/] = { 2939.4863f, 3896.6113f, 51.8115f };
	fLocal_63[201] = -0.0032f;
	fLocal_64[201] = 0f;
	fLocal_65[201] = 0.0027f;
	fLocal_66[201] = 1f;
	iLocal_103[201] = 202;
	fLocal_67[201] = 81510f;
	iLocal_153[201] = joaat("asterope");
	Local_127[206 /*3*/] = { 2941.1116f, 3958.0115f, 51.5513f };
	fLocal_63[206] = -0.0038f;
	fLocal_64[206] = -0.0016f;
	fLocal_65[206] = 0.0433f;
	fLocal_66[206] = 0.9991f;
	iLocal_103[206] = 207;
	fLocal_67[206] = 83292f;
	iLocal_153[206] = joaat("minivan");
	Local_127[210 /*3*/] = { 2926.0823f, 4017.531f, 51.0611f };
	fLocal_63[210] = -0.0042f;
	fLocal_64[210] = -0.0018f;
	fLocal_65[210] = 0.0771f;
	fLocal_66[210] = 0.997f;
	iLocal_103[210] = 211;
	fLocal_67[210] = 84480f;
	iLocal_153[210] = joaat("minivan");
	Local_127[211 /*3*/] = { 2925.8696f, 4016.1045f, 50.8968f };
	fLocal_63[211] = -0.0042f;
	fLocal_64[211] = -0.0003f;
	fLocal_65[211] = 0.1139f;
	fLocal_66[211] = 0.9935f;
	iLocal_103[211] = 212;
	fLocal_67[211] = 85140f;
	iLocal_153[211] = joaat("asterope");
	Local_127[212 /*3*/] = { 2902.5908f, 4129.481f, 50.1421f };
	fLocal_63[212] = -0.0017f;
	fLocal_64[212] = -0.0004f;
	fLocal_65[212] = 0.1585f;
	fLocal_66[212] = 0.9874f;
	iLocal_103[212] = 213;
	fLocal_67[212] = 86262f;
	iLocal_153[212] = joaat("asterope");
	Local_127[213 /*3*/] = { 2872.5837f, 4122.1616f, 49.9296f };
	fLocal_63[213] = -0.0004f;
	fLocal_64[213] = 0.0031f;
	fLocal_65[213] = 0.9907f;
	fLocal_66[213] = -0.1358f;
	iLocal_103[213] = 214;
	fLocal_67[213] = 86262f;
	iLocal_153[213] = joaat("emperor");
	Local_127[214 /*3*/] = { 2882.5388f, 4110.017f, 50.284f };
	fLocal_63[214] = 0.0007f;
	fLocal_64[214] = 0.0034f;
	fLocal_65[214] = 0.9832f;
	fLocal_66[214] = -0.1824f;
	iLocal_103[214] = 215;
	fLocal_67[214] = 86526f;
	iLocal_153[214] = joaat("minivan");
	Local_127[216 /*3*/] = { 2838.9204f, 4220.802f, 49.8474f };
	fLocal_63[216] = -0.0005f;
	fLocal_64[216] = -0.0008f;
	fLocal_65[216] = 0.9795f;
	fLocal_66[216] = -0.2013f;
	iLocal_103[216] = 217;
	fLocal_67[216] = 88374f;
	iLocal_153[216] = joaat("minivan");
	Local_127[217 /*3*/] = { 2838.7207f, 4233.904f, 49.6966f };
	fLocal_63[217] = 0.0003f;
	fLocal_64[217] = -0.001f;
	fLocal_65[217] = 0.9882f;
	fLocal_66[217] = -0.1534f;
	iLocal_103[217] = 218;
	fLocal_67[217] = 88638f;
	iLocal_153[217] = joaat("asterope");
	Local_127[218 /*3*/] = { 2861.1074f, 4254.6597f, 49.6824f };
	fLocal_63[218] = 0.0013f;
	fLocal_64[218] = 0.0001f;
	fLocal_65[218] = 0.1495f;
	fLocal_66[218] = 0.9888f;
	iLocal_103[218] = 219;
	fLocal_67[218] = 88836f;
	iLocal_153[218] = joaat("asterope");
	Local_127[219 /*3*/] = { 2854.592f, 4258.179f, 49.6395f };
	fLocal_63[219] = 0.0015f;
	fLocal_64[219] = 0.0001f;
	fLocal_65[219] = 0.1592f;
	fLocal_66[219] = 0.9872f;
	iLocal_103[219] = 220;
	fLocal_67[219] = 88968f;
	iLocal_153[219] = joaat("emperor");
	Local_127[220 /*3*/] = { 2823.9988f, 4256.281f, 49.9823f };
	fLocal_63[220] = 0.0063f;
	fLocal_64[220] = -0.0003f;
	fLocal_65[220] = 0.9811f;
	fLocal_66[220] = -0.1932f;
	iLocal_103[220] = 221;
	fLocal_67[220] = 89166f;
	iLocal_153[220] = joaat("minivan");
	Local_127[221 /*3*/] = { 2831.4854f, 4251.9546f, 49.775f };
	fLocal_63[221] = -0.0035f;
	fLocal_64[221] = -0.0023f;
	fLocal_65[221] = 0.9817f;
	fLocal_66[221] = -0.1904f;
	iLocal_103[221] = 222;
	fLocal_67[221] = 89430f;
	iLocal_153[221] = joaat("asterope");
	Local_127[222 /*3*/] = { 2849.766f, 4287.169f, 49.6947f };
	fLocal_63[222] = 0.0007f;
	fLocal_64[222] = -0.0002f;
	fLocal_65[222] = 0.1893f;
	fLocal_66[222] = 0.9819f;
	iLocal_103[222] = 223;
	fLocal_67[222] = 89496f;
	iLocal_153[222] = joaat("minivan");
	Local_127[223 /*3*/] = { 2853.8042f, 4277.071f, 49.944f };
	fLocal_63[223] = 0.0019f;
	fLocal_64[223] = -0.0014f;
	fLocal_65[223] = 0.1232f;
	fLocal_66[223] = 0.9924f;
	iLocal_103[223] = 224;
	fLocal_67[223] = 89628f;
	iLocal_153[223] = joaat("minivan");
	Local_127[225 /*3*/] = { 2826.7432f, 4358.825f, 49.4738f };
	fLocal_63[225] = -0.0056f;
	fLocal_64[225] = -0.0011f;
	fLocal_65[225] = 0.1658f;
	fLocal_66[225] = 0.9861f;
	iLocal_103[225] = 226;
	fLocal_67[225] = 91014f;
	iLocal_153[225] = joaat("asterope");
	Local_127[226 /*3*/] = { 2790.5518f, 4346.2715f, 49.4405f };
	fLocal_63[226] = -0.0012f;
	fLocal_64[226] = 0.0065f;
	fLocal_65[226] = 0.9817f;
	fLocal_66[226] = -0.1902f;
	iLocal_103[226] = 227;
	fLocal_67[226] = 91014f;
	iLocal_153[226] = joaat("asterope");
	Local_127[227 /*3*/] = { 2798.8682f, 4337.996f, 49.7406f };
	fLocal_63[227] = -0.003f;
	fLocal_64[227] = 0.004f;
	fLocal_65[227] = 0.9768f;
	fLocal_66[227] = -0.214f;
	iLocal_103[227] = 228;
	fLocal_67[227] = 91344f;
	iLocal_153[227] = joaat("minivan");
	Local_127[228 /*3*/] = { 2790.3762f, 4346.4023f, 49.3544f };
	fLocal_63[228] = -0.0015f;
	fLocal_64[228] = 0.0069f;
	fLocal_65[228] = 0.981f;
	fLocal_66[228] = -0.194f;
	iLocal_103[228] = 229;
	fLocal_67[228] = 91608f;
	iLocal_153[228] = joaat("emperor");
	Local_127[229 /*3*/] = { 2805.9817f, 4392.129f, 48.9902f };
	fLocal_63[229] = -0.0079f;
	fLocal_64[229] = -0.0017f;
	fLocal_65[229] = 0.1483f;
	fLocal_66[229] = 0.9889f;
	iLocal_103[229] = 230;
	fLocal_67[229] = 91806f;
	iLocal_153[229] = joaat("minivan");
	Local_127[230 /*3*/] = { 2827.9146f, 4412.431f, 48.4923f };
	fLocal_63[230] = -0.001f;
	fLocal_64[230] = 0.0052f;
	fLocal_65[230] = -0.3744f;
	fLocal_66[230] = 0.9273f;
	iLocal_103[230] = 231;
	fLocal_67[230] = 92334f;
	iLocal_153[230] = joaat("emperor");
	Local_127[231 /*3*/] = { 2796.7185f, 4464.096f, 47.6579f };
	fLocal_63[231] = -0.01f;
	fLocal_64[231] = -0.0019f;
	fLocal_65[231] = 0.1384f;
	fLocal_66[231] = 0.9903f;
	iLocal_103[231] = 232;
	fLocal_67[231] = 93192f;
	iLocal_153[231] = joaat("minivan");
	Local_127[232 /*3*/] = { 2763.4312f, 4396.7793f, 48.5387f };
	fLocal_63[232] = -0.0067f;
	fLocal_64[232] = -0.0059f;
	fLocal_65[232] = -0.5931f;
	fLocal_66[232] = 0.8051f;
	iLocal_103[232] = 233;
	fLocal_67[232] = 93390f;
	iLocal_153[232] = joaat("asterope");
	Local_127[233 /*3*/] = { 2796.6157f, 4463.253f, 47.4005f };
	fLocal_63[233] = -0.0099f;
	fLocal_64[233] = -0.0015f;
	fLocal_65[233] = 0.1715f;
	fLocal_66[233] = 0.9851f;
	iLocal_103[233] = 234;
	fLocal_67[233] = 93588f;
	iLocal_153[233] = joaat("minivan");
	Local_127[235 /*3*/] = { 2750.0212f, 4510.1553f, 46.5679f };
	fLocal_63[235] = -0.0052f;
	fLocal_64[235] = 0.0092f;
	fLocal_65[235] = 0.9893f;
	fLocal_66[235] = -0.1454f;
	iLocal_103[235] = 236;
	fLocal_67[235] = 94314f;
	iLocal_153[235] = joaat("minivan");
	Local_127[236 /*3*/] = { 2769.1023f, 4543.7563f, 45.7959f };
	fLocal_63[236] = -0.0094f;
	fLocal_64[236] = -0.001f;
	fLocal_65[236] = 0.1361f;
	fLocal_66[236] = 0.9907f;
	iLocal_103[236] = 237;
	fLocal_67[236] = 94842f;
	iLocal_153[236] = joaat("asterope");
	Local_127[239 /*3*/] = { 2733.6995f, 4556.13f, 45.3717f };
	fLocal_63[239] = -0.0009f;
	fLocal_64[239] = 0.0091f;
	fLocal_65[239] = 0.9966f;
	fLocal_66[239] = -0.0817f;
	iLocal_103[239] = 240;
	fLocal_67[239] = 95304f;
	iLocal_153[239] = joaat("minivan");
	Local_127[241 /*3*/] = { 2735.2793f, 4578.1475f, 44.9966f };
	fLocal_63[241] = -0.0005f;
	fLocal_64[241] = 0.0079f;
	fLocal_65[241] = 0.999f;
	fLocal_66[241] = -0.0442f;
	iLocal_103[241] = 242;
	fLocal_67[241] = 95700f;
	iLocal_153[241] = joaat("minivan");
	Local_127[243 /*3*/] = { 2733.3506f, 4558.614f, 45.5368f };
	fLocal_63[243] = 0.0003f;
	fLocal_64[243] = 0.0089f;
	fLocal_65[243] = 0.9931f;
	fLocal_66[243] = -0.1167f;
	iLocal_103[243] = 244;
	fLocal_67[243] = 96030f;
	iLocal_153[243] = joaat("minivan");
	Local_127[244 /*3*/] = { 2753.3953f, 4625.8643f, 44.4231f };
	fLocal_63[244] = -0.0065f;
	fLocal_64[244] = -0.0008f;
	fLocal_65[244] = 0.118f;
	fLocal_66[244] = 0.993f;
	iLocal_103[244] = 245;
	fLocal_67[244] = 96558f;
	iLocal_153[244] = joaat("minivan");
	Local_127[245 /*3*/] = { 2756.684f, 4587.3096f, 44.9834f };
	fLocal_63[245] = -0.0078f;
	fLocal_64[245] = -0.0012f;
	fLocal_65[245] = 0.128f;
	fLocal_66[245] = 0.9917f;
	iLocal_103[245] = 246;
	fLocal_67[245] = 97086f;
	iLocal_153[245] = joaat("asterope");
	Local_127[246 /*3*/] = { 2745.1133f, 4663.1567f, 44.1967f };
	fLocal_63[246] = -0.0036f;
	fLocal_64[246] = -0.0003f;
	fLocal_65[246] = 0.1046f;
	fLocal_66[246] = 0.9945f;
	iLocal_103[246] = 247;
	fLocal_67[246] = 97614f;
	iLocal_153[246] = joaat("asterope");
	Local_127[250 /*3*/] = { 2699.8525f, 4746.0195f, 43.9265f };
	fLocal_63[250] = 0.0002f;
	fLocal_64[250] = -0.0005f;
	fLocal_65[250] = 0.9962f;
	fLocal_66[250] = -0.0871f;
	iLocal_103[250] = 251;
	fLocal_67[250] = 98934f;
	iLocal_153[250] = joaat("minivan");
	Local_127[254 /*3*/] = { 2698.0276f, 4733.717f, 44.1639f };
	fLocal_63[254] = -0.0027f;
	fLocal_64[254] = -0.001f;
	fLocal_65[254] = 0.9943f;
	fLocal_66[254] = -0.1066f;
	iLocal_103[254] = 255;
	fLocal_67[254] = 100188f;
	iLocal_153[254] = joaat("minivan");
	Local_127[256 /*3*/] = { 2682.8777f, 4826.2163f, 44.3648f };
	fLocal_63[256] = 0.0005f;
	fLocal_64[256] = -0.0007f;
	fLocal_65[256] = 0.9942f;
	fLocal_66[256] = -0.1075f;
	iLocal_103[256] = 257;
	fLocal_67[256] = 100782f;
	iLocal_153[256] = joaat("minivan");
	Local_127[257 /*3*/] = { 2671.1245f, 4851.187f, 44.1884f };
	fLocal_63[257] = -0.0018f;
	fLocal_64[257] = -0.0008f;
	fLocal_65[257] = 0.9956f;
	fLocal_66[257] = -0.0933f;
	iLocal_103[257] = 258;
	fLocal_67[257] = 101178f;
	iLocal_153[257] = joaat("minivan");
	Local_127[258 /*3*/] = { 2670.646f, 4856.5493f, 44.3695f };
	fLocal_63[258] = -0.0002f;
	fLocal_64[258] = -0.0006f;
	fLocal_65[258] = 0.9887f;
	fLocal_66[258] = -0.1497f;
	iLocal_103[258] = 259;
	fLocal_67[258] = 101574f;
	iLocal_153[258] = joaat("asterope");
	Local_127[261 /*3*/] = { 2667.858f, 4869.266f, 44.22f };
	fLocal_63[261] = 0.0001f;
	fLocal_64[261] = -0.0005f;
	fLocal_65[261] = 0.9908f;
	fLocal_66[261] = -0.1351f;
	iLocal_103[261] = 262;
	fLocal_67[261] = 101970f;
	iLocal_153[261] = joaat("minivan");
	Local_127[264 /*3*/] = { 2654.731f, 4947.659f, 44.4515f };
	fLocal_63[264] = 0f;
	fLocal_64[264] = -0.0006f;
	fLocal_65[264] = 0.9925f;
	fLocal_66[264] = -0.1222f;
	iLocal_103[264] = 265;
	fLocal_67[264] = 103422f;
	iLocal_153[264] = joaat("asterope");
	Local_127[267 /*3*/] = { 2650.3118f, 4943.588f, 44.5048f };
	fLocal_63[267] = 0.0013f;
	fLocal_64[267] = -0.0007f;
	fLocal_65[267] = 0.9957f;
	fLocal_66[267] = -0.0931f;
	iLocal_103[267] = 268;
	fLocal_67[267] = 103950f;
	iLocal_153[267] = joaat("minivan");
	Local_127[274 /*3*/] = { 2618.7942f, 5190.987f, 44.4486f };
	fLocal_63[274] = -0.0007f;
	fLocal_64[274] = -0.0001f;
	fLocal_65[274] = 0.1434f;
	fLocal_66[274] = 0.9897f;
	iLocal_103[274] = 275;
	fLocal_67[274] = 107646f;
	iLocal_153[274] = joaat("asterope");
	Local_127[275 /*3*/] = { 2620.9553f, 5181.92f, 44.3305f };
	fLocal_63[275] = -0.0006f;
	fLocal_64[275] = 0.0002f;
	fLocal_65[275] = 0.1561f;
	fLocal_66[275] = 0.9877f;
	iLocal_103[275] = 276;
	fLocal_67[275] = 107844f;
	iLocal_153[275] = joaat("asterope");
	Local_127[276 /*3*/] = { 2587.116f, 5198.97f, 44.2932f };
	fLocal_63[276] = 0f;
	fLocal_64[276] = 0.0002f;
	fLocal_65[276] = 0.9877f;
	fLocal_66[276] = -0.1562f;
	iLocal_103[276] = 277;
	fLocal_67[276] = 107976f;
	iLocal_153[276] = joaat("minivan");
	Local_127[279 /*3*/] = { 2600.9653f, 5267.5176f, 44.1361f };
	fLocal_63[279] = -0.0006f;
	fLocal_64[279] = 0f;
	fLocal_65[279] = 0.1429f;
	fLocal_66[279] = 0.9897f;
	iLocal_103[279] = 280;
	fLocal_67[279] = 109164f;
	iLocal_153[279] = joaat("minivan");
	Local_127[283 /*3*/] = { 2553.794f, 5321.504f, 44.5224f };
	fLocal_63[283] = -0.0002f;
	fLocal_64[283] = 0.0005f;
	fLocal_65[283] = 0.9943f;
	fLocal_66[283] = -0.1065f;
	iLocal_103[283] = 284;
	fLocal_67[283] = 110484f;
	iLocal_153[283] = joaat("minivan");
	Local_127[287 /*3*/] = { 2528.255f, 5399.9287f, 44.2416f };
	fLocal_63[287] = 0.0002f;
	fLocal_64[287] = 0.0002f;
	fLocal_65[287] = 0.9906f;
	fLocal_66[287] = -0.1368f;
	iLocal_103[287] = 288;
	fLocal_67[287] = 112002f;
	iLocal_153[287] = joaat("asterope");
	Local_127[290 /*3*/] = { 2534.561f, 5394.726f, 44.0934f };
	fLocal_63[290] = -0.0002f;
	fLocal_64[290] = 0.0006f;
	fLocal_65[290] = 0.9907f;
	fLocal_66[290] = -0.1359f;
	iLocal_103[290] = 291;
	fLocal_67[290] = 113124f;
	iLocal_153[290] = joaat("minivan");
	Local_127[291 /*3*/] = { 2531.4963f, 5407.476f, 44.0435f };
	fLocal_63[291] = 0f;
	fLocal_64[291] = -0.0001f;
	fLocal_65[291] = 0.9919f;
	fLocal_66[291] = -0.127f;
	iLocal_103[291] = 292;
	fLocal_67[291] = 113256f;
	iLocal_153[291] = joaat("emperor");
	Local_129[1 /*3*/] = { 2297.0762f, 1144.4797f, 78.6363f };
	fLocal_72[1] = 0.0023f;
	fLocal_73[1] = -0.0176f;
	fLocal_74[1] = 0.3532f;
	fLocal_75[1] = 0.9354f;
	iLocal_106[1] = 400;
	fLocal_76[1] = 16000f;
	fLocal_77[1] = 1f;
	iLocal_155[1] = joaat("hauler");
	Local_129[2 /*3*/] = { 2284.0776f, 1167.9307f, 78.0065f };
	fLocal_72[2] = -0.0169f;
	fLocal_73[2] = 0.0226f;
	fLocal_74[2] = 0.3469f;
	fLocal_75[2] = 0.9375f;
	iLocal_106[2] = 402;
	fLocal_76[2] = 17000f;
	fLocal_77[2] = 1f;
	iLocal_155[2] = joaat("packer");
	Local_129[3 /*3*/] = { 1886.9763f, 2084.2434f, 55.6819f };
	fLocal_72[3] = -0.0082f;
	fLocal_73[3] = 0.0048f;
	fLocal_74[3] = 0.0651f;
	fLocal_75[3] = 0.9978f;
	iLocal_106[3] = 404;
	fLocal_76[3] = 36000f;
	fLocal_77[3] = 1f;
	iLocal_155[3] = joaat("coach");
	Local_129[4 /*3*/] = { 1881.8495f, 2073.8083f, 54.9369f };
	fLocal_72[4] = -0.0051f;
	fLocal_73[4] = -0.0067f;
	fLocal_74[4] = 0.0702f;
	fLocal_75[4] = 0.9975f;
	iLocal_106[4] = 405;
	fLocal_76[4] = 36000f;
	fLocal_77[4] = 1f;
	iLocal_155[4] = joaat("bus");
	Local_129[5 /*3*/] = { 2893.2883f, 3642.3274f, 52.8881f };
	fLocal_72[5] = 0.0015f;
	fLocal_73[5] = -0.0036f;
	fLocal_74[5] = -0.1382f;
	fLocal_75[5] = 0.9904f;
	iLocal_106[5] = 406;
	fLocal_76[5] = 72000f;
	fLocal_77[5] = 1f;
	iLocal_155[5] = joaat("mule");
}

int func_686(char* sParam0)//Position - 0x8EDDE
{
	if (!func_688(sParam0))
	{
		STREAMING::REQUEST_ANIM_DICT(sParam0);
		if (STREAMING::HAS_ANIM_DICT_LOADED(sParam0))
		{
			func_687(sParam0, 1);
		}
	}
	else
	{
		return 1;
	}
	return 0;
}

void func_687(char* sParam0, bool bParam1)//Position - 0x8EE0E
{
	int iVar0;
	int iVar1;
	int iVar2;
	bool bVar3;
	iVar0 = MISC::GET_HASH_KEY(sParam0);
	iVar1 = iLocal_486;
	iVar2 = 0;
	bVar3 = false;
	while (iVar2 < iVar1 && !bVar3)
	{
		if (bParam1)
		{
			if (iLocal_486[iVar2] == 0)
			{
				iLocal_486[iVar2] = iVar0;
				bVar3 = true;
			}
		}
		else if (iLocal_486[iVar2] == iVar0)
		{
			iLocal_486[iVar2] = 0;
			bVar3 = true;
		}
		iVar2++;
	}
}

int func_688(char* sParam0)//Position - 0x8EE78
{
	int iVar0;
	int iVar1;
	int iVar2;
	iVar0 = MISC::GET_HASH_KEY(sParam0);
	iVar1 = iLocal_486;
	iVar2 = 0;
	iVar2 = 0;
	while (iVar2 < iVar1)
	{
		if (iLocal_486[iVar2] == iVar0)
		{
			return 1;
		}
		iVar2++;
	}
	return 0;
}

void func_689()//Position - 0x8EEB4
{
	if (func_366())
	{
		func_479(1, "stageRace", 0, 0, func_359(1), 1);
		PLAYER::SET_MAX_WANTED_LEVEL(0);
		PLAYER::SET_WANTED_LEVEL_MULTIPLIER(0f);
		MISC::ENABLE_DISPATCH_SERVICE(1, false);
		MISC::ENABLE_DISPATCH_SERVICE(2, false);
		MISC::ENABLE_DISPATCH_SERVICE(3, false);
		MISC::ENABLE_DISPATCH_SERVICE(4, false);
		MISC::ENABLE_DISPATCH_SERVICE(5, false);
		if (!ENTITY::DOES_ENTITY_EXIST(iLocal_233))
		{
			iLocal_233 = __LIB_16__::func_0(joaat("entityxf"), Local_213, 0f);
			__LIB_0__::func_679(iLocal_233, 0);
			VEHICLE::SET_VEHICLE_HAS_STRONG_AXLES(iLocal_233, true);
			ENTITY::SET_ENTITY_SHOULD_FREEZE_WAITING_ON_COLLISION(iLocal_233, true);
			VEHICLE::SET_VEHICLE_DOORS_LOCKED(iLocal_233, 2);
			VEHICLE::SET_DOOR_ALLOWED_TO_BE_BROKEN_OFF(iLocal_233, 0, false);
			VEHICLE::SET_DOOR_ALLOWED_TO_BE_BROKEN_OFF(iLocal_233, 1, false);
			STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(joaat("entityxf"));
		}
		if (!ENTITY::DOES_ENTITY_EXIST(iLocal_226))
		{
			__LIB_38__::func_761(&iLocal_226, joaat("IG_Car3guy1"), ENTITY::GET_ENTITY_COORDS(iLocal_233, true), 0, 1);
			PED::SET_PED_INTO_VEHICLE(iLocal_226, iLocal_233, -1);
			PED::SET_PED_RELATIONSHIP_GROUP_HASH(iLocal_226, iLocal_256);
			PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iLocal_226, true);
			STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(joaat("IG_Car3guy1"));
		}
		if (!ENTITY::DOES_ENTITY_EXIST(iLocal_234))
		{
			iLocal_234 = __LIB_16__::func_0(joaat("cheetah"), Local_214, -1.3639f);
			__LIB_0__::func_679(iLocal_234, 1);
			VEHICLE::SET_VEHICLE_HAS_STRONG_AXLES(iLocal_234, true);
			ENTITY::SET_ENTITY_SHOULD_FREEZE_WAITING_ON_COLLISION(iLocal_234, true);
			VEHICLE::SET_VEHICLE_DOORS_LOCKED(iLocal_234, 2);
			VEHICLE::SET_DOOR_ALLOWED_TO_BE_BROKEN_OFF(iLocal_234, 0, false);
			VEHICLE::SET_DOOR_ALLOWED_TO_BE_BROKEN_OFF(iLocal_234, 1, false);
			STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(joaat("cheetah"));
		}
		if (!ENTITY::DOES_ENTITY_EXIST(iLocal_227))
		{
			__LIB_38__::func_761(&iLocal_227, joaat("IG_Car3guy2"), ENTITY::GET_ENTITY_COORDS(iLocal_234, true), 0, 1);
			PED::SET_PED_COMPONENT_VARIATION(iLocal_227, 0, 1, 0, 0);
			PED::SET_PED_COMPONENT_VARIATION(iLocal_227, 3, 0, 0, 0);
			PED::SET_PED_COMPONENT_VARIATION(iLocal_227, 4, 0, 0, 0);
			PED::SET_PED_PROP_INDEX(iLocal_227, 1, 0, 0, false);
			PED::SET_PED_INTO_VEHICLE(iLocal_227, iLocal_234, -1);
			PED::SET_PED_RELATIONSHIP_GROUP_HASH(iLocal_227, iLocal_256);
			PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iLocal_227, true);
			STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(joaat("IG_Car3guy2"));
		}
		__LIB_0__::func_222(&uLocal_312, 4, iLocal_226, "CST3RACER1", 0, 1);
		__LIB_0__::func_222(&uLocal_312, 5, iLocal_227, "CST3RACER2", 0, 1);
		func_350(PLAYER::PLAYER_ID(), 0, 0);
		fLocal_223 = 1f;
		iLocal_198 = 0;
		CUTSCENE::REQUEST_CUTSCENE("Car_steal_3_mcs_1", 4);
		CAM::SET_CINEMATIC_BUTTON_ACTIVE(false);
		func_645(1);
		if (func_365())
		{
			CAM::SET_GAMEPLAY_CAM_RELATIVE_HEADING(0f);
			CAM::SET_GAMEPLAY_CAM_RELATIVE_PITCH(-10f, 1f);
		}
	}
	else
	{
		if (CUTSCENE::CAN_REQUEST_ASSETS_FOR_CUTSCENE_ENTITY())
		{
			__LIB_41__::func_49("Franklin", func_359(1), 0, 2);
			CUTSCENE::SET_CUTSCENE_PED_COMPONENT_VARIATION_FROM_PED("Racer_that_dies", iLocal_226, 0);
			CUTSCENE::SET_CUTSCENE_PED_COMPONENT_VARIATION("Racer_that_dies", 8, 1, 0, 0);
			CUTSCENE::SET_CUTSCENE_PED_COMPONENT_VARIATION_FROM_PED("Racer_that_runsaway", iLocal_227, 0);
		}
		switch (iLocal_180)
		{
			case 0:
				if (__LIB_0__::func_90())
				{
					HUD::CLEAR_PRINTS();
					HUD::CLEAR_HELP(true);
					__LIB_0__::func_638();
					CUTSCENE::REGISTER_ENTITY_FOR_CUTSCENE(iLocal_232, "Franklins_car", 0, 0, 0);
					CUTSCENE::REGISTER_ENTITY_FOR_CUTSCENE(iLocal_233, "Car_Racer_runsaway", 0, 0, 0);
					CUTSCENE::REGISTER_ENTITY_FOR_CUTSCENE(iLocal_234, "Car_Racer_dies", 0, 0, 0);
					CUTSCENE::REGISTER_ENTITY_FOR_CUTSCENE(iLocal_226, "Racer_that_dies", 0, 0, 0);
					CUTSCENE::REGISTER_ENTITY_FOR_CUTSCENE(iLocal_227, "Racer_that_runsaway", 0, 0, 0);
					VEHICLE::SET_VEHICLE_DOOR_CONTROL(iLocal_232, 0, 0, 0f);
					__LIB_0__::func_532(1, 1, 1, 0, 0, 0, 0);
					CUTSCENE::START_CUTSCENE(0);
					RECORDING::REPLAY_START_EVENT(4);
					func_362(0);
					CAM::STOP_GAMEPLAY_HINT(true);
					CAM::RENDER_SCRIPT_CAMS(false, false, 3000, true, false, 0);
					MISC::CLEAR_AREA(2570.5767f, 364.8711f, 107.4569f, 1000f, true, false, false, false);
					if (CAM::IS_SCREEN_FADED_OUT())
					{
						CAM::DO_SCREEN_FADE_IN(500);
					}
					func_351();
				}
				break;
			case 1:
				if (CUTSCENE::IS_CUTSCENE_PLAYING())
				{
					STREAMING::SET_SRL_POST_CUTSCENE_CAMERA(2571.3f, 354.89368f, 110.03575f, __LIB_0__::func_79(2215.9807f, 0.427734f, -0.092331f));
				}
				VEHICLE::SET_VEHICLE_DENSITY_MULTIPLIER_THIS_FRAME(0f);
				if (CUTSCENE::CAN_SET_EXIT_STATE_FOR_CAMERA(false))
				{
					CAM::SET_GAMEPLAY_CAM_RELATIVE_HEADING(0f);
					CAM::SET_GAMEPLAY_CAM_RELATIVE_PITCH(-10f, 1f);
				}
				if (CUTSCENE::CAN_SET_EXIT_STATE_FOR_REGISTERED_ENTITY("Franklins_car", 0))
				{
					RECORDING::REPLAY_STOP_EVENT();
					if (!PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), iLocal_232, false))
					{
						PED::SET_PED_INTO_VEHICLE(PLAYER::PLAYER_PED_ID(), iLocal_232, -1);
					}
					VEHICLE::SET_VEHICLE_DOORS_SHUT(iLocal_232, true);
					func_894("WheelCompression[vehPlayer](Car_steal_3_mcs_1)", 1);
				}
				if (!func_897("WheelCompression[vehPlayer](Car_steal_3_mcs_1)"))
				{
					VEHICLE::SET_VEHICLE_USE_CUTSCENE_WHEEL_COMPRESSION(iLocal_232, true, true, true);
				}
				if (!func_897("RacerRev"))
				{
					if (AUDIO::REQUEST_SCRIPT_AUDIO_BANK("RACE_IGNITIONS", false, -1))
					{
						if (CUTSCENE::GET_CUTSCENE_TIME() > SYSTEM::ROUND((12.384283f * 1000f)))
						{
							AUDIO::PLAY_SOUND_FROM_ENTITY(-1, "CAR_STEAL_1_IGNITIONS", iLocal_233, "CAR_STEAL_1_SOUNDSET", false, 0);
							func_894("RacerRev", 1);
						}
					}
				}
				if (CUTSCENE::CAN_SET_EXIT_STATE_FOR_REGISTERED_ENTITY("Car_Racer_runsaway", 0))
				{
					VEHICLE::START_PLAYBACK_RECORDED_VEHICLE(iLocal_233, 500, sLocal_220, true);
					VEHICLE::SET_PLAYBACK_SPEED(iLocal_233, 0f);
					VEHICLE::FORCE_PLAYBACK_RECORDED_VEHICLE_UPDATE(iLocal_233, true);
					VEHICLE::SET_VEHICLE_DOORS_SHUT(iLocal_233, true);
					func_894("Car_steal_3_mcs_1:Car_Racer_runsaway", 1);
				}
				if (CUTSCENE::CAN_SET_EXIT_STATE_FOR_REGISTERED_ENTITY("Car_Racer_dies", 0))
				{
					VEHICLE::START_PLAYBACK_RECORDED_VEHICLE(iLocal_234, 501, sLocal_220, true);
					VEHICLE::SET_PLAYBACK_SPEED(iLocal_234, 0f);
					VEHICLE::FORCE_PLAYBACK_RECORDED_VEHICLE_UPDATE(iLocal_234, true);
					VEHICLE::SET_VEHICLE_DOORS_SHUT(iLocal_234, true);
					func_894("Car_steal_3_mcs_1:Car_Racer_dies", 1);
				}
				if (CUTSCENE::CAN_SET_EXIT_STATE_FOR_REGISTERED_ENTITY("Racer_that_runsaway", 0))
				{
					func_894("Car_steal_3_mcs_1:Racer_that_runsaway", 1);
				}
				if (CUTSCENE::CAN_SET_EXIT_STATE_FOR_REGISTERED_ENTITY("Racer_that_dies", 0))
				{
					func_894("Car_steal_3_mcs_1:Racer_that_dies", 1);
				}
				if (func_897("Car_steal_3_mcs_1:Car_Racer_runsaway") && func_897("Car_steal_3_mcs_1:Racer_that_runsaway"))
				{
					if (!PED::IS_PED_IN_VEHICLE(iLocal_226, iLocal_233, false))
					{
						PED::SET_PED_INTO_VEHICLE(iLocal_226, iLocal_233, -1);
					}
				}
				if (func_897("Car_steal_3_mcs_1:Car_Racer_dies") && func_897("Car_steal_3_mcs_1:Racer_that_dies"))
				{
					if (!PED::IS_PED_IN_VEHICLE(iLocal_227, iLocal_234, false))
					{
						PED::SET_PED_INTO_VEHICLE(iLocal_227, iLocal_234, -1);
					}
				}
				if (CUTSCENE::HAS_CUTSCENE_FINISHED())
				{
					if (iLocal_195)
					{
						RECORDING::REPLAY_STOP_EVENT();
						iLocal_195 = 0;
					}
					func_24(1);
					func_37();
				}
				break;
			}
	}
	if (func_36())
	{
		CAM::RENDER_SCRIPT_CAMS(false, false, 3000, true, false, 0);
		CUTSCENE::REMOVE_CUTSCENE();
		while (CUTSCENE::HAS_CUTSCENE_LOADED())
		{
			func_362(0);
		}
		__LIB_0__::func_532(0, 1, 1, 0, 0, 0, 0);
		CAM::STOP_GAMEPLAY_HINT(true);
		func_940();
		iLocal_198 = 1;
		iLocal_479++;
	}
}

void func_693()//Position - 0x8F60F
{
	if (func_366())
	{
		func_350(PLAYER::PLAYER_ID(), 1, 0);
		__LIB_0__::func_54(0, 1);
		iLocal_198 = 1;
		PED::ADD_SCENARIO_BLOCKING_AREA(Vector(116.46857f, 361.80548f, 2581.1057f) - Vector(10f, 25f, 25f), Vector(116.46857f, 361.80548f, 2581.1057f) + Vector(10f, 25f, 25f), false, true, true, true);
		PATHFIND::SET_ROADS_IN_AREA(Vector(116.46857f, 361.80548f, 2581.1057f) - Vector(10f, 25f, 25f), Vector(116.46857f, 361.80548f, 2581.1057f) + Vector(10f, 25f, 25f), false, true);
		if (func_365())
		{
			__LIB_37__::func_920(PLAYER::PLAYER_PED_ID(), 117.2437f, -405.8348f, 40.2589f, 172.2073f, 0);
			if (!ENTITY::DOES_ENTITY_EXIST(iLocal_237))
			{
				STREAMING::REQUEST_MODEL(joaat("adder"));
				while (!STREAMING::HAS_MODEL_LOADED(joaat("adder")))
				{
					SYSTEM::WAIT(0);
				}
				func_348(&iLocal_237, joaat("adder"), 119.2013f, -398.4865f, 40.1208f, -171.4098f, -1, 0);
				VEHICLE::SET_VEHICLE_COLOURS(iLocal_237, 0, 0);
				VEHICLE::SET_VEHICLE_EXTRA_COLOURS(iLocal_237, 0, 0);
				VEHICLE::SET_VEHICLE_DOORS_LOCKED(iLocal_237, 10);
				VEHICLE::SET_VEHICLE_IS_CONSIDERED_BY_PLAYER(iLocal_237, false);
			}
			if (!ENTITY::DOES_ENTITY_EXIST(iLocal_228))
			{
				STREAMING::REQUEST_MODEL(__LIB_0__::func_493(29));
				while (!STREAMING::HAS_MODEL_LOADED(__LIB_0__::func_493(29)))
				{
					SYSTEM::WAIT(0);
				}
				while (!__LIB_15__::func_938(&iLocal_228, 29, iLocal_237, -1, 1))
				{
					func_362(0);
				}
				PED::SET_PED_COMPONENT_VARIATION(iLocal_228, 3, 2, 0, 0);
				PED::SET_PED_COMPONENT_VARIATION(iLocal_228, 4, 2, 0, 0);
				PED::SET_PED_COMPONENT_VARIATION(iLocal_228, 10, 1, 0, 0);
				while (!PED::HAVE_ALL_STREAMING_REQUESTS_COMPLETED(iLocal_228))
				{
					func_362(0);
				}
				PED::SET_PED_RELATIONSHIP_GROUP_HASH(iLocal_228, iLocal_255);
				PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iLocal_228, true);
				TASK::TASK_VEHICLE_DRIVE_WANDER(iLocal_228, iLocal_237, 30f, 786599);
				PED::SET_PED_KEEP_TASK(iLocal_228, true);
				STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(__LIB_0__::func_493(29));
			}
			PED::FORCE_PED_MOTION_STATE(PLAYER::PLAYER_PED_ID(), joaat("MotionState_Idle"), false, 0, false);
			CAM::SET_GAMEPLAY_CAM_RELATIVE_HEADING(0f);
			CAM::SET_GAMEPLAY_CAM_RELATIVE_PITCH(-10f, 1f);
			func_362(10);
			if (CAM::IS_SCREEN_FADED_OUT())
			{
				CAM::DO_SCREEN_FADE_IN(500);
			}
		}
	}
	else
	{
		if (!OBJECT::IS_DOOR_REGISTERED_WITH_SYSTEM(Global_41748[24 /*31*/]))
		{
			OBJECT::ADD_DOOR_TO_SYSTEM(Global_41748[24 /*31*/], Global_41748[24 /*31*/].f_5, Global_41748[24 /*31*/].f_2, true, true, false);
		}
		if (OBJECT::IS_DOOR_REGISTERED_WITH_SYSTEM(Global_41748[24 /*31*/]))
		{
			if (OBJECT::DOOR_SYSTEM_GET_OPEN_RATIO(Global_41748[24 /*31*/]) != 0f || OBJECT::DOOR_SYSTEM_GET_DOOR_STATE(Global_41748[24 /*31*/]) != 4)
			{
				OBJECT::DOOR_SYSTEM_SET_OPEN_RATIO(Global_41748[24 /*31*/], 0f, false, false);
				OBJECT::DOOR_SYSTEM_SET_DOOR_STATE(Global_41748[24 /*31*/], 4, false, true);
			}
		}
		__LIB_17__::func_656(80, 4);
		switch (iLocal_180)
		{
			case 0:
				if (!AUDIO::IS_AUDIO_SCENE_ACTIVE("CAR_1_DEVIN_DRIVES_AWAY"))
				{
					AUDIO::START_AUDIO_SCENE("CAR_1_DEVIN_DRIVES_AWAY");
				}
				if (ENTITY::DOES_ENTITY_EXIST(iLocal_237) && !ENTITY::IS_ENTITY_DEAD(iLocal_237, false))
				{
					if (!func_897("CAR_1_DEVINS_CAR_GROUP"))
					{
						AUDIO::ADD_ENTITY_TO_AUDIO_MIX_GROUP(iLocal_237, "CAR_1_DEVINS_CAR_GROUP", 0f);
						func_894("CAR_1_DEVINS_CAR_GROUP", 1);
					}
				}
				if (!func_897("CST3_Phone"))
				{
					if (MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true), 2597.919f, 361.81824f, 106.42761f, true) < 1500f && MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true), 2597.919f, 361.81824f, 106.42761f, true) > 200f)
					{
						__LIB_0__::func_222(&uLocal_312, 3, func_359(1), "FRANKLIN", 0, 1);
						__LIB_0__::func_222(&uLocal_312, 1, 0, "MICHAEL", 0, 1);
						__LIB_31__::func_805(&uLocal_312, 0, "CST3AUD", "CST3_Phone", 8, 1, 0, 0, 0);
						func_894("CST3_Phone", 1);
					}
				}
				if (!func_897("LeaveVehicle"))
				{
					__LIB_16__::func_34(&iLocal_257, Local_217, 0f, 0f, 2f, 1, iLocal_232, "S3_GOTO", "CMN_GENGETIN" /* GXT: ~s~Get in the ~b~car. */, "CMN_GENGETBCK" /* GXT: ~s~Get back in the ~b~car. */, 1, 0, 1, -1);
				}
				if (!AUDIO::IS_AUDIO_SCENE_ACTIVE("CAR_1_GET_TO_RACE"))
				{
					if (PED::IS_PED_SITTING_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), iLocal_232))
					{
						AUDIO::START_AUDIO_SCENE("CAR_1_GET_TO_RACE");
					}
				}
				if ((ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), 2558.9255f, 355.28738f, 107.121086f, 2598.1199f, 353.76593f, 121.99439f, 35f, false, true, 0) && PED::IS_PED_SITTING_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), iLocal_232)) && !PLAYER::IS_PLAYER_WANTED_LEVEL_GREATER(PLAYER::PLAYER_ID(), 0))
				{
					if (__LIB_0__::func_494(1, 0, 1))
					{
						if (!STREAMING::IS_NEW_LOAD_SCENE_ACTIVE())
						{
							STREAMING::NEW_LOAD_SCENE_START_SPHERE(2580.9114f, 354.0207f, 107.45697f, 50f, 0);
						}
						VEHICLE::SET_VEHICLE_ENGINE_ON(iLocal_232, true, true, false);
						if (ENTITY::DOES_ENTITY_EXIST(iLocal_226))
						{
							TASK::CLEAR_PED_TASKS_IMMEDIATELY(iLocal_226);
							TASK::TASK_PLAY_ANIM_ADVANCED(iLocal_226, sLocal_224, "racer_argue_action_01", Vector(107.662f, 358.981f, 2581.546f) + Vector(0f, 0f, -0.45f), 0f, 0f, 90f, 8f, -8f, -1, 536576, 0.7f, 2, 0);
							PED::FORCE_PED_AI_AND_ANIMATION_UPDATE(iLocal_226, false, false);
						}
						if (ENTITY::DOES_ENTITY_EXIST(iLocal_227))
						{
							TASK::CLEAR_PED_TASKS_IMMEDIATELY(iLocal_227);
							TASK::TASK_PLAY_ANIM_ADVANCED(iLocal_227, sLocal_224, "racer_argue_action_02", 2581.546f, 358.981f, 107.662f, 0f, 0f, 90f, 8f, -8f, -1, 536576, 0.7f, 2, 0);
							PED::FORCE_PED_AI_AND_ANIMATION_UPDATE(iLocal_227, false, false);
						}
						RECORDING::REPLAY_RECORD_BACK_FOR_TIME(10f, 10f, 3);
						VEHICLE::START_PLAYBACK_RECORDED_VEHICLE(iLocal_232, 1, sLocal_219, true);
						VEHICLE::FORCE_PLAYBACK_RECORDED_VEHICLE_UPDATE(iLocal_232, true);
						VEHICLE::SET_PLAYBACK_SPEED(iLocal_232, 0.75f);
						if (!CAM::DOES_CAM_EXIST(iLocal_247))
						{
							iLocal_247 = CAM::CREATE_CAM("DEFAULT_SCRIPTED_CAMERA", true);
						}
						CAM::SET_CAM_PARAMS(iLocal_247, 2564.087f, 365.74115f, 110.56415f, -5.48984f, 0f, -143.2919f, 27.323626f, 0, 1, 1, 2);
						CAM::SET_CAM_PARAMS(iLocal_247, 2564.0479f, 365.79004f, 109.91196f, -10.087912f, 0f, -122.95435f, 27.323626f, 3500, 3, 3, 2);
						CAM::SHAKE_CAM(iLocal_247, "HAND_SHAKE", 0.4f);
						CAM::RENDER_SCRIPT_CAMS(true, false, 3000, true, false, 0);
						HUD::CLEAR_PRINTS();
						HUD::CLEAR_HELP(true);
						MISC::CLEAR_AREA(2570.5767f, 364.8711f, 107.4569f, 1000f, true, false, false, false);
						HUD::HIDE_HUD_AND_RADAR_THIS_FRAME();
						iLocal_198 = 0;
						func_350(PLAYER::PLAYER_ID(), 0, 0);
						TASK::CLEAR_PED_TASKS_IMMEDIATELY(PLAYER::PLAYER_PED_ID());
						PED::SET_PED_INTO_VEHICLE(PLAYER::PLAYER_PED_ID(), iLocal_232, -1);
						func_894("FranklinExitCar", 1);
						if (AUDIO::IS_AUDIO_SCENE_ACTIVE("CAR_1_GET_TO_RACE"))
						{
							AUDIO::STOP_AUDIO_SCENE("CAR_1_GET_TO_RACE");
						}
						if (!AUDIO::IS_AUDIO_SCENE_ACTIVE("CAR_1_PARK_UP_CUTSCENE"))
						{
							AUDIO::START_AUDIO_SCENE("CAR_1_PARK_UP_CUTSCENE");
						}
						func_351();
					}
				}
				if ((ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), 2559.3186f, 370.3448f, 107.121025f, 2598.8875f, 368.67465f, 122.00227f, 35f, false, true, 0) && PED::IS_PED_SITTING_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), iLocal_232)) && !PLAYER::IS_PLAYER_WANTED_LEVEL_GREATER(PLAYER::PLAYER_ID(), 0))
				{
					if (__LIB_0__::func_494(1, 0, 1))
					{
						if (!STREAMING::IS_NEW_LOAD_SCENE_ACTIVE())
						{
							STREAMING::NEW_LOAD_SCENE_START_SPHERE(2580.9114f, 354.0207f, 107.45697f, 50f, 0);
						}
						VEHICLE::SET_VEHICLE_ENGINE_ON(iLocal_232, true, true, false);
						VEHICLE::START_PLAYBACK_RECORDED_VEHICLE(iLocal_232, 2, sLocal_219, true);
						VEHICLE::FORCE_PLAYBACK_RECORDED_VEHICLE_UPDATE(iLocal_232, true);
						VEHICLE::SET_PLAYBACK_SPEED(iLocal_232, 0.75f);
						if (!CAM::DOES_CAM_EXIST(iLocal_247))
						{
							iLocal_247 = CAM::CREATE_CAM("DEFAULT_SCRIPTED_CAMERA", true);
						}
						CAM::SET_CAM_PARAMS(iLocal_247, 2595.213f, 341.7507f, 110.44665f, 9.125167f, 0.100839f, 16.44817f, 39.313477f, 0, 1, 1, 2);
						CAM::SET_CAM_PARAMS(iLocal_247, 2593.4736f, 340.79297f, 109.082886f, 2.509332f, 0.100839f, 29.033203f, 39.313477f, SYSTEM::ROUND(VEHICLE::GET_TOTAL_DURATION_OF_VEHICLE_RECORDING(2, sLocal_219)), 1, 1, 2);
						CAM::SHAKE_CAM(iLocal_247, "HAND_SHAKE", 0.4f);
						CAM::RENDER_SCRIPT_CAMS(true, false, 3000, true, false, 0);
						HUD::CLEAR_PRINTS();
						HUD::CLEAR_HELP(true);
						MISC::CLEAR_AREA(2570.5767f, 364.8711f, 107.4569f, 1000f, true, false, false, false);
						HUD::HIDE_HUD_AND_RADAR_THIS_FRAME();
						iLocal_198 = 0;
						HUD::DISPLAY_RADAR(false);
						HUD::DISPLAY_HUD(false);
						func_350(PLAYER::PLAYER_ID(), 0, 0);
						TASK::CLEAR_PED_TASKS_IMMEDIATELY(PLAYER::PLAYER_PED_ID());
						PED::SET_PED_INTO_VEHICLE(PLAYER::PLAYER_PED_ID(), iLocal_232, -1);
						if (AUDIO::IS_AUDIO_SCENE_ACTIVE("CAR_1_GET_TO_RACE"))
						{
							AUDIO::STOP_AUDIO_SCENE("CAR_1_GET_TO_RACE");
						}
						if (!AUDIO::IS_AUDIO_SCENE_ACTIVE("CAR_1_PARK_UP_CUTSCENE"))
						{
							AUDIO::START_AUDIO_SCENE("CAR_1_PARK_UP_CUTSCENE");
						}
						if (!func_897("CST3_MCS1_LI"))
						{
							if ((!HUD::IS_MESSAGE_BEING_DISPLAYED() || MISC::GET_PROFILE_SETTING(203) == 0) && !__LIB_0__::func_75())
							{
								__LIB_0__::func_222(&uLocal_312, 4, iLocal_226, "CST3RACER1", 0, 1);
								__LIB_0__::func_222(&uLocal_312, 5, iLocal_227, "CST3RACER2", 0, 1);
								iLocal_478 = 0;
								iLocal_477 = 0;
								func_452("CST3_MCS1_LI", 7, 1, 1, 0);
							}
						}
						func_362(SYSTEM::ROUND(VEHICLE::GET_TOTAL_DURATION_OF_VEHICLE_RECORDING(2, sLocal_219)));
						VEHICLE::STOP_PLAYBACK_RECORDED_VEHICLE(iLocal_232);
						if (ENTITY::DOES_ENTITY_EXIST(iLocal_226))
						{
							TASK::CLEAR_PED_TASKS_IMMEDIATELY(iLocal_226);
							TASK::TASK_PLAY_ANIM_ADVANCED(iLocal_226, sLocal_224, "racer_argue_action_01", Vector(107.662f, 358.981f, 2581.546f) + Vector(0f, 0f, -0.45f), 0f, 0f, 90f, 8f, -8f, -1, 536576, 0f, 2, 0);
							PED::FORCE_PED_AI_AND_ANIMATION_UPDATE(iLocal_226, false, false);
						}
						if (ENTITY::DOES_ENTITY_EXIST(iLocal_227))
						{
							TASK::CLEAR_PED_TASKS_IMMEDIATELY(iLocal_227);
							TASK::TASK_PLAY_ANIM_ADVANCED(iLocal_227, sLocal_224, "racer_argue_action_02", 2581.546f, 358.981f, 107.662f, 0f, 0f, 90f, 8f, -8f, -1, 536576, 0f, 2, 0);
							PED::FORCE_PED_AI_AND_ANIMATION_UPDATE(iLocal_227, false, false);
						}
						VEHICLE::START_PLAYBACK_RECORDED_VEHICLE(iLocal_232, 1, sLocal_219, true);
						VEHICLE::SKIP_TIME_IN_PLAYBACK_RECORDED_VEHICLE(iLocal_232, 1000f);
						VEHICLE::SET_PLAYBACK_SPEED(iLocal_232, 0.75f);
						VEHICLE::FORCE_PLAYBACK_RECORDED_VEHICLE_UPDATE(iLocal_232, true);
						CAM::SET_CAM_PARAMS(iLocal_247, 2564.0703f, 365.76086f, 110.28849f, -7.603287f, -0.187008f, -134.63515f, 27.323626f, 0, 1, 1, 2);
						CAM::SET_CAM_PARAMS(iLocal_247, 2564.0479f, 365.79004f, 109.91196f, -10.087912f, 0f, -122.95435f, 27.323626f, 2500, 3, 3, 2);
						func_362(0);
						if (ENTITY::DOES_ENTITY_EXIST(iLocal_226))
						{
							if (ENTITY::IS_ENTITY_PLAYING_ANIM(iLocal_226, sLocal_224, "racer_argue_action_01", 3))
							{
								ENTITY::SET_ENTITY_ANIM_CURRENT_TIME(iLocal_226, sLocal_224, "racer_argue_action_01", 0.7f);
							}
						}
						if (ENTITY::DOES_ENTITY_EXIST(iLocal_227))
						{
							if (ENTITY::IS_ENTITY_PLAYING_ANIM(iLocal_227, sLocal_224, "racer_argue_action_02", 3))
							{
								ENTITY::SET_ENTITY_ANIM_CURRENT_TIME(iLocal_227, sLocal_224, "racer_argue_action_02", 0.7f);
							}
						}
						func_894("FranklinExitCar", 1);
						func_351();
					}
				}
				break;
			case 1:
				if (!VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(iLocal_232) || (VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(iLocal_232) && VEHICLE::GET_TIME_POSITION_IN_RECORDING(iLocal_232) > ((VEHICLE::GET_TOTAL_DURATION_OF_VEHICLE_RECORDING_ID(VEHICLE::GET_CURRENT_PLAYBACK_FOR_VEHICLE(iLocal_232)) / 100f) * 90f)))
				{
					if (func_897("FranklinExitCar"))
					{
						TASK::TASK_LEAVE_VEHICLE(func_359(1), iLocal_232, 64);
						func_362(1000);
					}
					func_37();
				}
				break;
		}
		if (((ENTITY::DOES_ENTITY_EXIST(iLocal_226) && !PED::IS_PED_INJURED(iLocal_226)) && ENTITY::DOES_ENTITY_EXIST(iLocal_227)) && !PED::IS_PED_INJURED(iLocal_227))
		{
			if (!func_897("CST3_MCS1_LI"))
			{
				if (ENTITY::IS_ENTITY_PLAYING_ANIM(iLocal_226, sLocal_224, "racer_argue_action_01", 3) || ENTITY::IS_ENTITY_PLAYING_ANIM(iLocal_227, sLocal_224, "racer_argue_action_02", 3))
				{
					if ((MISC::GET_GAME_TIMER() - iLocal_477) > iLocal_478)
					{
						if ((!HUD::IS_MESSAGE_BEING_DISPLAYED() || MISC::GET_PROFILE_SETTING(203) == 0) && !__LIB_0__::func_75())
						{
							if ((ENTITY::IS_ENTITY_AT_COORD(PLAYER::PLAYER_PED_ID(), 2581.7197f, 336.2517f, 112.44329f, 25f, 35f, 8f, false, true, 0) && ENTITY::GET_ENTITY_SPEED(iLocal_232) <= 25f) || (ENTITY::IS_ENTITY_AT_COORD(PLAYER::PLAYER_PED_ID(), 2581.7197f, 336.2517f, 112.44329f, 35f, 60f, 8f, false, true, 0) && ENTITY::GET_ENTITY_SPEED(iLocal_232) > 25f))
							{
								__LIB_0__::func_222(&uLocal_312, 4, iLocal_226, "CST3RACER1", 0, 1);
								__LIB_0__::func_222(&uLocal_312, 5, iLocal_227, "CST3RACER2", 0, 1);
								iLocal_478 = 0;
								iLocal_477 = 0;
								func_452("CST3_MCS1_LI", 7, 1, 1, 0);
							}
						}
					}
				}
			}
			if (CAM::GET_CAM_VIEW_MODE_FOR_CONTEXT(1) != 4)
			{
				if (((((ENTITY::IS_ENTITY_AT_COORD(PLAYER::PLAYER_PED_ID(), 2581.7197f, 336.2517f, 112.44329f, 25f, 35f, 8f, false, true, 0) && ENTITY::GET_ENTITY_SPEED(iLocal_232) <= 25f) || (ENTITY::IS_ENTITY_AT_COORD(PLAYER::PLAYER_PED_ID(), 2581.7197f, 336.2517f, 112.44329f, 35f, 60f, 8f, false, true, 0) && ENTITY::GET_ENTITY_SPEED(iLocal_232) > 25f)) && PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), iLocal_232, false)) && ENTITY::GET_ENTITY_HEADING(PLAYER::PLAYER_PED_ID()) > __LIB_1__::func_9((__LIB_29__::func_124(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true), 2581.7197f, 336.2517f, 113.44329f) - 30f), 0f, 360f)) && ENTITY::GET_ENTITY_HEADING(PLAYER::PLAYER_PED_ID()) < __LIB_1__::func_9((__LIB_29__::func_124(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true), 2581.7197f, 336.2517f, 113.44329f) + 30f), 0f, 360f))
				{
					if (!CAM::IS_GAMEPLAY_HINT_ACTIVE())
					{
						CAM::SET_GAMEPLAY_COORD_HINT(ENTITY::GET_ENTITY_COORDS(iLocal_233, true), -1, 1500, 2000, joaat("NO_FOV_HINT_HELPER"));
					}
				}
				else if (CAM::IS_GAMEPLAY_HINT_ACTIVE())
				{
					CAM::STOP_GAMEPLAY_HINT(false);
				}
			}
		}
		if (((ENTITY::DOES_ENTITY_EXIST(iLocal_228) && !PED::IS_PED_INJURED(iLocal_228)) && ENTITY::DOES_ENTITY_EXIST(iLocal_237)) && !ENTITY::IS_ENTITY_DEAD(iLocal_237, false))
		{
			if (MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true), ENTITY::GET_ENTITY_COORDS(iLocal_228, true), true) > 200f)
			{
				ENTITY::SET_PED_AS_NO_LONGER_NEEDED(&iLocal_228);
				ENTITY::SET_VEHICLE_AS_NO_LONGER_NEEDED(&iLocal_237);
			}
		}
		if (MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true), 2597.919f, 361.81824f, 106.42761f, true) < 100f && !__LIB_6__::func_181())
		{
			if (((ENTITY::DOES_ENTITY_EXIST(iLocal_233) && ENTITY::DOES_ENTITY_EXIST(iLocal_226)) && ENTITY::DOES_ENTITY_EXIST(iLocal_234)) && ENTITY::DOES_ENTITY_EXIST(iLocal_227))
			{
				CUTSCENE::REQUEST_CUTSCENE("Car_steal_3_mcs_1", 8);
				if (CUTSCENE::CAN_REQUEST_ASSETS_FOR_CUTSCENE_ENTITY())
				{
					__LIB_41__::func_49("Franklin", func_359(1), 0, 2);
					CUTSCENE::SET_CUTSCENE_PED_COMPONENT_VARIATION_FROM_PED("Racer_that_dies", iLocal_226, 0);
					CUTSCENE::SET_CUTSCENE_PED_COMPONENT_VARIATION("Racer_that_dies", 8, 1, 0, 0);
					CUTSCENE::SET_CUTSCENE_PED_COMPONENT_VARIATION_FROM_PED("Racer_that_runsaway", iLocal_227, 0);
				}
			}
		}
		else if (MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true), 2597.919f, 361.81824f, 106.42761f, true) > 120f || __LIB_6__::func_181())
		{
			if (CUTSCENE::HAS_CUTSCENE_LOADED())
			{
				CUTSCENE::REMOVE_CUTSCENE();
			}
		}
		if (MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true), 2597.919f, 361.81824f, 106.42761f, true) < 300f)
		{
			if (func_686(sLocal_224))
			{
				if (func_869(joaat("entityxf")))
				{
					if (!ENTITY::DOES_ENTITY_EXIST(iLocal_233))
					{
						iLocal_233 = __LIB_16__::func_0(joaat("entityxf"), Local_213, 0f);
						__LIB_0__::func_679(iLocal_233, 0);
						VEHICLE::SET_VEHICLE_HAS_STRONG_AXLES(iLocal_233, true);
						ENTITY::SET_ENTITY_SHOULD_FREEZE_WAITING_ON_COLLISION(iLocal_233, true);
						VEHICLE::SET_VEHICLE_DOORS_LOCKED(iLocal_233, 3);
						VEHICLE::SET_DOOR_ALLOWED_TO_BE_BROKEN_OFF(iLocal_233, 0, false);
						VEHICLE::SET_DOOR_ALLOWED_TO_BE_BROKEN_OFF(iLocal_233, 1, false);
						STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(joaat("entityxf"));
					}
				}
				if (func_869(joaat("IG_Car3guy1")))
				{
					if (!ENTITY::DOES_ENTITY_EXIST(iLocal_226))
					{
						__LIB_38__::func_761(&iLocal_226, joaat("IG_Car3guy1"), 2581.546f, 358.981f, 107.662f, 0, 1);
						PED::SET_PED_RELATIONSHIP_GROUP_HASH(iLocal_226, iLocal_256);
						PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iLocal_226, true);
						STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(joaat("IG_Car3guy1"));
						TASK::TASK_PLAY_ANIM_ADVANCED(iLocal_226, sLocal_224, "racer_argue_01", 2581.546f, 358.981f, 107.662f, 0f, 0f, 90f, 8f, -8f, -1, 12289, 0f, 2, 0);
						__LIB_0__::func_222(&uLocal_312, 4, iLocal_226, "CST3RACER1", 0, 1);
					}
				}
				if (func_869(joaat("cheetah")))
				{
					if (!ENTITY::DOES_ENTITY_EXIST(iLocal_234))
					{
						iLocal_234 = __LIB_16__::func_0(joaat("cheetah"), Local_214, -1.3639f);
						__LIB_0__::func_679(iLocal_234, 1);
						VEHICLE::SET_VEHICLE_HAS_STRONG_AXLES(iLocal_234, true);
						ENTITY::SET_ENTITY_SHOULD_FREEZE_WAITING_ON_COLLISION(iLocal_234, true);
						VEHICLE::SET_VEHICLE_DOORS_LOCKED(iLocal_234, 3);
						VEHICLE::SET_DOOR_ALLOWED_TO_BE_BROKEN_OFF(iLocal_234, 0, false);
						VEHICLE::SET_DOOR_ALLOWED_TO_BE_BROKEN_OFF(iLocal_234, 1, false);
						STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(joaat("cheetah"));
					}
				}
				if (func_869(joaat("IG_Car3guy2")))
				{
					if (!ENTITY::DOES_ENTITY_EXIST(iLocal_227))
					{
						__LIB_38__::func_761(&iLocal_227, joaat("IG_Car3guy2"), 2581.546f, 358.981f, 107.662f, 0, 1);
						PED::SET_PED_COMPONENT_VARIATION(iLocal_227, 0, 1, 0, 0);
						PED::SET_PED_COMPONENT_VARIATION(iLocal_227, 3, 0, 0, 0);
						PED::SET_PED_COMPONENT_VARIATION(iLocal_227, 4, 0, 0, 0);
						PED::SET_PED_PROP_INDEX(iLocal_227, 1, 0, 0, false);
						PED::SET_PED_RELATIONSHIP_GROUP_HASH(iLocal_227, iLocal_256);
						PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iLocal_227, true);
						STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(joaat("IG_Car3guy2"));
						TASK::TASK_PLAY_ANIM_ADVANCED(iLocal_227, sLocal_224, "racer_argue_02", 2581.546f, 358.981f, 107.662f, 0f, 0f, 90f, 8f, -8f, -1, 12289, 0f, 2, 0);
						__LIB_0__::func_222(&uLocal_312, 5, iLocal_227, "CST3RACER2", 0, 1);
					}
				}
			}
			func_755(500, sLocal_220);
			func_755(501, sLocal_220);
		}
		if (MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true), 2597.919f, 361.81824f, 106.42761f, true) < 100f)
		{
			if (((((((ENTITY::DOES_ENTITY_EXIST(iLocal_233) && !ENTITY::IS_ENTITY_DEAD(iLocal_233, false)) && ENTITY::DOES_ENTITY_EXIST(iLocal_234)) && !ENTITY::IS_ENTITY_DEAD(iLocal_234, false)) && ENTITY::DOES_ENTITY_EXIST(iLocal_226)) && !PED::IS_PED_INJURED(iLocal_226)) && ENTITY::DOES_ENTITY_EXIST(iLocal_227)) && !PED::IS_PED_INJURED(iLocal_227))
			{
				if (((ENTITY::HAS_COLLISION_LOADED_AROUND_ENTITY(iLocal_233) && ENTITY::HAS_COLLISION_LOADED_AROUND_ENTITY(iLocal_234)) && ENTITY::HAS_COLLISION_LOADED_AROUND_ENTITY(iLocal_226)) && ENTITY::HAS_COLLISION_LOADED_AROUND_ENTITY(iLocal_227))
				{
					if (((((((PED::IS_PED_TRYING_TO_ENTER_A_LOCKED_VEHICLE(PLAYER::PLAYER_PED_ID()) && (PED::GET_VEHICLE_PED_IS_USING(PLAYER::PLAYER_PED_ID()) == iLocal_233 || PED::GET_VEHICLE_PED_IS_USING(PLAYER::PLAYER_PED_ID()) == iLocal_234)) || (!ENTITY::IS_ENTITY_DEAD(iLocal_233, false) && ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(iLocal_233, PLAYER::PLAYER_PED_ID(), true))) || (!ENTITY::IS_ENTITY_DEAD(iLocal_234, false) && ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(iLocal_234, PLAYER::PLAYER_PED_ID(), true))) || ((ENTITY::DOES_ENTITY_EXIST(iLocal_233) && !ENTITY::IS_ENTITY_AT_COORD(iLocal_233, Local_213, 0.1f, 0.1f, 2f, false, true, 0)) || (PED::IS_PED_ON_VEHICLE(PLAYER::PLAYER_PED_ID()) && ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(iLocal_233, 0f, 2.15f, -2f), ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(iLocal_233, 0f, -2.07f, 5f), 2f, false, true, 0)))) || ((ENTITY::DOES_ENTITY_EXIST(iLocal_234) && !ENTITY::IS_ENTITY_AT_COORD(iLocal_234, Local_214, 0.1f, 0.1f, 2f, false, true, 0)) || (PED::IS_PED_ON_VEHICLE(PLAYER::PLAYER_PED_ID()) && ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(iLocal_234, 0f, 2.63f, -2f), ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(iLocal_234, 0f, -2.14f, 5f), 2f, false, true, 0)))) || (((ENTITY::DOES_ENTITY_EXIST(iLocal_226) && !ENTITY::IS_ENTITY_PLAYING_ANIM(iLocal_226, sLocal_224, "racer_argue_01", 3)) && !ENTITY::IS_ENTITY_PLAYING_ANIM(iLocal_226, sLocal_224, "racer_argue_action_01", 3)) && PED::IS_PED_RAGDOLL(iLocal_226))) || (((ENTITY::DOES_ENTITY_EXIST(iLocal_227) && !ENTITY::IS_ENTITY_PLAYING_ANIM(iLocal_227, sLocal_224, "racer_argue_02", 3)) && !ENTITY::IS_ENTITY_PLAYING_ANIM(iLocal_227, sLocal_224, "racer_argue_action_02", 3)) && PED::IS_PED_RAGDOLL(iLocal_227)))
					{
						if (((ENTITY::DOES_ENTITY_EXIST(iLocal_226) && !PED::IS_PED_INJURED(iLocal_226)) && (TASK::GET_SCRIPT_TASK_STATUS(iLocal_226, joaat("SCRIPT_TASK_VEHICLE_DRIVE_WANDER")) == 1 || (TASK::GET_SCRIPT_TASK_STATUS(iLocal_226, joaat("SCRIPT_TASK_PERFORM_SEQUENCE")) == 1 && TASK::GET_SEQUENCE_PROGRESS(iLocal_226) == 2))) || ((ENTITY::DOES_ENTITY_EXIST(iLocal_227) && !PED::IS_PED_INJURED(iLocal_227)) && (TASK::GET_SCRIPT_TASK_STATUS(iLocal_227, joaat("SCRIPT_TASK_VEHICLE_DRIVE_WANDER")) == 1 || (TASK::GET_SCRIPT_TASK_STATUS(iLocal_227, joaat("SCRIPT_TASK_PERFORM_SEQUENCE")) == 1 && TASK::GET_SEQUENCE_PROGRESS(iLocal_227) == 2))))
						{
							iLocal_480 = 20;
						}
						else
						{
							iLocal_480 = 19;
						}
						if (ENTITY::DOES_ENTITY_EXIST(iLocal_226) && !PED::IS_PED_INJURED(iLocal_226))
						{
							if (TASK::GET_SCRIPT_TASK_STATUS(iLocal_226, joaat("SCRIPT_TASK_REACT_AND_FLEE_PED")) != 1 && TASK::GET_SCRIPT_TASK_STATUS(iLocal_226, joaat("SCRIPT_TASK_VEHICLE_MISSION")) != 1)
							{
								TASK::CLEAR_PED_TASKS(iLocal_226);
								if ((ENTITY::DOES_ENTITY_EXIST(iLocal_233) && !ENTITY::IS_ENTITY_DEAD(iLocal_233, false)) && PED::IS_PED_IN_VEHICLE(iLocal_226, iLocal_233, false))
								{
									TASK::TASK_VEHICLE_MISSION(iLocal_226, iLocal_233, iLocal_232, 8, 50f, 262144, 1f, 1f, true);
								}
								else
								{
									TASK::TASK_REACT_AND_FLEE_PED(iLocal_226, PLAYER::PLAYER_PED_ID());
								}
								PED::SET_PED_KEEP_TASK(iLocal_226, true);
							}
						}
						if (ENTITY::DOES_ENTITY_EXIST(iLocal_227) && !PED::IS_PED_INJURED(iLocal_227))
						{
							if (TASK::GET_SCRIPT_TASK_STATUS(iLocal_227, joaat("SCRIPT_TASK_REACT_AND_FLEE_PED")) != 1 && TASK::GET_SCRIPT_TASK_STATUS(iLocal_227, joaat("SCRIPT_TASK_VEHICLE_MISSION")) != 1)
							{
								TASK::CLEAR_PED_TASKS(iLocal_227);
								if ((ENTITY::DOES_ENTITY_EXIST(iLocal_234) && !ENTITY::IS_ENTITY_DEAD(iLocal_234, false)) && PED::IS_PED_IN_VEHICLE(iLocal_227, iLocal_234, false))
								{
									TASK::TASK_VEHICLE_MISSION(iLocal_227, iLocal_234, iLocal_232, 8, 50f, 262144, 1f, 1f, true);
								}
								else
								{
									TASK::TASK_REACT_AND_FLEE_PED(iLocal_227, PLAYER::PLAYER_PED_ID());
								}
								PED::SET_PED_KEEP_TASK(iLocal_227, true);
							}
						}
						func_362(500);
						func_1();
					}
				}
			}
		}
		if (ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), 2578.7947f, 398.87735f, 106.45725f, 2576.777f, 331.04138f, 117.45273f, 75f, false, true, 0) && !PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
		{
			if (ENTITY::DOES_ENTITY_EXIST(iLocal_226))
			{
				if (ENTITY::IS_ENTITY_PLAYING_ANIM(iLocal_226, sLocal_224, "racer_argue_01", 3))
				{
					TASK::OPEN_SEQUENCE_TASK(&iLocal_249);
					TASK::TASK_PLAY_ANIM_ADVANCED(0, sLocal_224, "racer_argue_action_01", 2581.546f, 358.981f, 107.662f, 0f, 0f, 90f, 4f, -8f, -1, 12288, 0f, 2, 0);
					TASK::TASK_ENTER_VEHICLE(0, iLocal_233, -1, -1, 1f, 1, 0);
					TASK::TASK_VEHICLE_DRIVE_WANDER(0, iLocal_233, 30f, 786599);
					TASK::CLOSE_SEQUENCE_TASK(iLocal_249);
					iLocal_477 = MISC::GET_GAME_TIMER();
					iLocal_478 = 7500;
					TASK::TASK_PERFORM_SEQUENCE(iLocal_226, iLocal_249);
					TASK::CLEAR_SEQUENCE_TASK(&iLocal_249);
				}
			}
			if (ENTITY::DOES_ENTITY_EXIST(iLocal_227))
			{
				if (ENTITY::IS_ENTITY_PLAYING_ANIM(iLocal_227, sLocal_224, "racer_argue_02", 3))
				{
					TASK::OPEN_SEQUENCE_TASK(&iLocal_249);
					TASK::TASK_PLAY_ANIM_ADVANCED(0, sLocal_224, "racer_argue_action_02", 2581.546f, 358.981f, 107.662f, 0f, 0f, 90f, 4f, -8f, -1, 12288, 0f, 2, 0);
					TASK::TASK_ENTER_VEHICLE(0, iLocal_234, -1, -1, 1f, 1, 0);
					TASK::TASK_VEHICLE_DRIVE_WANDER(0, iLocal_234, 30f, 786599);
					TASK::CLOSE_SEQUENCE_TASK(iLocal_249);
					TASK::TASK_PERFORM_SEQUENCE(iLocal_227, iLocal_249);
					TASK::CLEAR_SEQUENCE_TASK(&iLocal_249);
					iLocal_477 = MISC::GET_GAME_TIMER();
					iLocal_478 = 7500;
				}
			}
		}
	}
	if (func_36())
	{
		if (STREAMING::IS_NEW_LOAD_SCENE_ACTIVE())
		{
			STREAMING::NEW_LOAD_SCENE_STOP();
		}
		if (AUDIO::IS_AUDIO_SCENE_ACTIVE("CAR_1_GET_TO_RACE"))
		{
			AUDIO::STOP_AUDIO_SCENE("CAR_1_GET_TO_RACE");
		}
		if (AUDIO::IS_AUDIO_SCENE_ACTIVE("CAR_1_PARK_UP_CUTSCENE"))
		{
			AUDIO::STOP_AUDIO_SCENE("CAR_1_PARK_UP_CUTSCENE");
		}
		__LIB_13__::func_815(&iLocal_257, 1, 0);
		PED::SET_PED_CONFIG_FLAG(PLAYER::PLAYER_PED_ID(), 32, false);
		__LIB_16__::func_297();
		HUD::CLEAR_PRINTS();
		HUD::CLEAR_HELP(true);
		__LIB_0__::func_638();
		__LIB_13__::func_808(&iLocal_240);
		__LIB_9__::func_107(&iLocal_228);
		__LIB_9__::func_107(&iLocal_229);
		__LIB_15__::func_887(&iLocal_237);
		__LIB_15__::func_887(&iLocal_238);
		iLocal_479++;
	}
}

int func_755(int iParam0, char* sParam1)//Position - 0x9768A
{
	if (!func_757(iParam0, sParam1))
	{
		VEHICLE::REQUEST_VEHICLE_RECORDING(iParam0, sParam1);
		if (VEHICLE::HAS_VEHICLE_RECORDING_BEEN_LOADED(iParam0, sParam1))
		{
			func_756(iParam0, sParam1, 1);
		}
	}
	else
	{
		return 1;
	}
	return 0;
}

void func_756(int iParam0, char* sParam1, bool bParam2)//Position - 0x976C5
{
	char cVar0[16];
	int iVar1;
	int iVar2;
	bool bVar3;
	IntToString(&cVar0, iParam0, 16);
	StringConCat(&cVar0, sParam1, 16);
	iVar1 = MISC::GET_HASH_KEY(&cVar0);
	iVar2 = 0;
	bVar3 = false;
	while (iVar2 < iLocal_485 && !bVar3)
	{
		if (bParam2)
		{
			if (iLocal_485[iVar2] == 0)
			{
				iLocal_485[iVar2] = iVar1;
				bVar3 = true;
			}
		}
		else if (iLocal_485[iVar2] == iVar1)
		{
			iLocal_485[iVar2] = 0;
			bVar3 = true;
		}
		iVar2++;
	}
}

int func_757(int iParam0, char* sParam1)//Position - 0x97737
{
	char cVar0[16];
	int iVar1;
	int iVar2;
	IntToString(&cVar0, iParam0, 16);
	StringConCat(&cVar0, sParam1, 16);
	iVar1 = MISC::GET_HASH_KEY(&cVar0);
	iVar2 = 0;
	while (iVar2 < iLocal_485)
	{
		if (iLocal_485[iVar2] == iVar1)
		{
			return 1;
		}
		iVar2++;
	}
	return 0;
}

void func_758()//Position - 0x97778
{
	int iVar0;
	int iVar1;
	if (func_366())
	{
		func_350(PLAYER::PLAYER_ID(), 0, 0);
		iLocal_198 = 0;
		if (bLocal_201 == 0 && iLocal_200 == 0)
		{
			CUTSCENE::REQUEST_CUTSCENE("CAR_1_INT_CONCAT", 4);
		}
		if (func_365())
		{
			if (!ENTITY::DOES_ENTITY_EXIST(iLocal_237))
			{
				STREAMING::REQUEST_MODEL(joaat("adder"));
				while (!STREAMING::HAS_MODEL_LOADED(joaat("adder")))
				{
					SYSTEM::WAIT(0);
				}
				func_348(&iLocal_237, joaat("adder"), 119.2013f, -398.4865f, 40.1208f, -171.4098f, -1, 0);
				VEHICLE::SET_VEHICLE_COLOURS(iLocal_237, 0, 0);
				VEHICLE::SET_VEHICLE_EXTRA_COLOURS(iLocal_237, 0, 0);
				VEHICLE::SET_VEHICLE_DOORS_LOCKED(iLocal_237, 10);
				VEHICLE::SET_VEHICLE_IS_CONSIDERED_BY_PLAYER(iLocal_237, false);
			}
			if (!ENTITY::DOES_ENTITY_EXIST(iLocal_228))
			{
				STREAMING::REQUEST_MODEL(__LIB_0__::func_493(29));
				while (!STREAMING::HAS_MODEL_LOADED(__LIB_0__::func_493(29)))
				{
					SYSTEM::WAIT(0);
				}
				while (!__LIB_15__::func_938(&iLocal_228, 29, iLocal_237, -1, 1))
				{
					func_362(0);
				}
				PED::SET_PED_COMPONENT_VARIATION(iLocal_228, 3, 2, 0, 0);
				PED::SET_PED_COMPONENT_VARIATION(iLocal_228, 4, 2, 0, 0);
				PED::SET_PED_COMPONENT_VARIATION(iLocal_228, 10, 1, 0, 0);
				while (!PED::HAVE_ALL_STREAMING_REQUESTS_COMPLETED(iLocal_228))
				{
					func_362(0);
				}
				PED::SET_PED_RELATIONSHIP_GROUP_HASH(iLocal_228, iLocal_255);
				PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iLocal_228, true);
				TASK::TASK_VEHICLE_DRIVE_WANDER(iLocal_228, iLocal_237, 30f, 786599);
				PED::SET_PED_KEEP_TASK(iLocal_228, true);
				STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(__LIB_0__::func_493(29));
			}
			CAM::SET_GAMEPLAY_CAM_RELATIVE_HEADING(0f);
			CAM::SET_GAMEPLAY_CAM_RELATIVE_PITCH(-10f, 1f);
		}
	}
	else
	{
		PED::SET_PED_DENSITY_MULTIPLIER_THIS_FRAME(0.2f);
		VEHICLE::SET_VEHICLE_DENSITY_MULTIPLIER_THIS_FRAME(0.2f);
		if (bLocal_201 == 0 && iLocal_200 == 0)
		{
			if (CUTSCENE::CAN_REQUEST_ASSETS_FOR_CUTSCENE_ENTITY())
			{
				if (__LIB_15__::func_944() == 1)
				{
					__LIB_41__::func_49("Franklin", func_359(1), 0, 2);
				}
				else if (__LIB_15__::func_944() == 0)
				{
					__LIB_41__::func_49("Michael", func_359(0), 0, 2);
				}
				else if (__LIB_15__::func_944() == 2)
				{
					__LIB_41__::func_49("Trevor", func_359(2), 0, 2);
				}
				CUTSCENE::SET_CUTSCENE_PED_COMPONENT_VARIATION("DEVIN", 3, 2, 0, 0);
				CUTSCENE::SET_CUTSCENE_PED_COMPONENT_VARIATION("DEVIN", 4, 2, 0, 0);
				CUTSCENE::SET_CUTSCENE_PED_COMPONENT_VARIATION("DEVIN", 10, 1, 0, 0);
			}
		}
		switch (iLocal_180)
		{
			case 0:
				if ((CUTSCENE::HAS_THIS_CUTSCENE_LOADED("CAR_1_INT_CONCAT") || bLocal_201 == 1) || iLocal_200 == 1)
				{
					if (bLocal_201 == 0 && iLocal_200 == 0)
					{
						HUD::THEFEED_FLUSH_QUEUE();
						__LIB_0__::func_532(1, 1, 1, 0, 0, 0, 0);
						if (ENTITY::DOES_ENTITY_EXIST(iLocal_232) && !ENTITY::IS_ENTITY_DEAD(iLocal_232, false))
						{
							CUTSCENE::REGISTER_ENTITY_FOR_CUTSCENE(iLocal_232, "Franklins_car", 0, 0, 0);
						}
						if (ENTITY::DOES_ENTITY_EXIST(iLocal_228) && !PED::IS_PED_INJURED(iLocal_228))
						{
							CUTSCENE::REGISTER_ENTITY_FOR_CUTSCENE(iLocal_228, "DEVIN", 0, __LIB_0__::func_493(29), 0);
						}
						else
						{
							CUTSCENE::REGISTER_ENTITY_FOR_CUTSCENE(0, "DEVIN", 2, __LIB_0__::func_493(29), 0);
						}
						if (ENTITY::DOES_ENTITY_EXIST(iLocal_237) && !ENTITY::IS_ENTITY_DEAD(iLocal_237, false))
						{
							CUTSCENE::REGISTER_ENTITY_FOR_CUTSCENE(iLocal_237, "Devins_car", 0, joaat("adder"), 0);
						}
						else
						{
							CUTSCENE::REGISTER_ENTITY_FOR_CUTSCENE(0, "Devins_car", 2, joaat("adder"), 0);
						}
						if (ENTITY::DOES_ENTITY_EXIST(iLocal_229) && !ENTITY::IS_ENTITY_DEAD(iLocal_229, false))
						{
							CUTSCENE::REGISTER_ENTITY_FOR_CUTSCENE(iLocal_229, "MOLLY", 1, 0, 0);
						}
						if (ENTITY::DOES_ENTITY_EXIST(iLocal_238) && !ENTITY::IS_ENTITY_DEAD(iLocal_238, false))
						{
							CUTSCENE::REGISTER_ENTITY_FOR_CUTSCENE(iLocal_238, "Car_1_Felon", 1, 0, 0);
						}
						if (ENTITY::DOES_ENTITY_EXIST(uLocal_489[2]) && !ENTITY::IS_ENTITY_DEAD(uLocal_489[2], false))
						{
							CUTSCENE::REGISTER_ENTITY_FOR_CUTSCENE(uLocal_489[2], "TREVOR", 1, 0, 0);
						}
						CUTSCENE::START_CUTSCENE(0);
						RECORDING::REPLAY_START_EVENT(4);
						func_362(0);
						__LIB_15__::func_942(0, 0);
						__LIB_15__::func_942(2, 0);
						__LIB_31__::func_808(110.81168f, -421.14157f, 36.196766f, 126.11162f, -380.1021f, 57.26146f, 40f, 120.5374f, -429.8324f, 40.0967f, 289.2337f, __LIB_13__::func_790(), 1, 1, 1, 0, 0);
						MISC::CLEAR_AREA(115.56944f, -400.46335f, 40.26558f, 20f, true, false, false, false);
						GRAPHICS::DISABLE_PROCOBJ_CREATION();
						CAM::STOP_GAMEPLAY_HINT(true);
						func_940();
					}
					if (CAM::IS_SCREEN_FADED_OUT())
					{
						CAM::DO_SCREEN_FADE_IN(500);
					}
					func_351();
				}
				break;
			case 1:
				if (!ENTITY::DOES_ENTITY_EXIST(iLocal_228))
				{
					iVar0 = CUTSCENE::GET_ENTITY_INDEX_OF_REGISTERED_ENTITY("DEVIN", 0);
					if (ENTITY::DOES_ENTITY_EXIST(iVar0))
					{
						iLocal_228 = ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(iVar0);
						PED::SET_PED_RELATIONSHIP_GROUP_HASH(iLocal_228, iLocal_255);
						PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iLocal_228, true);
					}
				}
				if (!ENTITY::DOES_ENTITY_EXIST(iLocal_237))
				{
					if (!ENTITY::DOES_ENTITY_EXIST(iLocal_237))
					{
						iVar1 = CUTSCENE::GET_ENTITY_INDEX_OF_REGISTERED_ENTITY("Devins_car", 0);
						if (ENTITY::DOES_ENTITY_EXIST(iVar1))
						{
							iLocal_237 = ENTITY::GET_VEHICLE_INDEX_FROM_ENTITY_INDEX(iVar1);
							VEHICLE::SET_VEHICLE_COLOURS(iLocal_237, 0, 0);
							VEHICLE::SET_VEHICLE_EXTRA_COLOURS(iLocal_237, 0, 0);
						}
					}
				}
				if (CUTSCENE::CAN_SET_EXIT_STATE_FOR_REGISTERED_ENTITY("Franklin", 0))
				{
					RECORDING::REPLAY_STOP_EVENT();
				}
				if (CUTSCENE::CAN_SET_EXIT_STATE_FOR_REGISTERED_ENTITY("Franklins_car", 0))
				{
				}
				if (CUTSCENE::CAN_SET_EXIT_STATE_FOR_REGISTERED_ENTITY("DEVIN", 0))
				{
					if (ENTITY::DOES_ENTITY_EXIST(iLocal_237) && !ENTITY::IS_ENTITY_DEAD(iLocal_237, false))
					{
						if (ENTITY::DOES_ENTITY_EXIST(iLocal_237) && !PED::IS_PED_INJURED(iLocal_228))
						{
							PED::SET_PED_INTO_VEHICLE(iLocal_228, iLocal_237, -1);
							PED::SET_PED_RELATIONSHIP_GROUP_HASH(iLocal_228, iLocal_255);
							PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iLocal_228, true);
							TASK::TASK_VEHICLE_DRIVE_WANDER(iLocal_228, iLocal_237, 30f, 786599);
							PED::SET_PED_KEEP_TASK(iLocal_228, true);
						}
					}
				}
				if (CUTSCENE::CAN_SET_EXIT_STATE_FOR_REGISTERED_ENTITY("MOLLY", 0))
				{
				}
				if (CUTSCENE::CAN_SET_EXIT_STATE_FOR_REGISTERED_ENTITY("Devins_car", 0))
				{
					VEHICLE::SET_VEHICLE_DOORS_LOCKED(iLocal_237, 10);
					VEHICLE::SET_VEHICLE_IS_CONSIDERED_BY_PLAYER(iLocal_237, false);
				}
				if (CUTSCENE::CAN_SET_EXIT_STATE_FOR_CAMERA(false))
				{
					CAM::SET_GAMEPLAY_CAM_RELATIVE_HEADING(0f);
					CAM::SET_GAMEPLAY_CAM_RELATIVE_PITCH(-10f, 1f);
					GRAPHICS::ENABLE_PROCOBJ_CREATION();
				}
				if (CUTSCENE::WAS_CUTSCENE_SKIPPED())
				{
					CUTSCENE::SET_CUTSCENE_FADE_VALUES(false, false, true, false);
				}
				if (bLocal_201 == 1 || CUTSCENE::HAS_CUTSCENE_FINISHED())
				{
					func_350(PLAYER::PLAYER_ID(), 1, 0);
					if (!ENTITY::DOES_ENTITY_EXIST(iLocal_237))
					{
						STREAMING::REQUEST_MODEL(joaat("adder"));
						while (!STREAMING::HAS_MODEL_LOADED(joaat("adder")))
						{
							SYSTEM::WAIT(0);
						}
						func_348(&iLocal_237, joaat("adder"), 119.2013f, -398.4865f, 40.1208f, -171.4098f, -1, 0);
						VEHICLE::SET_VEHICLE_COLOURS(iLocal_237, 0, 0);
						VEHICLE::SET_VEHICLE_EXTRA_COLOURS(iLocal_237, 0, 0);
						VEHICLE::SET_VEHICLE_DOORS_LOCKED(iLocal_237, 10);
						VEHICLE::SET_VEHICLE_IS_CONSIDERED_BY_PLAYER(iLocal_237, false);
					}
					if (!ENTITY::DOES_ENTITY_EXIST(iLocal_228))
					{
						STREAMING::REQUEST_MODEL(__LIB_0__::func_493(29));
						while (!STREAMING::HAS_MODEL_LOADED(__LIB_0__::func_493(29)))
						{
							SYSTEM::WAIT(0);
						}
						while (!__LIB_15__::func_938(&iLocal_228, 29, iLocal_237, -1, 1))
						{
							func_362(0);
						}
						PED::SET_PED_COMPONENT_VARIATION(iLocal_228, 3, 2, 0, 0);
						PED::SET_PED_COMPONENT_VARIATION(iLocal_228, 4, 2, 0, 0);
						PED::SET_PED_COMPONENT_VARIATION(iLocal_228, 10, 1, 0, 0);
						while (!PED::HAVE_ALL_STREAMING_REQUESTS_COMPLETED(iLocal_228))
						{
							func_362(0);
						}
						PED::SET_PED_RELATIONSHIP_GROUP_HASH(iLocal_228, iLocal_255);
						PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iLocal_228, true);
						TASK::TASK_VEHICLE_DRIVE_WANDER(iLocal_228, iLocal_237, 30f, 786599);
						PED::SET_PED_KEEP_TASK(iLocal_228, true);
						STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(__LIB_0__::func_493(29));
					}
					if (CAM::IS_SCREEN_FADED_OUT())
					{
						CAM::DO_SCREEN_FADE_IN(500);
					}
					func_37();
				}
				break;
			}
	}
	if (func_36())
	{
		CUTSCENE::REMOVE_CUTSCENE();
		while (CUTSCENE::HAS_CUTSCENE_LOADED())
		{
			func_362(0);
		}
		__LIB_0__::func_532(0, 1, 1, 0, 0, 0, 0);
		iLocal_479++;
	}
}

void func_759()//Position - 0x97E65
{
	if (func_366())
	{
		func_350(PLAYER::PLAYER_ID(), 1, 0);
		__LIB_11__::func_816(21, 0);
		HUD::REQUEST_ADDITIONAL_TEXT("CRSTL3", 0);
		while (!HUD::HAS_ADDITIONAL_TEXT_LOADED(0))
		{
			SYSTEM::WAIT(0);
		}
		AUDIO::REGISTER_SCRIPT_WITH_AUDIO(0);
		PED::SET_PED_MODEL_IS_SUPPRESSED(joaat("S_M_Y_HwayCop_01"), true);
		VEHICLE::SET_VEHICLE_MODEL_IS_SUPPRESSED(joaat("policeb"), true);
		VEHICLE::SET_VEHICLE_MODEL_IS_SUPPRESSED(joaat("f620"), true);
		VEHICLE::SET_VEHICLE_MODEL_IS_SUPPRESSED(joaat("entityxf"), true);
		VEHICLE::SET_VEHICLE_MODEL_IS_SUPPRESSED(joaat("cheetah"), true);
		if (__LIB_15__::func_944() != 1)
		{
			iLocal_207 = __LIB_0__::func_473(__LIB_15__::func_944());
			while (!func_865(1, 1))
			{
				SYSTEM::WAIT(0);
			}
		}
		PED::SET_PED_CONFIG_FLAG(PLAYER::PLAYER_PED_ID(), 32, false);
		PED::ADD_RELATIONSHIP_GROUP("BUDDIES", &iLocal_255);
		PED::ADD_RELATIONSHIP_GROUP("ENEMIES", &iLocal_256);
		PED::SET_RELATIONSHIP_BETWEEN_GROUPS(1, iLocal_255, joaat("PLAYER"));
		PED::SET_RELATIONSHIP_BETWEEN_GROUPS(1, joaat("PLAYER"), iLocal_255);
		if (!ENTITY::DOES_ENTITY_EXIST(iLocal_232))
		{
			func_348(&iLocal_232, joaat("f620"), Local_212, 268.8413f, 0, 0);
			VEHICLE::SET_VEHICLE_HAS_STRONG_AXLES(iLocal_232, true);
			VEHICLE::SET_VEHICLE_COLOURS(iLocal_232, 43, 43);
			VEHICLE::SET_VEHICLE_EXTRA_COLOURS(iLocal_232, 48, 48);
		}
		STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(joaat("f620"));
		__LIB_0__::func_222(&uLocal_312, 3, PLAYER::PLAYER_PED_ID(), "FRANKLIN", 0, 1);
		if (__LIB_0__::func_323())
		{
			MISC::SET_WEATHER_TYPE_PERSIST("EXTRASUNNY");
		}
		else
		{
			MISC::SET_WEATHER_TYPE_OVERTIME_PERSIST("EXTRASUNNY", 60f);
		}
		if (func_365())
		{
			CAM::SET_GAMEPLAY_CAM_RELATIVE_HEADING(0f);
			CAM::SET_GAMEPLAY_CAM_RELATIVE_PITCH(-10f, 1f);
			if (CAM::IS_SCREEN_FADED_OUT())
			{
				CAM::DO_SCREEN_FADE_IN(500);
			}
		}
	}
	else
	{
		func_37();
	}
	if (func_36())
	{
		iLocal_479++;
		if (__LIB_0__::func_323())
		{
			if (Global_94618 == 1)
			{
				func_760(__LIB_0__::func_344() + 1);
			}
			else
			{
				func_760(__LIB_0__::func_344());
			}
		}
	}
}

void func_760(int iParam0)//Position - 0x9801B
{
	struct<3> Var0;
	float fVar1;
	switch (iParam0)
	{
		case 0:
			Var0 = { Local_212 };
			fVar1 = 268.8413f;
			break;
		case 1:
			Var0 = { 2570.5767f, 364.8711f, 107.4569f };
			fVar1 = 357.8433f;
			break;
		case 2:
			Var0 = { 2686.8792f, 5131.9077f, 43.8515f };
			fVar1 = 151.6033f;
			break;
		case 3:
			Var0 = { -1923.0222f, 4605.4956f, 56.0558f };
			fVar1 = 135.0792f;
			break;
		case 4:
			Var0 = { 492.7253f, -1311.5626f, 28.2627f };
			fVar1 = 293.8439f;
			break;
	}
	__LIB_0__::func_427(Var0, fVar1, 0, 0);
	__LIB_0__::func_433(0, -1, 0);
	switch (iParam0)
	{
		case 0:
			MISC::CLEAR_AREA(Local_212, 100f, true, false, false, false);
			__LIB_37__::func_920(PLAYER::PLAYER_PED_ID(), Local_212, 268.8413f, 1);
			iLocal_479 = 2;
			break;
		case 1:
			__LIB_0__::func_54(0, 1);
			__LIB_38__::func_763(iLocal_232);
			__LIB_15__::func_887(&iLocal_232);
			if (__LIB_13__::func_791() == joaat("f620"))
			{
				func_761(&iLocal_232, 2570.5767f, 364.8711f, 107.4569f, 357.8433f, 1, 1, 0, 0, 1, joaat("f620"), 0, 145, 1);
				ENTITY::SET_ENTITY_SHOULD_FREEZE_WAITING_ON_COLLISION(iLocal_232, true);
				VEHICLE::SET_VEHICLE_HAS_STRONG_AXLES(iLocal_232, true);
			}
			else
			{
				STREAMING::REQUEST_MODEL(joaat("f620"));
				while (!STREAMING::HAS_MODEL_LOADED(joaat("f620")))
				{
					func_362(0);
				}
				func_348(&iLocal_232, joaat("f620"), 2570.5767f, 364.8711f, 107.4569f, 357.8433f, 0, 0);
				VEHICLE::SET_VEHICLE_HAS_STRONG_AXLES(iLocal_232, true);
				VEHICLE::SET_VEHICLE_COLOURS(iLocal_232, 43, 43);
				VEHICLE::SET_VEHICLE_EXTRA_COLOURS(iLocal_232, 48, 48);
				STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(joaat("f620"));
			}
			STREAMING::REQUEST_MODEL(joaat("entityxf"));
			while (!STREAMING::HAS_MODEL_LOADED(joaat("entityxf")))
			{
				func_362(0);
			}
			iLocal_233 = __LIB_16__::func_0(joaat("entityxf"), Local_213, 0f);
			__LIB_0__::func_679(iLocal_233, 0);
			VEHICLE::SET_VEHICLE_HAS_STRONG_AXLES(iLocal_233, true);
			ENTITY::SET_ENTITY_SHOULD_FREEZE_WAITING_ON_COLLISION(iLocal_233, true);
			VEHICLE::SET_VEHICLE_DOORS_LOCKED(iLocal_233, 2);
			VEHICLE::SET_DOOR_ALLOWED_TO_BE_BROKEN_OFF(iLocal_233, 0, false);
			VEHICLE::SET_DOOR_ALLOWED_TO_BE_BROKEN_OFF(iLocal_233, 1, false);
			STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(joaat("entityxf"));
			STREAMING::REQUEST_MODEL(joaat("IG_Car3guy1"));
			while (!STREAMING::HAS_MODEL_LOADED(joaat("IG_Car3guy1")))
			{
				func_362(0);
			}
			__LIB_38__::func_761(&iLocal_226, joaat("IG_Car3guy1"), ENTITY::GET_ENTITY_COORDS(iLocal_233, true), 0, 1);
			PED::SET_PED_INTO_VEHICLE(iLocal_226, iLocal_233, -1);
			PED::SET_PED_RELATIONSHIP_GROUP_HASH(iLocal_226, iLocal_256);
			PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iLocal_226, true);
			STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(joaat("IG_Car3guy1"));
			STREAMING::REQUEST_MODEL(joaat("cheetah"));
			while (!STREAMING::HAS_MODEL_LOADED(joaat("cheetah")))
			{
				func_362(0);
			}
			iLocal_234 = __LIB_16__::func_0(joaat("cheetah"), Local_214, -1.3639f);
			__LIB_0__::func_679(iLocal_234, 1);
			VEHICLE::SET_VEHICLE_HAS_STRONG_AXLES(iLocal_234, true);
			ENTITY::SET_ENTITY_SHOULD_FREEZE_WAITING_ON_COLLISION(iLocal_234, true);
			VEHICLE::SET_VEHICLE_DOORS_LOCKED(iLocal_234, 2);
			VEHICLE::SET_DOOR_ALLOWED_TO_BE_BROKEN_OFF(iLocal_234, 0, false);
			VEHICLE::SET_DOOR_ALLOWED_TO_BE_BROKEN_OFF(iLocal_234, 1, false);
			STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(joaat("cheetah"));
			STREAMING::REQUEST_MODEL(joaat("IG_Car3guy2"));
			while (!STREAMING::HAS_MODEL_LOADED(joaat("IG_Car3guy2")))
			{
				func_362(0);
			}
			__LIB_38__::func_761(&iLocal_227, joaat("IG_Car3guy2"), ENTITY::GET_ENTITY_COORDS(iLocal_234, true), 0, 1);
			PED::SET_PED_COMPONENT_VARIATION(iLocal_227, 0, 1, 0, 0);
			PED::SET_PED_COMPONENT_VARIATION(iLocal_227, 3, 0, 0, 0);
			PED::SET_PED_COMPONENT_VARIATION(iLocal_227, 4, 0, 0, 0);
			PED::SET_PED_PROP_INDEX(iLocal_227, 1, 0, 0, false);
			PED::SET_PED_INTO_VEHICLE(iLocal_227, iLocal_234, -1);
			PED::SET_PED_RELATIONSHIP_GROUP_HASH(iLocal_227, iLocal_256);
			PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iLocal_227, true);
			STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(joaat("IG_Car3guy2"));
			__LIB_0__::func_222(&uLocal_312, 4, iLocal_226, "CST3RACER1", 0, 1);
			__LIB_0__::func_222(&uLocal_312, 5, iLocal_227, "CST3RACER2", 0, 1);
			if (Global_94618 == 1)
			{
				iLocal_479 = 3;
			}
			else
			{
				iLocal_479 = 4;
			}
			break;
		case 2:
			__LIB_0__::func_54(0, 1);
			PED::CLEAR_PED_PROP(PLAYER::PLAYER_PED_ID(), 2);
			PED::CLEAR_PED_PROP(PLAYER::PLAYER_PED_ID(), 0);
			PED::REMOVE_PED_HELMET(PLAYER::PLAYER_PED_ID(), true);
			PED::SET_PED_HELMET_PROP_INDEX(PLAYER::PLAYER_PED_ID(), -1, true);
			__LIB_38__::func_763(iLocal_232);
			__LIB_15__::func_887(&iLocal_232);
			if (__LIB_13__::func_791() == joaat("f620"))
			{
				func_761(&iLocal_232, 2716.9924f, 4787.348f, 43.5334f, 11.8873f, 1, 1, 0, 0, 1, joaat("f620"), 0, 145, 1);
				ENTITY::SET_ENTITY_SHOULD_FREEZE_WAITING_ON_COLLISION(iLocal_232, true);
				VEHICLE::SET_VEHICLE_HAS_STRONG_AXLES(iLocal_232, true);
			}
			else
			{
				STREAMING::REQUEST_MODEL(joaat("f620"));
				while (!STREAMING::HAS_MODEL_LOADED(joaat("f620")))
				{
					func_362(0);
				}
				func_348(&iLocal_232, joaat("f620"), 2716.9924f, 4787.348f, 43.5334f, 11.8873f, 0, 0);
				VEHICLE::SET_VEHICLE_HAS_STRONG_AXLES(iLocal_232, true);
				VEHICLE::SET_VEHICLE_COLOURS(iLocal_232, 43, 43);
				VEHICLE::SET_VEHICLE_EXTRA_COLOURS(iLocal_232, 48, 48);
				STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(joaat("f620"));
			}
			STREAMING::REQUEST_MODEL(joaat("entityxf"));
			while (!STREAMING::HAS_MODEL_LOADED(joaat("entityxf")))
			{
				func_362(0);
			}
			iLocal_233 = __LIB_16__::func_0(joaat("entityxf"), Local_213, 0f);
			__LIB_0__::func_679(iLocal_233, 0);
			VEHICLE::SET_VEHICLE_HAS_STRONG_AXLES(iLocal_233, true);
			ENTITY::SET_ENTITY_SHOULD_FREEZE_WAITING_ON_COLLISION(iLocal_233, true);
			VEHICLE::SET_VEHICLE_DOORS_LOCKED(iLocal_233, 2);
			VEHICLE::SET_DOOR_ALLOWED_TO_BE_BROKEN_OFF(iLocal_233, 0, false);
			VEHICLE::SET_DOOR_ALLOWED_TO_BE_BROKEN_OFF(iLocal_233, 1, false);
			STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(joaat("entityxf"));
			STREAMING::REQUEST_MODEL(joaat("IG_Car3guy1"));
			while (!STREAMING::HAS_MODEL_LOADED(joaat("IG_Car3guy1")))
			{
				func_362(0);
			}
			__LIB_38__::func_761(&iLocal_226, joaat("IG_Car3guy1"), ENTITY::GET_ENTITY_COORDS(iLocal_233, true), 0, 1);
			PED::SET_PED_INTO_VEHICLE(iLocal_226, iLocal_233, -1);
			PED::SET_PED_RELATIONSHIP_GROUP_HASH(iLocal_226, iLocal_256);
			PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iLocal_226, true);
			STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(joaat("IG_Car3guy1"));
			STREAMING::REQUEST_MODEL(joaat("cheetah"));
			while (!STREAMING::HAS_MODEL_LOADED(joaat("cheetah")))
			{
				func_362(0);
			}
			iLocal_234 = __LIB_16__::func_0(joaat("cheetah"), Local_214, -1.3639f);
			__LIB_0__::func_679(iLocal_234, 1);
			VEHICLE::SET_VEHICLE_HAS_STRONG_AXLES(iLocal_234, true);
			ENTITY::SET_ENTITY_SHOULD_FREEZE_WAITING_ON_COLLISION(iLocal_234, true);
			VEHICLE::SET_VEHICLE_DOORS_LOCKED(iLocal_234, 2);
			VEHICLE::SET_DOOR_ALLOWED_TO_BE_BROKEN_OFF(iLocal_234, 0, false);
			VEHICLE::SET_DOOR_ALLOWED_TO_BE_BROKEN_OFF(iLocal_234, 1, false);
			STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(joaat("cheetah"));
			STREAMING::REQUEST_MODEL(joaat("IG_Car3guy2"));
			while (!STREAMING::HAS_MODEL_LOADED(joaat("IG_Car3guy2")))
			{
				func_362(0);
			}
			__LIB_38__::func_761(&iLocal_227, joaat("IG_Car3guy2"), ENTITY::GET_ENTITY_COORDS(iLocal_234, true), 0, 1);
			PED::SET_PED_COMPONENT_VARIATION(iLocal_227, 0, 1, 0, 0);
			PED::SET_PED_COMPONENT_VARIATION(iLocal_227, 3, 0, 0, 0);
			PED::SET_PED_COMPONENT_VARIATION(iLocal_227, 4, 0, 0, 0);
			PED::SET_PED_PROP_INDEX(iLocal_227, 1, 0, 0, false);
			PED::SET_PED_INTO_VEHICLE(iLocal_227, iLocal_234, -1);
			PED::SET_PED_RELATIONSHIP_GROUP_HASH(iLocal_227, iLocal_256);
			PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iLocal_227, true);
			STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(joaat("IG_Car3guy2"));
			__LIB_0__::func_222(&uLocal_312, 4, iLocal_226, "CST3RACER1", 0, 1);
			__LIB_0__::func_222(&uLocal_312, 5, iLocal_227, "CST3RACER2", 0, 1);
			STREAMING::REQUEST_MODEL(joaat("policeb"));
			while (!STREAMING::HAS_MODEL_LOADED(joaat("policeb")))
			{
				func_362(0);
			}
			__LIB_15__::func_887(&iLocal_235);
			func_348(&iLocal_235, joaat("policeb"), Local_215, 147.9465f, -1, 0);
			__LIB_0__::func_679(iLocal_235, 2);
			VEHICLE::SET_VEHICLE_HAS_STRONG_AXLES(iLocal_235, true);
			STREAMING::REQUEST_MODEL(__LIB_0__::func_518(2));
			while (!STREAMING::HAS_MODEL_LOADED(__LIB_0__::func_518(2)))
			{
				func_362(0);
			}
			func_650(&(uLocal_489[2]), 2, Local_3044, fLocal_3045, 0);
			if (!PED::IS_PED_WEARING_HELMET(uLocal_489[2]))
			{
				PED::SET_PED_HELMET_PROP_INDEX(uLocal_489[2], 5, true);
				PED::SET_PED_HELMET_TEXTURE_INDEX(uLocal_489[2], 0);
			}
			while (!func_323(uLocal_489[2], 12, 3, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0))
			{
				func_362(0);
			}
			__LIB_16__::func_888(2);
			PED::SET_PED_RELATIONSHIP_GROUP_HASH(uLocal_489[2], iLocal_255);
			PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(uLocal_489[2], true);
			PED::SET_PED_CONFIG_FLAG(uLocal_489[2], 32, false);
			if (!PED::IS_PED_IN_VEHICLE(uLocal_489[2], iLocal_235, false))
			{
				PED::SET_PED_INTO_VEHICLE(uLocal_489[2], iLocal_235, -1);
			}
			STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(__LIB_0__::func_518(2));
			__LIB_15__::func_887(&iLocal_236);
			func_348(&iLocal_236, joaat("policeb"), Local_216, 135.0532f, -1, 0);
			__LIB_0__::func_679(iLocal_236, 3);
			VEHICLE::SET_VEHICLE_HAS_STRONG_AXLES(iLocal_236, true);
			STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(joaat("policeb"));
			STREAMING::REQUEST_MODEL(__LIB_0__::func_518(0));
			while (!STREAMING::HAS_MODEL_LOADED(__LIB_0__::func_518(0)))
			{
				func_362(0);
			}
			func_650(&(uLocal_489[0]), 0, Local_3046, fLocal_3047, 0);
			while (!func_323(uLocal_489[0], 12, 4, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0))
			{
				func_362(0);
			}
			__LIB_16__::func_888(0);
			PED::SET_PED_RELATIONSHIP_GROUP_HASH(uLocal_489[0], iLocal_255);
			PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(uLocal_489[0], true);
			PED::SET_PED_CONFIG_FLAG(uLocal_489[0], 32, false);
			if (!PED::IS_PED_IN_VEHICLE(uLocal_489[0], iLocal_236, false))
			{
				PED::SET_PED_INTO_VEHICLE(uLocal_489[0], iLocal_236, -1);
			}
			STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(__LIB_0__::func_518(0));
			__LIB_0__::func_222(&uLocal_312, 1, uLocal_489[0], "MICHAEL", 0, 1);
			__LIB_0__::func_222(&uLocal_312, 2, uLocal_489[2], "TREVOR", 0, 1);
			if (Global_94618 == 1)
			{
				iLocal_479 = 5;
			}
			else
			{
				func_980(&uLocal_489, 0);
				while (!func_956(&uLocal_489, 1, 0, 0))
				{
					func_362(0);
				}
				iLocal_479 = 6;
			}
			break;
		case 3:
			__LIB_0__::func_54(0, 1);
			__LIB_38__::func_763(iLocal_232);
			__LIB_15__::func_887(&iLocal_232);
			if (__LIB_13__::func_791() == joaat("f620"))
			{
				func_761(&iLocal_232, -1912.547f, 4616.3613f, 56.0427f, 134.6697f, 1, 1, 0, 0, 1, joaat("f620"), 0, 145, 1);
				ENTITY::SET_ENTITY_SHOULD_FREEZE_WAITING_ON_COLLISION(iLocal_232, true);
				VEHICLE::SET_VEHICLE_HAS_STRONG_AXLES(iLocal_232, true);
			}
			else
			{
				STREAMING::REQUEST_MODEL(joaat("f620"));
				while (!STREAMING::HAS_MODEL_LOADED(joaat("f620")))
				{
					func_362(0);
				}
				func_348(&iLocal_232, joaat("f620"), -1912.547f, 4616.3613f, 56.0427f, 134.6697f, 0, 0);
				VEHICLE::SET_VEHICLE_HAS_STRONG_AXLES(iLocal_232, true);
				VEHICLE::SET_VEHICLE_COLOURS(iLocal_232, 43, 43);
				VEHICLE::SET_VEHICLE_EXTRA_COLOURS(iLocal_232, 48, 48);
				STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(joaat("f620"));
			}
			STREAMING::REQUEST_MODEL(joaat("policeb"));
			STREAMING::REQUEST_MODEL(__LIB_0__::func_518(2));
			STREAMING::REQUEST_MODEL(__LIB_0__::func_518(0));
			STREAMING::REQUEST_MODEL(joaat("entityxf"));
			STREAMING::REQUEST_MODEL(joaat("IG_Car3guy1"));
			STREAMING::REQUEST_MODEL(joaat("cheetah"));
			STREAMING::REQUEST_MODEL(joaat("IG_Car3guy2"));
			while (!STREAMING::HAS_MODEL_LOADED(joaat("policeb")))
			{
				func_362(0);
			}
			func_348(&iLocal_235, joaat("policeb"), Local_215, 147.9465f, -1, 0);
			__LIB_0__::func_679(iLocal_235, 2);
			VEHICLE::SET_VEHICLE_HAS_STRONG_AXLES(iLocal_235, true);
			while (!STREAMING::HAS_MODEL_LOADED(__LIB_0__::func_518(2)))
			{
				func_362(0);
			}
			func_650(&(uLocal_489[2]), 2, Local_3044, fLocal_3045, 0);
			if (!PED::IS_PED_WEARING_HELMET(uLocal_489[2]))
			{
				PED::SET_PED_HELMET_PROP_INDEX(uLocal_489[2], 5, true);
				PED::SET_PED_HELMET_TEXTURE_INDEX(uLocal_489[2], 0);
			}
			while (!func_323(uLocal_489[2], 12, 3, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0))
			{
				func_362(0);
			}
			__LIB_16__::func_888(2);
			PED::SET_PED_RELATIONSHIP_GROUP_HASH(uLocal_489[2], iLocal_255);
			PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(uLocal_489[2], true);
			PED::SET_PED_CONFIG_FLAG(uLocal_489[2], 32, false);
			STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(__LIB_0__::func_518(2));
			func_348(&iLocal_236, joaat("policeb"), Local_216, 135.0532f, -1, 0);
			__LIB_0__::func_679(iLocal_236, 3);
			VEHICLE::SET_VEHICLE_HAS_STRONG_AXLES(iLocal_236, true);
			STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(joaat("policeb"));
			while (!STREAMING::HAS_MODEL_LOADED(__LIB_0__::func_518(0)))
			{
				func_362(0);
			}
			func_650(&(uLocal_489[0]), 0, Vector(56.0562f, 4604.91f, -1921.7319f) + Vector(0f, -0.37f, 0.36f), 135.026f, 0);
			MISC::CLEAR_AREA(-1921.7319f, 4604.91f, 56.0562f, 200f, true, false, false, false);
			while (!func_323(uLocal_489[0], 12, 4, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0))
			{
				func_362(0);
			}
			__LIB_16__::func_888(0);
			PED::SET_PED_RELATIONSHIP_GROUP_HASH(uLocal_489[0], iLocal_255);
			PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(uLocal_489[0], true);
			PED::SET_PED_CONFIG_FLAG(uLocal_489[0], 32, false);
			STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(__LIB_0__::func_518(0));
			__LIB_0__::func_222(&uLocal_312, 1, uLocal_489[0], "MICHAEL", 0, 1);
			__LIB_0__::func_222(&uLocal_312, 2, uLocal_489[2], "TREVOR", 0, 1);
			while (!STREAMING::HAS_MODEL_LOADED(joaat("entityxf")))
			{
				func_362(0);
			}
			iLocal_233 = __LIB_16__::func_0(joaat("entityxf"), -1923.0222f, 4605.4927f, 56.044f, 135.0786f);
			__LIB_0__::func_679(iLocal_233, 0);
			VEHICLE::SET_VEHICLE_HAS_STRONG_AXLES(iLocal_233, true);
			ENTITY::SET_ENTITY_SHOULD_FREEZE_WAITING_ON_COLLISION(iLocal_233, true);
			VEHICLE::SET_DOOR_ALLOWED_TO_BE_BROKEN_OFF(iLocal_233, 0, false);
			VEHICLE::SET_DOOR_ALLOWED_TO_BE_BROKEN_OFF(iLocal_233, 1, false);
			STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(joaat("entityxf"));
			while (!STREAMING::HAS_MODEL_LOADED(joaat("IG_Car3guy1")))
			{
				func_362(0);
			}
			__LIB_38__::func_761(&iLocal_226, joaat("IG_Car3guy1"), -1915.6257f, 4600.5103f, 56.0301f, 141.4507f, 1);
			PED::SET_PED_RELATIONSHIP_GROUP_HASH(iLocal_226, iLocal_256);
			PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iLocal_226, true);
			TASK::TASK_SMART_FLEE_PED(iLocal_226, PLAYER::PLAYER_PED_ID(), 500f, -1, false, false);
			PED::FORCE_PED_MOTION_STATE(iLocal_226, joaat("MotionState_Run"), false, 0, false);
			PED::SET_PED_KEEP_TASK(iLocal_226, true);
			STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(joaat("IG_Car3guy1"));
			while (!STREAMING::HAS_MODEL_LOADED(joaat("cheetah")))
			{
				func_362(0);
			}
			iLocal_234 = __LIB_16__::func_0(joaat("cheetah"), -1919.3284f, 4609.285f, 56.0532f, 135.0284f);
			__LIB_0__::func_679(iLocal_234, 1);
			VEHICLE::SET_VEHICLE_HAS_STRONG_AXLES(iLocal_234, true);
			ENTITY::SET_ENTITY_SHOULD_FREEZE_WAITING_ON_COLLISION(iLocal_234, true);
			VEHICLE::SET_DOOR_ALLOWED_TO_BE_BROKEN_OFF(iLocal_234, 0, false);
			VEHICLE::SET_DOOR_ALLOWED_TO_BE_BROKEN_OFF(iLocal_234, 1, false);
			STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(joaat("cheetah"));
			while (!STREAMING::HAS_MODEL_LOADED(joaat("IG_Car3guy2")))
			{
				func_362(0);
			}
			__LIB_38__::func_761(&iLocal_227, joaat("IG_Car3guy2"), -1921.2577f, 4590.635f, 56.0301f, 141.4507f, 1);
			PED::SET_PED_COMPONENT_VARIATION(iLocal_227, 0, 1, 0, 0);
			PED::SET_PED_COMPONENT_VARIATION(iLocal_227, 3, 0, 0, 0);
			PED::SET_PED_COMPONENT_VARIATION(iLocal_227, 4, 0, 0, 0);
			PED::SET_PED_PROP_INDEX(iLocal_227, 1, 0, 0, false);
			PED::SET_PED_RELATIONSHIP_GROUP_HASH(iLocal_227, iLocal_256);
			PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iLocal_227, true);
			TASK::TASK_SMART_FLEE_PED(iLocal_227, PLAYER::PLAYER_PED_ID(), 500f, -1, false, false);
			PED::FORCE_PED_MOTION_STATE(iLocal_227, joaat("MotionState_Run"), false, 0, false);
			PED::SET_PED_KEEP_TASK(iLocal_227, true);
			STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(joaat("IG_Car3guy2"));
			__LIB_0__::func_222(&uLocal_312, 4, iLocal_226, "CST3RACER1", 0, 1);
			__LIB_0__::func_222(&uLocal_312, 5, iLocal_227, "CST3RACER2", 0, 1);
			func_980(&uLocal_489, 0);
			while (!func_956(&uLocal_489, 1, 0, 0))
			{
				func_362(0);
			}
			if (Global_94618 == 1)
			{
				iLocal_479 = 7;
			}
			else
			{
				iLocal_479 = 8;
			}
			break;
		case 4:
			__LIB_0__::func_54(0, 1);
			__LIB_38__::func_763(iLocal_232);
			__LIB_15__::func_887(&iLocal_232);
			if (__LIB_13__::func_791() == joaat("f620"))
			{
				func_761(&iLocal_232, 485.399f, -1332.9005f, 28.3095f, 292.4873f, 1, 1, 0, 0, 1, joaat("f620"), 0, 145, 1);
				ENTITY::SET_ENTITY_SHOULD_FREEZE_WAITING_ON_COLLISION(iLocal_232, true);
				VEHICLE::SET_VEHICLE_HAS_STRONG_AXLES(iLocal_232, true);
			}
			else
			{
				STREAMING::REQUEST_MODEL(joaat("f620"));
				while (!STREAMING::HAS_MODEL_LOADED(joaat("f620")))
				{
					func_362(0);
				}
				func_348(&iLocal_232, joaat("f620"), 485.399f, -1332.9005f, 28.3095f, 292.4873f, 0, 0);
				VEHICLE::SET_VEHICLE_HAS_STRONG_AXLES(iLocal_232, true);
				VEHICLE::SET_VEHICLE_COLOURS(iLocal_232, 43, 43);
				VEHICLE::SET_VEHICLE_EXTRA_COLOURS(iLocal_232, 48, 48);
				STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(joaat("f620"));
			}
			STREAMING::REQUEST_MODEL(__LIB_0__::func_518(2));
			while (!STREAMING::HAS_MODEL_LOADED(__LIB_0__::func_518(2)))
			{
				func_362(0);
			}
			func_650(&(uLocal_489[2]), 2, 485.592f, -1330.7214f, 28.2454f, 296.1122f, 0);
			if (!PED::IS_PED_WEARING_HELMET(uLocal_489[2]))
			{
				PED::SET_PED_HELMET_PROP_INDEX(uLocal_489[2], 5, true);
				PED::SET_PED_HELMET_TEXTURE_INDEX(uLocal_489[2], 0);
			}
			while (!func_323(uLocal_489[2], 12, 3, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0))
			{
				func_362(0);
			}
			__LIB_16__::func_888(2);
			PED::SET_PED_RELATIONSHIP_GROUP_HASH(uLocal_489[2], iLocal_255);
			PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(uLocal_489[2], true);
			PED::SET_PED_CONFIG_FLAG(uLocal_489[2], 32, false);
			STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(__LIB_0__::func_518(2));
			STREAMING::REQUEST_MODEL(__LIB_0__::func_518(0));
			while (!STREAMING::HAS_MODEL_LOADED(__LIB_0__::func_518(0)))
			{
				func_362(0);
			}
			func_650(&(uLocal_489[0]), 0, 485.9252f, -1330.5171f, 28.2488f, 293.9519f, 0);
			while (!func_323(uLocal_489[0], 12, 4, 0, -1, 0, 0, 0, -1, -1, -1, 0, 0, 0))
			{
				func_362(0);
			}
			__LIB_16__::func_888(0);
			PED::SET_PED_RELATIONSHIP_GROUP_HASH(uLocal_489[0], iLocal_255);
			PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(uLocal_489[0], true);
			PED::SET_PED_CONFIG_FLAG(uLocal_489[0], 32, false);
			STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(__LIB_0__::func_518(0));
			__LIB_0__::func_222(&uLocal_312, 1, uLocal_489[0], "MICHAEL", 0, 1);
			__LIB_0__::func_222(&uLocal_312, 2, uLocal_489[2], "TREVOR", 0, 1);
			STREAMING::REQUEST_MODEL(joaat("entityxf"));
			while (!STREAMING::HAS_MODEL_LOADED(joaat("entityxf")))
			{
				func_362(0);
			}
			iLocal_233 = __LIB_16__::func_0(joaat("entityxf"), 485.9952f, -1335.4487f, 28.2862f, 286.6455f);
			__LIB_0__::func_679(iLocal_233, 0);
			VEHICLE::SET_VEHICLE_HAS_STRONG_AXLES(iLocal_233, true);
			ENTITY::SET_ENTITY_SHOULD_FREEZE_WAITING_ON_COLLISION(iLocal_233, true);
			VEHICLE::SET_DOOR_ALLOWED_TO_BE_BROKEN_OFF(iLocal_233, 0, false);
			VEHICLE::SET_DOOR_ALLOWED_TO_BE_BROKEN_OFF(iLocal_233, 1, false);
			STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(joaat("entityxf"));
			STREAMING::REQUEST_MODEL(joaat("cheetah"));
			while (!STREAMING::HAS_MODEL_LOADED(joaat("cheetah")))
			{
				func_362(0);
			}
			iLocal_234 = __LIB_16__::func_0(joaat("cheetah"), 487.1696f, -1337.8451f, 28.2688f, 293.0351f);
			__LIB_0__::func_679(iLocal_234, 1);
			VEHICLE::SET_VEHICLE_HAS_STRONG_AXLES(iLocal_234, true);
			ENTITY::SET_ENTITY_SHOULD_FREEZE_WAITING_ON_COLLISION(iLocal_234, true);
			VEHICLE::SET_DOOR_ALLOWED_TO_BE_BROKEN_OFF(iLocal_234, 0, false);
			VEHICLE::SET_DOOR_ALLOWED_TO_BE_BROKEN_OFF(iLocal_234, 1, false);
			STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(joaat("cheetah"));
			func_980(&uLocal_489, 0);
			while (!func_956(&uLocal_489, 1, 0, 0))
			{
				func_362(0);
			}
			WEAPON::SET_CURRENT_PED_WEAPON(PLAYER::PLAYER_PED_ID(), joaat("WEAPON_UNARMED"), true);
			__LIB_37__::func_920(PLAYER::PLAYER_PED_ID(), 492.7253f, -1311.5626f, 28.2627f, 293.8439f, 0);
			iLocal_479 = 9;
			break;
	}
	iLocal_199 = 1;
	bLocal_201 = true;
}

void func_761(int iParam0, struct<3> Param1, float fParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, int iParam9, bool bParam10, int iParam11)//Position - 0x991B6
{
	int iVar0;
	iVar0 = 1;
	if (!__LIB_0__::func_323() || !__LIB_13__::func_821())
	{
		iVar0 = 0;
	}
	if (iVar0 == 1)
	{
		if (!__LIB_14__::func_750(iParam4, iParam5, iParam6, iParam11))
		{
			iVar0 = 0;
		}
	}
	if (iVar0 == 1)
	{
		__LIB_14__::func_532();
		while (!__LIB_14__::func_531())
		{
			SYSTEM::WAIT(0);
		}
		*iParam0 = func_827(Param1, fParam2);
	}
	else if (iParam7 == 1)
	{
		if (__LIB_0__::func_78(Param1, 0f, 0f, 0f, 0))
		{
			Param1 = { Global_106934.f_2890 };
			fParam2 = Global_106934.f_2890.f_6;
		}
		MISC::CLEAR_AREA(Param1, 5f, true, false, false, false);
		__LIB_17__::func_241(Param1, 5f, 0);
		if (__LIB_0__::func_374(bParam10))
		{
			__LIB_15__::func_942(bParam10, 0);
			while (!__LIB_32__::func_84(iParam0, bParam10, Param1, fParam2, 1, 0))
			{
				SYSTEM::WAIT(0);
			}
		}
		else
		{
			STREAMING::REQUEST_MODEL(iParam8);
			while (!STREAMING::HAS_MODEL_LOADED(iParam8))
			{
				SYSTEM::WAIT(0);
			}
			*iParam0 = VEHICLE::CREATE_VEHICLE(iParam8, Param1, fParam2, true, true, false);
			if (ENTITY::DOES_ENTITY_EXIST(*iParam0) && !ENTITY::IS_ENTITY_DEAD(*iParam0, false))
			{
				if (iParam9 == 0)
				{
					VEHICLE::SET_VEHICLE_COLOUR_COMBINATION(*iParam0, 0);
				}
				else if (iParam9 > 0)
				{
					VEHICLE::SET_VEHICLE_COLOURS(*iParam0, iParam9, iParam9);
				}
			}
			STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(iParam8);
		}
	}
	if (iParam3 == 1)
	{
		if (((ENTITY::DOES_ENTITY_EXIST(*iParam0) && !ENTITY::IS_ENTITY_DEAD(*iParam0, false)) && ENTITY::DOES_ENTITY_EXIST(PLAYER::PLAYER_PED_ID())) && !ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID(), false))
		{
			PED::SET_PED_INTO_VEHICLE(PLAYER::PLAYER_PED_ID(), *iParam0, -1);
			VEHICLE::SET_VEHICLE_ON_GROUND_PROPERLY(*iParam0, 5f);
		}
	}
}

int func_827(struct<3> Param0, float fParam1)//Position - 0xA334F
{
	return func_828(&(Global_106934.f_2890), Param0, fParam1, 0);
}

int func_828(var uParam0, struct<3> Param1, float fParam2, bool bParam3)//Position - 0xA3369
{
	int iVar0;
	struct<3> Var1;
	bool bVar2;
	var uVar3;
	int iVar4;
	if (__LIB_13__::func_797(uParam0))
	{
		if (__LIB_0__::func_78(Param1, 0f, 0f, 0f, 0))
		{
			Param1 = { *uParam0 };
			fParam2 = uParam0->f_6;
		}
		if (uParam0->f_12.f_66 == joaat("monster") || uParam0->f_12.f_66 == joaat("marshall"))
		{
			if (OBJECT::IS_POINT_IN_ANGLED_AREA(Param1, -816.87164f, 185.62384f, 71.40275f, -807.48944f, 189.3762f, 75.27323f, 6.5f, false, true))
			{
				Param1 = { -850.93f, 158.82f, 65.7f };
				fParam2 = 89.5f;
			}
		}
		if (__LIB_13__::func_825(uParam0))
		{
			MISC::CLEAR_AREA(Param1, 5f, true, false, false, false);
			__LIB_17__::func_241(Param1, 5f, 0);
			iVar0 = VEHICLE::CREATE_VEHICLE(uParam0->f_12.f_66, Param1, fParam2, true, true, false);
			if (ENTITY::DOES_ENTITY_EXIST(iVar0))
			{
				Var1 = { ENTITY::GET_ENTITY_COORDS(iVar0, true) };
				if (SYSTEM::VDIST2(Var1, -1151.15f, -1530.32f, 7.48925f) <= 3f)
				{
					ENTITY::SET_ENTITY_COORDS_NO_OFFSET(iVar0, Param1, false, false, true);
				}
				__LIB_1__::func_569(iVar0, &(uParam0->f_12), 0, 1);
				bVar2 = true;
				if (VEHICLE::IS_THIS_MODEL_A_BOAT(uParam0->f_12.f_66) || VEHICLE::IS_THIS_MODEL_A_JETSKI(uParam0->f_12.f_66))
				{
					if (!WATER::TEST_PROBE_AGAINST_WATER(Param1.f_0, Param1.f_1, (Param1.f_2 + 30f), Param1.f_0, Param1.f_1, (Param1.f_2 - 30f), &uVar3))
					{
						bVar2 = false;
					}
				}
				if (bVar2)
				{
					VEHICLE::SET_VEHICLE_ON_GROUND_PROPERLY(iVar0, 5f);
				}
				if (uParam0->f_7 == 1)
				{
					if (bParam3)
					{
						if (VEHICLE::IS_THIS_MODEL_A_CAR(ENTITY::GET_ENTITY_MODEL(iVar0)))
						{
							__LIB_15__::func_942(uParam0->f_11, 1);
						}
						else if (VEHICLE::IS_THIS_MODEL_A_BIKE(ENTITY::GET_ENTITY_MODEL(iVar0)))
						{
							__LIB_15__::func_942(uParam0->f_11, 2);
						}
					}
					VEHICLE::SET_VEHICLE_NOT_STEALABLE_AMBIENTLY(iVar0, false);
					VEHICLE::SET_VEHICLE_CAN_SAVE_IN_GARAGE(iVar0, false);
					VEHICLE::SET_VEHICLE_HAS_STRONG_AXLES(iVar0, true);
					__LIB_0__::func_397(iVar0, uParam0->f_11);
				}
				else if ((!__LIB_17__::func_240(iVar0, uParam0->f_3, uParam0->f_8) && uParam0->f_10) && MISC::ARE_STRINGS_EQUAL(SCRIPT::GET_THIS_SCRIPT_NAME(), "startup_positioning"))
				{
					iVar4 = __LIB_0__::func_489(iVar0);
					if (iVar4 == -1)
					{
						uParam0->f_10 = 0;
					}
					else
					{
						__LIB_17__::func_68(iVar4);
					}
				}
				if (((Global_100441 != 13 && Global_100441 != 10) && Global_100441 != 11) && Global_100441 != 12)
				{
					if (MISC::GET_HASH_KEY(&(Global_100441.f_3)) == Global_78125)
					{
						if (uParam0->f_12.f_66 == Global_113386.f_32749.f_69[21 /*78*/].f_66)
						{
							__LIB_0__::func_364(24, 0);
							__LIB_17__::func_68(24);
						}
					}
				}
				if (uParam0->f_9 == 1)
				{
					__LIB_17__::func_655(iVar0, uParam0->f_11);
				}
				STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(uParam0->f_12.f_66);
				Var1 = { ENTITY::GET_ENTITY_COORDS(iVar0, true) };
			}
			return iVar0;
		}
	}
	return iVar0;
}

int func_865(int iParam0, bool bParam1)//Position - 0xA4875
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
		func_868(&(Global_22965[iParam0]), bVar0, iVar2, iVar3, bParam1, 0, 0);
	}
	else
	{
		Var4 = { ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true) };
		MISC::GET_GROUND_Z_FOR_3D_COORD(Var4, &(Var4.f_2), false, false);
		func_651(&(Global_22965[iParam0]), bVar0, Var4, ENTITY::GET_ENTITY_HEADING(PLAYER::PLAYER_PED_ID()), bParam1, 0, 0);
	}
	Global_22965.f_7 = iParam0;
	Global_22965.f_39 = 1;
	func_956(&Global_22965, 0, 0, 0);
	__LIB_0__::func_649(iParam0);
	return 1;
}

int func_868(int* iParam0, bool bParam1, int iParam2, int iParam3, bool bParam4, bool bParam5, bool bParam6)//Position - 0xA4A33
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
				func_39(*iParam0);
				__LIB_13__::func_777(*iParam0, 1, 0);
				__LIB_13__::func_763(*iParam0);
				__LIB_13__::func_762(*iParam0);
				func_653(*iParam0, bParam6);
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

int func_869(int iParam0)//Position - 0xA4AE5
{
	if (!func_871(iParam0))
	{
		STREAMING::REQUEST_MODEL(iParam0);
		if (STREAMING::HAS_MODEL_LOADED(iParam0))
		{
			func_870(iParam0, 1);
		}
	}
	else
	{
		return 1;
	}
	return 0;
}

void func_870(int iParam0, bool bParam1)//Position - 0xA4B15
{
	int iVar0;
	int iVar1;
	bool bVar2;
	iVar0 = iParam0;
	iVar1 = 0;
	bVar2 = false;
	while (iVar1 < iLocal_484 && !bVar2)
	{
		if (bParam1)
		{
			if (iLocal_484[iVar1] == 0)
			{
				iLocal_484[iVar1] = iVar0;
				bVar2 = true;
			}
		}
		else if (iLocal_484[iVar1] == iVar0)
		{
			iLocal_484[iVar1] = 0;
			bVar2 = true;
		}
		iVar1++;
	}
}

int func_871(var uParam0)//Position - 0xA4B77
{
	int iVar0;
	int iVar1;
	iVar0 = uParam0;
	iVar1 = 0;
	while (iVar1 < iLocal_484)
	{
		if (iLocal_484[iVar1] == iVar0)
		{
			return 1;
		}
		iVar1++;
	}
	return 0;
}

void func_873()//Position - 0xA4BCD
{
	if (iLocal_488 == 0 && (!AUDIO::IS_MUSIC_ONESHOT_PLAYING() || MISC::GET_GAME_TIMER() > iLocal_3255))
	{
		switch (iLocal_487)
		{
			case 1:
				if (MISC::IS_STRING_NULL_OR_EMPTY(sLocal_3254) || !MISC::ARE_STRINGS_EQUAL(sLocal_3254, "CAR1_MISSION_START"))
				{
					if (!MISC::IS_STRING_NULL_OR_EMPTY(sLocal_3254))
					{
						AUDIO::CANCEL_MUSIC_EVENT(sLocal_3254);
					}
					sLocal_3254 = "CAR1_MISSION_START";
				}
				else if (AUDIO::PREPARE_MUSIC_EVENT("CAR1_MISSION_START"))
				{
					iLocal_487 = 0;
				}
				break;
			case 6:
				if (MISC::IS_STRING_NULL_OR_EMPTY(sLocal_3254) || !MISC::ARE_STRINGS_EQUAL(sLocal_3254, "CAR1_CHASE_START"))
				{
					if (!MISC::IS_STRING_NULL_OR_EMPTY(sLocal_3254))
					{
						AUDIO::CANCEL_MUSIC_EVENT(sLocal_3254);
					}
					sLocal_3254 = "CAR1_CHASE_START";
				}
				else if (AUDIO::PREPARE_MUSIC_EVENT("CAR1_CHASE_START"))
				{
					iLocal_487 = 0;
				}
				break;
			}
	}
	switch (iLocal_488)
	{
		case 1:
			if (MISC::IS_STRING_NULL_OR_EMPTY(sLocal_3254) || !MISC::ARE_STRINGS_EQUAL(sLocal_3254, "CAR1_MISSION_START"))
			{
				if (!MISC::IS_STRING_NULL_OR_EMPTY(sLocal_3254))
				{
					AUDIO::CANCEL_MUSIC_EVENT(sLocal_3254);
				}
				sLocal_3254 = "CAR1_MISSION_START";
			}
			else if (AUDIO::PREPARE_MUSIC_EVENT("CAR1_MISSION_START"))
			{
				if (AUDIO::TRIGGER_MUSIC_EVENT("CAR1_MISSION_START"))
				{
					iLocal_3255 = MISC::GET_GAME_TIMER() + 5000;
					iLocal_488 = 0;
				}
			}
			break;
		case 2:
			if (AUDIO::TRIGGER_MUSIC_EVENT("CAR1_MISSION_RESTART"))
			{
				iLocal_488 = 0;
			}
			break;
		case 3:
			if (AUDIO::TRIGGER_MUSIC_EVENT("CAR1_COP_BIKES"))
			{
				iLocal_488 = 0;
			}
			break;
		case 4:
			if (AUDIO::TRIGGER_MUSIC_EVENT("CAR1_COPS_RESTART"))
			{
				iLocal_488 = 0;
			}
			break;
		case 5:
			if (AUDIO::TRIGGER_MUSIC_EVENT("CAR1_APPROACH"))
			{
				iLocal_488 = 0;
			}
			break;
		case 6:
			if (MISC::IS_STRING_NULL_OR_EMPTY(sLocal_3254) || !MISC::ARE_STRINGS_EQUAL(sLocal_3254, "CAR1_CHASE_START"))
			{
				if (!MISC::IS_STRING_NULL_OR_EMPTY(sLocal_3254))
				{
					AUDIO::CANCEL_MUSIC_EVENT(sLocal_3254);
				}
				sLocal_3254 = "CAR1_CHASE_START";
			}
			else if (AUDIO::PREPARE_MUSIC_EVENT("CAR1_CHASE_START"))
			{
				if (AUDIO::TRIGGER_MUSIC_EVENT("CAR1_CHASE_START"))
				{
					iLocal_3255 = MISC::GET_GAME_TIMER() + 5000;
					iLocal_488 = 0;
				}
			}
			break;
		case 7:
			if (AUDIO::TRIGGER_MUSIC_EVENT("CAR1_PULL_OVER"))
			{
				iLocal_488 = 0;
			}
			break;
		case 8:
			if (AUDIO::TRIGGER_MUSIC_EVENT("CAR1_CHASE_RESTART"))
			{
				iLocal_488 = 0;
			}
			break;
		case 9:
			if (AUDIO::TRIGGER_MUSIC_EVENT("CAR1_BRIDGE"))
			{
				iLocal_488 = 0;
			}
			break;
		case 10:
			if (AUDIO::TRIGGER_MUSIC_EVENT("CAR1_MISSION_FAIL"))
			{
				iLocal_488 = 0;
			}
			break;
	}
}

void func_874()//Position - 0xA4E49
{
	if (iLocal_479 == 5)
	{
		func_869(__LIB_0__::func_518(0));
	}
	if (iLocal_479 == 0)
	{
		func_869(__LIB_0__::func_518(1));
	}
	if (iLocal_479 == 5)
	{
		func_869(__LIB_0__::func_518(2));
	}
	if (iLocal_479 == 3)
	{
		func_869(joaat("IG_Car3guy2"));
	}
	if (iLocal_479 == 3)
	{
		func_869(joaat("IG_Car3guy1"));
	}
	if (iLocal_479 == 0)
	{
		func_869(joaat("f620"));
	}
	if (iLocal_479 == 3)
	{
		func_869(joaat("cheetah"));
	}
	if (iLocal_479 == 3)
	{
		func_869(joaat("entityxf"));
	}
	if (iLocal_479 == 4)
	{
		func_869(joaat("asterope"));
	}
	if (iLocal_479 == 4)
	{
		func_869(joaat("trailers"));
		func_869(joaat("trailers2"));
	}
	if (iLocal_479 == 5)
	{
		func_869(joaat("policeb"));
	}
	if (iLocal_479 >= 4 && iLocal_479 <= 5)
	{
		func_869(joaat("prop_player_phone_01"));
	}
	if (iLocal_479 >= 4 && iLocal_479 <= 5)
	{
		func_869(joaat("prop_donut_02"));
	}
	if (iLocal_479 >= 4 && iLocal_479 <= 5)
	{
		func_869(joaat("prop_donut_02b"));
	}
	if (iLocal_479 == 2)
	{
		func_755(1, sLocal_219);
		func_755(2, sLocal_219);
	}
	else
	{
		func_876(1, sLocal_219);
		func_876(2, sLocal_219);
	}
	if (iLocal_479 >= 3 && iLocal_479 <= 4)
	{
		func_755(500, sLocal_220);
		func_755(501, sLocal_220);
		func_755(401, sLocal_220);
		func_755(403, sLocal_220);
	}
	else if (iLocal_479 != 2)
	{
		func_876(500, sLocal_220);
		func_876(501, sLocal_220);
		func_876(401, sLocal_220);
		func_876(403, sLocal_220);
	}
	if (iLocal_479 >= 5 && iLocal_479 <= 6)
	{
		func_755(500, sLocal_221);
		func_755(400, sLocal_221);
		func_755(401, sLocal_221);
		func_755(402, sLocal_221);
	}
	else
	{
		func_876(500, sLocal_221);
		func_876(400, sLocal_221);
		func_876(401, sLocal_221);
		func_876(402, sLocal_221);
	}
	if (iLocal_479 >= 8 && iLocal_479 <= 9)
	{
		func_755(1, sLocal_222);
		func_755(2, sLocal_222);
		func_755(3, sLocal_222);
	}
	else
	{
		func_876(1, sLocal_222);
		func_876(2, sLocal_222);
		func_876(3, sLocal_222);
	}
	if (iLocal_479 >= 2 && iLocal_479 <= 6)
	{
		func_686(sLocal_224);
	}
	else
	{
		func_875(sLocal_224);
	}
	if (iLocal_479 >= 2 && iLocal_479 <= 6)
	{
		func_686(sLocal_225);
	}
	else
	{
		func_875(sLocal_225);
	}
	if (iLocal_479 >= 4 && iLocal_479 <= 5)
	{
		func_686(sLocal_3030);
	}
	else
	{
		func_875(sLocal_3030);
	}
	if (iLocal_479 >= 4 && iLocal_479 <= 5)
	{
		func_686(sLocal_3031);
	}
	else
	{
		func_875(sLocal_3031);
	}
}

void func_875(char* sParam0)//Position - 0xA5149
{
	if (func_688(sParam0))
	{
		STREAMING::REMOVE_ANIM_DICT(sParam0);
		func_687(sParam0, 0);
	}
}

void func_876(int iParam0, char* sParam1)//Position - 0xA5167
{
	if (func_757(iParam0, sParam1))
	{
		VEHICLE::REMOVE_VEHICLE_RECORDING(iParam0, sParam1);
		func_756(iParam0, sParam1, 0);
	}
}

void func_894(char* sParam0, bool bParam1)//Position - 0xA5D29
{
	int iVar0;
	int iVar1;
	int iVar2;
	iVar0 = MISC::GET_HASH_KEY(sParam0);
	if (bParam1)
	{
		if (!func_897(sParam0))
		{
			iVar1 = iLocal_482;
			if (iLocal_483 < iVar1)
			{
				iLocal_482[iLocal_483] = iVar0;
				iLocal_483++;
			}
		}
	}
	else
	{
		iVar2 = func_896(iVar0);
		if (iVar2 != -1)
		{
			iLocal_482[iVar2] = 0;
			func_895();
			iLocal_483 = (iLocal_483 - 1);
		}
	}
}

void func_895()//Position - 0xA5D8C
{
	int iVar0;
	int iVar1;
	iVar0 = iLocal_482;
	iVar1 = 0;
	iVar1 = 0;
	while (iVar1 < (iVar0 - 1))
	{
		if (iLocal_482[iVar1] == 0)
		{
			if (iLocal_482[iVar1 + 1] != 0)
			{
				iLocal_482[iVar1] = iLocal_482[iVar1 + 1];
				iLocal_482[iVar1 + 1] = 0;
			}
		}
		iVar1++;
	}
}

int func_896(int iParam0)//Position - 0xA5DE3
{
	int iVar0;
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < iLocal_483)
	{
		if (iLocal_482[iVar0] == iParam0)
		{
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

int func_897(char* sParam0)//Position - 0xA5E14
{
	int iVar0;
	iVar0 = MISC::GET_HASH_KEY(sParam0);
	if (func_896(iVar0) != -1)
	{
		return 1;
	}
	return 0;
}

void func_906(int iParam0, float fParam1)//Position - 0xA9508
{
	float fVar0;
	struct<3> Var1;
	int iVar2;
	fVar0 = MISC::GET_FRAME_TIME();
	fVar0 = (fVar0 * 1000f);
	bLocal_60 = false;
	if (!bLocal_42)
	{
		if (bLocal_41)
		{
			__LIB_15__::func_907();
			if (PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()))
			{
				Var1 = { ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true) };
				MISC::CLEAR_AREA(Var1, 1000f, true, false, false, false);
			}
			bLocal_42 = true;
		}
	}
	else if (!bLocal_41)
	{
		__LIB_15__::func_912();
		bLocal_42 = false;
	}
	if (bLocal_41)
	{
		fParam1 = 1f;
		VEHICLE::SET_VEHICLE_DENSITY_MULTIPLIER_THIS_FRAME(0f);
	}
	if (!bLocal_35)
	{
		if (iLocal_30)
		{
			fLocal_87 = 0f;
		}
		else
		{
			fLocal_87 = 1f;
		}
		if (VEHICLE::IS_VEHICLE_DRIVEABLE(iParam0, false))
		{
			if (VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(iParam0))
			{
				if (PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()))
				{
					if (__LIB_15__::func_927(PLAYER::PLAYER_PED_ID(), iParam0))
					{
						iLocal_40 = 1;
					}
					else
					{
						iLocal_40 = 0;
					}
				}
				fLocal_84 = VEHICLE::GET_TIME_POSITION_IN_RECORDING(iParam0);
				VEHICLE::SET_PLAYBACK_SPEED(iParam0, ((fParam1 * fLocal_85) * fLocal_87));
				if (iLocal_39)
				{
					func_927(iParam0, fLocal_84);
					func_926(iParam0, fLocal_94);
					if (fLocal_89 > 1000f)
					{
						if (iLocal_126 == 0)
						{
							func_925(iParam0, fLocal_94);
						}
						fVar0 = ((fLocal_84 + 4000f) + (SYSTEM::TO_FLOAT(iLocal_126) * 2000f));
						func_924(iParam0, fVar0, fLocal_88);
						iLocal_126++;
						if (iLocal_126 > 2)
						{
							fLocal_89 = 0f;
						}
					}
					else
					{
						iLocal_126 = 0;
						fLocal_89 = (fLocal_89 + (MISC::GET_FRAME_TIME() * 1000f));
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
		if (fLocal_84 == 0f || CAM::IS_SCREEN_FADED_OUT())
		{
			iVar2 = 1;
		}
		if (iVar2 && !bLocal_47)
		{
			if (!iLocal_29)
			{
				func_921(iParam0, ((fParam1 * fLocal_85) * fLocal_87), 0);
				if (!iLocal_50)
				{
				}
				iLocal_50 = 0;
			}
			if (bLocal_32)
			{
				func_920(iParam0);
			}
			if (!iLocal_29)
			{
				func_909(iParam0, ((fParam1 * fLocal_85) * fLocal_87), 0);
			}
		}
		if (iLocal_37)
		{
			if (PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()))
			{
				if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
				{
					iLocal_164 = PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false);
					Local_130 = { ENTITY::GET_ENTITY_COORDS(iLocal_164, true) };
					ENTITY::GET_ENTITY_QUATERNION(iLocal_164, &fLocal_68, &fLocal_69, &fLocal_70, &fLocal_71);
				}
			}
			iLocal_37 = 0;
		}
		if (iLocal_36)
		{
			if (ENTITY::DOES_ENTITY_EXIST(iLocal_164))
			{
				__LIB_15__::func_908(iLocal_165);
				iLocal_165 = iLocal_164;
			}
			if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_165, false))
			{
				ENTITY::SET_ENTITY_COORDS(iLocal_165, Local_130, true, false, false, true);
				ENTITY::SET_ENTITY_QUATERNION(iLocal_165, fLocal_68, fLocal_69, fLocal_70, fLocal_71);
			}
			fLocal_83 = fLocal_86;
			iLocal_29 = 1;
			iLocal_36 = 0;
		}
		if (iLocal_29)
		{
			while (!func_907(&iParam0, fLocal_83))
			{
				SYSTEM::WAIT(0);
			}
			iLocal_30 = 1;
		}
		if (iLocal_43)
		{
			iLocal_43 = 0;
		}
	}
}

int func_907(int iParam0, float fParam1)//Position - 0xA97A3
{
	if (!iLocal_44)
	{
		iLocal_29 = 1;
		func_623();
		if (VEHICLE::IS_VEHICLE_DRIVEABLE(*iParam0, false))
		{
			if (VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(*iParam0))
			{
				VEHICLE::STOP_PLAYBACK_RECORDED_VEHICLE(*iParam0);
				VEHICLE::SET_VEHICLE_FIXED(*iParam0);
			}
			if (!iLocal_113 == -1)
			{
				while (!func_908(iParam0, iLocal_113, fParam1, 1, 0, 0, 0, 0))
				{
					SYSTEM::WAIT(0);
				}
				if (!bLocal_34)
				{
					iLocal_30 = 1;
					fLocal_87 = 0f;
					iLocal_114 = 0;
					iLocal_116 = 0;
					iLocal_115 = 0;
					iLocal_110 = 0;
					iLocal_111 = 0;
					iLocal_112 = 0;
					iLocal_117 = 0;
					iLocal_118 = 0;
					iLocal_119 = 0;
				}
			}
		}
		iLocal_44 = 1;
	}
	else
	{
		if (VEHICLE::IS_VEHICLE_DRIVEABLE(*iParam0, false))
		{
			if (VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(*iParam0))
			{
				VEHICLE::SET_PLAYBACK_SPEED(*iParam0, ((1f * fLocal_85) * fLocal_87));
				func_908(iParam0, iLocal_113, fParam1, 1, 0, 0, 0, 0);
			}
		}
		fLocal_84 = fParam1;
		iLocal_120 = 0;
		iLocal_123 = 0;
		fLocal_99 = 0f;
		fLocal_98 = 0f;
		func_909(*iParam0, ((1f * fLocal_85) * fLocal_87), 1);
		func_921(*iParam0, ((1f * fLocal_85) * fLocal_87), 1);
		func_920(*iParam0);
		if ((iLocal_117 == 0 && iLocal_118 == 0) && iLocal_119 == 0)
		{
			iLocal_30 = 0;
			iLocal_29 = 0;
			iLocal_44 = 0;
			return 1;
		}
	}
	return 0;
}

int func_908(var uParam0, int iParam1, float fParam2, bool bParam3, bool bParam4, bool bParam5, bool bParam6, bool bParam7)//Position - 0xA98D5
{
	float fVar0;
	if (iParam1 > 0)
	{
		VEHICLE::REQUEST_VEHICLE_RECORDING(iParam1, &cLocal_143);
		if (VEHICLE::HAS_VEHICLE_RECORDING_BEEN_LOADED(iParam1, &cLocal_143))
		{
			if (VEHICLE::IS_VEHICLE_DRIVEABLE(*uParam0, false))
			{
				if (!VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(*uParam0))
				{
					ENTITY::FREEZE_ENTITY_POSITION(*uParam0, false);
					if (bParam4)
					{
						VEHICLE::START_PLAYBACK_RECORDED_VEHICLE_USING_AI(*uParam0, iParam1, &cLocal_143, 10f, 786603);
					}
					else
					{
						if (iParam1 != iLocal_121 && iParam1 != iLocal_122)
						{
							if (bParam7)
							{
								VEHICLE::START_PLAYBACK_RECORDED_VEHICLE_WITH_FLAGS(*uParam0, iParam1, &cLocal_143, 2 | 4, 0, 786603);
							}
							else if (bParam6)
							{
								VEHICLE::START_PLAYBACK_RECORDED_VEHICLE_WITH_FLAGS(*uParam0, iParam1, &cLocal_143, 1 | 4, 0, 786603);
							}
							else
							{
								VEHICLE::START_PLAYBACK_RECORDED_VEHICLE(*uParam0, iParam1, &cLocal_143, true);
							}
						}
						else
						{
							VEHICLE::START_PLAYBACK_RECORDED_VEHICLE(*uParam0, iParam1, &cLocal_143, true);
						}
						VEHICLE::SKIP_TIME_IN_PLAYBACK_RECORDED_VEHICLE(*uParam0, fParam2);
						if (bParam5)
						{
							VEHICLE::FORCE_PLAYBACK_RECORDED_VEHICLE_UPDATE(*uParam0, true);
						}
						return 1;
					}
				}
				else if (VEHICLE::GET_CURRENT_PLAYBACK_FOR_VEHICLE(*uParam0) == VEHICLE::GET_VEHICLE_RECORDING_ID(iParam1, &cLocal_143))
				{
					fVar0 = VEHICLE::GET_TIME_POSITION_IN_RECORDING(*uParam0);
					VEHICLE::SKIP_TIME_IN_PLAYBACK_RECORDED_VEHICLE(*uParam0, (fParam2 - fVar0));
					if (!bParam3)
					{
						VEHICLE::STOP_PLAYBACK_RECORDED_VEHICLE(*uParam0);
						VEHICLE::REQUEST_VEHICLE_RECORDING(iParam1, &cLocal_143);
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
						VEHICLE::START_PLAYBACK_RECORDED_VEHICLE_USING_AI(*uParam0, iParam1, &cLocal_143, 10f, 786603);
					}
					else if (iParam1 != iLocal_121 && iParam1 != iLocal_122)
					{
						if (bParam7)
						{
							VEHICLE::START_PLAYBACK_RECORDED_VEHICLE_WITH_FLAGS(*uParam0, iParam1, &cLocal_143, 2 | 4, 0, 786603);
						}
						else if (bParam6)
						{
							VEHICLE::START_PLAYBACK_RECORDED_VEHICLE_WITH_FLAGS(*uParam0, iParam1, &cLocal_143, 1 | 4, 0, 786603);
						}
						else
						{
							VEHICLE::START_PLAYBACK_RECORDED_VEHICLE(*uParam0, iParam1, &cLocal_143, true);
						}
					}
					else
					{
						VEHICLE::START_PLAYBACK_RECORDED_VEHICLE(*uParam0, iParam1, &cLocal_143, true);
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

void func_909(int iParam0, float fParam1, bool bParam2)//Position - 0xA9ABB
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
		iVar0 = iLocal_116;
		while (iVar0 < 60)
		{
			if (iLocal_107[iVar0] != 99)
			{
				if (iLocal_107[iVar0] == 0)
				{
					if (iLocal_106[iVar0] > 0)
					{
						if (!iLocal_29)
						{
							if (fLocal_84 > (fLocal_76[iVar0] - (7000f * fParam1)))
							{
								if (__LIB_15__::func_896(iLocal_155[iVar0]))
								{
									MISC::SET_BIT(&(iLocal_108[iVar0]), 0);
								}
								else if (VEHICLE::IS_THIS_MODEL_A_BIKE(iLocal_155[iVar0]))
								{
									MISC::SET_BIT(&(iLocal_108[iVar0]), 2);
								}
								MISC::CLEAR_BIT(&(iLocal_108[iVar0]), 1);
								iLocal_107[iVar0]++;
								iLocal_118++;
							}
						}
						else
						{
							fVar6 = (fLocal_84 - fLocal_76[iVar0]);
							fVar6 = (fVar6 * fLocal_77[iVar0]);
							if (fVar6 >= 0f)
							{
								if (fVar6 < func_919(iLocal_106[iVar0]))
								{
									if (__LIB_15__::func_896(iLocal_155[iVar0]))
									{
										MISC::SET_BIT(&(iLocal_108[iVar0]), 0);
									}
									else if (VEHICLE::IS_THIS_MODEL_A_BIKE(iLocal_155[iVar0]))
									{
										MISC::SET_BIT(&(iLocal_108[iVar0]), 2);
									}
									MISC::CLEAR_BIT(&(iLocal_108[iVar0]), 1);
									iLocal_107[iVar0]++;
									iLocal_118++;
								}
								else
								{
									iLocal_107[iVar0] = 99;
								}
							}
						}
					}
					else
					{
						iLocal_107[iVar0] = 99;
					}
				}
				else if (iLocal_107[iVar0] == 1)
				{
					bVar8 = false;
					VEHICLE::REQUEST_VEHICLE_RECORDING(iLocal_106[iVar0], &cLocal_143);
					if (BitTest(iLocal_108[iVar0], 0))
					{
						STREAMING::REQUEST_MODEL(__LIB_15__::func_909());
						bVar8 = STREAMING::HAS_MODEL_LOADED(__LIB_15__::func_909());
					}
					else if (!bLocal_56 && ((!BitTest(iLocal_108[iVar0], 2) && bVar10) || (BitTest(iLocal_108[iVar0], 2) && bVar11)))
					{
						bVar8 = true;
					}
					else
					{
						STREAMING::REQUEST_MODEL(func_635());
						bVar8 = STREAMING::HAS_MODEL_LOADED(func_635());
					}
					if (bVar8)
					{
						if (!ENTITY::DOES_ENTITY_EXIST(iLocal_162[iVar0]))
						{
							STREAMING::REQUEST_MODEL(iLocal_155[iVar0]);
							if (STREAMING::HAS_MODEL_LOADED(iLocal_155[iVar0]) && VEHICLE::HAS_VEHICLE_RECORDING_BEEN_LOADED(iLocal_106[iVar0], &cLocal_143))
							{
								if (fLocal_84 >= (fLocal_76[iVar0] - (fLocal_97 * fParam1)))
								{
									if ((iLocal_43 || bParam2) || (!bLocal_60 && !func_918(Local_129[iVar0 /*3*/], Var5, 5f, fLocal_95)))
									{
										if (iLocal_39)
										{
											func_917(Local_129[iVar0 /*3*/], Var5, fLocal_88);
										}
										iLocal_162[iVar0] = VEHICLE::CREATE_VEHICLE(iLocal_155[iVar0], Local_129[iVar0 /*3*/], 0f, false, false, false);
										if (iLocal_155[iVar0] == joaat("polmav"))
										{
											VEHICLE::SET_VEHICLE_LIVERY(iLocal_162[iVar0], 0);
										}
										if (uLocal_52 && !BitTest(iLocal_108[iVar0], 0))
										{
											func_916(iLocal_162[iVar0]);
										}
										if (BitTest(iLocal_108[iVar0], 3))
										{
											ENTITY::SET_ENTITY_SHOULD_FREEZE_WAITING_ON_COLLISION(iLocal_162[iVar0], true);
										}
										ENTITY::SET_ENTITY_COORDS_NO_OFFSET(iLocal_162[iVar0], Local_129[iVar0 /*3*/], false, false, true);
										ENTITY::SET_ENTITY_QUATERNION(iLocal_162[iVar0], fLocal_72[iVar0], fLocal_73[iVar0], fLocal_74[iVar0], fLocal_75[iVar0]);
										if (VEHICLE::IS_THIS_MODEL_A_CAR(iLocal_155[iVar0]) || VEHICLE::IS_THIS_MODEL_A_BIKE(iLocal_155[iVar0]))
										{
											VEHICLE::SET_VEHICLE_ON_GROUND_PROPERLY(iLocal_162[iVar0], 5f);
										}
										if (!BitTest(iLocal_108[iVar0], 0))
										{
											VEHICLE::SET_VEHICLE_ENGINE_ON(iLocal_162[iVar0], true, true, false);
											if (CLOCK::GET_CLOCK_HOURS() > 19 || CLOCK::GET_CLOCK_HOURS() < 7)
											{
												VEHICLE::SET_VEHICLE_LIGHTS(iLocal_162[iVar0], 3);
											}
										}
										ENTITY::FREEZE_ENTITY_POSITION(iLocal_162[iVar0], true);
										STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(iLocal_155[iVar0]);
										iLocal_118 = (iLocal_118 - 1);
										iLocal_107[iVar0]++;
										bLocal_60 = true;
									}
								}
							}
						}
						else if (!ENTITY::IS_ENTITY_DEAD(iLocal_162[iVar0], false) && VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_162[iVar0], false))
						{
							ENTITY::SET_ENTITY_COORDS_NO_OFFSET(iLocal_162[iVar0], Local_129[iVar0 /*3*/], false, false, true);
							ENTITY::SET_ENTITY_QUATERNION(iLocal_162[iVar0], fLocal_72[iVar0], fLocal_73[iVar0], fLocal_74[iVar0], fLocal_75[iVar0]);
							if (VEHICLE::IS_THIS_MODEL_A_CAR(iLocal_155[iVar0]) || VEHICLE::IS_THIS_MODEL_A_BIKE(iLocal_155[iVar0]))
							{
								VEHICLE::SET_VEHICLE_ON_GROUND_PROPERLY(iLocal_162[iVar0], 5f);
							}
							ENTITY::FREEZE_ENTITY_POSITION(iLocal_162[iVar0], true);
							STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(iLocal_155[iVar0]);
							iLocal_118 = (iLocal_118 - 1);
							iLocal_107[iVar0]++;
						}
					}
				}
				else if (iLocal_107[iVar0] == 2)
				{
					VEHICLE::REQUEST_VEHICLE_RECORDING(iLocal_106[iVar0], &cLocal_143);
					if (!BitTest(iLocal_108[iVar0], 1))
					{
						bVar8 = false;
						if (BitTest(iLocal_108[iVar0], 0))
						{
							STREAMING::REQUEST_MODEL(__LIB_15__::func_909());
							bVar8 = STREAMING::HAS_MODEL_LOADED(__LIB_15__::func_909());
							iVar13 = 2;
						}
						else if (!bLocal_56 && ((!BitTest(iLocal_108[iVar0], 2) && bVar10) || (BitTest(iLocal_108[iVar0], 2) && bVar11)))
						{
							bVar8 = true;
							iVar13 = 1;
						}
						else
						{
							STREAMING::REQUEST_MODEL(func_635());
							bVar8 = STREAMING::HAS_MODEL_LOADED(func_635());
							iVar13 = 0;
						}
						if (!ENTITY::IS_ENTITY_DEAD(iLocal_162[iVar0], false))
						{
							if (!bLocal_60 && VEHICLE::IS_VEHICLE_SEAT_FREE(iLocal_162[iVar0], -1, false))
							{
								if (bVar8)
								{
									if ((SYSTEM::VDIST2(ENTITY::GET_ENTITY_COORDS(iLocal_162[iVar0], true), Var5) < 10000f || bParam2) || iLocal_43)
									{
										func_915(&(iLocal_162[iVar0]), iVar13, 1);
										MISC::SET_BIT(&(iLocal_108[iVar0]), 1);
									}
								}
							}
						}
					}
					if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_162[iVar0], false))
					{
						if (fLocal_84 >= fLocal_76[iVar0])
						{
							if (15 > iLocal_111)
							{
								fVar6 = (fLocal_84 - fLocal_76[iVar0]);
								fVar6 = (fVar6 * fLocal_77[iVar0]);
								if (VEHICLE::HAS_VEHICLE_RECORDING_BEEN_LOADED(iLocal_106[iVar0], &cLocal_143))
								{
									if (fVar6 < VEHICLE::GET_TOTAL_DURATION_OF_VEHICLE_RECORDING(iLocal_106[iVar0], &cLocal_143))
									{
										Var3 = { ENTITY::GET_ENTITY_COORDS(iLocal_162[iVar0], true) };
										Var4 = { VEHICLE::GET_POSITION_OF_VEHICLE_RECORDING_AT_TIME(iLocal_106[iVar0], fVar6, &cLocal_143) };
										if (((!func_918(Var3, Var5, 5f, fLocal_95) && func_918(Var4, Var5, 5f, fLocal_95)) && !iLocal_43) && !bParam2)
										{
											if (!BitTest(iLocal_108[iVar0], 1))
											{
												func_915(&(iLocal_162[iVar0]), iVar13, 1);
											}
											iLocal_111++;
											iLocal_107[iVar0]++;
										}
										else if (((!bLocal_60 || BitTest(iLocal_108[iVar0], 1)) || iLocal_43) || bParam2)
										{
											if (func_908(&(iLocal_162[iVar0]), iLocal_106[iVar0], fVar6, 1, 0, 0, bLocal_58, bLocal_57))
											{
												VEHICLE::SET_PLAYBACK_SPEED(iLocal_162[iVar0], (fParam1 * fLocal_77[iVar0]));
												if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_162[iVar0], false))
												{
													if (BitTest(iLocal_108[iVar0], 0))
													{
														VEHICLE::SET_VEHICLE_ENGINE_ON(iLocal_162[iVar0], true, true, false);
														VEHICLE::SET_VEHICLE_SIREN(iLocal_162[iVar0], true);
														VEHICLE::SET_VEHICLE_LIGHTS(iLocal_162[iVar0], 2);
														if (!VEHICLE::IS_THIS_MODEL_A_BIKE(iLocal_155[iVar0]))
														{
															AUDIO::SET_SIREN_WITH_NO_DRIVER(iLocal_162[iVar0], true);
														}
													}
												}
												if (!BitTest(iLocal_108[iVar0], 1))
												{
													func_915(&(iLocal_162[iVar0]), iVar13, 1);
												}
												iLocal_111++;
												iLocal_107[iVar0]++;
											}
										}
									}
									else
									{
										if (!BitTest(iLocal_108[iVar0], 1))
										{
											func_915(&(iLocal_162[iVar0]), iVar13, 1);
										}
										iLocal_111++;
										iLocal_107[iVar0]++;
									}
								}
							}
							else
							{
								if (!BitTest(iLocal_108[iVar0], 1))
								{
									func_915(&(iLocal_162[iVar0]), iVar13, 1);
								}
								iLocal_111++;
								iLocal_107[iVar0]++;
							}
						}
					}
					else
					{
						if (!BitTest(iLocal_108[iVar0], 1))
						{
							func_915(&(iLocal_162[iVar0]), iVar13, 1);
						}
						iLocal_111++;
						iLocal_107[iVar0]++;
					}
				}
				else if (iLocal_107[iVar0] == 3)
				{
					if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_162[iVar0], false))
					{
						if (VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(iLocal_162[iVar0]))
						{
							iVar1 = VEHICLE::GET_PED_IN_VEHICLE_SEAT(iLocal_162[iVar0], -1, false);
							if (!PED::IS_PED_INJURED(iVar1))
							{
								if (bVar9)
								{
									if (((!bLocal_33 && !iLocal_30) && !bLocal_49) && (((!bLocal_58 && !bLocal_57) && ENTITY::IS_ENTITY_TOUCHING_ENTITY(PLAYER::PLAYER_PED_ID(), iLocal_162[iVar0])) || func_914(iLocal_162[iVar0])))
									{
										if (ENTITY::DOES_ENTITY_EXIST(iVar2))
										{
											bVar8 = false;
											if (bLocal_51)
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
												else if (MISC::ABSF((fVar7 - ENTITY::GET_ENTITY_SPEED(iLocal_162[iVar0]))) > 15f)
												{
													bVar8 = true;
												}
												else if (!__LIB_15__::func_925(iLocal_162[iVar0], iVar2, 45f))
												{
													bVar8 = true;
												}
												else if (__LIB_15__::func_941(iVar2, iLocal_162[iVar0], 0))
												{
													bVar8 = true;
												}
											}
											if (bVar8)
											{
												func_910(iLocal_162[iVar0]);
												iLocal_107[iVar0]++;
											}
										}
									}
									else
									{
										VEHICLE::SET_PLAYBACK_SPEED(iLocal_162[iVar0], (fParam1 * fLocal_77[iVar0]));
									}
								}
							}
							else
							{
								VEHICLE::STOP_PLAYBACK_RECORDED_VEHICLE(iLocal_162[iVar0]);
							}
						}
						else
						{
							iLocal_107[iVar0]++;
						}
					}
					else
					{
						iLocal_107[iVar0]++;
					}
				}
				else if (iLocal_107[iVar0] == 4)
				{
					if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_162[iVar0], false))
					{
						if (!VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(iLocal_162[iVar0]))
						{
							iLocal_107[iVar0]++;
						}
						else
						{
							iVar1 = VEHICLE::GET_PED_IN_VEHICLE_SEAT(iLocal_162[iVar0], -1, false);
							if (!PED::IS_PED_INJURED(iVar1))
							{
								VEHICLE::SET_PLAYBACK_SPEED(iLocal_162[iVar0], (fParam1 * fLocal_77[iVar0]));
							}
							else
							{
								VEHICLE::STOP_PLAYBACK_RECORDED_VEHICLE(iLocal_162[iVar0]);
							}
							if (VEHICLE::HAS_VEHICLE_RECORDING_BEEN_LOADED(iLocal_106[iVar0], &cLocal_143))
							{
								if (fLocal_84 > (fLocal_76[iVar0] + VEHICLE::GET_TOTAL_DURATION_OF_VEHICLE_RECORDING(iLocal_106[iVar0], &cLocal_143)))
								{
									VEHICLE::STOP_PLAYBACK_RECORDED_VEHICLE(iLocal_162[iVar0]);
								}
							}
							else
							{
								VEHICLE::STOP_PLAYBACK_RECORDED_VEHICLE(iLocal_162[iVar0]);
							}
						}
					}
					else
					{
						iLocal_107[iVar0]++;
					}
				}
				else if (iLocal_107[iVar0] == 5)
				{
					if (!iLocal_162[iVar0] == iLocal_166)
					{
						if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_162[iVar0], false))
						{
							iVar1 = VEHICLE::GET_PED_IN_VEHICLE_SEAT(iLocal_162[iVar0], -1, false);
							if (!PED::IS_PED_INJURED(iVar1))
							{
								iVar14 = TASK::GET_SCRIPT_TASK_STATUS(iVar1, joaat("SCRIPT_TASK_PERFORM_SEQUENCE"));
								if (iVar14 == 7)
								{
									fVar7 = ENTITY::GET_ENTITY_SPEED(iLocal_162[iVar0]);
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
						if (!bLocal_41 && !bLocal_54)
						{
							if (iLocal_106[iVar0] > 0)
							{
								VEHICLE::REMOVE_VEHICLE_RECORDING(iLocal_106[iVar0], &cLocal_143);
							}
						}
						if (!bLocal_31)
						{
							if (!bLocal_59)
							{
								__LIB_15__::func_908(iLocal_162[iVar0]);
							}
						}
						else if (ENTITY::DOES_ENTITY_EXIST(iLocal_162[iVar0]))
						{
							VEHICLE::DELETE_VEHICLE(&(iLocal_162[iVar0]));
						}
					}
					iLocal_111 = (iLocal_111 - 1);
					iLocal_107[iVar0] = 99;
				}
				if (!bVar12)
				{
					iLocal_116 = iVar0;
					bVar12 = true;
				}
			}
			iVar0++;
		}
	}
	else
	{
		func_627();
	}
}

void func_910(int iParam0)//Position - 0xAA699
{
	if (VEHICLE::IS_VEHICLE_DRIVEABLE(iParam0, false))
	{
		func_629(iParam0);
		VEHICLE::SET_PLAYBACK_TO_USE_AI(iParam0, 786603);
	}
}

int func_914(int iParam0)//Position - 0xAA7FC
{
	int iVar0;
	int iVar1;
	int iVar2;
	if (bLocal_55)
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

int func_915(var uParam0, int iParam1, bool bParam2)//Position - 0xAA85A
{
	int iVar0;
	if (!ENTITY::IS_ENTITY_DEAD(*uParam0, false))
	{
		if (VEHICLE::IS_VEHICLE_SEAT_FREE(*uParam0, -1, false))
		{
			if (iParam1 == 2)
			{
				iVar0 = PED::CREATE_PED_INSIDE_VEHICLE(*uParam0, 6, __LIB_15__::func_909(), -1, false, false);
				PED::SET_PED_RELATIONSHIP_GROUP_HASH(iVar0, iLocal_152);
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
				iVar0 = PED::CREATE_PED_INSIDE_VEHICLE(*uParam0, 4, func_635(), -1, false, false);
				if (bLocal_61)
				{
					STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(func_635());
				}
			}
			if (bParam2)
			{
				ENTITY::SET_ENTITY_ONLY_DAMAGED_BY_PLAYER(iVar0, true);
				PED::SET_PED_SUFFERS_CRITICAL_HITS(iVar0, false);
				PED::SET_PED_CONFIG_FLAG(iVar0, 32, false);
			}
			if (bLocal_62)
			{
				PED::SET_PED_FLEE_ATTRIBUTES(iVar0, 8192, true);
				PED::SET_PED_FLEE_ATTRIBUTES(iVar0, 65536, true);
				PED::SET_PED_FLEE_ATTRIBUTES(iVar0, 2, false);
				VEHICLE::SET_DISABLE_PRETEND_OCCUPANTS(*uParam0, true);
			}
			PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iVar0, true);
			__LIB_15__::func_895(iVar0);
			bLocal_60 = true;
			return 1;
		}
		else
		{
			return 1;
		}
	}
	return 0;
}

void func_916(int iParam0)//Position - 0xAA951
{
	int iVar0;
	int iVar1;
	iVar0 = MISC::GET_RANDOM_INT_IN_RANGE(0, 12);
	if (iLocal_157 >= -1 && iLocal_158 >= -1)
	{
		while (iVar0 == iLocal_157 || iVar0 == iLocal_158)
		{
			iVar0++;
		}
	}
	else if (iLocal_157 >= -1)
	{
		if (iVar0 == iLocal_157)
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

void func_917(struct<3> Param0, struct<3> Param1, float fParam2)//Position - 0xAAACA
{
	bool bVar0;
	int iVar1;
	bVar0 = true;
	if (!bLocal_42)
	{
		if (!func_918(Param0, Param1, fParam2, 200f))
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

int func_918(struct<3> Param0, struct<3> Param1, float fParam2, float fParam3)//Position - 0xAAB3D
{
	if (!CAM::IS_SCREEN_FADED_OUT())
	{
		if (!bLocal_42)
		{
			if (!iLocal_29)
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

float func_919(int iParam0)//Position - 0xAAB84
{
	float fVar0;
	VEHICLE::REQUEST_VEHICLE_RECORDING(iParam0, &cLocal_143);
	while (!VEHICLE::HAS_VEHICLE_RECORDING_BEEN_LOADED(iParam0, &cLocal_143))
	{
		SYSTEM::WAIT(0);
	}
	fVar0 = VEHICLE::GET_TOTAL_DURATION_OF_VEHICLE_RECORDING(iParam0, &cLocal_143);
	VEHICLE::REMOVE_VEHICLE_RECORDING(iParam0, &cLocal_143);
	return fVar0;
}

void func_920(int iParam0)//Position - 0xAABC0
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
		iVar0 = iLocal_115;
		while (iVar0 < 25)
		{
			switch (iLocal_109[iVar0])
			{
				case 0:
					if (!iLocal_154[iVar0] == 0)
					{
						if (ENTITY::IS_ENTITY_AT_COORD(iParam0, Local_128[iVar0 /*3*/], fLocal_82, fLocal_82, fLocal_82, false, true, 0))
						{
							iLocal_117++;
							iLocal_109[iVar0]++;
						}
					}
					else
					{
						iLocal_109[iVar0] = 99;
					}
					break;
				case 1:
					if (10 > iLocal_112)
					{
						if (!ENTITY::DOES_ENTITY_EXIST(iLocal_161[iVar0]))
						{
							STREAMING::REQUEST_MODEL(iLocal_154[iVar0]);
							if (STREAMING::HAS_MODEL_LOADED(iLocal_154[iVar0]))
							{
								if ((iLocal_29 || iLocal_43) || (!bLocal_60 && !func_918(Local_128[iVar0 /*3*/], Var1, 5f, fLocal_95)))
								{
									if (iLocal_39)
									{
										func_917(Local_128[iVar0 /*3*/], Var1, fLocal_88);
									}
									iLocal_161[iVar0] = VEHICLE::CREATE_VEHICLE(iLocal_154[iVar0], Local_128[iVar0 /*3*/], 0f, false, false, false);
									if (iLocal_154[iVar0] == joaat("polmav"))
									{
										VEHICLE::SET_VEHICLE_LIVERY(iLocal_161[iVar0], 0);
									}
									ENTITY::SET_ENTITY_QUATERNION(iLocal_161[iVar0], fLocal_78[iVar0], fLocal_79[iVar0], fLocal_80[iVar0], fLocal_81[iVar0]);
									STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(iLocal_154[iVar0]);
									if (VEHICLE::IS_VEHICLE_MODEL(iLocal_161[iVar0], __LIB_15__::func_910()))
									{
										VEHICLE::SET_VEHICLE_SIREN(iLocal_161[iVar0], true);
										if (!VEHICLE::IS_THIS_MODEL_A_BIKE(iLocal_154[iVar0]))
										{
											AUDIO::SET_SIREN_WITH_NO_DRIVER(iLocal_161[iVar0], true);
										}
									}
									if (VEHICLE::IS_VEHICLE_MODEL(iLocal_161[iVar0], __LIB_15__::func_911()))
									{
										VEHICLE::SET_VEHICLE_COLOURS(iLocal_161[iVar0], 0, 0);
									}
									ENTITY::SET_ENTITY_SHOULD_FREEZE_WAITING_ON_COLLISION(iLocal_161[iVar0], true);
									iLocal_117 = (iLocal_117 - 1);
									iLocal_112++;
									iLocal_109[iVar0]++;
									bLocal_60 = true;
								}
							}
						}
						else
						{
							iLocal_117 = (iLocal_117 - 1);
							iLocal_112++;
							iLocal_109[iVar0]++;
						}
					}
					break;
				case 2:
					if (!bVar3)
					{
						if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_161[iVar0], false))
						{
							Var2 = { ENTITY::GET_ENTITY_COORDS(iLocal_161[iVar0], true) };
						}
						if (fLocal_96 == 0f || SYSTEM::VDIST2(Var1, Var2) < (fLocal_96 * fLocal_96))
						{
							if (!__LIB_15__::func_941(iLocal_161[iVar0], iParam0, 0))
							{
								if (!bLocal_31)
								{
									__LIB_15__::func_908(iLocal_161[iVar0]);
								}
								else
								{
									VEHICLE::DELETE_VEHICLE(&(iLocal_161[iVar0]));
								}
								iLocal_112 = (iLocal_112 - 1);
								iLocal_109[iVar0] = 99;
								bVar3 = true;
							}
						}
					}
					break;
			}
			if (iLocal_109[iVar0] != 99)
			{
				if (!bVar4)
				{
					iLocal_115 = iVar0;
					bVar4 = true;
				}
			}
			iVar0++;
		}
	}
	else
	{
		func_630();
	}
}

void func_921(int iParam0, float fParam1, int iParam2)//Position - 0xAAEB8
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
			fLocal_84 = VEHICLE::GET_TIME_POSITION_IN_RECORDING(iParam0);
		}
		iVar16 = -1;
		bVar17 = false;
		bVar18 = false;
		iVar0 = iLocal_114;
		while (iVar0 < 340 && !bVar17)
		{
			if (iLocal_104[iVar0] != 99)
			{
				if (iLocal_104[iVar0] == 0)
				{
					if (iLocal_103[iVar0] > 0 && iLocal_153[iVar0] != 0)
					{
						if (!iLocal_29)
						{
							if (fLocal_84 < (fLocal_67[iVar0] + 20000f))
							{
								if (fLocal_84 >= (fLocal_67[iVar0] - (7000f * fParam1)))
								{
									if (__LIB_15__::func_896(iLocal_153[iVar0]))
									{
										MISC::SET_BIT(&(iLocal_105[iVar0]), 0);
									}
									else if (VEHICLE::IS_THIS_MODEL_A_BIKE(iLocal_153[iVar0]))
									{
										MISC::SET_BIT(&(iLocal_105[iVar0]), 2);
									}
									MISC::CLEAR_BIT(&(iLocal_105[iVar0]), 1);
									iLocal_119++;
									iLocal_104[iVar0]++;
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
								func_923(iVar0, 1090519040);
							}
						}
						else
						{
							fVar9 = (fLocal_84 - fLocal_67[iVar0]);
							if (fVar9 >= 0f)
							{
								if (fVar9 < func_919(iLocal_103[iVar0]))
								{
									if (__LIB_15__::func_896(iLocal_153[iVar0]))
									{
										MISC::SET_BIT(&(iLocal_105[iVar0]), 0);
									}
									else if (VEHICLE::IS_THIS_MODEL_A_BIKE(iLocal_153[iVar0]))
									{
										MISC::SET_BIT(&(iLocal_105[iVar0]), 2);
									}
									MISC::CLEAR_BIT(&(iLocal_105[iVar0]), 1);
									iLocal_119++;
									iLocal_104[iVar0]++;
								}
								else
								{
									func_923(iVar0, 1090519040);
								}
							}
						}
					}
					else
					{
						func_923(iVar0, 1090519040);
					}
				}
				else if (iLocal_104[iVar0] == 1)
				{
					VEHICLE::REQUEST_VEHICLE_RECORDING(iLocal_103[iVar0], &cLocal_143);
					bVar11 = false;
					if (BitTest(iLocal_105[iVar0], 0))
					{
						STREAMING::REQUEST_MODEL(__LIB_15__::func_909());
						if (STREAMING::HAS_MODEL_LOADED(__LIB_15__::func_909()))
						{
							bVar11 = true;
						}
					}
					else if (!bLocal_56 && ((!BitTest(iLocal_105[iVar0], 2) && bVar13) || (BitTest(iLocal_105[iVar0], 2) && bVar14)))
					{
						bVar11 = true;
					}
					else
					{
						STREAMING::REQUEST_MODEL(func_635());
						bVar11 = STREAMING::HAS_MODEL_LOADED(func_635());
					}
					if (!ENTITY::DOES_ENTITY_EXIST(iLocal_159[iVar0]))
					{
						STREAMING::REQUEST_MODEL(iLocal_153[iVar0]);
						if ((STREAMING::HAS_MODEL_LOADED(iLocal_153[iVar0]) && VEHICLE::HAS_VEHICLE_RECORDING_BEEN_LOADED(iLocal_103[iVar0], &cLocal_143)) && bVar11)
						{
							if (fLocal_84 >= (fLocal_67[iVar0] - (fLocal_97 * fParam1)))
							{
								if ((iLocal_43 || iParam2) || (!bLocal_60 && !func_918(Local_127[iVar0 /*3*/], Var8, 5f, fLocal_95)))
								{
									if (iLocal_39)
									{
										func_917(Local_127[iVar0 /*3*/], Var8, fLocal_88);
									}
									iLocal_159[iVar0] = VEHICLE::CREATE_VEHICLE(iLocal_153[iVar0], Local_127[iVar0 /*3*/], 0f, false, false, false);
									if (iLocal_153[iVar0] == joaat("polmav"))
									{
										VEHICLE::SET_VEHICLE_LIVERY(iLocal_159[iVar0], 0);
									}
									if (uLocal_52 && !BitTest(iLocal_105[iVar0], 0))
									{
										func_916(iLocal_159[iVar0]);
									}
									ENTITY::SET_ENTITY_COORDS_NO_OFFSET(iLocal_159[iVar0], Local_127[iVar0 /*3*/], false, false, true);
									ENTITY::SET_ENTITY_QUATERNION(iLocal_159[iVar0], fLocal_63[iVar0], fLocal_64[iVar0], fLocal_65[iVar0], fLocal_66[iVar0]);
									if (VEHICLE::IS_THIS_MODEL_A_CAR(iLocal_153[iVar0]) || VEHICLE::IS_THIS_MODEL_A_BIKE(iLocal_153[iVar0]))
									{
										VEHICLE::SET_VEHICLE_ON_GROUND_PROPERLY(iLocal_159[iVar0], 5f);
									}
									if (BitTest(iLocal_105[iVar0], 3))
									{
										ENTITY::SET_ENTITY_SHOULD_FREEZE_WAITING_ON_COLLISION(iLocal_159[iVar0], true);
									}
									if (!BitTest(iLocal_105[iVar0], 0))
									{
										VEHICLE::SET_VEHICLE_ENGINE_ON(iLocal_159[iVar0], true, true, false);
										if (CLOCK::GET_CLOCK_HOURS() > 19 || CLOCK::GET_CLOCK_HOURS() < 7)
										{
											VEHICLE::SET_VEHICLE_LIGHTS(iLocal_159[iVar0], 3);
										}
									}
									ENTITY::FREEZE_ENTITY_POSITION(iLocal_159[iVar0], true);
									ENTITY::SET_ENTITY_ONLY_DAMAGED_BY_PLAYER(iLocal_159[iVar0], true);
									STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(iLocal_153[iVar0]);
									iLocal_119 = (iLocal_119 - 1);
									iLocal_104[iVar0]++;
									bLocal_60 = true;
								}
								else if (fLocal_84 > fLocal_67[iVar0])
								{
									iLocal_119 = (iLocal_119 - 1);
									func_923(iVar0, 1090519040);
								}
							}
						}
					}
				}
				else if (iLocal_104[iVar0] == 2)
				{
					bVar11 = false;
					if (((iVar3 < 8 && (iVar0 > iLocal_125 || iLocal_125 == 0)) || iLocal_43) || iParam2)
					{
						if (!BitTest(iLocal_105[iVar0], 1))
						{
							if (BitTest(iLocal_105[iVar0], 0))
							{
								STREAMING::REQUEST_MODEL(__LIB_15__::func_909());
								bVar11 = STREAMING::HAS_MODEL_LOADED(__LIB_15__::func_909());
								iVar15 = 2;
							}
							else if (!bLocal_56 && ((!BitTest(iLocal_105[iVar0], 2) && bVar13) || (BitTest(iLocal_105[iVar0], 2) && bVar14)))
							{
								bVar11 = true;
								iVar15 = 1;
							}
							else
							{
								STREAMING::REQUEST_MODEL(func_635());
								bVar11 = STREAMING::HAS_MODEL_LOADED(func_635());
								iVar15 = 0;
							}
							if (!ENTITY::IS_ENTITY_DEAD(iLocal_159[iVar0], false))
							{
								if (!bLocal_60 && VEHICLE::IS_VEHICLE_SEAT_FREE(iLocal_159[iVar0], -1, false))
								{
									if (bVar11)
									{
										if ((SYSTEM::VDIST2(ENTITY::GET_ENTITY_COORDS(iLocal_159[iVar0], true), Var8) < 10000f || iParam2) || iLocal_43)
										{
											func_915(&(iLocal_159[iVar0]), iVar15, 0);
											MISC::SET_BIT(&(iLocal_105[iVar0]), 1);
										}
									}
								}
							}
						}
						if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_159[iVar0], false))
						{
							VEHICLE::REQUEST_VEHICLE_RECORDING(iLocal_103[iVar0], &cLocal_143);
							if (fLocal_84 >= fLocal_67[iVar0])
							{
								if (12 > iLocal_110)
								{
									fVar9 = (fLocal_84 - fLocal_67[iVar0]);
									if (VEHICLE::HAS_VEHICLE_RECORDING_BEEN_LOADED(iLocal_103[iVar0], &cLocal_143))
									{
										if (fVar9 < VEHICLE::GET_TOTAL_DURATION_OF_VEHICLE_RECORDING(iLocal_103[iVar0], &cLocal_143))
										{
											Var6 = { ENTITY::GET_ENTITY_COORDS(iLocal_159[iVar0], true) };
											Var7 = { VEHICLE::GET_POSITION_OF_VEHICLE_RECORDING_AT_TIME(iLocal_103[iVar0], fVar9, &cLocal_143) };
											if (!func_918(Var6, Var8, 5f, fLocal_95) && func_918(Var7, Var8, 5f, fLocal_95))
											{
												if (!BitTest(iLocal_105[iVar0], 1))
												{
													func_915(&(iLocal_159[iVar0]), iVar15, 0);
												}
												func_923(iVar0, 1090519040);
											}
											else if (((!bLocal_60 || BitTest(iLocal_105[iVar0], 1)) || iLocal_43) || iParam2)
											{
												if (func_908(&(iLocal_159[iVar0]), iLocal_103[iVar0], fVar9, 1, 0, 0, 1, bLocal_57))
												{
													if (!BitTest(iLocal_105[iVar0], 1))
													{
														func_915(&(iLocal_159[iVar0]), iVar15, 0);
													}
													ENTITY::SET_ENTITY_COLLISION(iLocal_159[iVar0], true, false);
													VEHICLE::SET_PLAYBACK_SPEED(iLocal_159[iVar0], fParam1);
													iLocal_110++;
													iLocal_104[iVar0]++;
												}
											}
										}
										else
										{
											if (!BitTest(iLocal_105[iVar0], 1))
											{
												func_915(&(iLocal_159[iVar0]), iVar15, 0);
											}
											func_923(iVar0, 1090519040);
										}
									}
									else if (fVar9 > VEHICLE::GET_TOTAL_DURATION_OF_VEHICLE_RECORDING(iLocal_103[iVar0], &cLocal_143))
									{
										if (!BitTest(iLocal_105[iVar0], 1))
										{
											func_915(&(iLocal_159[iVar0]), iVar15, 0);
										}
										func_923(iVar0, 1090519040);
									}
								}
								else
								{
									if (!BitTest(iLocal_105[iVar0], 1))
									{
										func_915(&(iLocal_159[iVar0]), iVar15, 0);
									}
									func_923(iVar0, 1090519040);
								}
							}
							else if (iLocal_40 && !iLocal_48)
							{
								if (!BitTest(iLocal_105[iVar0], 1))
								{
									func_915(&(iLocal_159[iVar0]), iVar15, 0);
								}
								func_923(iVar0, 1090519040);
							}
						}
						else
						{
							if (!BitTest(iLocal_105[iVar0], 1))
							{
								func_915(&(iLocal_159[iVar0]), iVar15, 0);
							}
							func_923(iVar0, 1090519040);
						}
						iVar3++;
						iLocal_125 = iVar0;
					}
				}
				else if (iLocal_104[iVar0] == 3)
				{
					if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_159[iVar0], false))
					{
						if (VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(iLocal_159[iVar0]))
						{
							iVar4 = VEHICLE::GET_PED_IN_VEHICLE_SEAT(iLocal_159[iVar0], -1, false);
							if (!PED::IS_PED_INJURED(iVar4))
							{
								if (bVar12)
								{
									bVar18 = false;
									if (!bLocal_38)
									{
										if ((!bLocal_33 && !iLocal_30) && func_914(iLocal_159[iVar0]))
										{
											if (iVar2 < 3 && (iVar0 > iLocal_124 || iLocal_124 == 0))
											{
												if (!ENTITY::IS_ENTITY_DEAD(iVar5, false))
												{
													bVar11 = false;
													if (!__LIB_15__::func_926(iLocal_159[iVar0], iVar5) || __LIB_15__::func_941(iVar5, iLocal_159[iVar0], 0))
													{
														bVar18 = true;
													}
												}
												iLocal_124 = iVar0;
												iVar2++;
											}
										}
										else if (((!bLocal_53 && !BitTest(iLocal_105[iVar0], 4)) && iVar2 < 3) && (iVar0 > iLocal_124 || iLocal_124 == 0))
										{
											Var19 = { ENTITY::GET_OFFSET_FROM_ENTITY_GIVEN_WORLD_COORDS(iParam0, ENTITY::GET_ENTITY_COORDS(iLocal_159[iVar0], true)) };
											if (Var19.f_1 < 0f)
											{
												if (MISC::ABSF(Var19.f_1) > MISC::ABSF(Var19.f_0))
												{
													bVar18 = true;
												}
											}
											iVar2++;
											iLocal_124 = iVar0;
										}
									}
									if (bVar18)
									{
										func_910(iLocal_159[iVar0]);
										iLocal_104[iVar0]++;
									}
									else
									{
										VEHICLE::SET_PLAYBACK_SPEED(iLocal_159[iVar0], fParam1);
									}
								}
							}
							else
							{
								VEHICLE::STOP_PLAYBACK_RECORDED_VEHICLE(iLocal_159[iVar0]);
							}
						}
						else
						{
							iLocal_104[iVar0]++;
						}
					}
					else
					{
						iLocal_104[iVar0]++;
					}
				}
				else if (iLocal_104[iVar0] == 4)
				{
					if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_159[iVar0], false))
					{
						if (!VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(iLocal_159[iVar0]))
						{
							iLocal_104[iVar0]++;
						}
						else
						{
							iVar4 = VEHICLE::GET_PED_IN_VEHICLE_SEAT(iLocal_159[iVar0], -1, false);
							if (!PED::IS_PED_INJURED(iVar4))
							{
								VEHICLE::SET_PLAYBACK_SPEED(iLocal_159[iVar0], fParam1);
							}
							else
							{
								VEHICLE::STOP_PLAYBACK_RECORDED_VEHICLE(iLocal_159[iVar0]);
							}
							if (VEHICLE::HAS_VEHICLE_RECORDING_BEEN_LOADED(iLocal_103[iVar0], &cLocal_143))
							{
								if (fLocal_84 > (fLocal_67[iVar0] + VEHICLE::GET_TOTAL_DURATION_OF_VEHICLE_RECORDING(iLocal_103[iVar0], &cLocal_143)))
								{
									VEHICLE::STOP_PLAYBACK_RECORDED_VEHICLE(iLocal_159[iVar0]);
								}
							}
							else
							{
								VEHICLE::STOP_PLAYBACK_RECORDED_VEHICLE(iLocal_159[iVar0]);
							}
						}
					}
					else
					{
						iLocal_104[iVar0]++;
					}
				}
				else if (iLocal_104[iVar0] == 5)
				{
					if (!ENTITY::IS_ENTITY_DEAD(iLocal_159[iVar0], false))
					{
						fVar10 = ENTITY::GET_ENTITY_SPEED(iLocal_159[iVar0]);
					}
					iLocal_110 = (iLocal_110 - 1);
					func_923(iVar0, fVar10);
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
			iLocal_114 = iVar16;
		}
		if (iVar2 < 3)
		{
			iLocal_124 = 0;
		}
		if (iVar3 < 8)
		{
			iLocal_125 = 0;
		}
	}
	else
	{
		func_631();
	}
}

void func_923(int iParam0, float fParam1)//Position - 0xABA58
{
	int iVar0;
	if (!iLocal_153[iParam0] == 0)
	{
		STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(iLocal_153[iParam0]);
	}
	if (!ENTITY::IS_ENTITY_DEAD(iLocal_159[iParam0], false))
	{
		ENTITY::SET_ENTITY_COLLISION(iLocal_159[iParam0], true, false);
		ENTITY::FREEZE_ENTITY_POSITION(iLocal_159[iParam0], false);
		iVar0 = VEHICLE::GET_PED_IN_VEHICLE_SEAT(iLocal_159[iParam0], -1, false);
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
			TASK::TASK_VEHICLE_MISSION(iVar0, iLocal_159[iParam0], 0, 1, fParam1, 786603, 5f, 5f, true);
			PED::SET_PED_FLEE_ATTRIBUTES(iVar0, 8192, true);
			if (bLocal_62)
			{
				PED::SET_PED_FLEE_ATTRIBUTES(iVar0, 65536, true);
				PED::SET_PED_FLEE_ATTRIBUTES(iVar0, 2, false);
			}
			PED::SET_PED_COMBAT_ATTRIBUTES(iVar0, 6, false);
			TASK::SET_DRIVE_TASK_CRUISE_SPEED(iVar0, fParam1);
		}
	}
	if (!bLocal_31)
	{
		if (!bLocal_59)
		{
			__LIB_15__::func_895(iVar0);
			__LIB_15__::func_908(iLocal_159[iParam0]);
		}
	}
	else
	{
		if (ENTITY::DOES_ENTITY_EXIST(iVar0))
		{
			PED::DELETE_PED(&iVar0);
		}
		if (ENTITY::DOES_ENTITY_EXIST(iLocal_159[iParam0]))
		{
			VEHICLE::DELETE_VEHICLE(&(iLocal_159[iParam0]));
		}
	}
	if (!bLocal_41 && !bLocal_54)
	{
		if (iLocal_103[iParam0] > 0)
		{
			VEHICLE::REMOVE_VEHICLE_RECORDING(iLocal_103[iParam0], &cLocal_143);
		}
	}
	iLocal_104[iParam0] = 99;
}

void func_924(int iParam0, float fParam1, float fParam2)//Position - 0xABBB3
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
			func_917(Var1, Var4, fVar5);
		}
	}
}

void func_925(int iParam0, float fParam1)//Position - 0xABC36
{
	if (!bLocal_42)
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

void func_926(int iParam0, float fParam1)//Position - 0xABC84
{
	if (!bLocal_42)
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

void func_927(int iParam0, float fParam1)//Position - 0xABCD2
{
	int iVar0;
	float fVar1;
	float fVar2;
	float fVar3;
	bool bVar4;
	if (!ENTITY::IS_ENTITY_DEAD(iParam0, false) && VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(iParam0))
	{
		fVar1 = (fLocal_98 + 2000f);
		fVar2 = (fLocal_99 + 2000f);
		bVar4 = false;
		if (fVar1 < (fParam1 + 25000f))
		{
			iVar0 = VEHICLE::GET_CURRENT_PLAYBACK_FOR_VEHICLE(iParam0);
			if (fVar1 <= VEHICLE::GET_TOTAL_DURATION_OF_VEHICLE_RECORDING_ID(iVar0))
			{
				if (iLocal_120 == 0)
				{
					Local_139 = { VEHICLE::GET_POSITION_OF_VEHICLE_RECORDING_ID_AT_TIME(iVar0, fLocal_98) };
					iLocal_120++;
				}
				else if (iLocal_120 == 1)
				{
					Local_140 = { VEHICLE::GET_POSITION_OF_VEHICLE_RECORDING_ID_AT_TIME(iVar0, fVar1) };
					iLocal_120++;
				}
				else if (!bLocal_60)
				{
					if (Local_139.f_0 > Local_140.f_0)
					{
						fVar3 = Local_139.f_0;
						Local_139.f_0 = Local_140.f_0;
						Local_140.f_0 = fVar3;
					}
					if (Local_139.f_1 > Local_140.f_1)
					{
						fVar3 = Local_139.f_1;
						Local_139.f_1 = Local_140.f_1;
						Local_140.f_1 = fVar3;
					}
					if (Local_139.f_2 > Local_140.f_2)
					{
						fVar3 = Local_139.f_2;
						Local_139.f_2 = Local_140.f_2;
						Local_140.f_2 = fVar3;
					}
					Local_139 = { Local_139 - Vector(fLocal_102, fLocal_102, fLocal_102) };
					Local_140 = { Local_140 + Vector(fLocal_102, fLocal_102, fLocal_102) };
					PATHFIND::SET_ROADS_IN_AREA(Local_139, Local_140, false, false);
					fLocal_98 = fVar1;
					iLocal_120 = 0;
				}
			}
		}
		if (fVar2 < (fParam1 - 8000f))
		{
			iVar0 = VEHICLE::GET_CURRENT_PLAYBACK_FOR_VEHICLE(iParam0);
			if (iLocal_123 == 0)
			{
				Local_141 = { VEHICLE::GET_POSITION_OF_VEHICLE_RECORDING_ID_AT_TIME(iVar0, fLocal_99) };
				iLocal_123++;
			}
			else if (iLocal_123 == 1)
			{
				Local_142 = { VEHICLE::GET_POSITION_OF_VEHICLE_RECORDING_ID_AT_TIME(iVar0, fVar2) };
				iLocal_123++;
			}
			else if (!bLocal_60 && !bVar4)
			{
				if (Local_141.f_0 > Local_142.f_0)
				{
					fVar3 = Local_141.f_0;
					Local_141.f_0 = Local_142.f_0;
					Local_142.f_0 = fVar3;
				}
				if (Local_141.f_1 > Local_142.f_1)
				{
					fVar3 = Local_141.f_1;
					Local_141.f_1 = Local_142.f_1;
					Local_142.f_1 = fVar3;
				}
				if (Local_141.f_2 > Local_142.f_2)
				{
					fVar3 = Local_141.f_2;
					Local_141.f_2 = Local_142.f_2;
					Local_142.f_2 = fVar3;
				}
				Local_141 = { Local_141 - Vector(fLocal_102, fLocal_102, fLocal_102) };
				Local_142 = { Local_142 + Vector(fLocal_102, fLocal_102, fLocal_102) };
				PATHFIND::SET_ROADS_BACK_TO_ORIGINAL(Local_141, Local_142, 1);
				fLocal_99 = fVar2;
				iLocal_123 = 0;
			}
		}
	}
}

void func_929()//Position - 0xABFC3
{
	iLocal_43 = 1;
}

void func_930(float fParam0, char* sParam1)//Position - 0xABFCE
{
	if (MISC::ARE_STRINGS_EQUAL(sParam1, sLocal_220))
	{
		if (fParam0 < 2000f)
		{
			fLocal_3256 = 1f;
		}
		else if (fParam0 < 5000f)
		{
			__LIB_15__::func_928(&fLocal_3257, &iLocal_232, iLocal_234, 2.5f, 5f, 25f, 100f, 30f, 1f, 0.7f, 0.5f, 2f, 1, 0, 1097859072, 1);
		}
		else if (fParam0 < 15000f)
		{
			__LIB_15__::func_928(&fLocal_3257, &iLocal_232, iLocal_234, 5f, 10f, 50f, 100f, 30f, 1f, 0.7f, 0.5f, 2f, 1, 0, 1097859072, 1);
		}
		else if (fParam0 < 86000f)
		{
			__LIB_15__::func_928(&fLocal_3257, &iLocal_232, iLocal_234, 5f, 10f, 50f, 100f, 30f, 1f, 0.7f, 0.5f, 2f, 1, 0, 1097859072, 1);
		}
		else if (fParam0 < 102000f)
		{
			if (VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(iLocal_234))
			{
				VEHICLE::STOP_PLAYBACK_RECORDED_VEHICLE(iLocal_234);
			}
			if (TASK::GET_SCRIPT_TASK_STATUS(iLocal_227, joaat("SCRIPT_TASK_VEHICLE_MISSION")) != 1)
			{
				TASK::TASK_VEHICLE_MISSION_COORS_TARGET(iLocal_227, iLocal_234, 2336.7979f, 5885.9106f, 46.6832f, 14, 60f, 786469, 1f, 1f, true);
			}
			__LIB_15__::func_928(&fLocal_3257, &iLocal_232, iLocal_233, 5f, 10f, 50f, 100f, 30f, 1f, 0.7f, 0.5f, 2f, 1, 0, 1097859072, 1);
		}
		else if (fParam0 < VEHICLE::GET_TOTAL_DURATION_OF_VEHICLE_RECORDING(500, sParam1))
		{
			if (VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(iLocal_233))
			{
				VEHICLE::STOP_PLAYBACK_RECORDED_VEHICLE(iLocal_233);
			}
			if (TASK::GET_SCRIPT_TASK_STATUS(iLocal_226, joaat("SCRIPT_TASK_VEHICLE_MISSION")) != 1)
			{
				TASK::TASK_VEHICLE_MISSION_COORS_TARGET(iLocal_226, iLocal_233, 2336.7979f, 5885.9106f, 46.6832f, 14, 60f, 786469, 1f, 1f, true);
			}
		}
		__LIB_28__::func_222(&fLocal_3256, fLocal_3257, 1008981770);
		fLocal_223 = fLocal_3256;
	}
	else if (MISC::ARE_STRINGS_EQUAL(sParam1, sLocal_221))
	{
		if (fParam0 < 5000f)
		{
			fLocal_3256 = 1f;
		}
		else if (fParam0 < 128000f)
		{
			__LIB_15__::func_928(&fLocal_3257, &iLocal_236, iLocal_235, 5f, 10f, 50f, 100f, 30f, 1f, 0.7f, 0.5f, 2f, 1, 0, 1097859072, 1);
		}
		else if (fParam0 < 135000f)
		{
			__LIB_15__::func_928(&fLocal_3257, &iLocal_236, iLocal_235, 10f, 15f, 50f, 100f, 30f, 1f, 0.7f, 0.5f, 2f, 1, 0, 1097859072, 1);
		}
		else if (fParam0 < 140000f)
		{
			__LIB_15__::func_928(&fLocal_3257, &iLocal_236, iLocal_235, 5f, 10f, 50f, 100f, 30f, 1f, 0.7f, 0.5f, 2f, 1, 0, 1097859072, 1);
		}
		else if (fParam0 < 153107.8f)
		{
			__LIB_15__::func_928(&fLocal_3257, &iLocal_236, iLocal_235, 5f, 10f, 50f, 100f, 30f, 1f, 0.7f, 0.5f, 2f, 1, 0, 1097859072, 1);
		}
		else if (fParam0 > (VEHICLE::GET_TOTAL_DURATION_OF_VEHICLE_RECORDING(500, sParam1) - 100f))
		{
			VEHICLE::PAUSE_PLAYBACK_RECORDED_VEHICLE(iLocal_235);
		}
		else if (fParam0 < VEHICLE::GET_TOTAL_DURATION_OF_VEHICLE_RECORDING(500, sParam1))
		{
			if (fLocal_3256 < 1f)
			{
				fLocal_3256 = (fLocal_3256 + (0.1f * SYSTEM::TIMESTEP()));
			}
			else if (fLocal_3256 > 1f)
			{
				fLocal_3256 = (fLocal_3256 - (0.1f * SYSTEM::TIMESTEP()));
			}
		}
		__LIB_28__::func_222(&fLocal_3256, fLocal_3257, 1008981770);
		fLocal_223 = fLocal_3256;
	}
}

void func_933()//Position - 0xAC570
{
	if (ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID(), false))
	{
		iLocal_480 = 0;
		func_1();
	}
	if (__LIB_15__::func_930(&(uLocal_489[0])))
	{
		iLocal_480 = 2;
		func_1();
	}
	if (__LIB_15__::func_930(&(uLocal_489[2])))
	{
		iLocal_480 = 4;
		func_1();
	}
	if (ENTITY::DOES_ENTITY_EXIST(uLocal_489[2]))
	{
		if (iLocal_479 == 6)
		{
			if (ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(uLocal_489[2], PLAYER::PLAYER_PED_ID(), true))
			{
				iLocal_480 = 5;
				func_1();
			}
			if (ENTITY::DOES_ENTITY_EXIST(iLocal_235))
			{
				if (!ENTITY::IS_ENTITY_DEAD(iLocal_235, false))
				{
					if (VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(iLocal_235))
					{
						if (!PED::IS_PED_IN_VEHICLE(uLocal_489[2], iLocal_235, false))
						{
							iLocal_480 = 5;
							func_1();
						}
					}
				}
			}
		}
	}
	if (__LIB_15__::func_930(&(uLocal_489[1])))
	{
		iLocal_480 = 3;
		func_1();
	}
	if (ENTITY::DOES_ENTITY_EXIST(iLocal_228) && !PED::IS_PED_INJURED(iLocal_228))
	{
		if (ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(iLocal_228, PLAYER::PLAYER_PED_ID(), true))
		{
			iLocal_480 = 7;
			func_1();
		}
	}
	if (__LIB_15__::func_930(&iLocal_228))
	{
		iLocal_480 = 6;
		func_1();
	}
	if (ENTITY::DOES_ENTITY_EXIST(iLocal_237) && !ENTITY::IS_ENTITY_DEAD(iLocal_237, false))
	{
		if (ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(iLocal_237, PLAYER::PLAYER_PED_ID(), true))
		{
			iLocal_480 = 9;
			func_1();
		}
	}
	__LIB_15__::func_930(&iLocal_229);
	__LIB_15__::func_930(&iLocal_230);
	__LIB_15__::func_930(&iLocal_231);
	if (func_936(&iLocal_237))
	{
		iLocal_480 = 8;
		func_1();
	}
	if (iLocal_479 <= 7)
	{
		if (__LIB_15__::func_930(&iLocal_226) || __LIB_15__::func_930(&iLocal_227))
		{
			iLocal_480 = 10;
			func_1();
		}
		if (ENTITY::DOES_ENTITY_EXIST(iLocal_226) && ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(iLocal_226, PLAYER::PLAYER_PED_ID(), true))
		{
			iLocal_480 = 18;
			func_1();
		}
		if (ENTITY::DOES_ENTITY_EXIST(iLocal_226) && ((((((MISC::IS_BULLET_IN_AREA(ENTITY::GET_ENTITY_COORDS(iLocal_226, true), 10f, true) || FIRE::IS_EXPLOSION_IN_SPHERE(-1, ENTITY::GET_ENTITY_COORDS(iLocal_226, true), 20f)) || PED::IS_PED_BEING_JACKED(iLocal_226)) || (ENTITY::DOES_ENTITY_EXIST(iLocal_233) && (PED::IS_PED_TRYING_TO_ENTER_A_LOCKED_VEHICLE(PLAYER::PLAYER_PED_ID()) && PED::GET_VEHICLE_PED_IS_USING(PLAYER::PLAYER_PED_ID()) == iLocal_233))) || ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(iLocal_226, PLAYER::PLAYER_PED_ID(), true)) || (ENTITY::DOES_ENTITY_EXIST(iLocal_233) && ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(iLocal_233, PLAYER::PLAYER_PED_ID(), false))) || (PED::IS_PED_SHOOTING(PLAYER::PLAYER_PED_ID()) && MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true), ENTITY::GET_ENTITY_COORDS(iLocal_226, true), true) < 25f)))
		{
			iLocal_480 = 19;
			func_1();
		}
		if (ENTITY::DOES_ENTITY_EXIST(iLocal_227) && ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(iLocal_227, PLAYER::PLAYER_PED_ID(), true))
		{
			iLocal_480 = 18;
			func_1();
		}
		if (ENTITY::DOES_ENTITY_EXIST(iLocal_227) && ((((((MISC::IS_BULLET_IN_AREA(ENTITY::GET_ENTITY_COORDS(iLocal_227, true), 10f, true) || FIRE::IS_EXPLOSION_IN_SPHERE(-1, ENTITY::GET_ENTITY_COORDS(iLocal_227, true), 20f)) || PED::IS_PED_BEING_JACKED(iLocal_227)) || (ENTITY::DOES_ENTITY_EXIST(iLocal_234) && (PED::IS_PED_TRYING_TO_ENTER_A_LOCKED_VEHICLE(PLAYER::PLAYER_PED_ID()) && PED::GET_VEHICLE_PED_IS_USING(PLAYER::PLAYER_PED_ID()) == iLocal_234))) || ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(iLocal_227, PLAYER::PLAYER_PED_ID(), true)) || (ENTITY::DOES_ENTITY_EXIST(iLocal_234) && ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(iLocal_234, PLAYER::PLAYER_PED_ID(), false))) || (PED::IS_PED_SHOOTING(PLAYER::PLAYER_PED_ID()) && MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true), ENTITY::GET_ENTITY_COORDS(iLocal_227, true), true) < 25f)))
		{
			iLocal_480 = 19;
			func_1();
		}
	}
	if (func_936(&iLocal_232))
	{
		if (__LIB_15__::func_929(&iLocal_232))
		{
			iLocal_480 = 22;
		}
		else
		{
			iLocal_480 = 11;
		}
		func_1();
	}
	if (func_936(&iLocal_233))
	{
		if (__LIB_15__::func_929(&iLocal_233))
		{
			iLocal_480 = 22;
		}
		else
		{
			iLocal_480 = 11;
		}
		func_1();
	}
	if (func_936(&iLocal_234))
	{
		if (__LIB_15__::func_929(&iLocal_234))
		{
			iLocal_480 = 22;
		}
		else
		{
			iLocal_480 = 11;
		}
		func_1();
	}
	if (ENTITY::DOES_ENTITY_EXIST(iLocal_232) && ((ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(iLocal_232, PLAYER::PLAYER_PED_ID(), true) && ENTITY::GET_ENTITY_HEALTH(iLocal_232) < 700) || (((VEHICLE::IS_VEHICLE_TYRE_BURST(iLocal_232, 0, false) || VEHICLE::IS_VEHICLE_TYRE_BURST(iLocal_232, 1, false)) || VEHICLE::IS_VEHICLE_TYRE_BURST(iLocal_232, 4, false)) || VEHICLE::IS_VEHICLE_TYRE_BURST(iLocal_232, 5, false))))
	{
		iLocal_480 = 21;
		func_1();
	}
	if (ENTITY::DOES_ENTITY_EXIST(iLocal_233) && ((ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(iLocal_233, PLAYER::PLAYER_PED_ID(), true) && ENTITY::GET_ENTITY_HEALTH(iLocal_233) < 700) || (((VEHICLE::IS_VEHICLE_TYRE_BURST(iLocal_233, 0, false) || VEHICLE::IS_VEHICLE_TYRE_BURST(iLocal_233, 1, false)) || VEHICLE::IS_VEHICLE_TYRE_BURST(iLocal_233, 4, false)) || VEHICLE::IS_VEHICLE_TYRE_BURST(iLocal_233, 5, false))))
	{
		iLocal_480 = 21;
		func_1();
	}
	if (ENTITY::DOES_ENTITY_EXIST(iLocal_234) && ((ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(iLocal_234, PLAYER::PLAYER_PED_ID(), true) && ENTITY::GET_ENTITY_HEALTH(iLocal_234) < 700) || (((VEHICLE::IS_VEHICLE_TYRE_BURST(iLocal_234, 0, false) || VEHICLE::IS_VEHICLE_TYRE_BURST(iLocal_234, 1, false)) || VEHICLE::IS_VEHICLE_TYRE_BURST(iLocal_234, 4, false)) || VEHICLE::IS_VEHICLE_TYRE_BURST(iLocal_234, 5, false))))
	{
		iLocal_480 = 21;
		func_1();
	}
	if (func_936(&iLocal_235))
	{
		if (iLocal_479 < 8)
		{
			iLocal_480 = 13;
			func_1();
		}
	}
	if (ENTITY::DOES_ENTITY_EXIST(iLocal_235) && !ENTITY::IS_ENTITY_DEAD(iLocal_235, false))
	{
		if (ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(iLocal_235, PLAYER::PLAYER_PED_ID(), false))
		{
			iLocal_480 = 14;
			func_1();
		}
	}
	if (func_936(&iLocal_236))
	{
		if (iLocal_479 < 8)
		{
			iLocal_480 = 12;
			func_1();
		}
	}
	if (iLocal_479 == 2)
	{
		if (CAM::IS_SCREEN_FADED_IN())
		{
			if (MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true), ENTITY::GET_ENTITY_COORDS(iLocal_232, true), true) >= 150f)
			{
				iLocal_480 = 17;
				func_1();
			}
		}
	}
	if (iLocal_479 == 4)
	{
		if (ENTITY::DOES_ENTITY_EXIST(iLocal_233) && ENTITY::DOES_ENTITY_EXIST(iLocal_234))
		{
			if (CAM::IS_SCREEN_FADED_IN())
			{
				if ((((VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(iLocal_233) && TASK::GET_SCRIPT_TASK_STATUS(iLocal_226, joaat("SCRIPT_TASK_VEHICLE_MISSION")) != 1) && VEHICLE::GET_TIME_POSITION_IN_RECORDING(iLocal_233) < 47936f) && ((VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(iLocal_234) && TASK::GET_SCRIPT_TASK_STATUS(iLocal_227, joaat("SCRIPT_TASK_VEHICLE_MISSION")) != 1) && VEHICLE::GET_TIME_POSITION_IN_RECORDING(iLocal_234) < 70000f)) && (MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true), ENTITY::GET_ENTITY_COORDS(iLocal_233, true), true) >= 300f || MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true), ENTITY::GET_ENTITY_COORDS(iLocal_234, true), true) >= 300f))
				{
					iLocal_480 = 15;
					func_1();
				}
				if ((TASK::GET_SCRIPT_TASK_STATUS(iLocal_226, joaat("SCRIPT_TASK_VEHICLE_MISSION")) != 1 && MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true), ENTITY::GET_ENTITY_COORDS(iLocal_233, true), true) >= 600f) || (TASK::GET_SCRIPT_TASK_STATUS(iLocal_227, joaat("SCRIPT_TASK_VEHICLE_MISSION")) != 1 && MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true), ENTITY::GET_ENTITY_COORDS(iLocal_234, true), true) >= 600f))
				{
					iLocal_480 = 15;
					func_1();
				}
				if (MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true), ENTITY::GET_ENTITY_COORDS(iLocal_232, true), true) >= 75f)
				{
					iLocal_480 = 17;
					func_1();
				}
				__LIB_14__::func_655(iLocal_242, iLocal_233, 250f, 1061158912, 0);
				__LIB_14__::func_655(iLocal_243, iLocal_234, 250f, 1061158912, 0);
			}
		}
	}
	if (iLocal_479 == 6)
	{
		if ((((ENTITY::DOES_ENTITY_EXIST(iLocal_232) && ENTITY::DOES_ENTITY_EXIST(iLocal_233)) && ENTITY::DOES_ENTITY_EXIST(iLocal_234)) && ENTITY::DOES_ENTITY_EXIST(iLocal_235)) && ENTITY::DOES_ENTITY_EXIST(iLocal_236))
		{
			if (CAM::IS_SCREEN_FADED_IN())
			{
				if ((((VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(iLocal_232) && VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(iLocal_233)) && VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(iLocal_234)) && VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(iLocal_235)) || func_897("S3_STOP"))
				{
					if (((MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true), ENTITY::GET_ENTITY_COORDS(iLocal_233, true), true) >= 600f || MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true), ENTITY::GET_ENTITY_COORDS(iLocal_234, true), true) >= 600f) || MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true), ENTITY::GET_ENTITY_COORDS(iLocal_235, true), true) >= 300f) || MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true), ENTITY::GET_ENTITY_COORDS(iLocal_236, true), true) >= 300f)
					{
						iLocal_480 = 15;
						func_1();
					}
					if (ENTITY::DOES_ENTITY_EXIST(iLocal_236))
					{
						if (MISC::GET_DISTANCE_BETWEEN_COORDS(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true), ENTITY::GET_ENTITY_COORDS(iLocal_236, true), true) >= 75f)
						{
							iLocal_480 = 16;
							func_1();
						}
					}
				}
				__LIB_14__::func_655(iLocal_241, iLocal_232, 500f, 1061158912, 0);
				__LIB_14__::func_655(iLocal_242, iLocal_233, 500f, 1061158912, 0);
				__LIB_14__::func_655(iLocal_243, iLocal_234, 500f, 1061158912, 0);
				__LIB_14__::func_655(iLocal_244, iLocal_235, 250f, 1061158912, 0);
				__LIB_14__::func_655(iLocal_245, iLocal_236, 250f, 1061158912, 0);
			}
		}
	}
}

int func_936(int* iParam0)//Position - 0xAD03D
{
	if (ENTITY::DOES_ENTITY_EXIST(*iParam0))
	{
		if ((ENTITY::IS_ENTITY_DEAD(*iParam0, false) || !VEHICLE::IS_VEHICLE_DRIVEABLE(*iParam0, false)) || __LIB_15__::func_929(iParam0))
		{
			return 1;
		}
	}
	return 0;
}

void func_940()//Position - 0xAD0E5
{
	HUD::CLEAR_PRINTS();
	HUD::CLEAR_HELP(true);
	__LIB_1__::func_674(1);
	__LIB_0__::func_429();
}

int func_956(var uParam0, bool bParam1, bool bParam2, int iParam3)//Position - 0xADC93
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
		iVar1 = __LIB_15__::func_944();
		if (!uParam0->f_23)
		{
			__LIB_17__::func_181(iVar0, 0);
		}
		__LIB_13__::func_813(iVar1, &iVar0);
		PED::SET_PED_CONFIG_FLAG(iVar0, 32, true);
		PED::SET_PED_CONFIG_FLAG(iVar0, 250, true);
		iVar2 = __LIB_0__::func_484(uParam0->f_7);
		__LIB_17__::func_181((*uParam0)[uParam0->f_7], 0);
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
		uParam0->f_5 = __LIB_0__::func_482(iVar1);
		if (uParam0->f_5 == 4)
		{
			uParam0->f_5 = 3;
		}
		(*uParam0)[uParam0->f_5] = iVar0;
		(*uParam0)[uParam0->f_7] = 0;
		uParam0->f_6 = __LIB_0__::func_482(iVar2);
		uParam0->f_7 = 4;
		iVar7 = PLAYER::PLAYER_PED_ID();
		ENTITY::SET_ENTITY_VISIBLE(PLAYER::PLAYER_PED_ID(), true, false);
		__LIB_16__::func_22(iVar7);
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
				__LIB_16__::func_22(iVar0);
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
		__LIB_13__::func_799(iVar2);
		__LIB_17__::func_180();
		__LIB_13__::func_822(iVar2);
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
		__LIB_13__::func_818(iVar2, &iVar7);
		if (((__LIB_0__::func_39(0) || __LIB_0__::func_39(3)) || __LIB_0__::func_39(2)) || __LIB_0__::func_39(4))
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
			__LIB_17__::func_235();
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

int func_980(var uParam0, bool bParam1)//Position - 0xAF15A
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
		if (__LIB_0__::func_482(__LIB_15__::func_944()) != bParam1 || bVar0)
		{
			bVar1 = false;
			if ((bVar0 || uParam0->f_24[bParam1] != 0) || ((__LIB_13__::func_765(bParam1) && func_440(bParam1)) && !uParam0->f_18[bParam1]))
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
			else if (!((BitTest(Global_113386.f_9085_FLOW_STRUCT_isGameflowActive.f_2_MF_STRANDS_ARRAY[27 /*3*/], 1) && !Global_3) && !__LIB_0__::func_2(0)))
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

void func_982(struct<3> Param0, float fParam1, int iParam2, int iParam3)//Position - 0xAF2C8
{
	struct<3> Var0;
	var uVar1;
	if (ENTITY::DOES_ENTITY_EXIST(Global_103950.f_4))
	{
		if (VEHICLE::IS_VEHICLE_DRIVEABLE(Global_103950.f_4, false))
		{
			if (__LIB_0__::func_343(24) != Global_103950.f_4)
			{
				if (iParam2 == 1)
				{
					if (__LIB_14__::func_665(ENTITY::GET_ENTITY_COORDS(Global_103950.f_4, true), iParam3, &Var0, &uVar1))
					{
						Param0 = { Var0 };
						fParam1 = uVar1;
					}
				}
				func_983(Global_103950.f_4, Param0, fParam1, 24, 0);
			}
		}
	}
}

void func_983(int iParam0, struct<3> Param1, float fParam2, int iParam3, bool bParam4)//Position - 0xAF343
{
	struct<60> Var0;
	if (ENTITY::DOES_ENTITY_EXIST(iParam0) && VEHICLE::IS_VEHICLE_DRIVEABLE(iParam0, false))
	{
		if (iParam3 != 24 && iParam3 != 25)
		{
			return;
		}
		if (iParam3 == 24)
		{
			if (ENTITY::DOES_ENTITY_EXIST(Global_77137.f_484[25]) && VEHICLE::IS_VEHICLE_DRIVEABLE(Global_77137.f_484[25], false))
			{
				if (Global_77137.f_484[25] == iParam0)
				{
					return;
				}
			}
		}
		if (!bParam4)
		{
			if ((VEHICLE::IS_BIG_VEHICLE(iParam0) || ENTITY::GET_ENTITY_MODEL(iParam0) == joaat("bus")) || ENTITY::GET_ENTITY_MODEL(iParam0) == joaat("tourbus"))
			{
				return;
			}
		}
		__LIB_17__::func_106(iParam3);
		Var0.f_9 = 49;
		Var0.f_59 = 2;
		__LIB_0__::func_209(iParam0, &Var0);
		if (__LIB_0__::func_78(Param1, 0f, 0f, 0f, 0))
		{
			Param1 = { ENTITY::GET_ENTITY_COORDS(iParam0, true) };
			fParam2 = ENTITY::GET_ENTITY_HEADING(iParam0);
		}
		if (iParam3 == 24)
		{
			if (MISC::GET_HASH_KEY(SCRIPT::GET_THIS_SCRIPT_NAME()) != joaat("vehicle_gen_controller"))
			{
				Global_78125 = MISC::GET_HASH_KEY(SCRIPT::GET_THIS_SCRIPT_NAME());
			}
		}
		__LIB_17__::func_110(iParam3, &Var0, Param1, fParam2, __LIB_0__::func_119(iParam0));
		func_984(iParam3, iParam0, 0);
	}
}

void func_984(int iParam0, int iParam1, int iParam2)//Position - 0xAF46C
{
	int iVar0;
	if (iParam0 == -1)
	{
		return;
	}
	if (!__LIB_15__::func_939(&(Global_77137.f_555[0 /*21*/]), iParam0))
	{
		return;
	}
	if (!BitTest(Global_77137.f_555[0 /*21*/].f_9, 12) && !BitTest(Global_77137.f_555[0 /*21*/].f_9, 10))
	{
		if (Global_77137.f_555[0 /*21*/].f_4 != ENTITY::GET_ENTITY_MODEL(iParam1))
		{
			return;
		}
	}
	if (Global_78044 != -1 && Global_78044 != iParam0)
	{
		return;
	}
	if (ENTITY::DOES_ENTITY_EXIST(iParam1))
	{
		if (VEHICLE::IS_VEHICLE_DRIVEABLE(iParam1, false))
		{
			if (!ENTITY::IS_ENTITY_A_MISSION_ENTITY(iParam1))
			{
				ENTITY::SET_ENTITY_AS_MISSION_ENTITY(iParam1, true, true);
			}
			if (iParam0 == 24)
			{
				Global_113386.f_32749.f_4801 = __LIB_0__::func_464();
			}
			if (iParam1 != Global_77137.f_139[iParam0])
			{
				if (iParam0 == 24)
				{
					iVar0 = __LIB_0__::func_343(iParam0);
					if ((ENTITY::DOES_ENTITY_EXIST(iVar0) && VEHICLE::IS_VEHICLE_DRIVEABLE(iVar0, false)) && iParam1 != iVar0)
					{
						__LIB_17__::func_655(iVar0, 145);
					}
				}
				Global_78043 = iParam1;
				Global_78044 = iParam0;
				Global_78045 = iParam2;
			}
		}
	}
}

void func_992(bool bParam0, bool bParam1)//Position - 0xAF8D3
{
	int iVar0;
	if (iLocal_195)
	{
		RECORDING::REPLAY_STOP_EVENT();
		iLocal_195 = 0;
	}
	__LIB_15__::func_959(&uLocal_294);
	CAM::SET_CINEMATIC_BUTTON_ACTIVE(true);
	HUD::CLEAR_HELP(true);
	GRAPHICS::ENABLE_PROCOBJ_CREATION();
	if (func_897("SET_CAR_HIGH_SPEED_BUMP_SEVERITY_MULTIPLIER"))
	{
		VEHICLE::SET_CAR_HIGH_SPEED_BUMP_SEVERITY_MULTIPLIER(1f);
		func_894("SET_CAR_HIGH_SPEED_BUMP_SEVERITY_MULTIPLIER", 0);
	}
	if (PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()))
	{
		if (CAM::IS_SCREEN_FADED_OUT())
		{
			if (bParam0)
			{
				TASK::CLEAR_PED_TASKS_IMMEDIATELY(PLAYER::PLAYER_PED_ID());
				__LIB_37__::func_920(PLAYER::PLAYER_PED_ID(), ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true), ENTITY::GET_ENTITY_HEADING(PLAYER::PLAYER_PED_ID()), 0);
			}
			else
			{
				TASK::CLEAR_PED_TASKS(PLAYER::PLAYER_PED_ID());
			}
		}
		PED::SET_PED_CAN_SWITCH_WEAPON(PLAYER::PLAYER_PED_ID(), true);
		PED::CLEAR_PED_PROP(PLAYER::PLAYER_PED_ID(), 2);
		PED::CLEAR_PED_PROP(PLAYER::PLAYER_PED_ID(), 0);
		PED::REMOVE_PED_HELMET(PLAYER::PLAYER_PED_ID(), true);
		PED::SET_PED_HELMET_PROP_INDEX(PLAYER::PLAYER_PED_ID(), -1, true);
	}
	if (ENTITY::DOES_ENTITY_EXIST(func_359(0)))
	{
		if (!ENTITY::IS_ENTITY_DEAD(func_359(0), false))
		{
			PED::SET_PED_CONFIG_FLAG(func_359(0), 243, false);
		}
	}
	if (ENTITY::DOES_ENTITY_EXIST(func_359(2)))
	{
		if (!ENTITY::IS_ENTITY_DEAD(func_359(2), false))
		{
			PED::SET_PED_CONFIG_FLAG(func_359(2), 243, false);
		}
	}
	if (ENTITY::DOES_ENTITY_EXIST(func_359(1)))
	{
		if (!ENTITY::IS_ENTITY_DEAD(func_359(1), false))
		{
			PED::SET_PED_CONFIG_FLAG(func_359(1), 243, false);
		}
	}
	__LIB_0__::func_472(0, iLocal_207);
	__LIB_0__::func_472(2, iLocal_207);
	if (iLocal_203 == 0)
	{
		func_39(PLAYER::PLAYER_PED_ID());
	}
	__LIB_0__::func_54(1, 1);
	__LIB_13__::func_808(&iLocal_240);
	__LIB_13__::func_808(&iLocal_241);
	__LIB_13__::func_808(&iLocal_242);
	__LIB_13__::func_808(&iLocal_243);
	__LIB_13__::func_808(&iLocal_244);
	__LIB_13__::func_808(&iLocal_246);
	if (CAM::IS_SCREEN_FADED_OUT())
	{
		if (ENTITY::DOES_ENTITY_EXIST(iLocal_235) && !ENTITY::IS_ENTITY_DEAD(iLocal_235, false))
		{
			if (VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(iLocal_235))
			{
				VEHICLE::STOP_PLAYBACK_RECORDED_VEHICLE(iLocal_235);
			}
		}
		if (ENTITY::DOES_ENTITY_EXIST(iLocal_232) && !ENTITY::IS_ENTITY_DEAD(iLocal_232, false))
		{
			if (VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(iLocal_232))
			{
				VEHICLE::STOP_PLAYBACK_RECORDED_VEHICLE(iLocal_232);
			}
		}
		if (ENTITY::DOES_ENTITY_EXIST(iLocal_233) && !ENTITY::IS_ENTITY_DEAD(iLocal_233, false))
		{
			if (VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(iLocal_233))
			{
				VEHICLE::STOP_PLAYBACK_RECORDED_VEHICLE(iLocal_233);
			}
		}
		if (ENTITY::DOES_ENTITY_EXIST(iLocal_234) && !ENTITY::IS_ENTITY_DEAD(iLocal_234, false))
		{
			if (VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(iLocal_234))
			{
				VEHICLE::STOP_PLAYBACK_RECORDED_VEHICLE(iLocal_234);
			}
		}
	}
	if (!bParam1)
	{
		__LIB_9__::func_107(&(uLocal_489[0]));
		__LIB_9__::func_107(&(uLocal_489[2]));
		__LIB_9__::func_107(&(uLocal_489[1]));
		__LIB_9__::func_107(&iLocal_226);
		__LIB_9__::func_107(&iLocal_227);
		__LIB_9__::func_107(&iLocal_228);
		__LIB_9__::func_107(&iLocal_229);
		__LIB_9__::func_107(&iLocal_230);
		__LIB_9__::func_107(&iLocal_231);
		if (ENTITY::DOES_ENTITY_EXIST(iLocal_232))
		{
			if (ENTITY::IS_ENTITY_A_MISSION_ENTITY(iLocal_232))
			{
				__LIB_15__::func_887(&iLocal_232);
			}
		}
		__LIB_15__::func_887(&iLocal_233);
		__LIB_15__::func_887(&iLocal_235);
		__LIB_15__::func_887(&iLocal_237);
		__LIB_15__::func_887(&iLocal_238);
	}
	else
	{
		if (ENTITY::DOES_ENTITY_EXIST(uLocal_489[0]))
		{
			ENTITY::SET_PED_AS_NO_LONGER_NEEDED(&(uLocal_489[0]));
		}
		if (ENTITY::DOES_ENTITY_EXIST(uLocal_489[2]))
		{
			ENTITY::SET_PED_AS_NO_LONGER_NEEDED(&(uLocal_489[2]));
		}
		if (ENTITY::DOES_ENTITY_EXIST(uLocal_489[1]))
		{
			ENTITY::SET_PED_AS_NO_LONGER_NEEDED(&(uLocal_489[1]));
		}
		if (ENTITY::DOES_ENTITY_EXIST(iLocal_226))
		{
			ENTITY::SET_PED_AS_NO_LONGER_NEEDED(&iLocal_226);
		}
		if (ENTITY::DOES_ENTITY_EXIST(iLocal_227))
		{
			ENTITY::SET_PED_AS_NO_LONGER_NEEDED(&iLocal_227);
		}
		if (ENTITY::DOES_ENTITY_EXIST(iLocal_228))
		{
			ENTITY::SET_PED_AS_NO_LONGER_NEEDED(&iLocal_228);
		}
		if (ENTITY::DOES_ENTITY_EXIST(iLocal_229))
		{
			ENTITY::SET_PED_AS_NO_LONGER_NEEDED(&iLocal_229);
		}
		if (ENTITY::DOES_ENTITY_EXIST(iLocal_230))
		{
			ENTITY::SET_PED_AS_NO_LONGER_NEEDED(&iLocal_230);
		}
		if (ENTITY::DOES_ENTITY_EXIST(iLocal_231))
		{
			ENTITY::SET_PED_AS_NO_LONGER_NEEDED(&iLocal_231);
		}
		if (ENTITY::DOES_ENTITY_EXIST(iLocal_232))
		{
			if (ENTITY::IS_ENTITY_A_MISSION_ENTITY(iLocal_232))
			{
				ENTITY::SET_VEHICLE_AS_NO_LONGER_NEEDED(&iLocal_232);
			}
		}
		if (ENTITY::DOES_ENTITY_EXIST(iLocal_233))
		{
			ENTITY::SET_VEHICLE_AS_NO_LONGER_NEEDED(&iLocal_233);
		}
		if (ENTITY::DOES_ENTITY_EXIST(iLocal_235))
		{
			ENTITY::SET_VEHICLE_AS_NO_LONGER_NEEDED(&iLocal_235);
		}
		if (ENTITY::DOES_ENTITY_EXIST(iLocal_237))
		{
			ENTITY::SET_VEHICLE_AS_NO_LONGER_NEEDED(&iLocal_237);
		}
		if (ENTITY::DOES_ENTITY_EXIST(iLocal_238))
		{
			ENTITY::SET_VEHICLE_AS_NO_LONGER_NEEDED(&iLocal_238);
		}
	}
	if (ENTITY::DOES_ENTITY_EXIST(uLocal_489[1]))
	{
		if (!PED::IS_PED_INJURED(uLocal_489[1]))
		{
			TASK::TASK_LEAVE_ANY_VEHICLE(uLocal_489[1], 0, 0);
		}
	}
	if (ENTITY::DOES_ENTITY_EXIST(uLocal_489[0]))
	{
		if (!PED::IS_PED_INJURED(uLocal_489[0]))
		{
			TASK::TASK_LEAVE_ANY_VEHICLE(uLocal_489[0], 0, 0);
		}
	}
	if (ENTITY::DOES_ENTITY_EXIST(uLocal_489[2]))
	{
		if (!PED::IS_PED_INJURED(uLocal_489[2]))
		{
			TASK::TASK_LEAVE_ANY_VEHICLE(uLocal_489[2], 0, 0);
		}
	}
	if (ENTITY::DOES_ENTITY_EXIST(iLocal_232) && !ENTITY::IS_ENTITY_DEAD(iLocal_232, false))
	{
		if (ENTITY::IS_ENTITY_A_MISSION_ENTITY(iLocal_232) && ENTITY::DOES_ENTITY_BELONG_TO_THIS_SCRIPT(iLocal_232, true))
		{
			VEHICLE::SET_VEHICLE_INDICATOR_LIGHTS(iLocal_232, 0, false);
			ENTITY::SET_ENTITY_COLLISION(iLocal_232, true, false);
			ENTITY::SET_VEHICLE_AS_NO_LONGER_NEEDED(&iLocal_232);
		}
	}
	if (ENTITY::DOES_ENTITY_EXIST(iLocal_233) && !ENTITY::IS_ENTITY_DEAD(iLocal_233, false))
	{
		if (ENTITY::IS_ENTITY_A_MISSION_ENTITY(iLocal_233) && ENTITY::DOES_ENTITY_BELONG_TO_THIS_SCRIPT(iLocal_233, true))
		{
			VEHICLE::SET_VEHICLE_INDICATOR_LIGHTS(iLocal_233, 0, false);
			ENTITY::SET_ENTITY_COLLISION(iLocal_233, true, false);
			ENTITY::SET_VEHICLE_AS_NO_LONGER_NEEDED(&iLocal_233);
		}
	}
	if (ENTITY::DOES_ENTITY_EXIST(iLocal_234) && !ENTITY::IS_ENTITY_DEAD(iLocal_234, false))
	{
		if (ENTITY::IS_ENTITY_A_MISSION_ENTITY(iLocal_234) && ENTITY::DOES_ENTITY_BELONG_TO_THIS_SCRIPT(iLocal_234, true))
		{
			VEHICLE::SET_VEHICLE_INDICATOR_LIGHTS(iLocal_234, 0, false);
			ENTITY::SET_ENTITY_COLLISION(iLocal_234, true, false);
			ENTITY::SET_VEHICLE_AS_NO_LONGER_NEEDED(&iLocal_234);
		}
	}
	if (ENTITY::DOES_ENTITY_EXIST(iLocal_3062))
	{
		ENTITY::SET_OBJECT_AS_NO_LONGER_NEEDED(&iLocal_3062);
	}
	if (ENTITY::DOES_ENTITY_EXIST(iLocal_3054))
	{
		ENTITY::SET_OBJECT_AS_NO_LONGER_NEEDED(&iLocal_3054);
	}
	if (ENTITY::DOES_ENTITY_EXIST(iLocal_3058))
	{
		ENTITY::SET_OBJECT_AS_NO_LONGER_NEEDED(&iLocal_3058);
	}
	if (ENTITY::DOES_ENTITY_EXIST(iLocal_252))
	{
		ENTITY::SET_OBJECT_AS_NO_LONGER_NEEDED(&iLocal_252);
	}
	if (ENTITY::DOES_ENTITY_EXIST(iLocal_253))
	{
		ENTITY::SET_OBJECT_AS_NO_LONGER_NEEDED(&iLocal_253);
	}
	VEHICLE::REMOVE_VEHICLE_ASSET(joaat("cheetah"));
	VEHICLE::REMOVE_VEHICLE_ASSET(joaat("f620"));
	VEHICLE::REMOVE_VEHICLE_ASSET(joaat("policeb"));
	if (func_897("ChopShopDoors"))
	{
		ENTITY::REMOVE_MODEL_HIDE(498.7252f, -1317.7551f, 28.2534f, 1f, joaat("prop_sc1_06_gate_l"), false);
		ENTITY::REMOVE_MODEL_HIDE(494.6904f, -1312.0663f, 28.2534f, 1f, joaat("prop_sc1_06_gate_r"), false);
		func_894("ChopShopDoors", 0);
	}
	__LIB_0__::func_203(0, 0);
	AUDIO::SET_FRONTEND_RADIO_ACTIVE(true);
	__LIB_0__::func_345(&uLocal_282, 0, 0);
	CAM::RENDER_SCRIPT_CAMS(false, false, 3000, true, false, 0);
	CAM::DESTROY_ALL_CAMS(false);
	CAM::STOP_GAMEPLAY_HINT(true);
	STREAMING::SET_GAME_PAUSES_FOR_STREAMING(true);
	STREAMING::END_SRL();
	if (STREAMING::IS_NEW_LOAD_SCENE_ACTIVE())
	{
		STREAMING::NEW_LOAD_SCENE_STOP();
	}
	if (STREAMING::STREAMVOL_IS_VALID(iLocal_251))
	{
		STREAMING::STREAMVOL_DELETE(iLocal_251);
	}
	func_997();
	func_996();
	func_995();
	func_994();
	SYSTEM::SETTIMERA(0);
	iLocal_180 = 0;
	iLocal_181 = 0;
	iVar0 = 0;
	while (iVar0 < iLocal_182)
	{
		iLocal_182[iVar0] = -1;
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < iLocal_183)
	{
		iLocal_183[iVar0] = 0;
		iVar0++;
	}
	iLocal_196 = 0;
	bLocal_201 = false;
	iLocal_202 = 0;
	__LIB_13__::func_815(&iLocal_257, 1, 0);
	fLocal_211 = 0f;
	func_622(1, 1);
	PLAYER::SET_MAX_WANTED_LEVEL(6);
	PLAYER::SET_WANTED_LEVEL_MULTIPLIER(1f);
	__LIB_15__::func_931();
	MISC::ENABLE_DISPATCH_SERVICE(1, true);
	MISC::ENABLE_DISPATCH_SERVICE(2, true);
	MISC::ENABLE_DISPATCH_SERVICE(3, true);
	MISC::ENABLE_DISPATCH_SERVICE(4, true);
	MISC::ENABLE_DISPATCH_SERVICE(5, true);
	PATHFIND::SET_ROADS_BACK_TO_ORIGINAL(Vector(56.0588f, 4597.9775f, -1928.3759f) - Vector(1000f, 1000f, 1000f), Vector(56.0588f, 4597.9775f, -1928.3759f) + Vector(1000f, 1000f, 1000f), 1);
	PATHFIND::SET_ROADS_BACK_TO_ORIGINAL(Vector(116.46857f, 361.80548f, 2581.1057f) - Vector(10f, 25f, 25f), Vector(116.46857f, 361.80548f, 2581.1057f) + Vector(10f, 25f, 25f), 1);
	PED::SET_PED_MODEL_IS_SUPPRESSED(joaat("S_M_Y_HwayCop_01"), false);
	VEHICLE::SET_VEHICLE_MODEL_IS_SUPPRESSED(joaat("policeb"), false);
	VEHICLE::SET_VEHICLE_MODEL_IS_SUPPRESSED(joaat("f620"), false);
	VEHICLE::SET_VEHICLE_MODEL_IS_SUPPRESSED(joaat("entityxf"), false);
	VEHICLE::SET_VEHICLE_MODEL_IS_SUPPRESSED(joaat("cheetah"), false);
	PED::REMOVE_RELATIONSHIP_GROUP(iLocal_255);
	PED::REMOVE_RELATIONSHIP_GROUP(iLocal_256);
	__LIB_15__::func_888(&uLocal_489, 0, 0);
	__LIB_15__::func_888(&uLocal_489, 1, 0);
	__LIB_15__::func_888(&uLocal_489, 2, 0);
	if (AUDIO::IS_AUDIO_SCENE_ACTIVE("CAR_1_DEVIN_DRIVES_AWAY"))
	{
		AUDIO::STOP_AUDIO_SCENE("CAR_1_DEVIN_DRIVES_AWAY");
	}
	if (AUDIO::IS_AUDIO_SCENE_ACTIVE("CAR_1_GET_TO_RACE"))
	{
		AUDIO::STOP_AUDIO_SCENE("CAR_1_GET_TO_RACE");
	}
	if (AUDIO::IS_AUDIO_SCENE_ACTIVE("CAR_1_RACE_MAIN"))
	{
		AUDIO::STOP_AUDIO_SCENE("CAR_1_RACE_MAIN");
	}
	if (AUDIO::IS_AUDIO_SCENE_ACTIVE("CAR_1_RACE_SKIDDING_CARS"))
	{
		AUDIO::STOP_AUDIO_SCENE("CAR_1_RACE_SKIDDING_CARS");
	}
	if (AUDIO::IS_AUDIO_SCENE_ACTIVE("CAR_1_RACE_CARS_FOCUS_CAM"))
	{
		AUDIO::STOP_AUDIO_SCENE("CAR_1_RACE_CARS_FOCUS_CAM");
	}
	if (AUDIO::IS_AUDIO_SCENE_ACTIVE("CAR_1_FRANKLIN_CALLS_MICHAEL"))
	{
		AUDIO::STOP_AUDIO_SCENE("CAR_1_FRANKLIN_CALLS_MICHAEL");
	}
	if (AUDIO::IS_AUDIO_SCENE_ACTIVE("CAR_1_BIKE_CHASE_MAIN"))
	{
		AUDIO::STOP_AUDIO_SCENE("CAR_1_BIKE_CHASE_MAIN");
	}
	if (AUDIO::IS_AUDIO_SCENE_ACTIVE("CAR_1_BIKE_ENTER_TUNNEL"))
	{
		AUDIO::STOP_AUDIO_SCENE("CAR_1_BIKE_ENTER_TUNNEL");
	}
	if (AUDIO::IS_AUDIO_SCENE_ACTIVE("CAR_1_BIKE_PASS_THE_LOST"))
	{
		AUDIO::STOP_AUDIO_SCENE("CAR_1_BIKE_PASS_THE_LOST");
	}
	if (AUDIO::IS_AUDIO_SCENE_ACTIVE("CAR_1_GET_TO_GARAGE"))
	{
		AUDIO::STOP_AUDIO_SCENE("CAR_1_GET_TO_GARAGE");
	}
	if (AUDIO::IS_AUDIO_SCENE_ACTIVE("CAR_1_GARAGE_ARRIVAL"))
	{
		AUDIO::STOP_AUDIO_SCENE("CAR_1_GARAGE_ARRIVAL");
	}
	if (ENTITY::DOES_ENTITY_EXIST(iLocal_232))
	{
		AUDIO::REMOVE_ENTITY_FROM_AUDIO_MIX_GROUP(iLocal_232, 0f);
	}
	if (ENTITY::DOES_ENTITY_EXIST(iLocal_233))
	{
		AUDIO::REMOVE_ENTITY_FROM_AUDIO_MIX_GROUP(iLocal_233, 0f);
	}
	if (ENTITY::DOES_ENTITY_EXIST(iLocal_234))
	{
		AUDIO::REMOVE_ENTITY_FROM_AUDIO_MIX_GROUP(iLocal_234, 0f);
	}
	if (ENTITY::DOES_ENTITY_EXIST(iLocal_235))
	{
		AUDIO::REMOVE_ENTITY_FROM_AUDIO_MIX_GROUP(iLocal_235, 0f);
	}
	if (ENTITY::DOES_ENTITY_EXIST(iLocal_162[3]))
	{
		AUDIO::REMOVE_ENTITY_FROM_AUDIO_MIX_GROUP(iLocal_162[3], 0f);
	}
	if (ENTITY::DOES_ENTITY_EXIST(iLocal_162[4]))
	{
		AUDIO::REMOVE_ENTITY_FROM_AUDIO_MIX_GROUP(iLocal_162[4], 0f);
	}
	if (ENTITY::DOES_ENTITY_EXIST(iLocal_162[5]))
	{
		AUDIO::REMOVE_ENTITY_FROM_AUDIO_MIX_GROUP(iLocal_162[5], 0f);
	}
	func_24(10);
	AUDIO::STOP_STREAM();
	AUDIO::RELEASE_SCRIPT_AUDIO_BANK();
	AUDIO::UNREGISTER_SCRIPT_WITH_AUDIO();
	func_940();
	HUD::DISPLAY_RADAR(true);
	HUD::DISPLAY_HUD(true);
	__LIB_0__::func_532(0, 1, 1, 0, 0, 0, 0);
	func_622(0, 1);
	iLocal_548 = 0;
	iLocal_203 = 0;
	if (bParam0 == 0)
	{
		__LIB_10__::func_347(21, 1);
	}
	else
	{
		__LIB_11__::func_816(21, 1);
	}
	if (bParam0 == 0)
	{
		if (OBJECT::IS_DOOR_REGISTERED_WITH_SYSTEM(iLocal_254))
		{
			OBJECT::REMOVE_DOOR_FROM_SYSTEM(iLocal_254, 0);
		}
		SCRIPT::TERMINATE_THIS_THREAD();
	}
}

void func_994()//Position - 0xB025F
{
	int iVar0;
	int iVar1;
	iVar0 = iLocal_486;
	iVar1 = 0;
	iVar1 = 0;
	while (iVar1 < iVar0)
	{
		iLocal_486[iVar1] = 0;
		iVar1++;
	}
}

void func_995()//Position - 0xB028A
{
	int iVar0;
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < iLocal_485)
	{
		iLocal_485[iVar0] = 0;
		iVar0++;
	}
}

void func_996()//Position - 0xB02B1
{
	int iVar0;
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < iLocal_484)
	{
		iLocal_484[iVar0] = 0;
		iVar0++;
	}
}

void func_997()//Position - 0xB02D8
{
	int iVar0;
	int iVar1;
	iVar0 = iLocal_482;
	iVar1 = 0;
	iVar1 = 0;
	while (iVar1 < iVar0)
	{
		iLocal_482[iVar1] = 0;
		iVar1++;
	}
	iLocal_483 = 0;
}

void func_998()//Position - 0xB0307
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
				if (!func_4(iVar0))
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

