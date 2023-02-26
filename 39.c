// 39.To find out n factorial.

#include<conio.h>
#include<stdio.h>
void main()
{
	int i,n,f=1;	
	clrscr();
	printf("Enter no: ");
	scanf("%d",&n);
	for(i=1;i<=n;i++)	
	{
		printf("\nd",i);
		f=f*i;
	}
	printf("\nThe factorial is: %d",f)
	getch();
}
// Output:-
// 	Enter no: 5
// 	1
// 	2
// 	3
// 	4
// 	5
// 	The sum is: 120