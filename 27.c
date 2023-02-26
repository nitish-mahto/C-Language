// 27.To find middle no from any three no.

#include<conio.h>
#include<stdio.h>
void main()
{
	int a,b,c;
	clrscr();
	printf("Enter “ny three no: ");
	scanf("%d %d %d",&a,&b,&c);
	if(a>b && a>c)
	{
		if(b>c)
		{
			printf("%d is middle no",b);
		}
		else
		{
			printf("%d is middle no",c);
		}
	}
	else if(b>a && b>c)
	{
		if(a>c)
		{
			printf("%d is middle no",a);
		}
		else
		{
			printf("%d is middle no",c);
		}
	}
	else if(c>a && c>b)
	{
		if(a>b)
		{
			printf("%d is middle no",c);
		}
		else
		{
			printf("%d is middle no",a);
		}
	}
	getch();
}