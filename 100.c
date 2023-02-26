//100.Write a program to find sum of first and second diagonal.
#include<conio.h>
#include<stdio.h>
void main()
{
	int a[3][3],i,j,s1=0,s2=0;	
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
			if(i==j)		
				s1=s1+a[i][j];
			if(i+j==2)		
				s2=s2+a[i][j];
		}
		printf("\n");
	}	
	printf("\nThe sum of first diagoal is %d",s1);
	printf("\nThe sum of second diagoal is %d",s2);
	getch();
}