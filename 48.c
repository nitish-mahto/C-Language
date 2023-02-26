// 48.Print sum of 1 to n numbers.
#include<conio.h>
#include<stdio.h>
void main()
{
	int i,n,s=0;	
	clrscr();
	printf("Enter no: ");
	scanf("%d",&n);
	i=1;
	while(i<=n)
	{
		printf("\n%d",n);
		s=s+i;
		i++;
	}
	printf("The sum is: %d",s);
	getch();
}