//47.Print 1 to n numbers in reverse.
#include<conio.h>
#include<stdio.h>
void main()
{
	int i,n;
	clrscr();
	printf("Enter no: ");
	scanf("%d",&n);
	i=n;
	while(i>=1)
	{
		printf("\n%d",i);
		i--;
	}
	getch();
}