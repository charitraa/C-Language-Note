#include<stdio.h>

int main(){
    int i,roll_no;
    char name[20];
    FILE *fp;
    fp=fopen("c:/std.txt","w");
    for (i=0; i<5; i++)
    {
        printf("enter the name of std = ");
        scanf("%s",name);
        printf("enter the roll_no of std = ");
        scanf("%d",&roll_no);
        fprintf(fp,"%s%d",name,roll_no);
    }
    fclose(fp);
    
    return 0;
}