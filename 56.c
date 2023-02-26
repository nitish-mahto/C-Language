//56.Switch 3:- Perform Arithmetic operator.
#include<conio.h>
#include<stdio.h>
void main()
{
	int n,a,b,c,d,e,f;	
	clrscr();
	printf("1.Addition");
	printf("\n2.Subtraction");
	printf("\n3.Multiplication");
	printf("\n4.Division");
	printf("\n5.Exit");
	printf("\nEnter your choice: ");
	scanf("%d",&n);
	switch(n)
	{
		case 1:
			print("\nEnter two no: ");
			scanf("%d %d",&a,&b);
			c=a+b;
			printf("\nThe sum is: %d",c);
			break;
		case 2:
			print("\nEnter two no: ");
			scanf("%d %d",&a,&b);
			d=a-b;
			printf("\nThe sub is: %d",d);
			break;
		case 3:
			print("\nEnter two no: ");
			scanf("%d %d",&a,&b);
			e=a*b;
			printf("\nThe mul is: %d",e);
			break;
		case 4:
			print("\nEnter two no: ");
			scanf("%d %d",&a,&b);
			f=a/b;
			printf("\nThe div is: %d",f);
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