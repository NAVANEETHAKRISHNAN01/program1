#include<stdio.h>
#include<conio.h>
void main()
{
	char n;
	printf("\n Enter the alphabet :");
	scanf("%c",&n);
	if(n!='a' && n!='e' && n!='i' && n!='o' && n!='u')
{	printf(" consonant");}
	else
{	printf(" vowel");}	
	getch();
}