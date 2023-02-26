// 34.To print  1 to n even.

#include<conio.h>
#include<stdio.h>
void main()
{
	int i,n;	
	clrscr();
	printf("Enter no: ");
	scanf("%d",&n);
	for(i=2;i<=n;i+=2)	
	{
		printf("\nd",i);
	}
	getch();
}
// Output:-
// 	Enter no: 5
// 	2
// 	4
	