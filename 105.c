//105.To print string using index.
#include<conio.h>
#include<stdio.h>
void main()
{
	char str[10];
	int i;
	clrscr();
	printf("Enter any string: ");
	scanf("%s",&str);
	
	for(i=0;str[i]!='\0';i++)
	{
		printf("%c",str[i]);
	}	
	getch();
}