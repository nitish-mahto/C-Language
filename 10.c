// 10.Find out area of circle.

#include<conio.h>
#include<stdio.h>
void main()
{
	int r;
	float a;
	clrscr();
	printf("Enter radius: ");
	scanf("%d",&r);	
	a=3.14*r*r;	
	printf("\nArea of triangle is %.2f",a);
	getch();
}

// Output:-
// 	Enter radius: 5	
// 	Area of square is 78.5