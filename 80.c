/* 80.To print following Patten.

A
A B
A B C
A B C D
A B C D E
 */
#include<conio.h>
#include<stdio.h>
void main()
{
	int i,j;
	clrscr();
	for(i=65;i<=69;i++)
	{
		for(j=65;j<=i;j++)
		{
			printf("%3c",j);
		}
		printf("\n");
	}
	getch();
}