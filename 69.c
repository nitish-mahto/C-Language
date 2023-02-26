/* 69.To print following Patten.

1
1 2
1 2 3
1 2 3 4
1 2 3 4 5
 */
#include<conio.h>
#include<stdio.h>
void main()
{
	int i,j;
	clrscr();
	for(i=1;i<=5;i++)
	{
		for(j=1;j<=i;j++)
		{
			printf("%2d",j);
		}
		printf("\n");
	}
	getch();
}