//116.Write a program to find length of the string without using string function.
#include<conio.h>
#include<stdio.h>
#include<string.h>
void main()
{
	char str1[20];		
	int i,l=0;
	clrscr();
	printf("Enter string: ");
	gets(str1);
	for(i=0;str[i]!='\0';i++)
	{
		l++;
	}
	printf("\nThe length of the string is %d",l);
	getch();
}