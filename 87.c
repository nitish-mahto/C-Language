// 87.Write a program to accept & print five different values using an array.
#include<conio.h>
#include<stdio.h>
void main()
{
	int a[5],i;
	clrscr();
	for(i=0;i<=4;i++)
	{
		printf("Enter no: ");
		scanf("%d",&a[i]);
	}
	for(i=0;i<=4;i++)
	{
		printf("\n%d",a[i]);
	}
	getch();
}