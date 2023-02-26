//118.Write a program to copy string into another without using string function.

#include<conio.h>
#include<stdio.h>
#include<string.h>
void main()
{
	char str1[20],str2[20];		
	int i;
	clrscr();
	printf("Enter string: ");
	gets(str1);
	for(i=0;str[i]!='\0';i++)
	{
		str2[i]=str1[i];
	}
	str2[i]='\0';
	printf("\nCopied string is %s",str2);
	getch();
}