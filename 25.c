// 25.To accept age and gender from user and find out whether he or she is eligible for marriage or not using logical operator.

#include<conio.h>
#include<stdio.h>
void main()
{
	int age;	
	char gn;
	clrscr();
	printf("Enter Age: ");
	scanf("%d",&age);
	flushall();
	printf("Enter Gender(m/f): ");
	scanf("%c",&gn);			
	if(gn=='m'&& age=21)
	{
		printf("eligible for marriage");
	}
    else if(gn=='f'&& age=18)
	{
		printf("eligible for marriage");
	}
    else
	{
		printf("not eligible for marriage");
	}
    getch();
}