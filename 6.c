// 6.Accept two numbers from and perform following operations sum, sub, mul, div of any two numbers. 
#include<conio.h>
#include<stdio.h>
void main()
{
	int a,b,c,d,e,f;
	clrscr();
	printf("Enter no1 : ");
	scanf("%d",&a);
	printf("Enter no2 : ");
	scanf("%d",&b);
	c=a+b;
	d=a-b;
	e=a*b;
	f=a/b;
	printf("\nThe sum is %d",c);
	printf("\nThe sub is %d",d);
	printf("\nThe mul is %d",e);
	printf("\nThe div is %d",f);
	getch();
}
// Output:-
// 	Enter no1 :10
// 	Enter no2 :2
// 	The sum is 12
// 	The sub is 8
// 	The mul is 20
// 	The div is 5