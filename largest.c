/*6.Accept three numbers from user and find out largest number among three and also find out
whether that three numbers are equal or not.(else if ladder)*/
#include<stdio.h>
int main()
{
	int a,b,c;
	printf("\n enter any three numbers");
	scanf("%d%d%d",&a,&b,&c);
	if(a>b && a>c)
	{
		printf("\n a =%d is largest no ",a);
	}
	else if (a<b && b>c)
	{
		printf("\n b=%d is lragest value",b);
	}
	else 
	{
		printf("\n c=%d is largest number",c);
	}
	
	if (a==b && b==c)
	{
		printf("\n the numbers are equal");
	}
	else
	{
		printf("\n the numbers are  not equal");
	}
	return 0;
}
	
