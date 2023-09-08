#include<stdio.h>

int main(){
  int i;  
  long int n,fact=1;
  printf("enter any number to find the factorial = ");
  scanf("%d" ,&n);
  for(i=1;i<=n;i++)
  fact=fact*i;
  printf("factorial of %d is %d" ,n,fact);
    return 0;
}