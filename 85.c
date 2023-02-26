/* 85.To print following Patten.

		        1
		       0 1
		      1 0 1
		     1 0 1 0
		    1 0 1 0 1
 */
#include<conio.h>
#include<stdio.h>
void main()
{
	int i,j,k,s=40,a=0;
	clrscr();
	for(i=1;i<=5;i++)
	{
		for(k=1;k<=s;k++)
		{
			printf(" ");
		}
		if(i%2==0)
			a=0;
		else
			a=1;
		for(j=1;j<=i;j++)
		{
			printf("%2d",a);
			if(a==0)
				a=1;
			else
				a=0;
		}
		printf("\n");
		s--;
	}
	getch();
}