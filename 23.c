// 23.To find out maximum no from ant three no using logical operator.

#include<conio.h>
#include<stdio.h>
void main()
{
	int a,b,c;	
	clrscr();
	printf("Enter No1: ");
	scanf("%d",&a);
    printf("Enter No2: ");
	scanf("%d",&b);
    printf("Enter “o3: ");
	scanf("%d",&c);

	if(a>b && a>c)
	{
		printf(a "%d is max");
	}
    else if(b>a && b>c)
	{
		printf(b "%d is max");
	}
    else
	{
		printf(c "%d is max")
	}	
    getch();
}