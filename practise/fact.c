#include<stdio.h>
int fact(int);
int main(){
    int a ,b;

    printf("enter thr number=");
    scanf("%d",&a);
    b=fact(a);
    printf("the factorial of %d is %d",a,b);
    
}
int fact(int a)
{
    if(a==0)
     return 1;
    else
     return(a*fact(a-1));
}