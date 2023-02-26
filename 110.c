/* 110.Example of strcpy function.

It is used to copy one string into another string.
	Syntax:-
		strcpy(strin2,string1);
		
 */
#include<conio.h>
#include<stdio.h>
#include<string.h>
void main()
{
	char str1[20],str2[20];			
	clrscr();
	printf("Enter string: ");
	gets(str1);
	strcpy(str2,str1);
	printf("\nString1 is %s",str1);
	printf("\nString2 is %s",str2);
	getch();
}