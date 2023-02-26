//57.Switch 4:- Find area of (square, rectangle, circle, triangle).

#include<conio.h>
#include<stdio.h>
void main()
{
	int n,l,b,s,r;	
	float c,t;
	clrscr();
	printf("1.Square");
	printf("\n2.Rectangle");
	printf("\n3.Circle");
	printf("\n4.Triangle");
	printf("\n5.Exit");
	printf("\nEnter your choice: ");
	scanf("%d",&n);
	switch(n)
	{
		case 1:
			printf("Enter length: ");
			scanf("%d",&l);
			s=l*l;	
			printf("\nArea of square is %d",s);
			break;
		case 2:
			printf("\nEnter length: ");
			scanf("%d",&l);
			printf("\nEnter breath: ");
			scanf("%d",&b);
			r=l*b;	
			printf(“\nArea of Rectangle is %d”,r);	
			break;
		case 3:
			printf("\nEnter Radius: ");
			scanf("%d",&r);
			c=3.14*r*r;	
			printf("\nArea of circle is %.2f",c);
			break;
		case 4:
			printf("\nEnter Triangle: ");
			scanf("%d",&l);
			printf("\nEnter breath: ");
			scanf("%d",&b);
			t=3.14*l*b;	
			printf("\nArea of triangle is %.2f",t);
			break;
		case 5:
			print("\nBYE BYE");
			break;
		default:
			print("Please Enter valid choice: ");
			break;
	}while(n!=5);
	getch();
}	