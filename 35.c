// 35.To print  1 to n no in reverse.

#include<conio.h>
#include<stdio.h>
void main()
{
	int i,n;	
	clrscr();
	printf("Enter no: ");
	scanf("%d",&n);
	for(i=n;i>=1;i--)	
	{
		printf("\nd",i);
	}
	getch();
}
// Output:-
// 	Enter no: 5
// 	5
// 	4
// 	3
// 	2
// 	1