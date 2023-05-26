#include<stdio.h>

main()

{
	int Unit;
	float Amount,T_A,Surch;
	printf("Enter  Total Units Value =");
	scanf("%d",&Unit);
	
	
	
	if(Unit<=50)
	{
		Amount=Unit*0.50;
	}
	else if(Unit<=150)
	{
		Amount=Unit*25+(Unit-50)*0.75;
	}
	else if(Unit<=250)
	{
		Amount=100+(Unit-250)*1.20;
	}
	else
	{
		Amount=220+(Unit-250)*1.50;
	}
	Surch=Amount*0.20;
	T_A=Amount+Surch;
	
	printf("YOUR ELECTRICITY BILL=%20f",T_A);
}
