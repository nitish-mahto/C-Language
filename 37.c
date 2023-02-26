// 37.To find out sum of between 1 to n odd nos.

#include<conio.h>
#include<stdio.h>
void main()
{
	int i,n,s=0;	
	clrscr();
	printf("Enter no: ");
	scanf("%d",&n);
	for(i=1;i<=n;i+=2)	
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
// 	3
// 	5
// 	The sum is: 9