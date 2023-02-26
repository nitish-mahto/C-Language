//53.Print between 1 to n odd numbers.
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
		i+=2;
	}while(i<=n);
	getch();
}