/* 73.To print following Patten.
1
1 3
1 3 5
1 3 5 7
1 3 5 7 9
 */
#include<conio.h>
#include<stdio.h>
void main()
{
	int i,j;
	clrscr();
	for(i=1;i<=9;i+=2)
	{
		for(j=1;j<=i;j+=2)
		{
			printf("%2d",j);
		}
		printf("\n");
	}
	getch();
}