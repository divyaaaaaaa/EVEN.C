#include<stdio.h>
int main(void)
{
	int a;
  printf("Enter the number");
  scanf("%d",&a);
  t=a-1;
	if(t%2==0)
	{
		printf("%d",t);
	}
	else
	{
		printf("%d",t-1);
	}
	return 0;
}
