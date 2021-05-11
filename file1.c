#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
void main()
{
	FILE *p;
	p=fopen("abcd.txt","a");
	if(p==NULL)
	{
		printf("Nahi huyi");
		getch();
		exit(1);
	}
	fprintf(p,"content");
	printf("Ho gyi");
	fclose(p);
	getch();

}
