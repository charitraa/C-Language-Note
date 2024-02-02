#include<stdio.h>
 int main()
{
	int i,mul,n;
	printf("enter number to find multiplication =");
	scanf("%d",&n);
	for(i=1;i<=10;i++)
	{
	mul=n*i;
	printf("%d*%d=%d\n",n,i,mul);
	}
	return 0;
}