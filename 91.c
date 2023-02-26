//91.Write a program to count how many odd & even no into given an array.
#include<conio.h>
#include<stdio.h>
void main()
{
	int a[100],n,i,co=0,ce=0;
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
		printf("\n%d",a[i]);
		if(a[i]%2==0)
			ce++;
		else
			co++;
	}
	printf("\nTotal odd no is %d",co);
	printf("\nTotal even no is %d",ce);
	getch();
}
