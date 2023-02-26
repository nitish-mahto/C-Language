// 41.To print Fibonacci series.

#include<conio.h>
#include<stdio.h>
void main()
{
	int i,n,a,b;	
	clrscr();
	a=0;
	b=1;	
	printf("Enter no: ");
	scanf("%d",&n);
	printf("%d\t %d",a,b);
	for(i=1;i<=n-2;i++)	
	{
		c=a+b;
		printf("\td",c);
		a=b;
		b=c;		
	}	
	getch();
}
// Output:-
// 	Enter no: 5
// 	0	1	1	2	3