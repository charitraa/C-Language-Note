#include<stdio.h>

	int main(){
	int a,b,c,p;
    float h,l,r,ac,at;
	printf("name the value of a  =");
    scanf("%d" ,&a);
    printf("enter the value of b =");
    scanf("%d" ,&b);
    printf("enter the value of c =");
    scanf("%d" ,&c);
    p=a+b+c;
    printf("perimeter of triangle=%d\n",p);
    printf("enter the value of l =");
    scanf("%f" ,&l);
    printf("enter the value of h =");
    scanf("%f" ,&h);
    at=0.5*l*h;
    printf("area of triangle=%f\n",at);
    printf("enter the value of r =");
    scanf("%f" ,&r);
    ac=3.14*r*r;
    printf("area of circle=%f\n",ac);

	return 0;
}

