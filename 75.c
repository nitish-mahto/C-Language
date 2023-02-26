/* 75.To print following Patten.

			             *
			            * *
	            	  *  *  *
		             *  * *  *
		           *  *  *  *  *
 */
#include<conio.h>
#include<stdio.h>
void main()
{
	int i,j,k,s=35;
	clrscr();
	for(i=1;i<=5;i++)
	{
		for(k=1;k<=s;k++)
		{
			printf(" ");
		}
		for(j=1;j<=i;j++)
		{
			printf(" *");
		}
		printf("\n");
		s--;
	}
	getch();
}