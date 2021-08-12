#include<stdio.h>
int main()
{
	int a,b,temp;
	printf("\n enter any two value");
	scanf("%d%d",&a,&b);
	temp=a;
	a=b;
	b=temp;
	printf("\n swapped value is a=%d andb=%d",a,b);
	return 0;
}
 
