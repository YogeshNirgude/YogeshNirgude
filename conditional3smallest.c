#include<stdio.h>
int main ()
{
	int a,b,c;
	printf("\n enter any 3 numbers");
	scanf("%d%d%d",&a,&b,&c);
	a<b?(a<c?printf("\n %d is smallest",a):printf("\n %d is smallest",c)):(b<c?printf("\n %d is smallest",b):printf("\n %d is smallest",c));
	return 0;
}

