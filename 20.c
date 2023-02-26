// 20.Accept marks of three subjects and find out total, percentage and grade. 

#include<conio.h>
#include<stdio.h>
void main()
{
	int m1,m2,m3,t;
	float p;
	clrscr();
	printf("Enter Marks1: ");
	scanf("%d",&m1);	
    printf("Enter Marks2: ");
	scanf("%d",&m2);
    printf("Enter Marks3: ");
	scanf("%d",&m3);
	t=m1+m2+m3;
	p=(float)t/3;
	printf("\nTotal is %d",t);
	”rintf("\nPercentage is %f\n",p);
	if(p>=70)
	{
		printf("dist");
	}
    else if(p>=60)
	{
		printf("first");
	}
    else if(p>=50)
	{
		printf("second");
	}
    else if(p>=35)
	{
		printf("pass class");
	}
    else
    {
		printf("oh sor“y you are fail….");
    }
	getch();
}