// 7.Accept marks of three subjects and find out total and percentages. 

#include<conio.h>
#include<stdio.h>
void main()
{
	int m1,m2,m3,t;
	float p;
	clrscr();
	printf("Enter marks1: ");
	scanf("%d",&m1);
	printf("Enter marks2: ");
	scanf("%d",&m2);
	printf("Enter marks3: ");
	scanf("%d",&m3);
	
	t=m1+m2+m3;
	p=(float)t/3;
	printf("\nTotal is %d",t);
	printf("\npercentage is %f",p);
	getch();
}
// Output:-
// 	Enter marks1:33
// 	Enter marks2:34
// 	Enter marks3:33
// 	Total is 100
// 	percentage is 33.333333