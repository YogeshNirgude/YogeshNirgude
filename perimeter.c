#include<stdio.h>
int main()
{
	float sp,rp,a,l,b;
	printf("\n enter the value of side of square ");
	scanf("%f",&a);
	sp=4*a;
	printf("\n the perimetre of square is %f",a);
	printf("\n enter the rectangle width and length");
	scanf("%f%f",&b,&l);
	rp=2*(l+b);
	printf("\n the perimeter of rectangle is %f",rp);
	return 0;
}
