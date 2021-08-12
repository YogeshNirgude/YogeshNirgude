#include<stdio.h>
int main()
{
  int i,n,f=0;
  printf("enter any number");
  scanf("%d",&n);
  for(i=1;i<=n;i++)
  {
   if(i%2==0)
   {
   f=f+i;
   }
  }
  printf("%d",f);
  }
