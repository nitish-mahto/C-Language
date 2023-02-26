//92.Write a program to count how many –ve,+ve & zero into given an array.
#include<conio.h>
#include<stdio.h>
void main()
{
	int a[100],n,i,cp=0,cz=0,cn=0;
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
		if(a[i]>0)
			cp++;
		else if(a[i]<0)
			cn++;
		else	
			cz++;
	}
	printf("\nTotal +ve no is %d",cp);
	printf("\nTotal -ve no is %d",cn);
	printf("\nTotal zero is %d",cz);
	getch();
}
