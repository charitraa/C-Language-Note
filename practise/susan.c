#include<stdio.h>

int main(){
      
      int i, age,n;
      char name[20];
      char address[40];

      FILE *fp;

      fp=fopen("record.dat","w");
      printf("how many record do you want to record = ");
      scanf("%d",&n);

      for(i=0;i<n;i++)
      {
          printf("\nenter the name =");
          scanf("%s",&name);
          printf("\nenter the age =");
          scanf("%d",&age);
          printf("\nenter the address =");
          scanf("%s",&address);
          fprintf(fp,"\n%s\t%d\t%s",name,age,address);

      }
      fclose(fp);
      
      fp=fopen("record.data","r");
      printf("name\tage\taddress\n");
      while (fscanf(fp,"%s%d%s",&name,&age,&address)!=EOF)

      {
        printf("\n%s\t%d\t%s",name,age,address);

      }
      fclose(fp);
      


    return 0;
}