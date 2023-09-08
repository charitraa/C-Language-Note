#include<stdio.h>
#include<conio.h>
int main()
{

 int en,nep,sci,ma,com;
 float per,t;
 printf("enter the marks in English=");
 scanf("%d",&en);
  printf("enter the marks in Nepali=");
 scanf("%d",&nep);
  printf("enter the marks in Science=");
 scanf("%d",&sci);
  printf("enter the marks in Math=");
 scanf("%d",&ma);
  printf("enter the marks in Computer=");
 scanf("%d",&com);
 t=en+nep+sci+ma+com;
 per=(t/500)*100;
 printf("total marks =%.2f\npercentge=%.2f\n",t,per);
 if(per>32)
 {
    if(per>80)
    {
    printf("you scored Distinction.");
    }
    else if(per>60)
    {
        printf("you scored First division.");
    }
    else if(per>50)
    {
        printf("you scored Second division.");
    }
    else
    {
        printf("you scored Third division.");
    }
 }
 else
 {
     printf("you are failed.");
 }
 return 0;
}