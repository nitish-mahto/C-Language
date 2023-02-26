//55.Switch 2:- (fruits like E.g:- I like apple).

#include<conio.h>
#include<stdio.h>
void main()
{
	int n;	
	clrscr();
	printf("1.Apple");
	printf("\n2.Mango");
	printf("\n3.Banana");
	printf("\n4.Graphs");
	printf("\n5.Exit");
	printf("\nEnter your choice: ");
	scanf("%d",&n);
	switch(n)
	{
		case 1:
			print("\nI like Apple");
			break;
		case 2:
			print("\nI like Mango");
			break;
		case 3:
			print("\nI like Banana");
			break;
		case 4:
			print("\nI like Graphs");
			break;
		case 5:
			print("\nBYE BYE");
			break;
		default:
			print("Wrong choice");
			break;
	}while(n!=5);
	getch();
}	