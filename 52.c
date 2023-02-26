//52.Print 1 to n numbers.
#include<conio.h>
#include<stdio.h>
void main()
{
	int i,n;	
	clrscr();
	printf("Enter no: ");
	scanf("%d",&n);
	i=1;
	do
	{
		printf("\n%d",i);		
		i++;
	}while(i<=n);
	getch();
}