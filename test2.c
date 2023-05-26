#include<stdio.h>

main()
{
	int roll;
	char name;
	printf("enter roll num\n",roll);
	scanf("%d",roll);
	printf("Enter a name\n",name);
	scanf("%s",name);
	printf("",strcat(name,roll));
}
