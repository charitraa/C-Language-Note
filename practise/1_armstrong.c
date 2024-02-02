#include<stdio.h>

int main(){
    int n,r,s=0,a;
    printf("enter any number =");
    scanf("/%d" ,&n);
    a=n;
    while(n!=0)
    {
        r=n%10;
        s=s+(r+r+r);
        n=n/10;
    }
    if(a==s)
    printf("\nenter number is armstrong");
    else
    printf("\nenter number is not armstrongs");
    return 0;
}