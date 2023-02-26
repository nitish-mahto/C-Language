// 38.To find out sum of between 1 to n even nos.

#include<conio.h>
#include<stdio.h>
void main()
{
	int i,n,s=0;	
	clrscr();
	printf("Enter no: ");
	scanf("%d",&n);
	for(i=2;i<=n;i+=2)	
	{
		printf("\nd",i);
		s=s+i;
	}
	printf("\nThe sum is: %d",s)
	getch();
}
// Output:-
// 	Enter no: 5
// 	2
// 	4
// 	The sum is: 6