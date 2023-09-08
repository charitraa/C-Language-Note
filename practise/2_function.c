#include<stdio.h>
int square(int);
int main(){

    int a,b;
    printf("enter the value of  given number =  ");
    scanf("%d",&a);
    b = square(a);
    printf("square of given number= %d",b);

}

  int square(int a)
{
    int square;
    square = a*a;
    return (square) ;
}