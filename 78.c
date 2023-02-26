/* 78.To print following Patten.

                        1
                       2  2
		             3  3  3
		           4  4  4  4
		          5  5  5  5  5
		           4  4  4  4
		             3  3  3
		        	  2  2
			            1
 */
#include<conio.h>
#include<stdio.h>
void main()
{
	int i,j,k,s=40,n;
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
			printf("%2d",j);
		}
		printf("\n");
		s--;
	}
	s+=2;
	for(i=n-1;i>=1;i--)
	{
		for(k=1;k<=s;k++)
		{
			printf(" ");
		}
		for(j=1;j<=i;j++)
		{
			printf("%2d",i);
		}
		printf("\n");
		s++;
	}
	getch();
}