#include<stdio.h>
#include<conio.h>

int fact(int);
void main()
{
	int a,b,c,t;
	
	printf("hello\nenter no.=");
	scanf("%d",&a);
	
	t=fact(a);
	printf("%d",t);
	
	getch();
													//fact
}

int fact(int x)
{
	int m,t;
	
	m=1;
	t=1;
	while(m<x)
	{
		t=t*(m+1);			
		m++;
	}
	
	return t;
}
