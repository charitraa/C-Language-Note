#include<stdio.h>

int main(){
  int i,n,fact = 1,*a=&i,*b=&n;  

  printf("enter any number to find the factorial = ");
  scanf("%d" ,&*b);
  for(i=1;i<=n;i++)
   
  fact=*a*fact;
  printf("factorial of %d is %d" ,*b,fact);
   
    return 0;
}