//90.To find max and min from an array.
#include<conio.h>
#include<stdio.h>
void main()
{
	int a[100],n,max,min,i;
	clrscr();
	printf("How many no do you want?");
	scanf("%d",&n)
	for(i=0;i<=n-1;i++)
	{
		printf("Enter no: ");
		scanf("%d",&a[i]);
	}
	min=a[0];
	max=a[0];
	for(i=0;i<=n-1;i++)
	{
		printf("\n%d",a[i]);
		if(a[i]>max)
			max=a[i];
		if(a[i]<min)
			min=a[i];
	}
	printf("\nMax no is %d",max);
	printf("\nMin no is %d",min);
	getch();
}