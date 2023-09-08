#include<stdio.h>

int main(){
    int p =500, t=2,r=2,*a=&p,*b=&t,*c=&r,SI;

    SI = *a**b**c/100;

    printf("the value of simple interest = %d",SI);
    return 0;
}