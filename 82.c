/* 82.To print following Patten.
*
# #
* * *
# # # #
* * * * *
 */
#include<conio.h>
#include<stdio.h>
void main()
{
	int i,j,n;
	clrscr();
	printf("Enter no: ");
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		for(j=1;j<=i;j++)
		{
			if(i%2==0)
			{
				printf(" #");
			}
			else
			{
				printf(" *");
			}
		}
		printf("\n");
	}
	getch();
}