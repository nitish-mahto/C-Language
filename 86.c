/* 86.To print following Patten.

1
2 3
3 4 5
4 5 6 7
5 6 7 8 9
 */
#include<conio.h>
#include<stdio.h>
void main()
{
	int i,j,k;
	clrscr();
	for(i=1;i<=5;i++)
	{
		k=i;
		for(j=1;j<=i;j++)
		{
			printf("%3d",k);
			k++;
		}
		printf("\n");
	}
	getch();
}