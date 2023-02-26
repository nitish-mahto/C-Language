// 13.To find out max no any two no.
#include<conio.h>
#include<stdio.h>
void main()
{
	int a,b;
	clrscr();
	printf("Enter No1: ");
	scanf("%d",&a);
    printf("Enter No2: ");
	scanf("%d",&b);
    if(a>b)
	{
		printf("a is max");
	}
    else
	{
		printf("b is max");
	}
    getch();
}

// Output:-

// 	Enter no1: 10		
// 	Enter no2: 20	
// 	b is max