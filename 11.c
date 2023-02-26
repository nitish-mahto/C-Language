// 11.Find out area of triangle.

#include<conio.h>
#include<stdio.h>
void main()
{
	int l,b;
    float a;
	clrscr();
	printf("Enter length : ");
	scanf("%d",&l);
	printf("Enter breath : ");
	scanf("%d",&b);
	a=0.5*l*b;	
	printf("\nArea of triangle is %.2f",a);
	getch();
}

// Output:-

// 	Enter length : 10
// 	Enter breath : 20
// 	Area of square is 100