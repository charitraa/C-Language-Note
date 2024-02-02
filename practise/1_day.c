#include<stdio.h>
int main(){
int number;
printf("enter the number of day");
scanf("%d" ,&number);
switch(number){
   case 1:
         printf("the day is sunday.\n");
       break;
   case 2:
         printf("the day is monday.\n");
       break;
   case 3 : 
          printf("the day is tuesday.\n");
     break;
    case 4 :
          printf("the day is wednesday.\n");
      break;
    case 5 :
            printf("the day is thursday.\n");
       break;
     case 6:
            printf("the day is friday.\n");
       break;
    case 7:
           printf("the day is saturday.\n");
           
    default:
    printf("invalid option");
       

}
return 0;
}