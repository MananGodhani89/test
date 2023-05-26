#include<stdio.h>



main()
{
	int a=50,b=150,c=250,d=300,sum;
	
	printf("for first 50 unit rs=0.50\n");
	sum=a/0.50;
	printf("%d\n",sum);
	
	printf("for first 150 unit rs=0.75\n");
	sum=b/0.75;
	printf("%d\n",sum);
	
	printf("for first 250 unit rs=1.00\n");
	sum=c/1.00;
	printf("%d\n",sum);
	
	printf("for first 250 above unit rs=1.50\n");	
	sum=d/1.50;
	printf("%d\n",sum);

	
}
