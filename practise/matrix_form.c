#include<stdio.h>

int main(){
    int a[3][3];
    int i,j;
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            printf("enter array element =");
            scanf("%d" ,&a[i][j]);

        }
    }
    printf("\noutput\n");
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        printf("%d\t",a[i][j]);
        printf("\n");
    }
    return 0;
}