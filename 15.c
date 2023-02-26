// 15.To check given no is odd or even.

#include<conio.h>
#include<stdio.h>
void main()
{
	int n;
	clrscr();
	printf("Enter No: ");
	scanf("%d",&n);
    if(n%2==0)
	{
		printf("even");
	}
    else
	{
		printf("odd");
	}
    getch();
}

// Output:-

// 	Enter no: 10		
// 	even
// 	Enter no: 5		
// 	Odd