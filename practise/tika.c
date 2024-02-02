#include <stdio.h>
int main(){
int p,r, t, si, a;
printf ("Enter the Principle, Rate and Time:");
scanf("%d %d %d",&p, &r,&t);
si= (p*t*r)/100;
a=si+p;
printf ("Amount=%d\nIt simple Interest=%d", a,si);
return 0;
}