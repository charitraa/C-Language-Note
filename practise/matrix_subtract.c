#include<stdio.h>

int main(){
    int a[3][3],b[3][3],c[3][3];
    int i,j;
    printf("enter the element for a variable  \n");
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            printf("enter array element =");
            scanf("%d" ,&a[i][j]);

        }
    } 
    printf("enter the element for b variable \n");
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            printf("enter array element =");
            scanf("%d" ,&b[i][j]);

        }
    }
       for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        c[i][j]=a[i][j]-b[i][j];
    }

    printf("\noutput\n");
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        printf("%d\t",c[i][j]);
        printf("\n");
    }
    return 0;
}