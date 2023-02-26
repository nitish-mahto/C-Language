//46.Print 1 to n numbers.
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
		printf("\n%d",i);
		i++;
	}
	getch();
}