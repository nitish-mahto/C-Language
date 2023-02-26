// 42.To check given no is prime or not.
#include<conio.h>
#include<stdio.h>
void main()
{
	int i,n,p=1;	
	clrscr();
	printf("Enter no: ");
	scanf("%d",&n);	
	for(i=2;i<=n-1;i++)	
	{
		if(n%i==0)
		{
			p=0;
		}
	}	
	if(p==1)
	{
		printf("Prime");		
	}
	else
	{
		printf("Not Prime");
	}
	getch();
}
// Output:-
// 	Enter no: 10
// 	Not Prime