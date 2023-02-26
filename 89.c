//89.To find sum and average of array element.
#include<conio.h>
#include<stdio.h>
void main()
{
	int a[100],n,i,s=0;
	float avg;
	clrscr();
	printf("How many no do you want?");
	scanf("%d",&n)
	for(i=0;i<=n-1;i++)
	{
		printf("Enter no: ");
		scanf("%d",&a[i]);
	}
	for(i=0;i<=n-1;i++)
	{
		printf("\n%d",a[i]);
		s=s+a[i];
	}
	avg=(float)s/n;
	printf("\nThe sum is %d",s);
	printf("\nThe avg is %.2f",avg);
	getch();
}