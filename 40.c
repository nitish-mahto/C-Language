// 40.To print multiplication table.
#include<conio.h>
#include<stdio.h>
void main()
{
	int i,n;	
	clrscr();
	printf("Enter no: ");
	scanf("%d",&n);
	
	for(i=1;i<=10;i++)	
	{
		printf("\n%3d * %3d = %3d",n,i,n*i);		
	}	
	getch();
}
// Output:-
// 	Enter no: 10
// 	10	*	1	=	10
// 	10	*	2	=	20
// 	10	*	3	=	30
// 	10	*	4	=	40
// 	10	*	5	=	50
// 	10	*	6	=	60
// 	10	*	7	=	70
// 	10	*	8	=	80
// 	10	*	9	=	90
// 	10	*	10	=	100	