/* 71.To print following Patten.

5 5 5 5 5
4 4 4 4
3 3 3
2 2
1
 */
#include<conio.h>
#include<stdio.h>
void main()
{
	int i,j;
	clrscr();
	for(i=5;i>=1;i--)
	{
		for(j=1;j<=i;j++)
		{
			printf("%2d",i);
		}
		printf("\n");
	}
	getch();
}