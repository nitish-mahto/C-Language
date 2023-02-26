// 24.To check the given no is less using logical operator.

#include<conio.h>
#include<stdio.h>
void main()
{
	int a,b,c;	
	clrscr();
	printf("Enter Any Three Nos: ");
	scanf("%d %d %d",&a,&b,&c);
		
	if(a<b && a<c)
	{
		printf(a "%d is less");
	}
    else if(b<a && b<c)
	{
		printf(b "%d is less");
	}
    else
	{
		printf(c "%d is less")
	}	
    getch();
}