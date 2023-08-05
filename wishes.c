#include<stdio.h>
int main(){
int number;
printf("enter the number .the number has there own wishes so be careful and choice your own number = ");
scanf("%d" ,&number);
switch(number){
   case 1:
         printf("i love u.\n");
       break;
   case 2:
         printf("i miss u.\n");
       break;
   case 3 : 
          printf("i want a forget u.\n");
     break;
    case 4 :
          printf("i want a kiss u.\n");
      break;
    case 5 :
            printf("i want to hug u.\n");
       break;
     case 6:
            printf("i want to spent time u forever.\n");
       break;
    case 7:
           printf("love u forver.\n");
           case 8:
            printf("i want to fight with u.\n");
       break;
       case 9:
            printf("i wanna a make u my world.\n");
       break;
       case 10 :
            printf("i love u so much.\n");
       break;
    default:
    printf("invalid option");
       

}
return 0;
}