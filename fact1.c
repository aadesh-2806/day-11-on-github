#include<stdio.h>

int fact(int);
void main()
{
	int n;
	
	printf("hello aadesh agrawal(2019uec1660)\nenter values=");
	scanf("%d",&n);
	
	printf("%d",fact(n));
	getch();
}

int fact(int x)
{
	if(x!=0)
	{
		return (x*fact(x-1));
	}
	else
	{
		return 1;
	}
}
