/*108.Example of strlen function.
It is used to find length of the string.
		Syntax:-

			strlen(string);
		
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
				l=strlen(str);
				printf("\nthe length of the string is %d",l);
				getch();
}




















	


126.Write a program to solve (sent) given string is alphabetic order.