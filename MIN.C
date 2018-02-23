#include<stdio.h>
int main()
{
int a,re=0;
printf("Enter the value:"));
scanf("%d",&a);
while(a!=0)
{
re=re*10;
re=re+a%10;
a=a/10;
}
printf("Enter the re number\n");
return 0;
}
