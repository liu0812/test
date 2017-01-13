#include<stdio.h>
#include<string.h>
int main()
{
	int i,w=0;
	char a[100],*p;
	gets(a);
	p=a;
	for(i=0;i<strlen(a);i++)
	{
		if(*(p+i)==53)
		{
			w=1;
			break; 
		}
	}
	if(w==0)
	printf("NO");
	else
	printf("YES");
} 
