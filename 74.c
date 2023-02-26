/* 74.To print following Patten.

9
7 9
5 7 9
3 5 7 9
1 3 5 7 9
 */
#include<conio.h>
#include<stdio.h>
void main()
{
	int i,j,n;
	clrscr();
	printf("Enter no: ");
	scanf("%d",&n);
	for(i=n;i>=1;i-=2)
	{
		for(j=1;j<=n;j+=2)
		{
			printf("%2d",j);
		}
		printf("\n");
	}
	getch();
}