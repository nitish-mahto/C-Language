//88.Accept and print n nos .
#include<conio.h>
#include<stdio.h>
void main()
{
	int a[100],n,i;
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
	}
	getch();
}