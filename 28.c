// 28.Accept marks of math, science and English and find out whether total marks >=200 or sum of math and science >=150 and student is eligible for further studies or not.

#include<conio.h>
#include<stdio.h>
void main()
{
	int m1,m2,m3,t,c;	
	clrscr();
	printf("Enter marks of three sub math, sci and eng: ");
	scanf("%d %d %d",&m1,&m2,&m3);
		
	t=m1+m2+m3;
	c=m1+m2;
	
	printf("\nTotal is %d",t);
	printf("\nsum of math and sci is %d",c);
	if(t>=200 || c>=150)
	{
		printf("\nThe student is eligible for further studies");
	}	
	else
	{
		printf("\nThe student is not eligible for further studies");
	}
	
	getch();
}