// 12.To check given no is +ve or –ve.
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
    else
	{
		printf("-ve");
	}
	getch();
}

// Output:-

// 	Enter no: 10	
// 	+ve
// 	Enter no: -10	
// 	-ve