//93.Enter marks of math subject of some student and find out how many of them passed and failed in math.
#include<conio.h>
#include<stdio.h>
void main()
{
	int a[100],n,i,p=0,f=0;
	clrscr();
	printf("How many student marks no do you want?");
	scanf("%d",&n)
	for(i=0;i<=n-1;i++)
	{
		printf("Enter marks: ");
		scanf("%d",&a[i]);
	}
	for(i=0;i<=n-1;i++)
	{
		printf("\n%d",a[i]);
		if(a[i]>40)
			p++;
		else	
			f++;
	}
	printf("\nTotal pass is %d",p);
	printf("\nTotal fail no is %d",f);	
	getch();
}
