#include<stdio.h>

void main()
{
	
	int i,b[50][50],a[50],s,k,x,r,t,u,n,j,l;
	
	printf("hello\nenter number of values=");
	scanf("%d",&n);
	
	i=0;
	while(i<n)
	{
		printf("enter %d=",i+1);
		scanf("%d",&a[i]);
		i++;
	}
	printf("no of element to be removed");
	scanf("%d",&k);
	
	i=0;
	while(i<n)
	{
		j=i+1;
		while(j<n)
		{
			if(a[i]>a[j])
			{
				t=a[i];
				a[i]=a[j];
				a[j]=t;
			}
			j++;
		}
		i++;
	}
	i=0;
	t=0;
	x=0;
	while(i<n)
	{
		j=i+1;
		r=0;
		while(j<n)
		{
			if(a[i]==a[j])
			{
				r++;
				t++;
				j++;
			}
			else
			{
				break;
			}
		}
		if(r>0)
		{
			b[x][0]=r;
			b[x++][1]=a[i];
		}
		i=j;
	}
	s=x;
	if(k<=t)
	{
		printf("%d\n",n-t);
	}
	else
	{
		printf("%d\n",n-k);
	}
	printf("explanation:remove\n");
	
	x=0;
	while(x<s)
	{
		printf("%d occurences of element %d\n",b[x][0],b[x][1]);
		x++;
	}
	getch();
	
}	
