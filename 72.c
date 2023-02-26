/* 72.To print following Patten.

1
2 1
3 2 1
4 3 2 1
5 4 3 2 1
 */
#include<conio.h>
#include<stdio.h>
void main()
{
	int i,j;
	clrscr();
	for(i=1;i<=5;i++)
	{
		for(j=i;j>=1;j--)
		{
			printf("%2d",j);
		}
		printf("\n");
	}
	getch();
}