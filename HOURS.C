#include<stdio.h>
int main()
{
int n,hr,min;
printf("Enter main:");
scanf("%d",&n);
if(n>3600)
{
min=n/60;
mi=n%60;
hr=min/60;
min%60;
printf("coverted for min %hr %d min":hr,min);
}
eles
{
min=n/60;n=n%60;
printf("converted format %d mins"min,hr);
}
}

