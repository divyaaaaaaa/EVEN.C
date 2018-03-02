#include<stdio.h>
void main()
{
int d1=0,d2=1,d3,a,i;
printf("Enter the Number of Input:");
scanf("%d",&a);
for(i=1;i<=a;++i)
{
d3=d1+d2;
d1=d2;
d2=d3;
printf("%d",d1);
}
	
