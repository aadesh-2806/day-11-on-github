#include<stdio.h>

int fibonacci(int);
void main()
{
	int n,t,i;

	printf("hello aadesh agrawal(2019uec1660)\nenter values=");
	scanf("%d",&n);
	
	for(i=0;i<n;i++)
	{
		printf("%d",fibonacci(i));
	}
	getch();
}

int fibonacci(int x)
{
	if(x!=1 && x!=0)
	{
		return (fibonacci(x-1)+fibonacci(x-2));
	}
	else
	{
		return x;
	}
}
