// 18.To check greater no from any two number and also check equality.

#include<conio.h>
#include<stdio.h>
void main()
{
	int n1,n2;
	clrscr();
	printf("Enter No1: ");
	scanf("%d",&n1);
    printf("Enter No2: ");
	scanf("%d",&n2);	
    if(n1>n2)
	{
		printf("n1 is max");
	}
    else if(n2>n1)
	{
		printf("n2 is max");
	}else
	{
		printf("both are same");
	}
    getch();
}