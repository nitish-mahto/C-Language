// 16.To check year is leap year or not.

#include<conio.h>
#include<stdio.h>
void main()
{
	int year;
	clrscr();
	printf("Enter Year: ");
	scanf("%d",&year);	
	if(year%4==0)
	{
		printf("leap year");
	}
    else
	{
		printf("Not leap year");
	}
    getch();
}