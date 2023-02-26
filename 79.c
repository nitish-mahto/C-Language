/* 79.To print following Patten.

			 1 2 3 4 5 4 3 2 1
			   1 2 3 4 3 2 1
			     1 2 3 2 1
			       1 2 1
			         1
 */
#include<conio.h>
#include<stdio.h>
void main()
{
	int i,j,k,s=40,n;
	clrscr();
	printf("Enter no: ");
	scanf("%d",&n);
	for(i=n;i>=1;i--)
	{
		for(k=1;k<=s;k++)
		{
			printf(" ");
		}
		for(j=1;j<=i;j++)
		{
			printf("%2d",j);
		}
		for(j=i-1;j>=1;j--)
		{
			printf("%2d",j);
		}
		printf("\n");
		s+=2;
	}
	getch();
}