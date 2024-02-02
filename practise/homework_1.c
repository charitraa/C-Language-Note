#include<stdio.h>

int main(){
    int i,n,j=0,sal[50];

    printf("enter how many data do you have to enter = ");
    scanf("%d" ,&n);

    for(i=0;i<n;i++)
    {
        printf("enter salary amount = ");
        scanf("%d" ,&sal[i]);
    }
    for(i=0;i<n;i++)
    {
        if(sal[i]>5000 && sal[i]<10000)
        {
            j++;
            printf("%d\t" ,sal[i]);
            
        }
    }
    printf("total number of employee getting salary between 5000 to 10000 are = %d",j);
    
    return 0;
}