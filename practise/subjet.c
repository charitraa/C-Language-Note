#include<stdio.h>
int main(){
    int cl,ro,tm,en,ne,co,ch,ph;
    float per;
    char name [4] ;
    printf("enter your name =");
    scanf("%s ",&name);
    printf("enter your class =");
    scanf("%d ",&cl);
    printf("enter your roll no =");
    scanf("%d ",&ro);
    printf("enter the mark of nepali =");
    scanf("%d ",&ne);
    printf("enter the mark of english =");
    scanf("%d ",&en);
    printf("enter the mark of computer =");
    scanf("%d ",&co);
    printf("enter the mark of chemistry =");
    scanf("%d ",&ch);
    printf("enter the mark of physic =");
    scanf("%d ",&ph);
     tm=ne+en+co+ch+ph;
     per==tm/5;
     printf("\n\nyour records\n\n");
     printf("\nname=%s\nclass=%d\nroll no=%d" ,name,cl,ro);
     printf("\ntotal marks=%d\npercentage=%f" ,tm,per);
    return 0 ;
}