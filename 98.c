//98.Find sum and average of all elements of an array.
#include<conio.h>
#include<stdio.h>
void main()
{
	int a[3][3],i,j,s;
	float avg;
	clrscr();
	for(i=0;i<=2;i++)
	{
		for(j=0;j<=2;j++)
		{
			printf("Enter no: ");
			scanf("%d",&a[i][j]);
		}
	}
	printf("\nMatrix is \n");
	s=0;
	for(i=0;i<=2;i++)
	{
		for(j=0;j<=2;j++)
		{
			printf("%3d",a[i][j]);
			s=s+a[i][j];
		}
		printf("\n");
	}
	avg=(float)s/(3*3);
	printf("\nThe sum is %d",s);
	printf("\nThe avg is %.2f",avg);
	getch();
}

