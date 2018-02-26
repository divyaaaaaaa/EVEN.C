#include<stdio.h>
#include<string.h>
{
char s[200];
int count=0,i;
printf("Enter the string\n");
scanf("%[^\n]s",s);
for(i=0;s[i]!=10;i++)
{
if(s[i]==0)
count++;
}
printf("number of words is given strind are:%d\n",count++);
}
