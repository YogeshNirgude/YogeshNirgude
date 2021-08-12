#include<stdio.h>
int main ()
{
	int a,b,c;
	printf("\n enter any 3 numbers");
	scanf("%d%d%d",&a,&b,&c);
	a>b?(a>c?printf("\n %d is greatest",a):printf("\n %d is gratest",c)):(b>c?printf("\n %d is greatest",b):printf("\n %d is gratest",c));
	return 0;
}

