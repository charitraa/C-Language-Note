#include<stdio.h>

int main(){
    int i, num[5];
    for(i=0;i<5;i++)
    {
        printf("enter array elelment=");
        scanf("%d",&num[i]);
    }
    printf("\narray element are=");
    for(i=0;i<5;i++)
    printf("%d\t",num[i]);
    return 0;
}