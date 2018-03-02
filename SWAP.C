#include<stdio.h>
int main()
{
	int a,b,n;
	printf("Enter the Two Numbers :");
	scanf("%d%d",&a,&b);
	n=a;
	a=b;
	b=n;
	printf("The Swap of Two Numbers :%d\t%d",a,b);
  getch();
}
