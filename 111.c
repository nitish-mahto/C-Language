/* 111.Example of strcat function.

It is used to join two strings.
	Syntax:-

			strcat(string1,string2);
 */		

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
			strcat(str1,str2);
			printf("\nString1 is %s",str1);
			printf("\nString2 is %s",str2);
			getch();
}