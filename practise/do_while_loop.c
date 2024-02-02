#include<stdio.h>
#include<conio.h>
int main(){
    int i=1,sum=0;
    do
    {
        sum=sum+i;
        i=i+1;
    }
    while(i<=10);
    printf("sum=%d", sum);
    return 0;
}