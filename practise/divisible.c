#include<stdio.h>
#include<conio.h>
int main(){

int n;
printf("enter any number= ");
scanf("%d" ,&n);
if(n%3==0 && n%5==0)
printf("enter number is divisible by 3 and 5");
else
printf("enter number is not divisible by 3 and 5");

return 0;
}