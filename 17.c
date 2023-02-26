// 17.To check given no is +ve , –ve or zero.

#include<conio.h>
#include<stdio.h>
void main()
{
	int n;
	clrscr();
	printf("Enter No: ");
	scanf("%d",&n);
    if(n>0)
	{
		printf("+ve");
	}
    else if(n<0)
	{
		printf("-ve");
    }
    else
	{
		printf("zero");
	}
    getch();
}