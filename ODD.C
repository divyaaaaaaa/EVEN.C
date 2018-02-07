#include<stdio.h>
int main()
{
int num,m=20,n40;
clrscr();
printf("enter the odd numbers in a given range m to n:\n");
for(num=m;num<=n;num++)
{
if(num %2==1)
printf("%d",num);
}
getch();
}
