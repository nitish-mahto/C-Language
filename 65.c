/* 65.To print following Patten.
        *
        *   *
        *       *
        *           *
        *               *
        * 	                *
        *               	    *
        *   	  	                *
        *   		                    *
        *   *   *   *   *   *   *   *   *   *

 */
#include<conio.h>
#include<stdio.h>
void main()
{
	int i,j;
	clrscr();
	for(i=1;i<=10;i++)
	{
		for(j=1;j<=i;j++)
		{
			if(i==1||i==10||j==1||j==i)
			{
				printf(" * ");
			}
			else
			{
				printf("   ");
			}
		}
		printf("\n");
	}
	getch();
}
