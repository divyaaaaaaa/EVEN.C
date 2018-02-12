#include<stdio.h>
int main()
{
int n,a,d;
int sum=0;
printf("enter the first value:");
scanf("%d",&n);
printf("Enter the total value:");
scanf("%d",&a);
printf("Enter the common difference:");
scanf("%d",&d);
sum=(n*(2*a+(n-1)*d))/2;
tn=a+(n-1)*d;
printf("sum of the value:");
for(i=a;i<=+n;i=i+d)
{
if(i!=+n)
printf("%d+",i);
else printf("%d=%d",i,sum);
}
return 0;
}
