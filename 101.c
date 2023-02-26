//101.To find sum of individual row.
#include<conio.h>
#include<stdio.h>
void main()
{
	int a[3][3],i,j,s;	
	clrscr();
	for(i=0;i<=2;i++)
	{
		for(j=0;j<=2;j++)
		{
			printf("Enter no: ");
			scanf("%d",&a[i][j]);
		}
	}
	printf("\nOriginal Matrix is \n");	
	for(i=0;i<=2;i++)
	{
		for(j=0;j<=2;j++)
		{
			printf("%3d",a[i][j]);			
		}
		printf("\n");
	}
	for(i=0;i<=2;i++)
	{
		s=0;
		for(j=0;j<=2;j++)
		{
			s=s+a[i][j];
		}
		printf("\nThe sum of row %d is %d",i+1,s);			
	}
	getch();
}
