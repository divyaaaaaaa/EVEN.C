#include <stdio.h>
int main()
{
int n,s,temp;
scanf("%d %d",&n,&s);
n=n^s;
s=n^s;
n=n^s;
printf("%d %d",n,s);
	return 0;
}
