//97.To find min and max element from matrix.
#include<conio.h>
#include<stdio.h>
void main()
{
	int a[3][3],i,j,max,min;
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
	max=a[0][0];
	min=a[0][0];
	for(i=0;i<=2;i++)
	{
		for(j=0;j<=2;j++)
		{
			printf("%3d",a[i][j]);
			if(a[i][j]>max)
				max=a[i][j];
			if(a[i][j]<min)
				min=a[i][j];
		}
		printf("\n");
	}	
	printf("\nThe max element is %d",max);
	printf("\nThe min element is %d",min);
	getch();
}