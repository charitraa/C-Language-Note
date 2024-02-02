#include<stdio.h>
int sum(int ,int);

int main(){
    int a ,b ,n;

    printf("enter the value of a =");
    scanf("%d",&a);
    printf("\nenter the value of b = ");
    scanf("%d",&b);
    n=sum(a,b);
    printf("\nthe value of sum a+b is %d",n);
    }
    int sum(int a, int b)
    {
        int c ;
        c = a+b;

        return c;

    }

