/* 68.To print following Patten.

* * * * *
* * * *
* * *
* *
*
 */
#include<conio.h>
#include<stdio.h>
void main()
{
	int i,j;
	clrscr();
	for(i=1;i<=5;i++)
	{
		for(j=5;j>=i;j--)
		{
			printf(" * ");
		}
		printf("\n");
	}
	getch();
}