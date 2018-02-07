#include<stdio.h>
int main()
{
int num,m=30,n=50;
clrscr();
printf("enter the even numbers in a given range m to n:\n");
for(num=m;num<=n;num++)
{
if(num %3==1)
printf("%d",num);
}
getch();
}
