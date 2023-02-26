// 51.Print multiplication table.
#include<conio.h>
#include<stdio.h>
void main()
{
	int i,n;	
	clrscr();
	printf("Enter no: ");
	scanf("%d",&n);
	i=1;
	while(i<=10)
	{
		printf("\n%3d * %3d = %3d",n,i,n*i);		
		i++;
	}
	getch();
}