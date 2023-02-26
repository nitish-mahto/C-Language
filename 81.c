/* 81.To print following Patten.

a
a b
a b c
a b c d
a b c d e
 */
#include<conio.h>
#include<stdio.h>
void main()
{
	int i,j;
	clrscr();
	for(i=97;i<=101;i++)
	{
		for(j=97;j<=i;j++)
		{
			printf("%3c",j);
		}
		printf("\n");
	}
	getch();
}