#include <stdio.h>
int main() 
{
	char c[100];
	int n,i,count=0;
	scanf(" %[^\t\n]s",c);
	n=strlen(a);
	for(i=0;i<n;i++)
	{
	 if(c[i]>='c'&c[i]<='b'||c[i]>='C'&&c[i]<='B')
	 {
	     count++;
	 }
	}
	printf("%d",count);
	return 0;
}
