#include<stdio.h>

int main(){
  int n,g[100],i,j,t;
  printf("enter how many number do you want to enter =");
  scanf("%d" ,&n);
  for(i=0;i<n;i++)
  {
      printf("enter the value =");
      scanf("%d" ,&g[i]);

  }  
for(i=0;i<n-1;i++)
  {
      for(j=i+1;j<n;j++)
      {
          if(g[i]<g[j])
          {
              t=g[i];
              g[i]=g[j];
              g[j]=t;
          }
      }
  }
  printf("the number in desending order=\n\n ");
  for(i=0;i<n;i++)
  {
      printf("%d\t" ,g[i]);
  }
    return 0;
}