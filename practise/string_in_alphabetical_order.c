#include<stdio.h>
#include<string.h>
int main(){
    char str[50][30],temp[30];
    int i,j,n;
    printf("\nhow many string = ");
    scanf("%d" ,&n);
    for(i=0;i<n;i++)
    {
        printf("\nenter a string = ");
        scanf("%s", str[i]);
    }
    for(i=0;i<n-1;i++)
    {
        for(j=i+1;j<n;j++)
        {
            if(strcmp(str[i],str[j])>0)
            {
                strcpy(temp,str[i]);
                strcpy(str[i],str[j]);
                strcpy(str[j],temp);
            }

        }
    }
    printf("the stored string are");
    for(i=0;i<n;i++)
    printf("\n%s",str[i]);
    
    return 0;
}