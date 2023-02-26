// 44.To print computer n times.
#include<conio.h>
#include<stdio.h>
void main()
{
	int i=1,n;	
	clrscr();
	printf("Enter no: ");
	scanf("%d",&n);
	while(i<=n)
	{
		printf("\ncomputer");
		i++;
	}
	getch();
}