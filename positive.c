#include<stdio.h>
#include<conio.h>
void main()
{
	int a;
	scanf("%d",&a);
	if(a==0)
		printf("\nzero");
	else
	if(a>0)
		printf("\n positive");
	else
	if(a<0)
		printf("\n negative");
	getch();
}