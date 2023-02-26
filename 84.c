/* 84.To print following Patten.

1
1 0
1 0 1
1 0 1 0
1 0 1 0 1
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
			if(j%2==0)
			{
				printf(" 0");
			}
			else
			{
				printf(" 1");
			}
		}
		printf("\n");
	}
	getch();
}