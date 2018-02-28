#include<stdio.h>
void main()
{
char a[100];
int i=0,count=0;
printf("\n Enter a String");
while(a[i]!='\0')
{
scanf("%s",&a[i]);
i++;
}
while(a[i]!='\0')
{
if((a[i]>=0)||(a[i]<=9)
{
++count;
}
}
printf("\n No.of.numeric characters %d",count);
}
