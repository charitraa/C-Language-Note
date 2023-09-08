#include<stdio.h>
#include<string.h>

int main(){
    char str[50];
    printf("enter the string =");
    gets(str);
    strrev(str);
    printf("reverse the given string = %s" ,str);
    
    return 0;
}