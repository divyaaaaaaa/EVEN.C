#inlcude<stdio.h>
int main()
{
int num,m=20,n=10;
clrscr();
printf("enter the prime number in a given range m to n:\n");
for(num=m;num<=n;num++)
{
if(num%2==1)
printf("%d",num);
}
getch();
}
