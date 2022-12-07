#region Local Var
	struct<4> ScriptParam_0 = { 0, 0, 0, 0 } ;
#endregion
void __EntryFunction__()//Position - 0x0
{
	switch (ScriptParam_0.f_0)
	{
		case 3:
			while (true)
			{
				SYSTEM::WAIT(5000);
			}
			break;
		case 0:
		case 1:
			if (ScriptParam_0.f_1 == -1931845307)
			{
				__LIB_30__::func_586(1, 0, -1705870862, 25, 1, "PM_PANE_AUD" /* GXT: Audio */, 0, 0);
				__LIB_30__::func_586(1, 1, -1705870862, 50, 1, "PM_PANE_DIS" /* GXT: Display */, 0, 0);
				__LIB_29__::func_936(1);
			}
			if (ScriptParam_0.f_1 == -1705871862)
			{
			}
			break;
		case 2:
			switch (ScriptParam_0.f_1)
			{
				case -1931845307:
					break;
				case -1705871862:
					switch (ScriptParam_0.f_3)
					{
						case 25:
							break;
						case 50:
							break;
					}
					break;
			}
			break;
	}
	SCRIPT::TERMINATE_THIS_THREAD();
}

