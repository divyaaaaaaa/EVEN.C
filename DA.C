#include<stdio.h>
int main(void)
{
int a,a1,count=0;
scanf("%d",&a);
while(a!=0)
{
a1=a%10;
count++;
a=a/10;
}
printf("%d",count);
}
