#include<stdio.h>
#include<string.h>
int main(){
    char str[50];
    printf("enter the string  = ");
    gets(str);
    printf("the string in lower case = %S" ,strlwr(str));
    
    return 0;
}