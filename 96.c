// 96.To input and print 3 X 3 matrix.
#include<conio.h>
#include<stdio.h>
void main()
{
	int a[3][3],i,j;
	clrscr();
	for(i=0;i<=2;i++)
	{
		for(j=0;j<=2;j++)
		{
			printf("Enter no: ");
			scanf("%d",&a[i][j]);
		}
	}
	for(i=0;i<=2;i++)
	{
		for(j=0;j<=2;j++)
		{
			printf("%3d",a[i][j]);
		}
		printf("\n");
	}	
	getch();
}
