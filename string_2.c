#include<stdio.h>
#include<string.h>


int main(){
    char str[20];
    int len;
    printf("enter a string =");
    gets(str);
    len=strlen(str);
    printf("length of string(%s) = %d" ,str,len);
    
    return 0;
}