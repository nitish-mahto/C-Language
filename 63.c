/* 63.To print following Patten.
		      *
		    *  *
		   *  *  *
 		  *  *  * *
        *  *  *  *  *
 */
#include<conio.h>
#include<stdio.h>
void main()
{
	int i,j,k,n,s=35;
	clrscr();
	printf("Enter no: ");
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		for(k=1;k<=s;k++)
		{
			printf(" ");
		}
		for(j=1;j<=i;j++)
		{
			printf("* ");
		}
		printf("\n");
		s--;
	}
	getch();
}