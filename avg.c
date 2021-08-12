#include<stdio.h>
int main()
{
	int avg,m1,m2,m3,m4,m5;
	printf("\n enter your five subject marks");
	scanf("%d%d%d%d%d",&m1,&m2,&m3,&m4,&m5);
	avg=(m1+m2+m3+m4+m5)/5;
	printf("\n avg of total marks is %d",avg);
	return 0;
}
