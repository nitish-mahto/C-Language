//54.Switch 1:- (one, two, three).

#include<conio.h>
#include<stdio.h>
void main()
{
	int n;	
	clrscr();
	printf("Enter no(1 to 3): ");
	scanf("%d",&n);
	switch(n)
	{
		case 1:
			print("One");
			break;
		case 2:
			print("Two");
			break;
		case 3:
			print("Three");
			break;
		default:
			print("Wrong choice");
			break;
	}
	getch();
}	