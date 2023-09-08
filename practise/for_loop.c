#include<stdio.h>

int main(){
    int a,sum=0;
    for(a=1;a<=10;++a){
        printf("%d  ",a);
        sum=sum+a;
    }
    
    printf("sum=%d",sum);
    return 0;
}