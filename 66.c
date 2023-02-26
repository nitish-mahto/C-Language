/* 66.To print following Patten.
           1
         1 2 1
       1 2 3 2 1
     1 2 3 4 3 2 1
   1 2 3 4 5 4 3 2 1
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
			printf("%d",j);
		}
		for(j=i-1;j>=1;j--)
		{
			printf("%d",j);
		}
		printf("\n");
		s--;
	}
	getch();
}