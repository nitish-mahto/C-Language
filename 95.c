//95.Write a program to sort an array in descending order.
#include<conio.h>
#include<stdio.h>
void main()
{
	int a[100],n,i,j,t;
	clrscr();
	printf("How many no do you want?");
	scanf("%d",&n)
	for(i=0;i<=n-1;i++)
	{
		printf("Enter no: ");
		scanf("%d",&a[i]);
	}
	for(i=0;i<=n-1;i++)
	{
		for(j=0;j<=n-2;j++)
		{
			printf("Enter no: ");
			scanf("%d",&a[i]);
		}		
	}
	for(i=0;i<=n-1;i++)
	{
		for(j=0;j<=n-2;j++)
		{
			if(a[j]<a[j+1])
			{
				t=a[j];
				a[j]=a[j+1];
				a[j+1]=t;
			}
		}		
	}
	for(i=0;i<=n-1;i++)
	{
		printf("\n%d",a[i]);
	}	
	getch();
}