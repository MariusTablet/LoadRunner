Action()
{
	lr_start_transaction("01_Demo");
	
	lr_end_transaction("01_Demo", LR_AUTO);
	
	return 0;
}
