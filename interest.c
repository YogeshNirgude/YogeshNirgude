#include<stdio.h>

int main()
{
	int p,r,t,si;
	printf("enter the price");
	scanf("%d",&p);
	printf("\nenter the rate");
	scanf("%d",&r);
	printf("\n enter the time");
	scanf("%d",&t);
	si=p*r*t/100;
	printf("the simple interest is %d",si);
	return 0;
}
	

