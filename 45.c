//45.Print your name n times.
#include<conio.h>
#include<stdio.h>
void main()
{
	int i=1,n;
	char name[10];
	clrscr();
	printf("Enter name: ");
	scanf("%s",name);
	printf("Enter no: ");
	scanf("%d",&n);
	while(i<=n)
	{
		printf("\n%s",name);
		i++;
	}
	getch();
}