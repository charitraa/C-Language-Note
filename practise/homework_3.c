#include<stdio.h>

int main()
{
    int i,mark[15];
    char str[50];
    for(i=0;i<15;i++)
    {
        printf("enter the mark of english of student =");
        scanf("%d",&mark[i]);
    }
    printf("\n");

    printf("These are the marks greater than 60.\n");
    
    printf("\n");

    for(i=0;i<15;i++)
    {   
        if(mark[i]>=60)
        {

           printf("mark of english = %d\n",mark[i]);

        }
    }
    return 0;
}