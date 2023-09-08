#include<stdio.h>

int main(){
    int i,n,num[100],max;
    printf("\nenter the size of aaray not more than 100=");
    scanf("%d" ,&n);
    for(i=1;i<n;i++)
    {
        printf("enter the array elelment=");
        scanf("%d" ,&num[i]);

    }
    max=num[0];
     for(i=1;i<n;i++)
     {
         if(num[i]>max)
         max=num[i];
     }
     printf("\nlargest number in array = %d",&max);
    return 0;
}