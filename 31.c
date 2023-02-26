// 31.Print your name n times.
#include<conio.h>
#include<stdio.h>
void main()
{
	int i,n;	
	char name[10];
	clrscr();
	printf("Enter name: ");
	scanf("%s",name);
	printf("Enter no: ");
	scanf("%d",&n);
	for(i=1;i<=n;i++)	
	{
		printf("\ns",name);
	}
	getch();
}
// Output:-
// 	Enter name: Nitish
// 	Enter no: 3
// 	Nitish
// 	Nitish
// 	Nitish
