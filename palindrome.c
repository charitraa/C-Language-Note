#include<stdio.h>

int main(){
    int n,r,s=0,a;
    printf("enter the number = ");
    scanf("%d" ,&n);
    a=n;
    while(n!=0)
    {
        r=n%10;
        s=s*10+r;
        n=n/10;
    }
    printf("reverse of number is = %d\n" ,s);
    if(a==s)
    printf("\nenter number is palindrome");
    else
    printf("\nenter number is not palindrome");

    return 0;
}