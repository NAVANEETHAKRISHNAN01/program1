#include<stdio.h>
#include<conio.h>
void main()
{
	int a,b,c;
	printf("Enter the value a b c");
	scanf("%d %d %d",&a,&b,&c);
	if(a>b && a>c)
	printf("a is large");
	else
	if(b>a && b>c)
	printf("b is large");
	else
	printf("c is large");
	getch();
}
