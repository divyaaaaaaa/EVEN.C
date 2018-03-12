#include<stdio.h>
#include<conio.h>

void main()
 {
   int a,m;
   clrscr();
   printf("\t Enter the to check whether it is power of 2: ");
   scanf("%d",&a);
   m=(a&(a-1));
   if(m==0)
       printf("\n\t %d is power of 2",a);
   else
       printf("\n\t %d not power of 2",a);
   getch();
 }
