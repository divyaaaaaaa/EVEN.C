#include <stdio.h>
int main()
{
int a,b[10],i,max=0,min=0;
max=b[0];
min=b[0];
scanf("%d",&a);
for(i=0;i<a;i++)
{
scanf("%d",&b[i]);
}
for(i=1;i<a;i++)
{
if(b[i]>m)
max=b[i];
else if(b[i]<min)
min=b[i];
}
printf("%d %d",min,max);
return 0;
}
