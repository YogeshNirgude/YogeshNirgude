#include <stdio.h>

int main() {
   int a,b;
   float c ,d;
   
   printf("enter any two value");
   
   
   
   /*
   scanf("%d%d",&a,&b);
   printf("\n value of a=%d \n value of b =%d",a,b);
   printf("\n sum of a+b=%d",(a+b));
   printf("\n substraction of a-b=%d",(a-b));
   printf("\n multiplication of a*b=%d\n",(a*b));
   printf("\n division of a/b=%d\n",(a/b));
   printf("\n remainder of a%%b=%d\n",(a%b));*/
   
   
   
   
   scanf("%f%f",&c,&d);
   printf("value of c=%.2f \n value of d=%.2f ",c,d);
   printf("sum of c+d =%f",(c+d));
   printf("substraction of c-d =%f",(c-d));
   printf("multiplication of c*d =%f",(c*d));
   printf("division of c/d =%f",(c/d));
  printf("remainder of %f\n",(c%d));
   
    return 0;
}
