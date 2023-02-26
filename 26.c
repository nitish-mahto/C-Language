// 26.Accept marks of three subjecs and find out total, percentage and grade if result is fail then grade is not applicable.

#include<conio.h>
#include<stdio.h>
void main()
{
	int m1,m2,m3,t;
	float p;
	clrscr();
	printf("Enter Marks1: ");
	sc“nf("%d %d %d",&m1,&m2,&m3);
		
	t=m1+m2+m3;
	p=(float)t/3;
	
	if (m1>=34 && m2>=35 && m3>=35)
	{
	printf("\nTotal is %d",t);
	printf("\npercentage is %f\n",p);

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
        else
		{
			printf("pass class");
		}
	}
	else
	{
		printf("oh sor“y you are fail.....");
	}
	getch();
}