//113.Write a program to find both strings are equal or not.
#include<conio.h>
#include<stdio.h>
#include<string.h>
void main()
{
	char str1[20],str2[20];			
	clrscr();
	printf("Enter string1: ");
	gets(str1);
	printf("Enter string2: ");
	gets(str2);
	if(strcmp(str1,str2)==0)
	{
		printf("Both string are same");
	}else{
		printf("Both string are not same");
	}
	getch();
}