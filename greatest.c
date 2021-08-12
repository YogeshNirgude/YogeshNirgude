#include<stdio.h>
int main()
{
	int a,b,c,big;
	printf("enter any three number");
	scanf("%d%d%d",&a,&b,&c);
	big=(a>b&&b>c?a:b>c?b:c);
	printf("\n the greatest no is%d",big);
	return 0;
}
	
