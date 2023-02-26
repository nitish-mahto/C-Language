/* 109.Example of strrev function.
It is used to print string in reverse.
	Syntax:-

			strrev(string);
		
 */
#include<conio.h>
#include<stdio.h>
#include<string.h>
void main()
{
	char str[20];	
			int l;
	clrscr();
	printf("Enter string: ");
	gets(str);
	strrev(str);
	printf("\nThe reverse string is %s",str);
	getch();
}