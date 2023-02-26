// 36.To find out sum of 1 to n nos.

#include<conio.h>
#include<stdio.h>
void main()
{
	int i,n,s=0;	
	clrscr();
	printf("Enter no: ");
	scanf("%d",&n);
	for(i=1;i<=n;i++)	
	{
		printf("\nd",i);
		s=s+i;
	}
	printf("\nThe sum is: %d",s)
	getch();
}
// Output:-
// 	Enter no: 5
// 	1
// 	2
// 	3
// 	4
// 	5
// 	The sum is: 15
	