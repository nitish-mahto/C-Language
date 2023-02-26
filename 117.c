//117.Write a program to print string in reverse without using string function.
#include<conio.h>
#include<stdio.h>
#include<string.h>
void main()
{
	char str[20];		
	int i,j;
	clrscr();
	printf("Enter string: ");
	gets(str);
	for(i=0;str[i]!='\0';i++)
	{
	
	}
	for(j=0;j>=0;j--)
	{
		printf("%c",str[j]);
	}
	getch();
}