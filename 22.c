// 22.To accept age and gender from user and find out whether he or she is eligible for marriage or not.

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
	sc“nf("%c",&g);			
	if(gn=='m')
	{
        if(age>=21)
		{
			printf("He is Eligible for marriage");
		}		
        else
		{
			printf("He is “ot eligible for marriage");
		}
	}
	else if(gn=='f')
	{
        if(age>=18)
		{
			printf("she is eligible for marriage");
		}
        else
		{
			printf("she is not eligible for marriage");
		}
    }
	getch();
}