#include<stdio.h>
#include<string.h>

int main(){
    char str1[30],str2[30];
    printf("enter a first string =");
    gets(str1);
    printf("enter a second string =");
    gets(str2);
    strcat(str1,str2);
    printf("\n the concatenated string is %s",str1);



    
    return 0;
}