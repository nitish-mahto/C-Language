/* 61.To print following Patten.
5 
5 4
5 4 3
5 4 3 2
5 4 3 2 1
 */
#include<conio.h>
#include<stdio.h>
void main()
{
	int i,j;	
	clrscr();
	for(i=5;i>=1;i--)
	{
		for(j=5;j>=i;j--)
		{
			printf(" %d ",j);
		}
		printf("\n");
	}	
	getch();
}