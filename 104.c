//104.Write a program to find product of two matrixes.
#include<conio.h>
#include<stdio.h>
void main()
{
	int a[3][3],b[3][3],s,k,i,j;	
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
	
	printf("\nMatrix -A\n");
	for(i=0;i<=2;i++)
	{
		for(j=0;j<=2;j++)
		{			
			printf("%3d",a[i][j]);
		}
		printf("\n");
	}
	
	printf("\nMatrix -B\n");
	for(i=0;i<=2;i++)
	{
		for(j=0;j<=2;j++)
		{			
			printf("%3d",b[i][j]);
		}
		printf("\n");
	}
	
	printf("\nProduct of two matrix is \n");
	for(i=0;i<=2;i++)
	{
		for(j=0;j<=2;j++)
		{
			s=0;
			for(k=0;k<=2;k++)
			{
				s=s+a[i][k]*b[k][j];
			}
			printf("%3d",s);
		}
		printf("\n");
	}
	getch();
}