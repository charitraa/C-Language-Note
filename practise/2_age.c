#include<stdio.h>

int main(){
    int i,age[20];
    for(i=0;i<20;i++)
    {
        printf("enter age for age[%d] =",i);
        scanf("%d",&age[i]);
    }
    printf("\n");
    for(i=0;i<20;i++)
    printf("age[%d] = %d\n",i,age[i]);
    return 0;
}