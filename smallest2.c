#include<stdio.h>
int main()
{
	int a,b;
	printf("\n enter any two number ");
	scanf("%d%d",&a,&b);
	if(a<b)
	printf("\n %d is smallest",a);
	if(a>b)
	printf("\n %d is smallest",b);
	if(a==b)
	printf("\n %d is smallest",a);
	return 0;
}
	
