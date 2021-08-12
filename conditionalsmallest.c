#include<stdio.h>
int main ()
{
	int a,b;
	printf("\n enter any 2 numbers");
	scanf("%d%d",&a,&b);
	a<b?printf("\n %d is smallest",a):printf("\n %d is smallest",b);
	return 0;
}

