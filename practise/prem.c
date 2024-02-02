
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
 printf("English=%d\nNepali=%d\nScience=%d\nMath=%d\nComputer=%d\ntotal=%.2f\npercentge=%.2f",en,nep,sci,ma,com,t,per);
 return 0;
}