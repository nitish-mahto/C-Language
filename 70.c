/* 70.To print following Patten.

5
4 5
3 4 5
2 3 4 5
1 2 3 4 5
 */
#include<conio.h>
#include<stdio.h>
void main()
{
	int i,j;
	clrscr();
	for(i=5;i>=1;i--)
	{
		for(j=i;j<=5;j++)
		{
			printf("%2d",j);
		}
		printf("\n");
	}
	getch();
}