//119.Write a program to concate two strings without using string function.

#include<conio.h>
#include<stdio.h>
#include<string.h>
void main()
{
	char str1[20],str2[20],str3[20];		
	int i,j;
	clrscr();
	printf("Enter string1: ");
	gets(str1);
	printf("Enter string2: ");
	gets(str2);
	
	for(i=0;str1[i]!='\0';i++)
	{
		str3[i]=str1[i];
	}
	for(j=0;str2[i]!='\0';j++)
	{
		str3[i+j]=str2[j];
	}
	str3[i+j]='\0';
	printf("\nConcate string is %s",str3);
	getch();
}