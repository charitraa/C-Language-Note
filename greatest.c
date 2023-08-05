#include<stdio.h>

	int main(){
	int a,b,c;
	printf("enter the value of a =");
    scanf("%d" ,&a);
    printf("enter the value of b =");
    scanf("%d" ,&b);
    printf("enter the value of c =");
    scanf("%d" ,&c);
    if(a>b && a>c )
    {
      printf("the value of a is greatest",a);
    }
    else if( b>c )
    {
      printf("the value of b is greatest",b);
    }
    else
    {
     printf("the value of c is greatest" ,c);
    }
    return 0;
    }
