// 33. To print  1 to n odd.

#include<conio.h>
#include<stdio.h>
void main()
{
	int i,n;	
	clrscr();
	printf("Enter no: ");
	scanf("%d",&n);
	for(i=1;i<=n;i+=2)	
	{
		printf("\nd",i);
	}
	getch();
}
// Output:-
// 	Enter no: 5
// 	1
// 	3
// 	5