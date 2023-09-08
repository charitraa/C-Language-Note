#include<stdio.h>

int main()
{
    int i,mark[15],count;
    for(i=0;i<15;i++)
    {
        printf("enter the mark of english of student =");
        scanf("%d",&mark[i]);
    }
    printf("\n");
    for(i=0;i<15;i++)
    {   
        if(mark[i]>=60)
        {
           count=0;
           count++;

           printf("mark of english = %d\n",mark[i]);
        }
    }
      printf("number of student gets marks in english greater than 60 = %d",count);
    
    return 0;
}