//103.Write a program to find sum of two matrixes.
#include<conio.h>
#include<stdio.h>
void main()
{
	int a[3][3],b[3][3],c[3][3],i,j;	
	clrscr();
	printf("Enter value for matrix -A\n");
	for(i=0;i<=2;i++)
	{
		for(j=0;j<=2;j++)
		{
			printf("Enter no: ");
			scanf("%d",&a[i][j]);
		}
		printf("\n");
	}
	printf("\nEnter value for matrix -B\n");
	for(i=0;i<=2;i++)
	{
		for(j=0;j<=2;j++)
		{
			printf("Enter no: ");
			scanf("%d",&b[i][j]);
		}
		printf("\n");
	}
	
	printf("\nThe sum of two matrix \n");
	for(i=0;i<=2;i++)
	{
		for(j=0;j<=2;j++)
		{
			c[i][j]=a[i][j]+b[i][j];
			printf("%3d",c[i][j]);
		}
		printf("\n");
	}
	getch();
}
