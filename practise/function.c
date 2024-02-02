#include<stdio.h>
float area_circle(float);
int main(){

    float r,a;
    printf("enter the value of radius =  ");
    scanf("%d",&r);
    a = area_circle(r);
    printf("area of circle = %f",a);

}

float area_circle(float r)
{
    float area;
    area = 3.14*r*r;
    return (area) ;
}