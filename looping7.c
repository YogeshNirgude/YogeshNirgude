#include<stdio.h>
int add(int ni,int n2);
int sub(int n1,int n2);
int mul(int n1, int n2);
int rem(int n1,int n2);
 int main()
 {
  int ch,n1,n2;
  printf("enter any 2 number");
  scanf("%d%d",&n1,&n2);
  printf("\n enter any choice \n1.add \n2.sub \n3.mul \n4.rem");
  scanf("%d",&ch);
  
  switch(ch)
  { 
  case 1:
  add(n1,n2);
  break;
  case 2:
  sub (n1,n2);
  break;
  case 3:
  mul(n1,n2);
  break;
  case 4:
  rem(n1,n2);
  break;
  default:
  printf("\n enter wrong choice");
  }
  return 0;
  }
  int add (int n1,int n2)
  {
  return(printf("\n add of %d and %d is=%d",n1,n2,(n1+n2)));
  }
  int sub(int n1,int n2)
  {
  return(printf("\n sub of %d and %d is=%d",n1,n2,(n1-n2)));
  }
  int mul(int n1,int n2)
  {
  return(printf("\n mul of %dand %d is=%d",n1,n2,(n1*n2)));
  }
  int rem(int n1,int n2)
  {
  return(printf("\n rem of %dand%d is=%d",n1,n2,(n1%n2)));
  }
  
  
